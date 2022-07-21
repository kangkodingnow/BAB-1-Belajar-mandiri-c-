#include <iostream>
using namespace std;

int main(){
    string data[4][3] = {{"ATK01", "Spidol", "9000"}, {"ATK02", "Pensil", "6000"}, {"ATK03", "Stabilo", "11000"}, {"ATK04", "Tinta", "23000"}};
    for (int i = 0; i < 4; i++){
        cout << i + 1 << ". ";
        for (int j = 0; j < 3; j++){
            cout << data[i][j];
            if(j < 2){
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}

