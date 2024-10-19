const form = document.querySelector('#item-form');

function onSubmit (evt) {
    evt.preventDefault();

    const item = document.querySelector('#item-input').value;
    const priority = document.querySelector('#priority-input').value;

    if(item === '' || priority === '0'){
        alert('Por favor, verifique os seus dados.');
        return;
    }
    
    console.log(item, priority);
} 

function onSubmit2(evt) {
    evt.preventDefault();

    // Utilizanda Data Base -> pesquisar mais sobre.

    // Criar o data.
    const formData = new FormData(form);


    // pegar o item (get), precisa utilizar, pq FormData é um prototipo com varios methodos.

    // 1 forma.
    // const item = formData.get('item');
    // const priority = formData.get('priority');

    // 2 forma:

    const entries = formData.entries();

    // vai mostrar o name e o valor. console.log(entry);
    for (let entry of entries) {
        console.log(entry[1]); // mostrarar o valor.
    }
}


form.addEventListener('submit', onSubmit2);