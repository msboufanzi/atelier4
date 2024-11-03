#include <iostream>
#include <cmath>

using namespace std;

class vecteur3d {
protected:
    float x;
    float y;
    float z;

public:
    vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void afficher() const
    {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }

    vecteur3d som(vecteur3d const autre) const {
        float rx = x + autre.x;
        float ry = y + autre.y;
        float rz = z + autre.z;

        return vecteur3d(rx, ry, rz);
    }

    float pscalaire(vecteur3d const autre) const
    {
        float r = x * autre.x + y * autre.y + z * autre.z;

        return r;
    }

    bool coincide(vecteur3d const autre) const
    {
        return (x == autre.x && y == autre.y && z == autre.z);
    }

    float norme() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    vecteur3d normax(vecteur3d const other) const
    {
        if (norme() > other.norme())
        {
            return *this;
        }
        else
        {
            return other;
        }
    }

    vecteur3d* Adresse(const vecteur3d* autre) const {
        return new vecteur3d(x + autre->x, y + autre->y, z + autre->z);
    }

    const vecteur3d& Reference(const vecteur3d& autre) const {
        static vecteur3d result;
        result = som(autre);
        return result;
    }
};

int main()
{
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(4, 5, 6);

    v1.afficher();
    v2.afficher();

    vecteur3d v3 = v1.som(v2);
    v3.afficher();

    float scalar = v1.pscalaire(v2);
    cout << "Produit scalaire: " << scalar << endl;

    cout << "Norme de v1: " << v1.norme() << endl;
    cout << "Norme de v2: " << v2.norme() << endl;

    vecteur3d maxVect = v1.normax(v2);
    cout << "Vecteur avec la plus grande norme: ";
    maxVect.afficher();

    return 0;
}
