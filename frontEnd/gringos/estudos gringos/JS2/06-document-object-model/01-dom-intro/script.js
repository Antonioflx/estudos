// // console.log(window);
// console.dir(window.document);

// // mostrar só o html
// console.log(document.body.innerHTML);

console.log(document.links[0]);

// mudar o titulo

// document.body.innerHTML = '<h1> Hello World</h1>';

// comandos

// document.write(' Hello from JS!'); // ESCREVER Na tela

console.log(document.getElementById('main'));

// criaando uma var para receber
const main = document.getElementById('main');
// main.innerHTML = '<h1> Hello From main </h1>';

// utilizando o querySelector()

document.querySelector('#main h1').innerHTML = 'Hello';