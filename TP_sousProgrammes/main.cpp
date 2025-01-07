#include "fonctions.h"

int main() {
    string nom{};
    cout << "Nom d'utilisateur : ";
    getline(cin, nom);

    hello(nom);


}
