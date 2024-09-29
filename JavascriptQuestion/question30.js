const n = parseInt(prompt("Enter a number: "));
    const digits = n.toString();
    let evenSum = 0;
    let oddSum = 0;

    for (let digit of digits) {
        const num = parseInt(digit, 10); 

        if (num % 2 === 0) {
            evenSum += num; 
        } else {
            oddSum += num; 
        }
    }

    console.log(evenSum, oddSum); 