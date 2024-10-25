// Usar funcoes cronstrutoras.

// Quando cria uma funcao construtora -> Comeca com letra maiuscula.

// funcao construtora

function Person (nome, sobrenome, nascimento) {
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.nascimento = new Date(nascimento); 
    // utilizar new Date(nascimento) para pegar a data da string.
}
// criar constantes de pessoas

const person1 = new Person('Antonio', 'Felix', '01-27-2003');
const person2 = new Person('Arthur', 'Samuel', '04-05-2003');

console.log(person1);
console.log(person2);
