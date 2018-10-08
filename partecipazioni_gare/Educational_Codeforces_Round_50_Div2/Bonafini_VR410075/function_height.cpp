
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //leggo l'input (n numero punti, k area da coprire)
    unsigned long long int n, k;
    cin >> n >> k;
    //cout << "n:" << n << " k:" << k << endl;

    //calcolo area minima per punto
    if(k == 0){
        cout << "0" << endl;
        return 0;
    }
    if(k < n){
        cout << "1" << endl;
        return 0;
    }

    unsigned long long int sol = k/n;
    if(((unsigned long long int)(k%n)) > 0 )
        cout << (unsigned long long int)(sol +1) << endl;
    else
        cout << (unsigned long long int)sol << endl;

    return 0;
}