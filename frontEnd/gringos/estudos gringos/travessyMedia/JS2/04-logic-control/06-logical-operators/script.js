

// && -> retorna o primeiro valor falso ou o ultimo valor

let a;

a = 10 && 20; // 20
a = 10 && 20 && 30; // 30
a = 10 && 0 && 30; // 0
a = 10 && '' && 0 && 30; // ''
a = 30 && 10 && 20; // 20

console.log(a);

const posts = ['Post One', 'Post Two'];

posts.length > 0 && console.log(posts[0]);

// || -> Retorna o primeiro valor verdadeiro or the last value;

let b;

b = 10 || 20; // 10;
b = 0 || 20; // 20
b = 0 || null || '' || undefined; // undefined

console.log(b);

// ?? -> Retorna o valor da direita quando o da esquerda é null ou undefined

let c;

c = 10 ?? 20 // 10;
c = null ?? 20; // 20
c = undefined ?? 30 // 30;
c = '' ?? 30; // 30.
c = 0 ?? 30; // 0

console.log(c);