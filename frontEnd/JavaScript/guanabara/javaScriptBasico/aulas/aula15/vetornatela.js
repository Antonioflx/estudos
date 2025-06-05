let num = [5, 2, 3, 4, 5]
num.push(1)
console.log(num)
console.log(`O vetor organizado em ordem crescente é: ${num.sort()}`)
console.log(num)
console.log(`O vetor tem ${num.length} posições`)
console.log(`O primeiro valor do vetor é ${num[0]}`)
let pos = num.indexOf(5)

if (pos == -1){
    console.log(`O valor não foi encontrado!`)
}   else {
    console.log(`O valor 4 está na posição ${pos}`)
}





    