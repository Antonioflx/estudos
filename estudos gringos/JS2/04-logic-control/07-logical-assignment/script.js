

// ||= atribui o valor que esta no lado direito, apenas se o valor do lado esquerdo é falso

let a = false;

// opçao 1:

// !false = true;
if (!a) {
    a = 10;
}

// opcao 2:
// Retorna o primeiro valor verdadeiro.
a = a || 10;

// opcao 3:
// shorthand

a ||= 10;

console.log(a);

// &&= atribui o valor que esta no lado direito, apenas se o valor do lado esquerdo é verdadeiro.

let b = 10;

// opcao 1:
if (b) {
    b = 20;
}

// opcao 2:
b = b && 20;

// opcao 3:

b &&= 20;

console.log(b);

// ??= atribui o valor que esta no lado direito, apenas se o valor do lado esquerdo é null ou undefined.

let c = null;

// opcao 1:
if (c === null || c === undefined) {
    c = 20;
}

// opcao 2:
c = c ?? 20;

// opcao 3:
c ??= 20;


console.log(c);