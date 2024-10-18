function getAllSubstrings(str) {
    const substrings = []

    for (let start = 0; start < str.length; start++) {
        for (let end = start + 1; end <= str.length; end++) {
            substrings.push(str.slice(start, end))
        }
    }

    return substrings
}

const inputString = "abc";
console.log(getAllSubstrings(inputString)); 
