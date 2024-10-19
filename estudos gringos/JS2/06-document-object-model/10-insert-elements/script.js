// coloca a posição, dps o conteúdo:


// insertAdjacentElement Example
function insertElement() { 
    const filter = document.querySelector('.filter');

    const h1 = document.createElement('h1');
    h1.textContent = 'insertAdjacentElement';

    filter.insertAdjacentElement('beforebegin', h1);
}

insertElement();

// inserAdjacentText Example
function insertText() { 
    const item = document.querySelector('li:first-child');

    item.insertAdjacentText('afterend', 'inserAdjacentText')
}

insertText();

// inserAdjacentHTML example
function insertHTML() { 
    const clearBtn = document.querySelector('#clear');

    clearBtn.insertAdjacentHTML('beforebegin', '<h2>inserAdjacentHTML</h2>');
} 

insertHTML();

// insertBefore example
function insertBeforeItem() { 
    // precisa ter o pai (ul é o pai)
    const ul = document.querySelector('ul');

    // criando li
    const li = document.createElement('li');
    li.textContent = 'insertBefore';

    // referencia da posição.
    const thirdItem = document.querySelector('li:nth-child(3)');

    // primeiro o que queremos colocar, dps a referencia.
    ul.insertBefore(li, thirdItem); 



}
insertBeforeItem();

/*

<!-- beforebegin -->
<p>
    <!-- afterbegin -->
    foo
    <!-- berforeend -->
</p>
<!-- afterend -->
*/
