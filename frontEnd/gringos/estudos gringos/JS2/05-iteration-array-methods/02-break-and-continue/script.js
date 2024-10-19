
// Break

for (let i = 0; i <= 20; i++) {
    console.log(`Valor: ${i}`);

    if (i === 10) {
        console.log(`Achei o valor ${i}`);
        break;
    }
}

// Continue

for (let i = 0; i <= 20; i++) {
    
    if (i === 13){
        console.log(`Skiping 13...}`);
        continue;
    }
    console.log(i);
}

