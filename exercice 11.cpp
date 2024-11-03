#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Traitement {
private:
    vector<int> nombres;

public:
    void Initialise() {
        int valeur;
        while (nombres.size() < 15) {
            cout << "Entrez un entier pair (non nul) : ";
            cin >> valeur;
            if (cin.fail() || valeur <= 0 || valeur % 2 != 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Valeur invalide." << endl;
            } else {
                nombres.push_back(valeur);
            }
        }
    }

    void show() const {
        afficherRecursif(0);
    }

    friend double moyenne(const Traitement& t);
    friend double median(const Traitement& t);

private:
    void afficherRecursif(int index) const {
        if (index < nombres.size()) {
            cout << nombres[index] << " ";
            afficherRecursif(index + 1);
        }
    }
};

double moyenne(const Traitement& t) {
    double somme = 0;
    for (int num : t.nombres) {
        somme += num;
    }
    return somme / t.nombres.size();
}

double median(const Traitement& t) {
    vector<int> temp = t.nombres;
    sort(temp.begin(), temp.end());
    int size = temp.size();
    if (size % 2 == 0) {
        return (temp[size / 2 - 1] + temp[size / 2]) / 2.0;
    } else {
        return temp[size / 2];
    }
}

int main() {
    Traitement t;
    t.Initialise();
    cout << "Les nombres saisies sont : ";
    t.show();
    cout << endl;
    cout << "Moyenne : " << moyenne(t) << endl;
    cout << "Médiane : " << median(t) << endl;
    return 0;
}