// Default parameters, spread and rest operators.

// Default parameters a atribuição ao parm n1, se não passar nem um argumento.
function mulOfTwoNumbers(n1 = 0, n2 = 0) {
	return n1 * n2;
}

console.log(mulOfTwoNumbers());

// spread operators -> ...

const array = [1, 2, 3];
const array2 = [4, 5, 6];
console.log(...array); // forma normal
console.log([...array]); // forma de array

// concatenar arrays
console.log([...array, ...array2]);

// rest

/*
	function getInfo(a, b, c, d, e) {
		console.log(a, b, c, d, e);

		return "Antonio Felix";
	}

	console.log(getInfo(1, 2, 3, 4, 5));
*/

function getInfo(a, ...c) {
	console.log(a, c);

	return "Antonio Felix";
}

console.log(getInfo(1, 2, 3, 4, 5, 6, 7, 8, 9));
