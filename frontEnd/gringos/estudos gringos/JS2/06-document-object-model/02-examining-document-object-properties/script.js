let output;


// mostrar o HTML
output = document.documentElement;

// mostrar apenas o head
output = document.head;

// mostrar apenas o body
output = document.body;

// mudar o id
// document.forms[0].id = 'new-id';

// mudar a classe
// output = document.forms[0].className = 'Só colocando uma classe'

// Acessar todas as classes
// output = document.forms[0].classList;

// utilizando o forEach

// precisamos colocar em uma array

const forms = Array.from(document.forms);
forms.forEach(form => console.log(form));

console.log(output);