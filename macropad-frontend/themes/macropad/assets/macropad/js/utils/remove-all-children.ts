export function removeAllChildren(element: HTMLElement) {
  while (element.lastChild) {
    element.removeChild(element.lastChild);
}
}
