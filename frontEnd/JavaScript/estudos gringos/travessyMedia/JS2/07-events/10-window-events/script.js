// script in the head -> pesquisar mais.

// verificar mais os eventos do windows. 

// Utilizando [defer -> pesquisar mais] no script, fucionará normal, porque vai carregar a pagina toda

// window.onload = 
//  () =>  document.querySelector('h1').textContent = 'Hello World';

// load -> espera a pagina inteira carregar, inclui todos os recursos, imagem, etc

window.addEventListener(
    'load', 
    () => console.log('Page Loaded'));
 
// DOMContentLoaded -> executa assim que o DOM é passado e carregado. -> faz 1 que o load
window.addEventListener(
    'DOMContentLoaded', 
    () => console.log('Dom Loaded'));

console.log('Run me');


// resize -> redimensionar

window.addEventListener('resize', () => {
    document.querySelector(
        'h1')
        .innerText = `Resized to ${window.innerWidth} x 
        ${window.innerHeight}`;
});

// scroll

window.addEventListener('scroll', () => {
    console.log(`Scrolled: ${window.scrollX} x ${scrollY}`);

    if (window.scrollY > 90) {
        document.body.style.backgroundColor = 'black';
        document.body.style.color = 'white';
    } else {
        document.body.style.backgroundColor = 'white';
        document.body.style.color = 'black';
    }
})

// focus 
window.addEventListener('focus', () => {
    document.querySelectorAll('p')
    .forEach(p => {
        p.style.color = 'blue';
    })
})

// blur 
window.addEventListener('blur', () => {
    document.querySelectorAll('p')
    .forEach(p => {
        p.style.color = 'black';
    })
})