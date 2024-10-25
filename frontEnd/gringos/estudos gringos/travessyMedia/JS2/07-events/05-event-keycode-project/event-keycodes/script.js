// Method 1

// window.addEventListener('keydown', (evt) => {
//     const insert = document.querySelector('#insert');

//     insert.innerHTML = `
//         <div class="key">
//             ${evt.key === ' ' ? 'Space' : evt.key}
//             <small>evt.key</small>
//         </div>
            
//         <div class="key">
//             ${evt.keyCode}
//             <small>evt.keyCode</small>
//         </div>
            
//         <div class="key">
//             ${evt.code}
//             <small>evt.code</small>
//         </div>
    
//     `;
// })

// Method 2

const typeOfLetter = evt => {
    const insert = document.querySelector('#insert');
    insert.innerHTML = '';

    const keyCodes = {
        'evt.key': evt.key === ' ' ? 'Space' : evt.key,
        'evt.keyCode': evt.keyCode,
        'evt.code': evt.code,
    }

    for (let key in keyCodes) {
        // criar os elementos.
        const div = document.createElement('div');
        div.className = 'key';
        const small = document.createElement('small');

        // atribuir os valores -> 
        // keyText vai pegar as propriedades
        // valueText vai pegar os valores da propriedades.
        const keyText = document.createTextNode(key);
        const valueText = document.createTextNode(keyCodes[key]);

        // fazer appendChild

        small.appendChild(keyText);
        div.appendChild(valueText);
        div.appendChild(small);

        insert.appendChild(div);
    }
}


window.addEventListener('keydown', typeOfLetter);

