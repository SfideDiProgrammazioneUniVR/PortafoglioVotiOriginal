#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    int N, c0, c1;
    cin >> N;
    cin >> c0; // costo per le bianche
    cin >> c1; // costo per le nere

    int arr[N];
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        //cout << arr[i] << "";
    }

    int i = 0;
    int j = N-1;

    int cost = 0;

    while (i <= j ) {

        // se sono in mezzo
        if (i==j) {
            if (arr[i] == 2) {
                cost += min(c0,c1);
            }
        }
        else {
            if (arr[i] + arr[j] == 1) { // 0 + 1 | 1 + 0
                cout << -1;
                return 0;
            }
            if (arr[i] == arr[j] && arr[i] != 2) { // 1 1 | 0 0
                
            }
            else if (arr[i] == 0 || arr[j] == 0) { // 0 0 
                cost += c0;
            }
            else if (arr[i] == 1 || arr[j] == 1) { // 1 1 | 1 2 | 2 1
                cost += c1;
            }
            else { // 2 2
                cost += 2*min(c0,c1);
            }

        }
        i++;
        j--;
    }
    cout << cost;
    cout << "\n";


    return 0;

}

