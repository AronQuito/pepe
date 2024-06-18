#include <iostream>
using namespace std;
int main(){
    int edad,suma=0,nAlum,i=1;
    system("cls");
    cout<<"Sumatoria de edades de alumnos!"<<endl<<endl;
    cout<<"Introduce la cantidad de alumnos: "; cin>>nAlum;
    while(i<=nAlum){
        system("cls");
        cout<<"Introduce la edad del alumno "<<i<<" : "; cin>>edad;
        if(edad<=0){
            cout<<endl<<"Introduce una edad valida para la sumatoria"<<endl;
            system("pause");
        }else{
            suma+=edad;
            i++;
        }
    }
    system("cls");
    cout<<"La sumatoria de las edades es: "<<suma;
    return 0;
}