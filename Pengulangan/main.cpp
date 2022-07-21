#include <iostream>
#include <string>

using namespace std;

const string USERNAME{"admin"};
const string PASSWORD{"Abc123"};

int main(){
    string username, password;

    do{
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        cout << endl;
    } while (username.compare(USERNAME) != 0 || password.compare(PASSWORD) != 0);

    cout << "Selamat datang, " << username << endl;

    return 0;
}