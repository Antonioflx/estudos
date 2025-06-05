// Object Challenge

// Step 1 -> criar uma array de object.

const library = [
    {   
        // First book
        livro1: {
            title: 'Matéria Escura',
            author: 'Blake Crouch',
            status: {
                own: true,
                reading: false,
                read: false,
            },
        },
    },
    {
        // Second book
        livro2: {
            title: 'O Homem de Giz',
            author: 'C.J. Tudor',
            status: {
                own: true,
                reading: false,
                read: false,
            },
        },
    },
    {
        // Third book
        livro3: {
            title: 'Mitologia Nórdica',
            author: 'Neil Gaiman',
            status: {
                own: true,
                reading: false,
                read: false,
            },
        },
    },
];

// Mostrar o valor orig
console.log(library);


// Step 2 -> li todos os livros -> read = true;
x = library[0].livro1.status.read = true;
x = library[1].livro2.status.read = true;
x = library[2].livro3.status.read = true;

// Mostrar as modif
console.log(library);

// Step 3 -> Desestrutura o title do primeiro livro e mudar a propriedade para firstBook
const {livro1: {title: firstBook} } = library[0]; // usar o indicie do objeto.

// Mostrar
console.log(firstBook);

// Transformar a array de objecto in JSON String
const libraryJSON = JSON.stringify(library);

// Mostrar em JSON
console.log(libraryJSON);



