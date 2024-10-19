function clicar(){
    let num = window.document.getElementById('txtn')
    let tab = window.document.getElementById('seltab')

    if (num.value.length == 0){
        window.alert('[ERRO] Coloque um número')
        res.innerHTML = 'Não foi possível fazer a tabuada \u{1F625} <br>'
    } else{
        let n = Number(num.value)
        tab.innerHTML = ''

        /* for (let c = 1; c<=10; c++ ){
            res.innerHTML += `Passo ${c}`
        } */

        for (let c = 1; c <= 10; c++){
            let item = document.createElement('option')
            item.text = `${n} x ${c} = ${n*c}`
            item.value = `tab${c}`
            tab.appendChild(item)
        }
    }
    
}
