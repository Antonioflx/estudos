function adicionar(){
    let num = window.document.getElementById('txtn')
    let tab = document.getElementById('txtv')
    let res = document.querySelector('div#res')


    if (num.value.length == 0 || num.value < 1 || num.value > 100){
        window.alert('Valor inválido ou já encontrado na lista')
    } else {
        let n = [Number(num.value)]

        for (let pas in n){
            let item = document.createElement('option')
            item.text = `Valor ${n[pas]}  adicionado.`
            tab.appendChild(item)
            } 
        }
}

/*function finalizar(){
    #..
}


/*function finalizar(){
    let text = document.getElementById('texto')
    text.innerHTML = `Ao todo, temos <strong>${n.length} </strong> números cadastrados.`
} */