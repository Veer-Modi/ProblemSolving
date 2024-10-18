function isValidParentheses(str) {
    let count = 0;

    for (let char of str) {
        if (char === "(" || char==="[" || char==="{") {
            count++;
        } else if (char === ")" || char ==="]" || char==="}") {
            if (count === 0) {
                return false;
            }
            count--;
        }
    }

    return count === 0;
}

const inputString = "{[()]}";
console.log(isValidParentheses(inputString));
