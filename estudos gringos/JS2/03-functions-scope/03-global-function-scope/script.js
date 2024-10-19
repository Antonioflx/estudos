// Global scope -> pode ser acessado em todo canto

const x = 100;

console.log(x, 'in Global');

// chamar o x numa funcao
function run() { 
    return console.log(x, 'in function');
}
run();

// Block scope
if (true) { 
    console.log(x, 'in block');
}

// Local scope -> só pode ser acessado dentro do bloco que ela está
function add(x = 1, y = 50) {
    return console.log(x + y);
}

// Ps: a variavel local X sobresaiu a variavel global X -> Apenas dentro dessa funcao
add();
