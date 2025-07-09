// identificador de tipo

console.log(typeof "Hello"); // string

type Predicate = (x: unknown) => boolean;
type K = ReturnType<Predicate>;

function f() {
	return { x: 10, y: 3 };
}

// type P = ReturnType<f>; // precisamos colocar type of, visto que <Predicate> -> espera um tipo de função, n um valor.
type P = ReturnType<typeof f>;
