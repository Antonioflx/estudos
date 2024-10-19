const x = 100;
const y = 50;

function getSum(n1,n2) { 
    const sum = n1 + n2;
    return sum;
}

const sum1 = getSum(x,y);
const sum2 = getSum(10,5);

console.log(sum1,sum2);

// teste

function first() {
    console.log('first.');
    second();
}

function second() {
    console.log('second..');
    third();
}                                                         

function third() {
    console.log('third...');
}

first();



