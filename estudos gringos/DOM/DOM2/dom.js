// TRAVERSING THE DOM //

                    /* 1 FORMATO */

// Tudo que está no DOM é Node(nó)

/*
        // Isso trabalha apenas com element nodes.        

            Propriedades dos filhos pelos parentes;
    1)children;
    2)firstElementChild;
    3)lastElementChild;

            Propriedades dos parentes pelos filhos;
    1)parentElement
    
            Propriedades dos irmãos;
    1)nextElementSibling
    2)previousElementSibling
*/

// PS: Utilizando o console.dir(algo) -> mostrará todas as propriedades que podemos utiliar


// navegar entre os parentes, filhos e irmãos.             

                    /* 2 FORMATO */

/*
        é melhor o outro formato.
        // Isso trabalha com todos os nodes.        

            Propriedades dos filhos pelos parentes;
    1)childNodes;
    2)firstChild;
    3)lastChild;

            Propriedades dos parentes pelos filhos;
    1)parentNode
    
            Propriedades dos irmãos;
    1)nextSibling;
    2)previousSibling;
*/                   



const itemList = document.querySelector('#items');


// parentNode
// console.log(itemList.parentNode);
// itemList.parentNode.style.backgroundColor = '#f4f4f4';
// console.log(itemList.parentNode.parentNode);

// parentElement -> É quase a mesma coisa que o parentNode, a diferença é que se o elemento não tiver pai (não consta o documento), retornará NULL

// console.log(itemList.parentElement);
// itemList.parentElement.style.backgroundColor = '#f4f4f4';
// console.log(itemList.parentElement.parentElement);


// childNodes -> melhor usar children. 
// childNodes -> retorna todos os elementos
// children -> retorna apenas os filhos.

console.log(itemList.children);


// pegando o primeiro filho.
/*
    firstChild -> retornará #text -> espaço.
    firstElementChild -> retornará o primeiro filho.
*/
const firstChild = itemList.firstElementChild;
firstChild.innerText = 'First Child';
firstChild.style.color = 'red';

// pegando o ultimo filho.
/*
    lastChild -> retornará #text -> espaço.
    lastElementChild -> retornará o ultimo filho.
*/

const lastChild = itemList.lastElementChild;
lastChild.innerText = 'Last Child';
lastChild.style.color = 'blue';

// posso navegar pelos irmões:
/*
    nextSibling -> retornará #text -> espaço.
    previuosSibling -> retornará #text -> espaço.
    nextElementChild -> retornará o proximo irmao.
    previousElementChild -> retornará o irmao anterior.
*/

const nextSibling = firstChild.nextElementSibling;

nextSibling.innerText = 'Irmao/O proximo irmão do First Child';
nextSibling.style.color = 'red';

const prevSibling = lastChild.previousElementSibling;

prevSibling.innerText = 'Irmao/O irmão anterior do Last Child';
prevSibling.style.color = 'blue';


// createElement -> criar elementos.

// Create a div

const newDiv = document.createElement('div');

// Add class
newDiv.className = 'helloClasse';

// Add id
newDiv.id = 'helloId'

// Add attribute 
// -> setAttribute(1 param ('a tag que queremos adicionar, ex: 'title'), 2 param('o valor que queremos colocar'))
newDiv.setAttribute('name', 'helloName');
newDiv.setAttribute('tittle', 'helloTitle');

// Create text node -> aqui estou literalmente criando o text
const newDivText = document.createTextNode('Hello Text Node');

// colocando na div -> appendChild();
newDiv.appendChild(newDivText);

// colocando no header 
const container = document.querySelector('header .container');
const h1 = document.querySelector('header h1');

// atribuindo style para a div

newDiv.style.fontSize = '20px';
newDiv.style.fontWeight = 'bold';
newDiv.style.color = 'white';

// Inserir antes -> insertBefore(o que queremos inserir, referencia);
// inserBefore tbm troca de posição e n clona.
container.insertBefore(newDiv, h1);

/*
    PS: appendChild() -> troca de posição, ele não clona
    ele remove de onde estava para o novo local que quisermos.

    Para duplicar o elemento que queremos utilizar 
    cloneNode(true) -> clonar o elemento e todos os filhos

    cloneNode(false) -> clonar apenas o elemento.
*/

// clonando a div criada

const newDivClone = newDiv.cloneNode(true);
itemList.appendChild(newDivClone)

// Nesse caso, se eu n criar o textNode, eu estou sobrepondo o espaço #text com a string.
// newDiv.innerText = 'Ola Lindões'

// console.log(newDiv);
