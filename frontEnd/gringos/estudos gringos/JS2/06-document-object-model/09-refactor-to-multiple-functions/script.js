

// Clean and Perfomant
function createNewItem(item) {
    const li = document.createElement('li');
    li.appendChild(document.createTextNode(item));


    const button = createButton('remove-item btn-link text-red');


    // button dentro do li
    li.appendChild(button);
    
    document.querySelector('.items').appendChild(li);

}

// criando funcao para cada ponto

function createButton(classes) {
    // criando o button e colocando a classe para o css
    const button = document.createElement('button');
    button.className = classes;

    const icon = createIcon('fa-solid fa-xmark');
    // icone precisa estrar dentro do button
    button.appendChild(icon);
    return button;
}

function createIcon(classes) {
    // criando o icone e colocando a classe para o css
    const icon = document.createElement('i')
    icon.className = classes;
    
    return icon;
}

createNewItem('Cheese');