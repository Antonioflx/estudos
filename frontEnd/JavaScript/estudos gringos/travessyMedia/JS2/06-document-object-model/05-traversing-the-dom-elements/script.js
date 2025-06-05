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
    3)
*/

// PS: Utilizando o console.dir(algo) -> mostrará todas as propriedades que podemos utiliar


// navegar entre os parentes, filhos e irmãos.

// Get child elements for the parents

let output;

const parent = document.querySelector('.parent');

// utilizando children -> acessar os filhotes

output = parent.children;

// acessando 1 por um -> utilizando o index
output = parent.children[1];

// mudando os filhos através do index.
parent.children[1].innerHTML = 'Child Two';
parent.children[1].style.color = 'red';

// mudando o filho através da propriedade firstElementChild
parent.firstElementChild.innerHTML = 'Child One';
parent.firstElementChild.style.color = 'blue';

// mudando o filho através da propriedade lastElementChild
parent.lastElementChild.innerHTML = 'Child Three';
parent.lastElementChild.style.color = 'green';


// Get parent elements from a chil;

const child = document.querySelector('.child');

output = child.parentElement;

child.parentElement.style.backgroundColor = 'lightgray';
child.parentElement.style.width = '300px';
child.parentElement.style.height = '140px';
child.parentElement.style.borderRadius = '10px';
child.parentElement.style.padding = '15px';
child.parentElement.style.textAlign = 'center';

// Sibling Elements

const secondItem = document.querySelector('.child:nth-child(2)');

output = secondItem;
output = secondItem.nextElementSibling;

secondItem.nextElementSibling.style.border = '1px solid black'
secondItem.previousElementSibling.style.border = '1px solid red'

console.log(output);