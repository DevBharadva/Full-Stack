/* Dom(Doument Object Model) in javascript*/

// let object1 = document.getElementById("heading").id
// let object2 = document.getElementById("heading").className
// let obj = document.getElementById("heading").className

let hello  = document.getElementById("heading")
let hello1 = document.getElementById("heading").id
let hello2 = document.getElementById("heading").className


console.log(hello);
console.log(hello1);
console.log(hello2);

let hello3 = document.getElementById("heading").innerHTML = "Hello!"

console.log(hello3);

let hello4 = document.getElementById("heading").style.backgroundColor = "black"
let hello5 = document.getElementById("heading").style.color = "white"
let hello6 = document.getElementById("heading").style.fontSize = "50px"

let demo = document.getElementById("heading").getAttribute("id")
let demo1 = document.getElementById("heading").getAttribute("class")

console.log(demo);
console.log(demo1);

let demo2 = document.getElementById("heading").setAttribute("class", "paragraph heading")

let demo3 = document.title
demo3 = "html"
console.log(demo3);

let demo4 = document.links

console.log(demo4);

/* Dom New element */

// creatElement
// textcontent
// appendChild

let element = document.createElement("marquee")

element.setAttribute("bgcolor", "#E31E24")
element.setAttribute("direction", "right")
element.textContent = "SkillQode"
document.body.appendChild(element)

document