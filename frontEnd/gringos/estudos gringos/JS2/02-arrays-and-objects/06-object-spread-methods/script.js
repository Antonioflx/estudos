let x;

const todo = {};

// adicionar propriedades dentro do object.
todo.id = 1;
todo.task = 'Study JS';
todo.completed = true;

x = todo;

// Aninhamento - acessar in the object;

const person = {
    address: {
        coords: {
            lat: -7.11532,
            long: -34.761,
        },
    },
};

// acessar
x = person.address.coords.long;

// juntar 2 objects

const obj1 = {
    a: 1,
    b: 2,
};

const obj2 = {
    c: 3,
    d: 4,
};

// spread object
const obj3 = {...obj1, ...obj2}

x = obj3;


// outra forma

const obj4 = Object.assign({}, obj1, obj2);
// {} -> vazio, para que quando adicionar os objectos, os valores serao atribuidos para dentro do {}.

// vetor com 3 objects
const todos = [
    { id: 1, task: 'Study JS'},
    { id: 2, task: 'Practice JS'},
    { id: 3, task: 'Take a Breath'},
];
x = todos;

// acessar o objecto dentro do vetor;
// utilizar o indice e .;
x = todos[2].task;

// pegar todas as chaves num object e colocar dentro de uma Array.
x = Object.keys(todo);

// saber o comprimento de um object.
// precisa colocar as propriedades do object dentro de uma array e utilizar o length.
x = Object.keys(todo).length;

// pegar os valores de um object e colocar dentro de uma array.
x = Object.values(todo);

// pegar as propriedades e valores de um object e colocar dentro de uma array
x = Object.entries(todo);

// verificar se tem uma propriedade dentro de um object
x = todo.hasOwnProperty('id');


console.log(x);
