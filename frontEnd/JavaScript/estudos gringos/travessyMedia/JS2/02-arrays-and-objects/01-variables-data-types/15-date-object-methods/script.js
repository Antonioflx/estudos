let x;

let d = new Date();

x = d.toString();

x = d.getTime();
x = d.valueOf();

x = d.getFullYear();

x = d.getHours();

x = d.getMinutes();

x = d.getMonth() + 1;

x = d.getDate();

// horario
x = `${d.getHours()}:${d.getMinutes()}:${d.getSeconds()}` 

let y;
// data.
y = `${d.getDate()}/${d.getMonth() + 1}/${d.getFullYear()}`

// API Intl -> pegar o horario de cada lugar.
y = Intl.DateTimeFormat('default').format(d);

// mesma coisa.
y = Intl.DateTimeFormat('default', { month: 'long'}).format(d);
y = d.toLocaleString('default', { month: 'short'});

// forma mais facil de mostrar tudo.

x = d.toLocaleString('default' , {
    weekday: 'long',
    year: 'numeric',
    month: 'long',
    day: 'numeric',
    hour: 'numeric',
    minute: 'numeric',
    second: 'numeric',
    timeZone: 'America/Sao_Paulo',
})

console.log(x);
console.log(y);