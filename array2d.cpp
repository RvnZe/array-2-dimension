#include <iostream>

using namespace std;

int main(){
	
    // Line = 2
    // column = 2
    int matrix [2][2] = {{26,12},{13,22}};

    // Mendeklarasi variabel untuk
    // Indeks perulangan
    int i,j;

    cout<<"\t==============================";
    cout<<"\n\t=== Ordo Matrix 2x2 ===\n";
    cout<<"\t==============================\n\n";

    // Menampilkan matrikcontoh
    cout<<"\nShowing Matrix\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
