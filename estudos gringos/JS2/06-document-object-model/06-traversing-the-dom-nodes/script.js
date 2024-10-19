// Tudo que está no DOM é Node(nó)

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
    3)
*/
let output;

const parent = document.querySelector('.parent');
// mostrarará todos os nós
output = parent.childNodes;

// utilizar o indice para acessar
output = parent.childNodes[3].innerHTML = 'Child One';

output = parent.firstChild;
output = parent.lastChild;

parent.lastChild.textContent = 'Hello';


// Parent node

const child = document.querySelector('.child');

output = child.parentNode;

child.parentNode.style.backgroundColor = 'lightgray';
child.parentNode.style.padding = '10px';
child.parentNode.style.borderRadius = '10px';
child.parentNode.style.textAlign = 'center';


// Irmaos

const secondItem = document.querySelector('.child:nth-child(2)');

output = secondItem.style.border = '1px solid black';

console.log(output);
