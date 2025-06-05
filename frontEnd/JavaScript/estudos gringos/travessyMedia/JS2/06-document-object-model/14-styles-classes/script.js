const text = document.querySelector('p');
const itemList = document.querySelector('.item-list');
const items = itemList.querySelectorAll('li');


/*
        METODOS classList
    1) add() -> adicionar classe;
    2) remove() -> remover classe;
    3) replace() -> substituir classe;
    4) toggle() -> alterna a classe();
    5) contais() -> verifica se existe a classe (true ou false)
    6) closest() -> retorna o ancestral mais próximo


    Ex 4): <p class = "cor"> </p>
        <button id = "run">Run</button>


    const p = document.querySelector('.cor');

    function run() {
        p.classList.toggle('dark')
    }

    // Se clicar ele adicionar a classe dark. 
    // Se clicar de novo, ele remove a classe dark

    document.querySelector('#run').onclick = run;

    Ex 6) : <ul>
                <li> // pai do button
                    Apples
                    <button class="remove">
                        <i class="mark"></i>
                    </button>
                </li>
            </ul>

    const button = document.querySelector('button');
    const li = document.querySelector('li');

    // Procurar o li mais próximo do botão
    const closest1 = button.closest('li') // retornara 

    // Procurar o ul mais próximo do li
    const closest2 = li.closest('ul') 

    console.log(closest1) // retornará o <li> que contém o botão mais próximo

    console.log(closest2) // retornará o <ul> que contém o <li> mais próximo;
*/

function run() {
    // className -> Sobrepoe o nome dado para a classe que ja existe.
    // text.className = 'card dark';

    // classList -> adicionar uma nova classe, sem se sobrepor com a outra
    // DOMTokenList -> uma array de classes.

    itemList.classList.forEach(c => console.log(c));
    // text.classList.add('dark');
    // text.classList.remove('card');

    text.classList.toggle('dark');
    // text.classList.replace('card', 'dark');

    // Change style
    // itemList.style.lineHeight = '3';

    items.forEach((item, index) => index === 2 ? item.style.color = 'blue' : item.style.color = 'red');

}

document.querySelector('button').onclick = run;