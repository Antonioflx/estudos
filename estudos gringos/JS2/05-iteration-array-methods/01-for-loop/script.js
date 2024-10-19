 for (let i = 0; i <= 10; i++) {
     i === 7 ? console.log(`7 is my number`) : console.log(`Number ${i}`); 
 } 

 console.log('Pulando linha.');

 // Nested loops

for (let i = 1; i <= 4; i++) {
    console.log(`Number ${i}`);
    for (let j = 1; j <= 4; j++) {
        console.log(`{ ${i} * ${j} = ${i * j} }`);
    }
}

// Loop atraves da array

const nomes = ['Brad', 'Sam', 'Sarah', 'John', 'Tim', 'Luzia te amo.'];

for( let i = 0; i < nomes.length; i++) {
    nomes[i] === 'Sarah' ? console.log(`Nome ${i} = ${nomes[i]} is the Best`) : console.log(`Nome ${i} = ${nomes[i]}` );
}

// utilizando o forEach()

// Sintaxe -> nomeVar.forEach(function (pam) = {clg(pam)})
nomes.forEach(n => console.log(n));