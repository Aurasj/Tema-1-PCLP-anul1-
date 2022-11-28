Programarea calculatoarelor şi limbaje de
programare I

Tema 1
Punctaj: 10% din nota finală

Comunicaţii codificate.

Mai multe persoane işi transmit texte codificate prin care doresc să îşi comunice informaţii al 
căror conţinut nu trebuie cunoscut decât de ele. 

Algoritmul de criptare este următorul: fiecare caracter c din text este înlocuit cu un alt caracter 
c1 al cărui cod ASCII este calculat prin formula

ASCII(c1)=(ASCII(c)+v) modulo 256,

unde v este o cifră între 0 şi 9. Cifra v este transmisă întotdeauna împreună cu mesajul şi este 
primul caracter din text.

Un exemplu de text codat pentru care v are valoarea 5 este :
5Ljy%wjfi~3

Textul decodificat :
Get ready.

Scrieţi două programe C++.

Primul program codifică un text citit de la tastatură, iar textul codificat este salvat în fişierul 
cod.txt. 

Al doilea program citeşte fişierul cod.txt și decodifică mesajul care este afișat pe ecran.