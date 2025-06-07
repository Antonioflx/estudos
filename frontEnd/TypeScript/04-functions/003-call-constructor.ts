type SomeObject = {
	value: string;
};

type SomeConstructor = {
	new (s: string): SomeObject;
};

function fn(ctor: SomeConstructor) {
	return new ctor("Hello");
}

class MyClass {
	constructor(public value: string) {}
}

console.log(fn(MyClass));

// Date poder ser sem new ou com new
interface CallOrConstructor {
	(n?: number): string;
	new (s: string): Date;
}

function fn_ex2(ctor: CallOrConstructor) {
	console.log(ctor(10));

	console.log(new ctor("10"));
}

fn_ex2(Date);
