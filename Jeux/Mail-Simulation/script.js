// 🦁 Importe cette fonction
import { prompt } from "./helper.js";

console.log("NODE-MAILER ™️");

// 🦁 Récupère le mail, l'objet et le message
/*
Enter recipient your email : jeanmichel@gmail.com
Enter your object : Rdv à 15h
Enter your message : On avait rendez-vous à 15h, où es-tu ! C'est urgent.


The mail is sending...
To user :  jeanmichel@gmail.com
Object :  Rdv à 15h
On avait rendez-vous à 15h, où es-tu ! C'est urgent.
*/
// 🦁 Affiche un log
// - Indiquant que le mail est en train d'être envoyé
// - Le mail du destinataire
// - L'objet du mail
// - Le message du mail

const destinataire = String(await prompt("Enter recipient of your email: "));
if (destinataire.length === 0) {
  console.log("Erreur de format: destinataire vide.");
  process.exit(0);
} else {
  const emailObject = String(await prompt("Enter your object: "));
  if (emailObject.length === 0) {
    console.log("Erreur de format: objet vide.");
    process.exit(0);
  } else {
    const sms = String(await prompt("Enter your message:\n"));
    console.log("\n");
    if (sms.length === 0) {
      console.log("message vide.");
    } else {
      console.log("The mail is sending...\n");
      console.log(`To: ${destinataire}`);
      console.log(`Object: ${emailObject}`);
      console.log(`Message: ${sms}`);
    }
  }
}

//console.log(emetteur);
