// document.getElementById();

console.log(document.getElementById('app-title'));

// pegar um atributo
console.log(document.getElementById('app-title').getAttribute('id'));


// Set attributes

document.getElementById('app-title').title = 'Shopping List';

document.getElementById('app-title').setAttribute('class', 'title');
// primeiro seria o atributo que queremos pegar e dps o que queremos colocar.

// colocar em uma variavel

const title = document.getElementById('app-title');

// Get/Change content
// textContent -> o conteudo 

console.log(title.textContent);

title.textContent = 'Shopping';
title.innerText = 'Shopping 1';
title.innerHTML = '<strong>Shopping List </strong>';

// Change Styles
// utiliza o style.(qualquer propriedade do css)
title.style.color = 'red';

// caso a propriedade tenha mais de uma palavra. Ex: background-color
// colocar backgroundColor -> camelCase
title.style.backgroundColor = 'Black';
title.style.padding = '10px';
title.style.borderRadius = '10px';

// document.querySelector();
// nao preciso de uma classe ou atributo. Pode acessar através da tag, ex: h1;

// acessar pela tag
console.log(document.querySelector('h1'));

// acessar pelo id
console.log(document.querySelector('#app-title'));

// acessar pela class
console.log(document.querySelector('.container'));

// acessar um input que tenha um texto específico
// utilzar [type = ""];

console.log(document.querySelector('input[type = "text"]'));

// nth-last-child() -> seleciona um elemento com base na sua posição em relação aos seus irmaos dentro de um elemento pai

// ul(pai), li(filho);
console.log(document.querySelector('li:nth-last-child(2)').innerText);

// criando uma variavel

const secondItem = document.querySelector('li:nth-last-child(2)');

// modificando o texto
secondItem.innerText = 'Apple Juice';
secondItem.style.color = 'red';

// Use these methods on other elements
const list = document.querySelector('ul');
console.log(list);

// podemos usar o querySelector() sem precisar estar em document

// pegar o primeiro li
const firstItem  = list.querySelector('li');

firstItem.style.color = 'blue';
