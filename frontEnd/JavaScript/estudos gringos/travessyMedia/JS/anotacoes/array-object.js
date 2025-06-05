// Criar uma array de object
// Parece que para enviar esses dados para um servidor, precisa converter para JSON.

const todos = [
    {
        id: 1,
        text: 'Estudando Java Script',
        isCompleted: true    
    },
    {
        id: 2,
        text: 'Estudei HTML5 e CSS3',
        isCompleted: true    
    },
    {
        id: 3,
        text: 'Terminei PHP 8',
        isCompleted: false    
    },
];


// forEach (percorre através da array), [map] (permite criar uma nova array a partir de uma array.),
// filter (permite criar uma nova array baseada numa condição.)

/* forEach
todos.forEach(function(todo) {
    console.log(todo.id);
});

*/

/* map
const todoText = todos.map(function(todo) {
    return todo.text; // vai fazer com que todoText receba uma array com os textos.
});

console.log(todoText);

*/

const todoComplete = todos.filter(function(todo) {
    return todo.isCompleted === true;
}).map(function(todo) {
    return todo.text;
})

console.log(todoComplete);
