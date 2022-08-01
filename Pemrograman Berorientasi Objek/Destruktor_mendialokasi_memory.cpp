#include <iostream>
#include <cstring>

using namespace std;

class Text{
    private:
        char *s;    //pointer ke tipe char
    
    public:
        //konstruktor
        Text(){
            s = new char[255];  //alokasi memory
        }

        ~Text(){
            delete [] s;
        }

        void setText(char *s){
            strcpy(this->s, s);
        }

        char *text(){
            return s;
        }

};

int main(int argc, char const *argv[])
{
    Text *obj;

    //membuat object dari kelas Text
    obj = new Text();
    obj->setText((char *)"Contoh teks...");
    cout << obj->text() << endl;

    //menghapus object
    delete obj;
    return 0;
}
