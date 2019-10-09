const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let numbers
let testcases = []
let count = 1
rl.on('line', (input) => {
  if (!numbers) {
    numbers = parseInt(input);
  } else {
    if (count < numbers) {
      testcases.push(parseInt(input));
      count ++;
    } else if (count === numbers) {
      testcases.push(parseInt(input));
      // here comes the logic
      for (let top of testcases) {
        let squareSums = 0
        let sum = 0 
        for (let i = 1; i <= top; i ++) {
          squareSums += i*i
          sum += i
        }
        console.log(sum*sum - squareSums)
      }
      rl.close()
    }
  };
});
