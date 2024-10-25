// bubbling

/*
    Quando um evento "bubbling" é realizado sobre um determinado elemento, todos os ancestrais dele também serão acionados em ordem crescente de aninhamento até chegar ao último elemento.
*/


const button = document.querySelector('form button');
const div = document.querySelector('form div:nth-child(2)');
const form = document.querySelector('form');

button.addEventListener('click', (evt) => {
    alert('Button was clicked');
    // Parar de propagar o bubbling
    evt.stopPropagation();
});

div.addEventListener('click', () => {
    alert('Div was clicked');
});

form.addEventListener('click', () => {
    alert('Form was clicked');
});

document.body.addEventListener('click', () => {
    alert('Body was clicked');
});