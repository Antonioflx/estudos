var agora = new Date()
var hora = agora.getHours().

console.log(`Agora, são exatamente ${hora} horas`)
if (hora >= 5 && hora < 12){
    console.log(`Bom diaa!! São ${hora} horas da manhã.`)
} else if (hora >= 12 && hora <= 17.59){
    console.log(`Boa tardee!! São ${hora} horas da tarde.`)
} else if (hora >= 18 && hora < 23.59){
    console.log(`Boa noitee!! São ${hora} horas da noite.`)
} else {
    console.log(`Boa madrugadaa!! São ${hora} horas da madrugada`)
}