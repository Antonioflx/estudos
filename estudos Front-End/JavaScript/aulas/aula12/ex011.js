var idade = 67
console.log(`Você tem ${idade} anos.`)

if (idade < 16 ) {
    console.log('Não vota')
} else if (idade < 18 || idade >= 67 ){
        console.log('Voto opcional')
} else {
  console.log('Vota')  
}


/*if (idade >= 16 && idade < 18){
    console.log('Caso queira, você pode votar.')   
} else if (idade >=18){
        console.log('Você pode votar')
    } else {
        console.log('Você não pode votar.')
    }
    */