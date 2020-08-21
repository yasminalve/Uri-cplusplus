//Yasmin Alves
//03.07.2020
#include <iostream>
#include <iomanip>
 
using namespace std;

float soma (int L, float M[12][12]);
 
int main() {
 
    int L;
    char T;
    float temp, M[12][12];

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i ++) {
        for (int j = 0; j < 12; j++) {
            cin >> temp;
            M[i][j] = temp;
        }
    }
    cout << fixed << setprecision(1);
    if (T == 'S') cout << soma(L, M) << endl;
    else if (T == 'M') cout << soma(L, M)/12 << endl;




 
    return 0;
}
float soma (int L, float M[12][12]) {
    float som = 0;
    for (int i = 0; i < 12; i ++) {
        som += M[L][i];
    }
    return som;
}
