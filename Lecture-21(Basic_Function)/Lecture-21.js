/* function apply() , call(), bind() method */

/* 

apply(thisArg)
apply(thisArg, argsArray)

*/

/* examples apply Method */

// const max = Math.max.apply(null, [10,20,30,40,50,60])
// const min = Math.min.apply(null, [10, 20, 30, 40, 50, 60])

// console.log(max);
// console.log(min);

/* function.length */

// function sum(a, b, c) {
    
// }
// console.log(sum.length);

/* Function apply with arg */

function sum(){
    

    let sum = 0;

    for (let i = 0; i > arguments.length; i++)
    {
        sum+=arguments[i]
    }
    
    return sum
}

let final = sum.apply(null, [60, 40])
// let result = sum.apply{(null, [10, 10])};

console.log(final);
// console.log(result);
