// function removeClearButton() {
//     // remover o butao clear all.
//     // funcao remove()
//     document.querySelector('#clear').remove();
// }


function removeAllItems() {
    const list = document.querySelectorAll('li');
    console.log(1);
    list.forEach(item => item.remove());
    
}


function removeFirstItem() {
    const ul = document.querySelector('ul');
    // const firstItem = ul.firstElementChild;

    const li = document.querySelector('li:first-child');
    ul.removeChild(li);
    
}

document.querySelector('#del').onclick = removeFirstItem;

document.querySelector('#clear').onclick = removeAllItems;

// removeClearButton();



// remover caso o cara queira

