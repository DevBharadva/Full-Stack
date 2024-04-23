/* Array method in Javascript */

/* 

slice
splice
every
find
findindex
findlastindex
copywithin
reduce
reduceRight
entries()
key()
valueds()
isArray()
fill
flat
flatmap
sort


*/
/* Slice method in Array */

{
//   let array = ["html", "css", 256, "boot", "false", "null"];

//   // let arrays = array.slice(3)

//   // console.log(arrays);

//   let arrays1 = array.slice(1, 5);

//   console.log(arrays1);
}

/* Splice method in Array */

// let array = ["html", "css", 256, "boot", "false", "null"];

// let x = array.splice(6);

// let y = array.splice(1, 2, "javascript", "nodejs");

// console.log(x);
// console.log(y);

// console.log(array);

/* Every method in Array */

{
//   let num = [1, 78, 22, 13, 24, 85, 45];

//   let x = num.find((any) => any == 85);

//   console.log(x);
}

/* find method in Array */

{
    // let num = [45 , 85 , 75 , 95 , 65 ,55 , 35]

    // let x = num.find(any => any == 85)

    // let y = num.findIndex(any => any === 45)

    // let z = num.findLastIndex(any => any === 45)

    // console.log(x);
    // console.log(y);
    // console.log(z);
}

/* copywithin method in Array */

// {
//         let num = [45 , 85 , 75 , 95 , 65 ,45 , 35]

//         let x = num.copyWithin(2)

//         let y = num.copyWithin(1,3,5)

//         // console.log(0.1 + 0.2);
        

//         console.log(y);

// }

/* reduce, reduceRight Method in Array */

{
    // let num = [45 , 85 , 75 , 95 , 55 , 65 ]

    // let x = num.reduce((current, previous) => current + previous)

    // let y = num.reduceRight((current, previous) => current + previous)

    // console.log(x);
    // console.log(y);

}

/* entries() , key(), values() */

{
    // let array = ["html" , "css" , 450 , "boot", "js"]

    // let x = array.values()

    // console.log(array);
    // console.log(x.next().value);
    // console.log(x.next().value);
    // console.log(x.next().value);
    // console.log(x.next().value);
    

}

/*  isArray */

 {
    // let x = "Array"
    // let y = [""]
    // let Array1 = Array.isArray(x)
    // let Array2 = Array.isArray(y)

    // console.log(Array1);
    // console.log(Array2);
 } 
 
 /* Sorting in Array */
{
//  let array = ["Html", "Css" , 5 ,8, 6 , "boot", "nodejs" , "true"]
//  let Num = [45,85,95,75,55,65,25,35,15]

//  let x = array.sort()

//  console.log(x);
//  let y = Num.sort((a , b ) => a-b)

//  console.log(y);

}

/* Fill Method */

// {
//     let array = ["Html", "Css" , 5 ,8, 6 , "boot", "nodejs" , "true"]

//     let x  = array.fill(" ")
//     console.log(x);
// }

/* flat And flatmap method */

{
    let array = ["Html", "Css" , 5 ,8, 6 , "boot", "nodejs" , "true"]

    let arrays = [45,15, 59 , 85]

    let arrays1 = [["Html", "Javascript"], [85,75]]

    console.log(array);

    let x = array.flat(2);

    let y = arrays.flatMap((any) => any == 22 ? [15, 21]:2)

    console.log(x);

    console.log(y);

    console.log(arrays);
}


