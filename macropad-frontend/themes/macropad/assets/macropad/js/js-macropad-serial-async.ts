import {Logger} from '@gauntface/logger';
import {DeviceSelection} from './components/_device-selection';

const logger = new Logger({
  prefix: '🥣 controller',
});

class SerialController {
  private container: HTMLElement;
  private deviceSelection: DeviceSelection;

  constructor(container) {
    this.container = container;
    this.deviceSelection = new DeviceSelection(container.querySelector('.js-macropad-devices'));

    this.checkSupport();
    this.initPort();
  }

  checkSupport() {
    if (!("serial" in navigator)) {
      throw new Error('Serial is not supported on this browser.');
    } else {
      logger.debug('Web serial is supported in this browser.');
    }
  }

  async initPort() {
    const ports = await navigator.serial.getPorts();
    logger.log(`There are ${ports.length} serial ports available.`);
    this.deviceSelection.setPorts(ports);

    if (ports.length == 1) {
      this.container.querySelector('.js-macropad-devices').style.display = 'none';
      return this.usePort(ports[0]);
    }
  }

  async usePort(port) {
    await port.open({ baudRate: 9600 });

    const textDecoder = new TextDecoderStream();
    const readableStreamClosed = port.readable.pipeTo(textDecoder.writable);
    const reader = textDecoder.readable.getReader();

    // Listen to data coming from the serial device.
    while (true) {
      const { value, done } = await reader.read();
      if (done) {
        // Allow the serial port to be closed later.
        reader.releaseLock();
        break;
      }
      // value is a Uint8Array.
      logger.log(`Reading from serial port: `, value);
    }
  }
}

const container = document.querySelector('.js-macropad-serial');
if (container) {
  try {
    new SerialController(container);
  } catch (err) {
    logger.error('An error occurred: ', err);
  }
} else {
  logger.debug('Unable to find macropad container.');
}

