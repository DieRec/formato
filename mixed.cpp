#include <iostream>
using namespace std;


int main(void){
    
    int n, i, valor =10 , suma = 0, input, resultado, no = 0, contador = 0;
    cout<< "Suma de 1 a 6"<< endl;
    string dude, mensaje;

    do{
        suma++;
        cout << suma << endl; 
    }
    while (suma <= 5);
    suma = 0;
    cout << endl;
    while (suma <= 5){
        suma ++;
                for (i=1; i<=6; i = i +1){
                cout << "ey" << endl;
                }
        cout << suma<< endl;
    }
    
    
    suma = 0;
    
    for (i=1; i<=6; i = i +1){
        suma++;
        cout << suma << endl;
    }
    
    cout << "FIN DE ITERACIONES "<< endl;
        cout << endl;

        cout << "Digite del 1 al 9 la instruccion que quiera ejecutar"<< endl << endl;
        cin >> n;

    switch (n){
        case 1:
        case 2:
        case 3: 
            for (i = 1; i <= 5; i = i + 1 ){
                cout <<"bro" << endl;
            }
            break;
        case 4:
            
        case 5:
            for(i=1; i<=10;i++){
                if(i == 5){
                    break;
                }
                cout << i << endl;
            }
            break;


        case 6: 
            while (contador != 1){
                for (i=1; i <= 2; i =i+1){
                    cout << "Iteracion de 2" << endl;
                }
            contador = 1; 
            }
            break;

        case 7:
            cout <<"ingrese valor de la condicion"<< endl;
            cin >> dude;
            
            mensaje = dude == "dude" ? "Si, la string es dude" : "No, la string no es dude";
            cout << mensaje << endl; 
            break;
        
        case 8:
            do{
                cout << "gg no team" << endl;
                cin >> i;
            } while(i!=1);

        case 9:cout << "gg isi game " << endl;
            
            break;
        default:
            cout << "valor no valido" << endl;
    }




    cout << "FIN "<< endl;

    return 0;

}

