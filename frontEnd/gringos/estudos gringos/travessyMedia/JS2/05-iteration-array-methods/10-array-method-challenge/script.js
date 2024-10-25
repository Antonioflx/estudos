

// Challenge 1

// Criar um array chamada youngPeople que vai guardar os objetos => nome (firstName and lastName) e o email das pessoas que possuem 25 anos ou menor.


const people = [
    {
        firstName: 'John',
        lastName: 'Doe',
        email: 'john@gmail.com',
        phone: '111-111-1111',
        age: 30,
    },
    {
        firstName: 'Jane',
        lastName: 'Poe',
        email: 'jane@gmail.com',
        phone: '222-222-2222',
        age: 25,
    },
    {
        firstName: 'Bob',
        lastName: 'Foe',
        email: 'bob@gmail.com',
        phone: '333-333-3333',
        age: 45,
    },
    {
        firstName: 'Sara',
        lastName: 'Soe',
        email: 'Sara@gmail.com',
        phone: '444-444-4444',
        age: 19,
    },
    {
        firstName: 'Jose',
        lastName: 'Koe',
        email: 'jose@gmail.com',
        phone: '555-555-5555',
        age: 23,
    },
];


const youngPeople = people
    .filter(young => young.age <= 25)
    .map((people) => ({
            name: `${people.firstName} ${people.lastName}`,
            email: people.email,
    }));


console.log(youngPeople);


// Challenge 2

// somar todos os numeros positivos na array

const numbers = [2, -30, 50, 20, -12, -9, 7];

const addPositNumber = numbers
    .filter(num => num > 0)
    .reduce((acc, currNum) => acc += currNum, 0);

console.log(addPositNumber);

// Challenge 3

const words = ['coder', 'progammer', 'developer'];

// Utilizando o forEach
const capatalizedWords = [];
words.forEach((letter) =>
    capatalizedWords.push(letter.charAt(0).toUpperCase() + letter.substring(1)));

console.log(capatalizedWords);


// Utilizando o map

const cWords = words.map(word => word[0].toUpperCase() + word.slice(1))

console.log(cWords);