

// method -> CreateElement (criar algo)
const div = document.createElement('div');

// colocar um atributo

div.className = 'my-element';
div.id = 'my-element';
div.setAttribute('title', 'My Element')

// adicionar um texto para a div

// div.innerText = 'Hello Word'

// podemos criar uma varivel utilizando o method createTextNode(TEXTO);
// e utilizar appendChild() -> insere um novo nó na estrutura do DOM

const text = document.createTextNode('Hello Word');

div.appendChild(text); // colocando o texto dentro da div. div seria o pai do texto.

// adicionar no body
// document.body.appendChild(div)

// adicionar no fim da lista
document.querySelector('.items').appendChild(div);