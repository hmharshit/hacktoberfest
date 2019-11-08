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
      outputSummation(testcases)
      rl.close()
    }
  };
});


const outputSummation = (testcases) => {
  for (let item of testcases) {

    if (testcases === 1) {
      console.log(1)
    } else if (testcases === 2) {
      console.log(3)
    } else {
      let primesArray = [2]
      for (let i = 3; i <= item; i ++) {
        let bool = true
        for (let prime of primesArray) {
          if (i%prime === 0) {
            bool = false;
            break
          }
        }
        if(bool) {
          primesArray.push(i)
        }
      }
      
      let sum = 1
      for(let prime of primesArray) {
        sum += prime
      }
      console.log(sum)
    }


  }
}