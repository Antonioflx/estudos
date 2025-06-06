// Um alias de tipo é exatamente isso — um nome para qualquer tipo

type Numbers = {
	num1: number;
	num2: number;
};

function printNum1_Num2(number: Numbers) {
	console.log(number.num1, number.num2);
}

printNum1_Num2({ num1: 200, num2: 300 });
