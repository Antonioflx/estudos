// Array high methods

// forEach => nao retorna algo.

// forEach -> ele pega uma funcao e um argumento(o que é chamado de callback function)

const socials = ['Twitter', 'LinkedIn', 'Facebook', 'Instagram'];

// console.log(socials.__proto__) -> mostrará os arrays methods, o qual sera uma funcao anonima/ callback function

/* socials.forEach(function (param) {
    Bloco
});*/

socials.forEach((item, index, arr) => console.log(`Valor ${index} = ${item}`, arr));


// atraves de funcao

function logSocials(social) {
    console.log(social);
};

// nao utiliza o () na funcao, apenas a definição da funcao
socials.forEach(logSocials);

// forEach in object

const socialObjs = [
    {name: 'Instagram', url: 'https://instagram.com'},
    {name: 'Facebook', url: 'https://facebook.com'},
    {name: 'LinkedIn', url: 'https://linkedin.com'},
];

socialObjs.forEach(item => console.log(item)); // para acessar uma propriedade especifica => item.name

