/* Javascript Object Method */

/* Object Freezed Method */

{
    // const obj = {Key1:"Html" , key2:"Java", key3:"css", key4:"sass"}

    // console.log(obj.Key1);
    // console.log(obj.key2);
    // console.log(obj.key3);
    // console.log(obj.key4);

    // obj.key4 = "nodejs"

    // console.log(obj.key4);

    // Object.freeze(obj)

    // // obj.key4 = "Reactjs"
    
    // // console.log(obj.key4);

    // /* isForzen */

    // let Frozen = Object.isFrozen(obj)

    // console.log(Frozen);
}

/* Object.entries */

{
    // const obj = {Key1:"Html" , key2:"Java", key3:"css", key4:"sass"}
    
    // for(const [key , value] of Object.entries(obj)){
    //     console.log(`this object key is ${key} and its value is ${value}`);
    // }
}

/* Object.hasOwn() method */

{
    // const obj = {Key1:"Html" , key2:"Java", key3:"css", key4:"sass"}
    
    // let data = obj.hasOwnProperty("Key1");

    // console.log(data);
}

/* Object.is() method */

{
    // let obj = {key1:45 , key2:65 , key3:48}
    // let obj1 = {key1:45 , key1:65 , key3:48}

    // console.log(Object.is(obj , obj1));

    // let data = Object.is(obj , obj)

    // console.log(data);
}

/* Object.seal() method */

{

    let obj = {key1:45 , key2:75, key3:85}

    delete obj.key1
    console.log(obj);

    Object.seal(obj)

    delete obj.key1
    console.log(obj);

    // is.sealed

    let data = Object.isSealed(obj)

    console.log(data);
}

/* Object.keys() */

{
    let obj = {key1:85 , key2:25 , key3:95}

    let data = Object.keys(obj)

    console.log(data);
}

/* Object.values() */

{
    let obj = {key1:85 , key2:25 , key3:95}

    let data = Object.values(obj)

    console.log(data);
}

/* Object.groupBy() method */

{
    const inventory = [
        { name: "asparagus", type: "vegetables", quantity: 5 },
        { name: "bananas", type: "fruit", quantity: 0 },
        { name: "goat", type: "meat", quantity: 23 },
        { name: "cherries", type: "fruit", quantity: 5 },
        { name: "fish", type: "meat", quantity: 22 },
      ];

      const result = Object.groupBy(inventory, ({type}) => type)

      console.log(result);

      function callBack({quantity}){
        return quantity > 5 ? "This SAtock is Available" : "ReStock"
      }

      let Data2 = Object.groupBy(inventory , callBack)

      console.log(Data2);
}

/* valueOf And toString */

{
    let obj = {key1:90 , key2:95 , key3:100}

    let value = Object.valueOf(obj)
    // let string = Object.toString(obj)

    console.log(value);
    // console.log(string);

}

