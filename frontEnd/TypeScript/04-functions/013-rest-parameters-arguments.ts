// fazer com que a função aceitei números ilimitados

function multiply(first_value: number, ...second_value: number[]) {
	return second_value.map((value) => value * first_value);
}

const a = multiply(10, 2, 3, 4, 5); // 10 vai ser o first_value e o restante vai ser tudo no second_value
const b = multiply(2, 10, 4, 3, 4, 5); // 2 o first_value e o resentate no sencod_value

console.log(a);
console.log(b);

// concanetenando arrays

const first_arr1 = [8, 5];
const second_arr2 = [10, 2];

console.log(first_arr1);
first_arr1.push(...second_arr2);

console.log(first_arr1);

const arg_1 = [8, 5] as const;

// const arg_1 = [8,5]
// typescript n pressupoe que arrays são imutaives por isso que dá erro sem const
const arg_2 = Math.atan2(...arg_1);
