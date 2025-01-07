//
// Created by lilian.m on 07/01/2025.
//
#include "fonctions.h"

//Fonction Hello
void hello(string nom) {
    cout << "Bonjour "<< nom << endl;
}

//Fonction longueur de la phrase
bool longueurPhrase(string phrase) {
    return phrase.length() >= 10;
}

//Fonction Afficjage de la phrase
void message() {
    string phrase;
    cout<<"Veuillez saisir une phrase : ";
    getline(cin, phrase);

    if (longueurPhrase(phrase)) {
        cout << "C'était un long message." << endl;
    }
    else {
        cout << "C'était un message court." << endl;
    }

}