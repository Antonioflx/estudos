const itemInput = document.querySelector('#item-input');

const onKeyPress = evt => {
    console.log('keypress');
}

const onKeyUp = evt => {
    console.log('keyup');
}

const onKeyDown = evt => {
    // key
    // if(evt.key === 'Enter'){
    //     alert('You pressed  enter.')
    // };

    // document.querySelector('h1').innerText = evt.key


    // keyCode
    // https://www.toptal.com/developers/keycode
    // if(evt.keyCode === 13){
    //     alert('You pressed  enter.')
    // };


    // code
    if (evt.code === 'KeyJ'){
        alert('You write J.');
    }

    if (evt.repeat){
        console.log('You are holding down the key -> ' + evt.key );
    }


    console.log('Shift: ' + evt.shiftKey);
    console.log('Control: ' + evt.ctrlKey);
    console.log('Alt: ' + evt.altKey);

    if(evt.shiftKey && evt.key === 'K'){
        console.log('You hit shift + K');
    }
}

// itemInput.addEventListener('keypress', onKeyPress);
// itemInput.addEventListener('keyup', onKeyUp);
itemInput.addEventListener('keydown', onKeyDown);
