#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    
    ofstream archivo("datos.txt");
    
    string texto;
    
    cout << "Ingrese el texto: ";
    
    while (texto != "*")
    {
        getline(cin,texto);
        //impresion en la pantalla
        //cout << "Linea Ingresada es: " << texto << endl;
        if (texto !="*")
       archivo << texto << endl;
    }
    
    archivo.close();
    return 0;
}