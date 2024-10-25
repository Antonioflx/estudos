// Nested - scope

// clousure -> Funcoes alinhadas

// first(x) -> Parent function
function first(x = 100) { 
    // second(y) -> Child function
    function second(y = 200) {
        return console.log(x + y);;
    }

    second();
}
first();
// Ps: In the child function i can acess any variables that are in the Parent function. However, it doesn't work the other way around


// The same thing to the block scope

if (true) {
    const x = 100;

    if (x === 100) {
        const y = 300;
        console.log(x + y);
    }
}