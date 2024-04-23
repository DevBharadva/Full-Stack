/* Javascript prototype And Destructuring */

/* Function.toString() */

// function greet() {
//   console.log("Hii,How are you");
// }
// console.log(greet.toString());

/* Function Constroctor */

// let final = new Function("d", "e", "return d*e");

// console.log(final(24, 6));

/* new Array, new Object, new String, new Function */

/* Function.name */

// let name = function greet() {};
// let names = function () {};

// console.log(name.name);
// console.log(names.name);

/* Function Apply() Call() And Bind Method */

{
//   let num1 = [10, 20, 30, 40];
//   let num2 = [50, 60, 70, 80, 90];

//   console.log(num1.concat(num2));
//   console.log(num1);
}

{
//   let num1 = [10, 20, 30, 40];
//   let num2 = [50, 60, 70, 80, 90];

//   let final = num1.push(50);

//   console.log(final);
//   console.log(num1);

  /* Spread Ope */

//   [...arr.obj];

}

{
    //  let num1 = [10, 20, 30, 40];
    // let num2 = [50, 60, 70, 80, 90];
    
    // let final = num1.push(...num2)

    // console.log(final);
    // console.log(num1);
}

{
    //  let num1 = [10, 20, 30, 40];
    // let num2 = [50, 60, 70, 80, 90];
    
    // let final = num2.push.apply(num1, num2)
    
    // console.log(final);
    // console.log(num1);
    // console.log(num2);
}

/* Array Destucturing */

{
    //  let num1 = [10, 20, 30, 40];
    // let num2 = [50, 60, 70, 80, 90];
    
    // const [count1, count2, count3,count4] = num1

    // console.log(count1);
    // console.log(count2);
    // console.log(count3);
    // console.log(count4);
    
}

/* Apply() */

{
    // function inner(note1, note2) {
    //     return note1 + this.firstName + " " + this.lastName + note2        
    // }

    // const person1 = {
    //     firstName: "Devil",
    //     lastName: "Johns"
        
    // }

    // const person2 = {
    //     firstName: "Roy",
    //     lastName:"stons"
    // }

    // console.log(inner.apply(person1, [`hello, you are `, " i am King"]));
    // console.log(inner.apply(person2, [`Hii , i am `, ' I am Businessman']));
    

}

/* Call() method */

{
    // function sum(x, y) {
    //     return x + y
    // }

    // let result = sum.call(this, "I am", " King")
    // let result2 = sum(59, 84)
    // let result3 = sum.call(this, 53, 90)
    

    // console.log(result);
    // console.log(result2);
    // console.log(result3);
}

{
//     const DJ = {
//         firstName: "Dhruv",
//         LastName: "jaganath",
//         age: 25
//     }
//     console.log(DJ);

//     function inner() {
//         console.log(`My Name is ${this.firstName} And my Last Name is ${this.lastName} And my age is ${this.Age}`);
//     }
//     inner.call(DJ)
// }

// /* Bind Method */

// {
//     function sum(a, b) {
//         return a + b
//     }

//     let result = sum.bind(this, 45, 46)
    
//     console.log(result());
// }

// {
//     const student1 = {
//         name: "This",
//         grade: "A1",
//         inner: function () {
//             console.log(this.name+ " " + 'Strudent grade is'+ " " + this.grade);
//         }
//     }

//     const student2 = {
//         name: "",
//         grade:"A2"
//     }

//     let final = student1.inner.bind(student2)
//     let final2 = student1.inner.bind(student1)

//     console.log(final());
//     console.log(final2());
}

/* Asyncronous Function */

{
    // function num(x, y) {
    //     return x + y
    // }

    // setTimeout(() => {console.log('Hi')}, 5000)
}