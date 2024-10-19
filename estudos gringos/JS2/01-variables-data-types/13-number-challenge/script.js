
const x = Math.floor(Math.random() * 100 + 1);
const y = Math.floor(Math.random() * 50 + 1);

const sum = x + y; 
const diff = x - y; 
const prod = x * y;
const quot = x / y;
const rem = x % y;

sumOutput = `${x} + ${y} = ${sum}`;
differenteceOutput = `${x} - ${y} = ${diff}`;
productOutput = `${x} * ${y} = ${prod}`;
quotientOutput = `${x} / ${y} = ${quot.toFixed(1)}`;
rmOutput = `${x} % ${y} = ${rem}`;

console.log(sumOutput);
console.log(differenteceOutput);
console.log(productOutput);
console.log(quotientOutput);
console.log(rmOutput);