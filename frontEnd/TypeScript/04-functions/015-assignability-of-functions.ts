// posso criar um tipagem de função

type voidFunc = () => void;

const f1: voidFunc = () => true;

const f2: voidFunc = () => "false";

const f3: voidFunc = () => 2;

const v1 = f1(); // manterá o tipo void.

const v2 = f2();

const v3 = f3();

const src = [1, 2, 3];

const dst = [0];

src.forEach((item) => dst.push(item));

console.log(dst);
