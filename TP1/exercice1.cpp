/**
1. Ouvrez le fichier [main.cpp](ex1/main.cpp) et essayez de comprendre ce que font chacune de ses lignes.
OK

2. Compilez ce programme de manière à générer un executable nommé "bonjour".
g++ -std=c++17 -Wall -Werror exercice1.cpp -o bonjour

3. Lancez le programme. Celui-ci vous demande votre nom, mais affiche toujours en sortie : "Bonjour Palluche La Faluche !".
Modifiez le programme pour qu'il affiche votre prénom à la place.
OK

4. Créez une nouvelle branche git nommée `tp1` et commitez vos changements dessus avec le message "tp1 - ex1 - q4".
OK

5. Lancez le programme et passez-lui un très long nom (au moins 20 caractères). Que se passe-t-il ?
Quelle classe de la librairie standard faudrait-il utiliser à la place du tableau de `char` pour stocker le nom de l'utilisateur ?


6. Modifiez le programme afin de réaliser ce changement. Testez et commitez vos modifications.


7. Prenez note des difficultés que vous avez rencontrées durant cet exercice et de comment vous les avez surmontées.
*/
#include <iomanip>  // std::setw
#include <iostream> // std::cout, std::cin

int main()
{
    // send the string into the output stream (console)
    std::cout << "Entre ton nom: ";
    // create a char array of 20 elements and initialize it with an empty string
    char name[20] = "";
    // read the input from the console and store it in the name array
    std::cin >> std::setw(20) >> name; // setw(20) is used to limit the input to 20 characters (set width of the stream to 20)
    // send the string into the output stream (console)
    std::cout << "Bonjour " << name << "!" << std::endl;

    return 0;
}