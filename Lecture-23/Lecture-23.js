/* Fuinction Asyncronuns In Javascript */

// setTimeout
// setInterval
// setTimeout
// clearInterval

/* setTimeout */

{
  // function printDate(){
  //     let datetime = new Date();
  //     let time = datetime.toLocaleTimeString();
  //     console.log(time);
  // }
  // setTimeout(printDate, 5000)
}

/* setInterval */

{
  // function printDate(){
  //     let datetime = new Date();
  //     let time = datetime.toLocaleTimeString();
  //     console.log(time)
  // }
  // setInterval(printDate, 5000)
}

/* ClearTimeout */

{
  function printDate() {
    let datetime = new Date();

    let time = datetime.toLocaleTimeString();

    console.log(time);
  }
  let IntervalId = setTimeout(printDate, 2000);

  console.log("Id:", IntervalId);

  clearInterval(IntervalId);

  console.log("stopped settimeOut");
}

/* clearInterval */

{
  function printDate() {
    let datetime = new Date();

    let time = datetime.toLocaleTimeString();

    console.log(time);
  }
  let IntervalId = setInterval(printDate, 2000);

  console.log("Id:", IntervalId);

  clearInterval(IntervalId);

  console.log("stopped setInterval");
}

/* Counter */

{
  let count = 0;

  let interval = setInterval(function () {
    count += 1;

    if (count == 10) {
      clearInterval(interval);
    }
    console.log(count);
  }, 2000);
}
