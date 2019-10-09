let primesArray = [2]
let current = 3

while(primesArray.length < 10001) {
  let bool = true
  for (let prime of primesArray) {
    if (current%prime === 0) {
      bool = false;
      break
    }
  }
  if(bool) {
    primesArray.push(current)
  }
  current ++
}

console.log(primesArray[10000])
