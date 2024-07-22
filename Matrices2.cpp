//Matrices2.cpp
#include<iostream>
using namespace std;
int main(){
    int n,suma=0;
    cout<<"Digite el numero de lineas para la matriz: ";cin>>n;
    int M[n+1][n+1];
    for (int i = 1; i<=n; i++){
        for (int j = 1; j <=n; j++){
            cout<<"Digite un valor para ("<<i<<","<<j<<") :"; cin>>M[i][j];
		}
    }
    for (int i = 1; i <=n; i++){
        suma+=M[i][i];
	}
    cout<<"La suma es: "<<suma;
	return 0;
}