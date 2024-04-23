/* javascript Object and It's Method */

// const obj = {}

// const Obj = new Object()

// console.log(Obj);
// console.log(obj);

// const obj1 = {id:1, firstname:"joy",lastname:"sigh", age:20}
// console.log(obj1);

// const obj2 = {key1:1, key2:"joy",key3:"sigh", key4:20}
// console.log(obj2);

// console.log(obj2.key1);
// console.log(obj2.key3);
// console.log(obj2.key5);

// console.log(obj2["key1"]);

// const ObjectArray = {
// Array1 :{id:1, firstname:"joy",lastname:"sigh", age:20, gender:"male"},
// Array2 :{id:2, firstname:"devil",lastname:"rana", age:25 ,  gender:"male"}

// }
// console.log(ObjectArray);
// console.log(ObjectArray["Array2"]["age"]);

/* Object.assign() Method */

{
    // const Obj1 = {id:1, firstname:"joy",lastname:"sigh", age:20}

    
    //     const Num = {key11:1 , key22:3, key13:5 , key14:7 , key05:8}

    //     const Assign = Object.assign(Obj1 , Num)

    //     console.log(Assign);

    //     console.log(Obj1);

    //     console.log(Assign === Obj1);
      

}

/* Object.create() Method */

{
     const Obj1 = {
         key1:"Fortuner",
         key2:"TATA",
        key3:function(){
            console.log(`this is ${this.key1} and this branch above ${this.key4}`);
        }
    }

    // obj1.key4 = "alto"

    const NewObj = Object.create(Obj1)

    NewObj.key4 = "alto"

    console.log(Obj1);
    console.log(NewObj);
    console.log(Obj1.key3());
    console.log(NewObj.key3());
    console.log(NewObj.key1);
}
