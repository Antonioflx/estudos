const post = {
    id: 1,
    title: 'Post One',
    body: 'This is the body',
};

// Convert to JSON String;
// Enviar dados para um servidor, precisa enviar de forma JSON.
const str = JSON.stringify(post);

// Parse JSON
// Voltar para os dados inicias do object literal
const obj = JSON.parse(str);

// Array de objetos

const posts = [
    {
        id: 1,
        title: 'Post One',
        body: 'This is the body',
    },
    {
        id: 2,
        title: 'Post Two',
        body: 'This is the body',
    }
];

// convertar para JSON

const str2 = JSON.stringify(posts);

console.log(str2);