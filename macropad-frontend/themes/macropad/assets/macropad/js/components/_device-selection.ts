import {removeAllChildren} from '../utils/remove-all-children';
import {Logger} from '@gauntface/logger';

const logger = new Logger({
  prefix: '🥣 device selection',
});


export class DeviceSelection {
  private container: HTMLElement;
  private macropadList: HTMLUListElement;
  private newMacropad: HTMLButtonElement;

  constructor(container: HTMLElement) {
    this.container = container;
    this.macropadList = container.querySelector('.js-macropad-devices__list');
    this.newMacropad = container.querySelector('.js-macropad-devices__new-macropad-btn');

    const requiredElements = {
      'container': this.container,
      'macropad-list': this.macropadList,
      'new-macropad-btn': this.newMacropad,
    };
    for (const [key, value] of Object.entries(requiredElements)) {
      if (!value) {
        throw new Error(`DeviceSelection is missing a required HTML Element: ${key}`);
      }
    }

    this.newMacropad.addEventListener('click', () => this.lookForNewMacropad());
  }

  async lookForNewMacropad() {
    this.newMacropad.disabled = true;
    try {
      await navigator.serial.requestPort({
        filters: [
          {usbProductId: 37382, usbVendorId: 6991},
        ],
      });
    } catch (err) {
      logger.error(`Failed to find a new macropad.`);
    } finally {
      this.newMacropad.disabled = false;
    }
  }

  setPorts(ports) {
    removeAllChildren(this.macropadList);

    for (const p of ports) {
      const li = document.createElement('li');
      li.textContent = p;
      this.macropadList.appendChild(li);
    }
  }
}
