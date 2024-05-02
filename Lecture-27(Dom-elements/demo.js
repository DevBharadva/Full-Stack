/* Dom element */

/* 

addEvenlistener
attribute
appendChild
blur()
focus()
childElementCount
childnodes
hasattribute
hasattributes

*/
/*

classList
className
Click()
firstchild()
removeClass

*/

// let value = document.getElementById("demo");

// let num = 1;

// function color() {
//   if (value.className == "para") {
//     value.className = "para-1";
//   } else if (value.className == "para-1") {
//     value.className = "para-2";
//   } else if (value.className == "para-2") {
//     value.className = "para-3";
//   } else {
//     value.className = "para";
//   }
// }

// document.getElementById("test").addEventListener("mouseover", Click);
// document.getElementById("random").addEventListener("mouseenter", test);

// function Click() {
//   document.getElementById("test").focus();
// }
// function test() {
//   document.getElementById("random").Click();
// }

// let element = document.getElementById("demo").firstChild.innerHTML;

// console.log(element);

// let val = document.getElementById("demo").hasAttribute("type");

// console.log(val);

// let value = document.body.hasAttributes();

// console.log(value);

/* remove child */

// function myFunction() {
//     const list = document.getElementById('demo')
//     list.removeChild(list.firstElementChild)
// }

/* javascript promises */

/*

 Dinner scenario

1. your friends                                     1. promise

2. can get food / get not get food                  2. promise value

3. can get food                                     3. fulfill promise

4. can not get food                                 4. reject promise

5. setup the table                                  5. sucess promise

6. cook another food                                6. failure callback
*/

// const promise1 = new promise(function (resolve, rejct) {

// })

// new promise1(function (resolve, reject) {

// })

// function print() {
//     console.log("Welcome to Social NetWork");
// }

// function prints() {
//     console.log("Hello! How are you");
// }

// setTimeout(print , 2000)
// setInterval(prints ,4100)
// print()

// let promise1 = new Promise(function (resolve, reject) {
//   setTimeout(() => {
//     console.log("Dev Devloper");
//     resolve();
//   }, 2000);
// }).then(() => {
//   console.log(["1", "2"]);
// }).then(() => {
//     console.log("Hii");
// })

// let promise1 = new Promise(function (resolve, reject)
// {
//     setTimeout(() => {
//         resolve({userName:"google" , Email:'google@gmail.com'})
//     }, 4000)
// }).then((user) => {
//     console.log(user);
//     console.log('Hello');
//     return user.userName
// }).then((item)=> {
//   console.log(item);
// })

// let promise1 = new Promise(function (resolve, reject) {
//   setTimeout(() => {
//     let error = true;
//     if (!error) {
//       resolve({ userName: "kano", Email: "kano@gamail.com" });
//     } else {
//       reject("this is rejected");
//     }
//   }, 2000);
// })
//   .then((user) => {
//     console.log(user);
//     console.log();
//     return user.userName;
//   })
//   .then((item) => {
//     console.log(item);
//   })
//   .catch((demo) => {
//     console.log(demo);
//   });

let Dom1 = document.getElementById('demo')
Demo1.className = 'heading'
console.log(Dom1);

function toggle() {
    let Dom1 = document.getElementById('demo')
    Dom1.className = 'heading'
    Dom1.classList.toggle('heading')
}


