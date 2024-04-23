/* Javasript Array */

// let NewArray = Array(10);
// let ArrayNew = new Array(10 , 20);
// let Arrays = [10]

// console.log(typeof NewArray);
// console.log(typeof ArrayNew);
// console.log(typeof Arrays);

// console.log(NewArray.length);
// console.log(ArrayNew.length);
// console.log(Arrays.length);

// console.log(NewArray[0]);
// console.log(ArrayNew[0]);
// console.log(Arrays[0]);


/* Javascript Methods pop and push */

{
    let array = []
    console.log(array.length);
    // array[0] = "variable"
    // console.log(array.length);
    // console.log(array[0]);
    // array.length = 10
    // console.log(array.length);
    // console.log(array);
    // console.log(array[1]);


/* push method */

// array.push("Data")
// array.push("Settings")
// console.log(array);
// console.log(array.length);
// array[1] = "variable"
// array[2] = "Javascript"
// console.log(array);

/* pop method  */

// array.pop();
// array.pop();
// array.pop();
// // array.pop();
// // array.pop();
// console.log(array);

/* shift method */

// array.shift();
// array.shift();
// // array.shift();
// // array.pop();
// // array.pop();

// console.log(array);

    /* unshift method */

    array.unshift("Nodejs")
    array.unshift("Html")
    array.unshift("Sass")
    array.unshift("CSS")

    console.log(array);

    /* include method */

    // let check = array.includes("Nodejs")
    // console.log(check);

    /* forEach method */

    // array.forEach( (item) => console.log(item));
    
    /* toString method */

    // let string = array.toString()
    // console.log(array);
    // console.log(string);
    // console.log(typeof string);

    /* toreverce method */

    // array.reverse()

    // console.log(array);

    /* join method */

    // let join = array.join(" ")
    // console.log(array);
    // console.log(join);
    // console.log(typeof join);

    /* concat method */

    let item = ['sharpner' , "pencile", "eraser", "compass"]

    let NewArray = array.concat(item)

    console.log(array);
    console.log(NewArray);
    console.log(typeof NewArray);

    NewArray.unshift("Box");

    console.log(NewArray);


}