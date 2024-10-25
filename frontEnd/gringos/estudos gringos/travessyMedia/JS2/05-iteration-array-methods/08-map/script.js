// Map

// A funcao que passaremos pode retorna qualquer coisa que quisermos colocar dentro da array

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const nums = numbers.map(num => `Number: ${num}`);

console.log(nums);

const doubledNumbers = numbers.map(num => num * 2);

console.log(doubledNumbers);


// Same with forEach

const doubledNumbers2 = [];

numbers.forEach(num => doubledNumbers2.push(num * 2));

console.log(doubledNumbers2);

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


// Create an array of company name;

const companyNames = companies.map(company => company.name);

console.log(companyNames);

// Create an array with just company and category;

const companyInfo = companies.map(company => {
    return {
        name: company.name,
        category: company.category,
    };
});

console.log(companyInfo);


// Create an array of the length of each company in years

const longCompany1 = companies.map (company => company.end - company.start);

console.log(longCompany1);

// Create an array of objects with the name and the length of each company in years

const longCompany = companies.map (company => {
    return {
        name: company.name,
        years: company.end - company.start + ` years`,
    };
})

console.log(longCompany);

// Chain map methods

// tirar a raiz quadrada e duplicar

const numbers2 = [4, 9, 16, 25, 36, 49, 64, 81, 100]

const squareAndDouble = numbers2
    .map(num => Math.sqrt(num))
    .map(sqrt => sqrt * 2);

/*      Versao longa

const squareAndDouble = numbers2
    .map (function (number) {
        return Math.sqrt(number);
    })
    .map (function (sqrt) {
        return sqrt * 2;
    })

*/

console.log(squareAndDouble);

const squareAndDouble2 = numbers2.map(num => {
    return {
        square: Math.sqrt(num),
        double: Math.sqrt(num) * 2,
    };
})

console.log(squareAndDouble2);

// Chaining differente methods
const evenDouble = numbers
    .filter(num => num % 2 === 0)
    .map(num => num * 2);

console.log(evenDouble);