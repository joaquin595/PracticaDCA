#include <iostream>

using namespace std;

char menu(){
    char opt;
    cout << "Calculadora: " << endl;
    cout << "1. Suma: " << endl;
    cout << "2. Resta: " << endl;
    cout << "3. Multiplicacion: " << endl;
    cout << "4. Division: " << endl;
    cout << "q. Salir: " << endl;
    cout << "Opcion: ";
    cin >> opt;
    return opt;
}

int suma(int v1, int v2){

    return v1 + v2;

}

int resta(int v1, int v2){

    return v1 - v2;

}

int multiplicacion(int v1, int v2){

    return v1 * v2;

}

int division(int v1, int v2){

    if(v2 == 0){
        cout << "Imposible dividir por 0" << endl;
        return -1;
    }
    return v1 / v2;

}

int main(){

    char opt;
    int valor1;
    int valor2;
    opt = menu();
    while (opt != 'q'){
    
        cout << "Introduce 2 valores" << endl;
        cout << "Valor 1: ";
        cin >> valor1;
        cout << "Valor 2: ";
        cin >> valor2;

        cout << "El resultado es: ";
        switch(opt){
            case '1': cout << suma(valor1,valor2) << endl;
                break;
            case '2': cout << resta(valor1,valor2) << endl;
                break;
            case '3': cout << multiplicacion(valor1,valor2) << endl;
                break;
            case '4': int res = division(valor1,valor2);
                if(res != -1) cout << res << endl;
                break;
        }

        opt = menu();
    }
    

    


    
}