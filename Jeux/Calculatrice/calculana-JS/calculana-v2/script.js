import { prompt } from "./helper.js";

console.log("ADDITION-MASTER ™️\n");
const MAX_NUMBER = 1e15;

const firstNumber = Number(await prompt("Enter the first number: \n"));

if (Number.isNaN(firstNumber)) {
  console.log("Error: firstNumber is not a number");
  process.exit(1);
}
let operator = await prompt("Choose your operator: +, -, /, *\n");

while (
  operator !== "+" &&
  operator !== "-" &&
  operator !== "/" &&
  operator !== "*"
) {
  operator = await prompt("Choose your operator: +, -, /, *\n");
}
const secondNumber = Number(await prompt("Enter the second number: \n"));

if (Number.isNaN(secondNumber)) {
  console.log("Error: secondNumber is not a number");
  process.exit(1);
}

if (
  Math.abs(firstNumber) >= MAX_NUMBER ||
  Math.abs(secondNumber) >= MAX_NUMBER
) {
  console.log("The result is infinite");
} else {
  switch (operator) {
    case "-":
      console.log(
        "The result of your subtraction is ",
        firstNumber - secondNumber
      );
      break;
    case "+":
      console.log(
        "The result of your addition is ",
        firstNumber + secondNumber
      );
      break;
    case "*":
      console.log(
        "The result of your multiplication is ",
        firstNumber * secondNumber
      );
      break;
    case "/":
      if (firstNumber || secondNumber === 0) {
        console.log("Sorry, we cannot divide by zero");
      } else {
        console.log(
          "The result of your division is ",
          firstNumber / secondNumber
        );
      }
  }
}
