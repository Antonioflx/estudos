// Loop atraves dos arrays
// forEach
const items1 = ['book1', 'table1', 'chair1', 'kite1'];
items1.forEach(i => console.log(i))

// for of 
const items2 = ['book2', 'table2', 'chair2', 'kite2'];
console.log(`Pulando linha`);
for (const item of items2) {
    console.log(item);
}

const users = [
    { name: 'Antonio' },
    { name: 'Felix' },
    { name: 'Luzia' },
];

for (const user of users) {
    console.log(user.name);
}

// Loop over String

const str = 'Hello Word!';

for (const letter of str) {
    console.log(letter);
}

// Loop over Maps.

const map = new Map();

map.set('name', 'Antonio');
map.set('age', 21);

for (const [key, value] of map) {
    console.log(key, value);
}