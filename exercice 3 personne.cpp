// exercice 3 personne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class personne
{
protected:
    string nom;
    string prenom;
    int date;
public:
    personne(string n, string p, int d) : nom(n), prenom(p), date(d) {}

    virtual void affiche() {
        cout << " nom:" << nom << endl;
        cout << "Le prenom est : " << prenom << endl;
        cout << "La date de naissance est : " << date << endl;

    }

};


class employer : public personne {
private:
    int salaire;

public:
    employer(string n, string p, int d, int s) : personne(n, p, d), salaire(s) {}
    void affiche()
    {
        personne::affiche();
        cout << " salaire :" << salaire << endl;
    }


};
class chef : public personne {
protected:
    string service;

public:
    chef(string n, string p, int d, string se) : personne(n, p, d), service(se) {}
    void affiche()
    {
        personne::affiche();
        cout << " service :" << service << endl;
    }


};


class directeur : public personne {
protected:
    string societe;

public:
    directeur(string n, string p, int d, string s) : personne(n, p, d), societe(s) {}
    void affiche()
    {
        personne::affiche();
        cout << " societe :" << societe << endl;
    }


};




int main()
{
    

    directeur a("abdo", "pp", 6, "gz");
    a.affiche();
        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
