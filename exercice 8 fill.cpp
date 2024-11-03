#include <iostream>
#include <cstring>
using namespace std;

class File {
private:
    char* pointer;
    size_t length;

public:
    File() : pointer(nullptr), length(0) {}

    ~File() {
        delete[] pointer;
    }

    void Create(size_t len) {
        length = len;
        pointer = new char[length];
    }

    void Fill() {
        for (size_t i = 0; i < length; i++) {
            pointer[i] = 'A' + (i % 26);
        }
    }

    void Display() const {
        for (size_t i = 0; i < length; i++) {
            cout << pointer[i];
        }
        cout << endl;
    }
};

int main() {
    File a;
    a.Create(50);
    a.Fill();
    a.Display();

    return 0;
}
