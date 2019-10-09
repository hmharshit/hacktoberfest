const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
})

let T

rl.on('line', line => {
    if (!T) {
        T = parseInt(line)
        return
    }

    
    let max = parseInt(line) #Block scope max variable
    let sum = [...Array(max).keys()].filter(x => !(x % 3 && x % 5)).reduce((acc, next) => acc + next)
    console.log(sum)
})
