#include <iostream>
#include <string>
using namespace std;

//convert lower case menjadi upper case
int main(){
    // for (int i = 65; i <= 90; i++){
    //     cout << i << " = \'" << (char)i << "\'\t\t" << i + 32 << " = \'" << (char)(i + 32) << "\'" << endl;
    // }
    // cout << "aku \' kamu" << endl;
    string s, temp;
    cout << "Masukkan teks: ";
    getline(cin, s);
    temp = "";
    for (unsigned int i = 0; i <= s.size(); i++){
        char c = s[i];
        int ascii = (int)c;
        if(ascii >= 97 && ascii <= 122){
            temp += (char)(ascii - 32);
        }else{
            temp += c;
        }
    }
    cout << s.size() << endl;
    cout << "\nSebelum diubah: " << s << endl;
    cout << "setelah diubah: " << temp << endl;

    return 0;
}