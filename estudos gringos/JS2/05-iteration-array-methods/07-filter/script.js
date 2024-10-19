// filter -> retorna uma array. Tipo uma funcao que retorna true ou false, oq for true entrará na array 

// criar uma var com valores ; criar uma variavel para receber o filter

// const var = var(feita).filter(function (param) {return})

// ele vai receber uma variavel

const number = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];

// funcao estendida

const evenNumbers1 = number.filter(function (number) {
    return number % 2 === 0;
})


// short version
const evenNumbers2 = number.filter(num => num % 2 === 0);
console.log(evenNumbers2);

//  same with forEach

// number.forEach(function evenNumbers3 (num) {
//     if (num % 2 === 0) {
//         console.log(`${num}`, );
//     }
// });
    
// let evenNumbers4 = [];
// number.forEach(number => {
//     if (number % 2 === 0) {
//        evenNumbers4.push(number);
//     }
// })
// console.log(evenNumbers4);


const companies = [
    { name: 'Company One', category: 'Finance', start: 1981, end: 2004},
    { name: 'Company Two', category: 'Retail', start: 1992, end: 2008},
    { name: 'Company Three', category: 'Auto', start: 1999, end: 2007},
    { name: 'Company Four', category: 'Retail', start: 1989, end: 2010},
    { name: 'Company Five', category: 'Technology', start: 2009, end: 2014},
    { name: 'Company Six', category: 'Finance', start: 1987, end: 2010},
    { name: 'Company Seven', category: 'Auto', start: 1986, end: 1996},
    { name: 'Company Eight', category: 'Technology', start: 2011, end: 2016},
    { name: 'Company Nine', category: 'Retail', start: 1981, end: 1989},
];

// First Challenge:

// Get only retail companies

const compRetail = companies.filter(company => company.category === 'Retail');

console.log(compRetail);

// Second Challenge:

// Get companies that started >= 1980 e terminou <= 2005;

const compTime = companies.filter(company => company.start >= 1980 && company.end <= 2005);
console.log(compTime);

// Third Challenge:

// Get companies that lasted 10 years or more

const longComp = companies.filter( 
    (company) => company.end - company.start >= 10 
);

console.log(longComp);