
// criar uma função insertAfter() para por dps do primeiro filho.

function insertAfter(newEl, existingEl) {
    existingEl.parentElement.insertBefore(newEl, existingEl.nextElementSibling)
    // chamar a funcao para criar buttao
    const button = createButton('remove-item btn-link text-red');

    li.appendChild(button);

    // // pegar o irmao do primeiro filho
    // const secondItem = firstItem.nextElementSibling;

    // // pegar o pai ul;
    // const ul = document.querySelector('.items');
    
    // // utilizar insetBefore();

    // ul.insertBefore(li, secondItem);


}



// criando button para o li
function createButton(classes) {
    const button = document.createElement('button');
    button.className = classes;

    const icon = createIcon('fa-solid fa-xmark');
    button.appendChild(icon)
    return button;
}


// criando icon para o li.
function createIcon(classes) {
    const icon = document.createElement('icon');
    icon.className = classes;

    return icon;
}

// criar a var li
const li = document.createElement('li');
li.textContent = 'Insert Me After!';

// definir a primeira filha li
const firstItem = document.querySelector('li:first-child');

insertAfter(li, firstItem);