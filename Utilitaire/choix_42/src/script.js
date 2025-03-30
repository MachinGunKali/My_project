const root = document.getElementById("#root");
const btn_1 = document.getElementById("btn-1");
const p1 = document.getElementById("P1");

function randomChoice() {
  const choix = ["juillet", "aout", "septembre"];
  const index = Math.floor(choix.length * Math.random());

  p1.innerText = "Te casse pas la tete fait la en  " + choix[index];
}

btn_1.onclick = randomChoice;
