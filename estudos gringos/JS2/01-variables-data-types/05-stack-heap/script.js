// Values are stores on the stack

const name = 'Arthur';
let age = 21;

// Rereference values are stores on the heap

const person = {
    name: 'Antonio',
    age: 21,
    city: 'JP',
};

let newName = name;
newName = 'Felix';

let newPerson = person;
newPerson.name = 'Jose';

console.log(name, newName);
console.log(person, newPerson);