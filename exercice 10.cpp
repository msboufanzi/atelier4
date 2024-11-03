#include <iostream>
#include <string>

using namespace std;

int main() {
    string dateTime;
    cout << "Entrez la date et l'heure sous la forme JJMMAAAAHHNN: ";
    cin >> dateTime;

    if (dateTime.length() != 12) {
        cout << "Format de date invalide. Assurez-vous que la chaîne contient 12 caractères." << endl;
        return 1;
    }

    string jour = dateTime.substr(0, 2);
    string mois = dateTime.substr(2, 2);
    string annee = dateTime.substr(4, 4);
    string heure = dateTime.substr(8, 2);
    string minute = dateTime.substr(10, 2);

    cout << "Date: " << jour << "/" << mois << "/" << annee << endl;
    cout << "Heure: " << heure << ":" << minute << endl;

    return 0;
}
