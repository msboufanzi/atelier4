#include <iostream>
using namespace std;

class ncomplexe
{
public:
    ncomplexe(double r = 0, double i = 0) : real(r), imag(i) {}


    bool egalite(ncomplexe other) {

        if (real == other.real && imag == other.imag)
        {
            return  true;
        }
        else {
            return false;
        }


    }

        ncomplexe add(ncomplexe other)
        {

            double res1_r = real + other.real;
            double res1_i = imag + other.imag;
            ncomplexe result(res1_r, res1_i);
            return result;

       
    }

        
        ncomplexe mul(ncomplexe other)
        {

            double res1_r = real * other.real;
            double res1_i = imag * other.imag + imag * other.real;
            ncomplexe result(res1_r, res1_i);
            return result;


        }
        ncomplexe sos(ncomplexe other)
        
         
        {

            double res1_r = real - other.real;
            double res1_i = imag - other.imag;
            ncomplexe result(res1_r, res1_i);
            return result;


        }
        ncomplexe conjuguee() const
        {
            return ncomplexe (real, -imag);
        }
        ncomplexe div (ncomplexe other ) 
        {
           ncomplexe conj_b = other.conjuguee();
           ncomplexe  numerateur = this->mul(conj_b);
            double denominateur = other.real * other.real + other.imag * other.imag;
            return ncomplexe (numerateur.real / denominateur, numerateur.imag / denominateur);
        }
        
public:
    double real;
    double imag;
};


int main()
{
    ncomplexe  a;
    ncomplexe  b;
    int choix;

    cout << "Donner le promier nombre complex : " << endl;
    cout << "Reel : ";
    cin >> a.real;
    cout << "Imaginaire : ";
    cin >> a.imag;
    cout << "Donner le deuxieme nombre complex : " << endl;
    cout << "Reel : ";
    cin >> b.real;
    cout << "Imaginaire : ";
    cin >> b.imag;

    cout << "voila notre menu, choisir :" << endl;
    cout << "1-Egalite" << endl;
    cout << "2-Addition" << endl;
    cout << "3-Soustraction" << endl;
    cout << "4-Multiplication" << endl;
    cout << "5-Division" << endl;
    cin >> choix;

   
    



    switch (choix) {
    case 1: {
        bool egalite = a.egalite(b);
        cout << "Les nombres sont " << (egalite ? "egaux" : "differents") << endl;
        break;
    }
    case 2: {
        ncomplexe result = a.add(b);
        cout << "Addition: " << result.real << " . " << result.imag << "i" << endl;
        break;
    }
    case 3: {
        ncomplexe result2 = a.sos(b);
        cout << "Soustraction: " << result2.real << " . " << result2.imag << "i" << endl;
        break;
    }
    case 4: {
        ncomplexe result3 = a.mul(b);
        cout << "Multiplication: " << result3.real << " . " << result3.imag << "i" << endl;
        break;
    }
    case 5: {
        ncomplexe result4 = a.div(b);
        cout << "Multiplication: " << result4.real << " . " << result4.imag << "i" << endl;
        break;
    }
    default:
        cout << "Option invalide" << endl;
        break;
    }

    return 0;
    
} 
