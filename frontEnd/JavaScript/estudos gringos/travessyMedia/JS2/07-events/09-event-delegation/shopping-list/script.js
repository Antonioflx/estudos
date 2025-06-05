// 1 method

const listItems = document.querySelectorAll('li');
const list = document.querySelector('ul');


// listItems.forEach((item) => {
//    item.addEventListener('click', e => e.target.remove())
// })  ;


// 2 methodo - Adicionar um evento para o parente

list.addEventListener('click', e => {
    if (e.target.tagName === 'LI') {
        e.target.remove();
    }
})

list.addEventListener('mouseover', e => {
    if (e.target.tagName === 'LI') {
        e.target.style.color = 'red';
    }
})

list.addEventListener('mouseout', e => {
    if (e.target.tagName === 'LI') {
        e.target.style.color = 'black';
    }
})