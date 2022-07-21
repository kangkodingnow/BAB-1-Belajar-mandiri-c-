#include <iostream>
using namespace std;
class C{
    public:
        mutable double a;
        double b;

        //kontruktor
        C(double a, double b){
            this->a = a;
            this->b = b;
        }
};

int main(){
    const C obj = C(10.0, 20.0);
    cout << "Sebelum diubah " << endl;
    cout << "Nilai a: " << obj.a << endl;
    cout << "Nilai b: " << obj.b << endl;

    obj.a = 100.0;
    cout << "\nSetelah diubah " << endl;
    cout << "Nilai a: " << obj.a << endl;
    cout << "Nilai b: " << obj.b << endl;

    return 0;
}
