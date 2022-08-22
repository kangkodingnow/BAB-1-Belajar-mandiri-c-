// #include <iostream>
// #include <string>

// using namespace std;

// class A{
//     private:
//         int a;
//     public:
//         void setA(int a){
//             this->a = a;
//         }

//         int getA(){
//             return a;
//         }

//         void printA(){
//             cout << "a = " << getA() << endl;
//         }
// };

// //kelas dasar 2
// class B{
//     private:
//         int b;
//     public:
//         void setB(int b){
//             this->b = b;
//         }

//         int getB(){
//             return b;
//         }

//         void printB(){
//             cout << "b = " << getB() << endl;
//         }
// };

// //kelas turunan
// class C : public A, public B{
//     private:
//         int c;
//     public:
//         void setC(int c){
//             this->c = c;
//         }

//         int getC(){
//             return c;
//         }

//         void printC(){
//             cout << "c = " << getC() << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     //membuat object dari kelas turunan
//     C *obj = new C();

//     obj->setA(10);
//     obj->setB(20);
//     obj->setC(30);

//     obj->printA();
//     obj->printB();
//     obj->printC();

//     delete obj;

//     return 0;
// }

//kasus pada bahasa pemrograman lain yang tidak bisa multiple inheritance
//diselesaikan dengna pewarisan bertingkat

#include <iostream>
#include <string>

using namespace std;

class A{
    private:
        int a;
    public:
        void setA(int a){
            this->a = a;
        }

        int getA(){
            return a;
        }

        void printA(){
            cout << "a = " << getA() << endl;
        }
};

//kelas dasar 2
class B:public A{
    private:
        int b;
    public:
        void setB(int b){
            this->b = b;
        }

        int getB(){
            return b;
        }

        void printB(){
            cout << "b = " << getB() << endl;
        }
};

//kelas turunan
class C : public B{
    private:
        int c;
    public:
        void setC(int c){
            this->c = c;
        }

        int getC(){
            return c;
        }

        void printC(){
            cout << "c = " << getC() << endl;
        }
};

int main(int argc, char const *argv[])
{
    //membuat object dari kelas turunan
    C *obj = new C();

    obj->setA(10);
    obj->setB(20);
    obj->setC(30);

    obj->printA();
    obj->printB();
    obj->printC();

    delete obj;

    return 0;
}

