import { prompt } from "./helper.js";

console.log("ADDITION-MASTER ™️");

let FirstNumber = Number(await prompt("Enter your first number: "));

// Check if FirstNumber is actually a number
if (isNaN(FirstNumber)) {
  console.log("Error: Please enter a valid number for the first input.");
} else {
  // Prompt for the operator
  let choixsign = await prompt("Enter your operator: (+, -, /, *)");

  // Correct the operator check: The condition should use && instead of ||.
  if (
    choixsign !== "+" &&
    choixsign !== "-" &&
    choixsign !== "/" &&
    choixsign !== "*"
  ) {
    console.log("Invalid operator! Please enter one of +, -, /, *.");
  } else {
    // Prompt for the second number and check if it's a valid number
    let SecondNumber = Number(await prompt("Enter your second number: "));

    if (isNaN(SecondNumber)) {
      console.log("Error: Please enter a valid number for the second input.");
    } else {
      // Perform the calculation based on the operator
      if (choixsign === "+") {
        console.log("The result of addition is: ", FirstNumber + SecondNumber);
      } else if (choixsign === "-") {
        console.log(
          "The result of subtraction is: ",
          FirstNumber - SecondNumber
        );
      } else if (choixsign === "/") {
        if (SecondNumber === 0) {
          console.log("Error: Division by zero is not allowed.");
        } else {
          console.log(
            "The result of division is: ",
            FirstNumber / SecondNumber
          );
        }
      } else if (choixsign === "*") {
        console.log(
          "The result of multiplication is: ",
          FirstNumber * SecondNumber
        );
      }
    }
  }
}
