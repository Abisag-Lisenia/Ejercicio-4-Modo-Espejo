#include <iostream>>
using namespace std;

int main(){
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        cout <<"Ingrese el numero " << i+1 << ": \n";
        cin >> numeros[i];
    }

    cout<<"Arreglo original \n";

    for (int i = 0; i < 5; i++)
    {
        cout <<numeros[i] <<" ";
    }
    
    cout<<"\nArreglo espejo \n";
    for(int i=4; i>=0; i--){
        cout << numeros[i] << " ";
    }
    return 0;
}