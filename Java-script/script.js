// 🦁 Importe cette fonction
import { prompt } from "./helper.js";

console.log("CALCULANA ™️");
let SecondNumber;
let FirstNumber = Number(await prompt("Enter your number: "));
Number(FirstNumber);

let choixsign = await prompt("Enter your operator: (+, -, /, *)");
SecondNumber = Number(await prompt("Enter your Second number: "));
Number(SecondNumber);

if (Number.isNaN(FirstNumber)) {
  console.log("Error your first number do something wrong !!!!!");
} else if (Number.isNaN(SecondNumber)) {
  console.log("Error your second Number do something wrong !!!!!");
} else {
  if (choixsign == "+") {
    console.log("L'addition est égale à : ", FirstNumber + SecondNumber);
  }
  if (choixsign == "-") {
    console.log("La soustraction est égale à : ", FirstNumber - SecondNumber);
  }
  if (choixsign == "/") {
    console.log("La division est égale à : ", FirstNumber / SecondNumber);
  }
  if (choixsign == "*") {
    console.log("La mutiplication est égale à : ", FirstNumber * SecondNumber);
  } else if (
    choixsign !== "+" &&
    choixsign !== "-" &&
    choixsign !== "/" &&
    choixsign !== "*"
  ) {
    console.log("Invalid operator! Please enter one of +, -, /, *.");
  }
}
