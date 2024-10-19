const logo = document.querySelector('img');

const onClick = () => console.log('Click event');

const onDoubleClick = () => {
    
    if(document.body.style.backgroundColor !== 'purple') {
        document.body.style.backgroundColor = 'purple';
        document.body.style.color = 'white';
    } else {
        document.body.style.backgroundColor = 'white';
        document.body.style.color = 'black';
    }
}

const onRightClick = () => console.log('Right Click Event');


const onMouseDown = () => console.log('Mouse Down Event');

const onMouseUp = () => console.log('Mouse Up Event');

const onMouseWheel = () => console.log('Mouse Wheel Event');

const onMouseOver = () => logo.style.backgroundColor = 'purple';

const onMouseOut = () => logo.style.backgroundColor = 'lightgray';

const onDragStart = () => logo.style.backgroundColor = 'black';

const onDrag = () => console.log('drag event');

const onDragEnd = () => logo.style.paddingLeft = '30px';



// Event Listeners

// apenas um click -> click (mouse down and mouse up)
logo.addEventListener('click', onClick);

// dois click
logo.addEventListener('dblclick', onDoubleClick);

// botao direito
logo.addEventListener('contextmenu', onRightClick);

// Botao esquerdo do mouse -> SEGURANDO, sem sair.
logo.addEventListener('mousedown', onMouseDown);

// Botao esquerdo do mouse -> Apos sair.
logo.addEventListener('mouseup', onMouseUp);

// quando eu estou com o mouse em cima e rolo o scrool.
logo.addEventListener('wheel', onMouseWheel);

// quando meu mouse está em cima
logo.addEventListener('mouseover', onMouseOver);

// quando meu mouse está fora
logo.addEventListener('mouseout', onMouseOut);

// Quando eu seguro o click do mouse e movo (faz uma vez)
logo.addEventListener('dragstart', onDragStart);

// Quando eu seguro o click do mouse e movo (faz enquanto voce segura)
logo.addEventListener('drag', onDrag);

// Quando eu seguro o click do mouse e movo e paro de segurar.
logo.addEventListener('dragend', onDragEnd);




