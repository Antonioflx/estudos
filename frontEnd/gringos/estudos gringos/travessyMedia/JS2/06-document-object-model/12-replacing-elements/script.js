function replaceFirstItem() {
    const firstItem = document.querySelector('li:first-child');

    const li =  document.createElement('li');
    li.textContent = 'Replaced First';

    firstItem.replaceWith(li);
}

function replaceSecondItem() { 
    const secondItem = document.querySelector('li:nth-child(2)');
    
    secondItem.outerHTML = '<li>Replaced Second</li>';
}

function replaceAllItems() {
    const lis = document.querySelectorAll('li');

    lis.forEach((item, index) => 
        index == 2 
        ? (item.style.color = 'red', 
        item.innerHTML = 'Replace three') 
        : (item.innerHTML = 'Replace All')
    )
};

// pegar o parente e utilizar o replaceChild.

function replaceChildHeading() {
    const header = document.querySelector('header');
    const h1 = document.querySelector('header h1');

    const h2 = document.createElement('h2');

    h2.id = 'app-title';
    h2.textContent = 'Shopping List';
    h2.style.color = 'red'
    h2.style.fontSize = 'bolder';

    // pegar o parent e colocar o replace child.
    // 1 parametro é o filho, dps o pai.

    header.replaceChild(h2, h1);
}

replaceFirstItem();
replaceSecondItem();
replaceAllItems();
replaceChildHeading();