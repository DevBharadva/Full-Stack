/* Display Alert box */

// alert("5 more messages")

/* display conform box in javascript */

// let a = confirm("Do lioke it")
 
// alert(a)

/* display promt box */

// let Hello = prompt("How are you ?")

// alert(Hello)

/* Javascript Validation Example */

  function validateAndSort() {
    // Get input value from the text area
    const input = document.getElementById("inputArray").value;

    // Convert the input string into an array of numbers
    const numbers = input.split(",").map(Number);

    // Validate if the input contains valid numbers
    if (numbers.some(isNaN)) {
      alert("Please enter valid numbers separated by commas.");
      return;
    }

    // Sort the array
    numbers.sort((a, b) => a - b);

    // Display the sorted array
    document.getElementById("sortedArray").textContent = numbers.join(", ");
  }
