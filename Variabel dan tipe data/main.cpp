#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    double a[n];
    double total {0.0};
    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> a[i];
        total += a[i];
    }

    cout << "\nRata-rata: " << total / n << endl;

    return 0;
}