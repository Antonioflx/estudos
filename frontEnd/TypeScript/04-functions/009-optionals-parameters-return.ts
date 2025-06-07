function myForEach(
	arr: any[],
	callback: (arg: any, index?: number) => void
) {
	for (let i = 0; i < arr.length; i++) callback(arr[i], i);
}
const array_teste = myForEach([1, 2, 4, 3, 4], (item) =>
	console.log(item)
);

// se index -> n vai ser de fato utilizado, melhgor nem passar como parametro.
// myForEach([1, 2, 3], (a, i) => {
// 	console.log(i.toFixed());
// });
