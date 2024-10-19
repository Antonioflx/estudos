// Quick and Dirty

function createListItem(item) {
    const li = document.createElement('li');

    li.innerHTML = 
        `${item}
        <button class="remove-item btn-link text-red">
            <i class="fa-solid fa-xmark"></i>
        </button>`

    document.querySelector('.items').appendChild(li);
}



// Clean and Perfomant
function createNewItem(item) {
    const li = document.createElement('li');
    li.appendChild(document.createTextNode(item));

    // criando o button e colocando a classe para o css
    const button = document.createElement('button');
    button.className = 'remove-item btn-link text-red'

    // criando o icone e colocando a classe para o css
    const icon = document.createElement('i')
    icon.className = 'fa-solid fa-xmark';

    // icone precisa estrar dentro do button
    button.appendChild(icon);

    // button dentro do li
    li.appendChild(button);
    
    document.querySelector('.items').appendChild(li);

}




createListItem('Eggs');
createNewItem('Cheese');