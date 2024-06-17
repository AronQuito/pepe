#include <iostream>
using namespace std;
int main(){
    int edad,suma=0,nAlum,i=1;
    cout<<"Cantidad de alumnos: "; cin>>nAlum;
    while(i<=nAlum){
        cout<<"Introduce la edad: "; cin>>edad;
        suma+=edad;
        i++;
    }
    cout<<"Sumatoria:"<<suma;
    return 0;
}