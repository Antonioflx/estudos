// tipo id: string | number

/*
    estreitamento 
        -> typeof id === "string" ? "s" : "n"

    Tipos de typeof

        1. "string"
        2. "number"
        3. "bigint"
        4. "symbol"
        5. "undefined" 
        6. "object" // array ou object [] , {}
        7. "function"
    

    Se fosse para Array
    Array.isArray() -> verifica .
*/

const number: Array<number> = [3, 4];

console.log(Array.isArray(number)); // true
console.log(typeof number === "object"); // true
