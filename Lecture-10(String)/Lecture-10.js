/* Javascript String Method */

{
    let str = 'this is string';
    let str1 = 'this is string';
    let str3 = 'this is string';
    let str4 = new String("this is string object");

    // console.log(str);
    // console.log(typeof str);
    // console.log(str1);
    // console.log(typeof str1);
    // console.log(str3);
    // console.log(typeof str3);
    // console.log(str4);
    // console.log(typeof str4);
}

/* string indexof() and lastindexof() method  */

/*
    indexof(searchString)
    indexof(searchString , position)
    lastIndexof(searchingstring)
    lastIndexof(searchingstring , position)
*/

{
    let str = "this is javascript code and code is so simple."

    let indexStr = str.indexOf('code');

    console.log(indexStr);

    let lastIndexStr = str.lastIndexOf('code');

    console.log(lastIndexStr);

    let indexStr1 = str.indexOf('code', 10);

    console.log(indexStr1);

    let lastrIndexStr1 = str.lastIndsexOf('code' , 28);

    console.log(lastrIndexStr1);

}



