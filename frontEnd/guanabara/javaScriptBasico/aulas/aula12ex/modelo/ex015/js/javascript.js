function verificar(){
    var data = new Date()
    var ano = data.getFullYear()
    var fano = document.getElementById('txtano')
    var res = document.querySelector('div#res')

    if (fano.value.length == 0 || Number(fano.value) > ano) {
        window.alert('[ERRO] Verifique os dados e tente novamente')
    } else {
        var fsex = document.getElementsByName('radsex')
        idade = ano - Number(fano.value)
        var gênero = ''
        var img = document.createElement('img')
        img.setAttribute('id' , 'foto')
        if (fsex[0].checked){
            gênero = 'Homem'
            if (idade >= 0 && idade < 10 ){
                //criança
                img.setAttribute('src', '../imagens/bebem.png')
            } else if (idade >= 10 && idade < 18){
                //jovem
                img.setAttribute('src', '../imagens/jovemM.png')
            } else if (idade >= 18 && idade <= 39){
                // adulto
                img.setAttribute('src', '../imagens/adultom.png')
            } else if (idade >= 40 && idade <= 60){
                // idoso
                img.setAttribute('src', '../imagens/adulto40m.png')
            }  else {
                img.setAttribute('src', '../imagens/idosom.png')
            } 

        } else if (fsex[1].checked){
            gênero = 'Mulher'
            if (idade >= 0 && idade < 10 ){
                //criança
                img.setAttribute('src', '../imagens/bebef.png')
            } else if ( idade >=10 && idade < 18){
                //jovem
                img.setAttribute('src', '../imagens/jovemf.png')
            } else if (idade >= 18 && idade <= 39){
                // adulto
                img.setAttribute('src', '../imagens/adultaf.png')
            } else if (idade >= 40 && idade <=60) {
                // idoso
                img.setAttribute('src', '../imagens/adulta40f.png')
            } else {
                img.setAttribute('src','../imagens/idosaf.png')
            }
        }
    }  
 
    res.style.textAlign = 'center'
    res.innerHTML = `Detectamos ${gênero} com ${idade} anos`
    res.appendChild(img) //Adicionar um elemento
}
