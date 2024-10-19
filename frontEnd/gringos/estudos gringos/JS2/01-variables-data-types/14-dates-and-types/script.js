let d;

d = new Date();

d = d.toString();

d = new  Date(2021, 0, 10, 12, 30, 0);

// milissegundos
d = Date.now();

// d.getTime(); -> pegar o time do momento;
// d.valueOf();

d = new Date();
d = d.getTime();

d = Math.floor(Date.now() / 1000);

d = d.valueOf();
console.log(d);