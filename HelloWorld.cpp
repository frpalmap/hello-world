//Primer programa de prueba
#include <iostream>
using namespace std;


int suich(){
    int D;
    cout<< "1 para una Frase, 2 para otra:";
    cin >> D;
    switch(D){
        case 1:{
            cout<<"Presionaste 1" <<endl;
            break;
        }
        case 2:{
            cout<<"Presionaste 2" <<endl;
            break;
        }
    }
    return D;
}

int main(){
    int A, B, C;
    cout<< "Hello World" <<"Inserte dos enteros y presione enter luego de cada uno:" << endl ;
    cin>>A >> B;
    C=A+B;
    cout<<"La suma es:" <<C <<endl;
    C=suich();
    cout<<"Y la respuesta al switch fue: " << C <<endl;
    

    return 0;
}