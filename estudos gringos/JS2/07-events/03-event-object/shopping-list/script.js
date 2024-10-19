const logo = document.querySelector('img');

const a = document.querySelector('a');
const onClick = evt => {
    // console.log(evt.target);
    // console.log(evt.currentTarget);
    // console.log(evt.type);
    // console.log(evt.timeStamp);
    // console.log(evt.clientX);
    // console.log(evt.clientY);
    // console.log(evt.offsetX);
    // console.log(evt.offsetY);
    // console.log(evt.pageX);
    // console.log(evt.pageY);
    // console.log(evt.screenX);
    // console.log(evt.screenY);
    
    // caso clique.
    // evt.target.style.backgroundColor = 'purple';
}

logo.addEventListener('click', onClick);


// a.addEventListener('click', evt => {
//     // se o usuario clicar, nao ir ao link, fazer oq estou colocando..
//     evt.preventDefault();
//     const pAlert = document.createElement('p');
//     pAlert.innerHTML = 'Voce clicou no link'
//     pAlert.style.color = 'red';
//     pAlert.style.fontSize = '20px';
//     pAlert.style.fontWeight = 'bold';

//     const filter = document.querySelector('.filter');
//     filter.insertAdjacentElement('beforebegin', pAlert)
// })

// teste.

a.addEventListener('click', evt => {
    // se o usuario clicar, nao ir ao link, fazer oq estou colocando..
    evt.preventDefault();
    const pAlert = document.createElement('p');
    pAlert.innerHTML = 'Voce clicou no link'
    pAlert.style.color = 'red';
    pAlert.style.fontSize = '20px';
    pAlert.style.fontWeight = 'bold';

    const filter = document.querySelector('.filter');
    filter.insertAdjacentElement('beforebegin', pAlert)
})

const creatButton = classe => {
    const parent = document.querySelector('#teste');

    const button = document.createElement('button');
    button.className = classe;
    button.id="clear";

    const firstChild = parent.firstElementChild;

    console.log(firstChild);

    parent.appendChild(button);
}

creatButton();
// document.body.addEventListener('click', e => console.log(e.target));

/*
- `target`- The element that triggered the event -> o elemento em que estamos colocando o evento.

- `currentTarget`- The element that the event listener is attached to 
(These are the same in this case) -> Mesma coisa do target.

- `type`- The type of event that was triggered -> Mostra o tipo de element que foi invocado.

- `timeStamp` - The time that the event was triggered -> Mostra o tempo em que o evento foi invocado

PS: X -> da esquerda até onde foi clicado. Y -> do topo até onde foi clicado.

- `clientX` - The x position of the mouse click relative to the windows -> posiçao do mouse da esquerda até onde clicou.

- `clientY` - The y position of the mouse click relative to the windows -> posição do mouse de cima até onde clicou.

- `offsetX` - The x position of the mouse click relative to the element -> posicao do mouse da esquerda até onde clicou dentro do elemento.

- `offsetY` - The y position of the mouse click relative to the element -> posicao do mouse do topo até onde clicou dentro do elemento.

- `pageX` - The x position of the mouse click relative to the page -> posicao do mouse da esquerda até onde clicou dentro da pagina.

- `pageY` - The y position of the mouse click relative to the page -> posicao do mouse do topo até onde clicou dentro da pagina.

- `screenX` - The x position of the mouse click relative to the screen -> posicao do mouse da esquerda até onde clicou de acordo com o seu monitor.

- `sceenY` - The y position of the mouse click relative to the screen -> -> posicao do mouse do topo até onde clicou de acordo com o seu monitor.
*/