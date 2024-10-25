const itemInput = document.querySelector('#item-input');
const priorityInput = document.querySelector('#priority-input');
const checkbox = document.querySelector('#checkbox');
const heading = document.querySelector('h1');

const onInput = evt => heading.textContent = evt.target.value;

const onChecked = evt => {
    const isChecked = evt.target.checked;
    heading.textContent = isChecked ? 'Checked' : 'Not Checked';
}

const onFocus = () => itemInput.style.outline = '1px solid green';


const onBlur = () => itemInput.style.outline = 'none';

// texto input -> target.value
itemInput.addEventListener('input', onInput);

// lista (option) change -> target.value
priorityInput.addEventListener('change', onInput); 

// checkbox input -> target.checked
checkbox.addEventListener('input', onChecked);

// focus -> quando voce clicar dentro de um input de texto
itemInput.addEventListener('focus', onFocus);

// blur -> quando voce clica fora de um input de texto
itemInput.addEventListener('blur', onBlur);
