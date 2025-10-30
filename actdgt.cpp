#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Coches {
    string Marca;
    string Modelo;
    int Fecha_Fabricacion;
    int Precio;
    string Estado;
};

void MostrarMenu();
void marcaropcion();

int main(){
    
    MostrarMenu();
    marcaropcion();
   
}




void MostrarMenu(){
    
    cout << "====================================================" <<"\n";
    cout << " || Bienvenido al concesionario AutoPremium S.L ||" <<"\n";
    cout << "====================================================" <<"\n";
    cout << "1. Poner un nuevo vehiculo" << "\n";
    cout << "2. Mostrar catalogo" << "\n";
    cout << "3. Buscar un vehiculo" << "\n";
    cout << "4. Vender un vehiculo" << "\n";
    cout << "5. Mostrar estadisticas" << "\n";
    cout << "6. Salir del menu" << "\n";

}

void marcaropcion(){

int opcio;
cout << "Escoge una de las opciones de el menu: ";
cin>>opcio;

  switch (opcio){
        
        case 1: 
            cout << "Has escogido:" << endl << "un nuevo vehiculo"<< "\n";
            break;
        case 2:
            cout << "Has escogido: " << endl << "Mostrar catalogo" << "\n";
            break;
        case 3:
            cout << "Has escogido: " << endl << "Buscar un vehiculo" << "\n";
            break;
        case 4:
            cout << "Has escogido: " << endl << "Vender un vehiculo" << "\n";
            break;
        case 5:
            cout << "Has escogido: " << endl << "Mostrar estadisticas" << "\n"; 
            break;
        case 6:
            cout << "Saliendo del menu..." << "\n";
            break; 
        default:
            cout << "Opcion no valida" << "\n";
            break;
        }
        if(opcio!=6){ MostrarMenu();  marcaropcion();
        }
        if (opcio=6){
            string resposta="Si";
            cout<<"Vols sortir del programa? introdueix exactament Si o No: ";
            cin>>resposta;
            if(resposta=="Si"){
                cout<<"Saliendo del menu... ";
            }
            if(resposta=="No"){
                cout<<"tronant al menu: ";
                MostrarMenu();  marcaropcion();
            }
        

        
        }
        
}
