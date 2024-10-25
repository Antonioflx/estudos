let x;

const arr = [34, 55, 95, 20, 15];

// adicionar um valor na array
// arr.push(100);

// tirar o ultimo valor da array
// arr.pop();

// adicionar um valor no inicio da array
// arr.unshift(1);

// tirar o primeiro valor da array
// arr.shift();

// reverter a array
// arr.reverse();

// verificar se temos um valor na array -> true ou false.
x = arr.includes(34);

// verificar o indice(posiçao) do valor da array;
// PS: Caso nao tenha o valor -> apresentará -1.
x = arr.indexOf(15);

// escolher onde eu quero começar na array
// do indice 1 até ate o indice 3 (para antes do 4) 
x = arr.slice(1, 4); 


// splice faz a mesma coisa que o slice, porém modifica a array original.
// splice arranca os valores da array original.
// x = arr.splice(1, 4);

// arrancar um valor da array, utilizando o splice
// x = arr.splice(3, 1); // o segundo valor -> ELEMENTO.

// encadear methods.

x = arr.splice(1, 4).reverse().toString().charAt(0);


console.log(arr);
console.log(x);