#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector <string> split (string texto, char separador)
{
    vector <string> datos;
     string valor ;
    for (auto i : texto)
    {
        if(i !=separador )
        {
        valor = valor + i;
    }
        else
        {
            datos.push_back(valor);
            valor.clear();
        }
}

datos.push_back(valor);
return datos;
}



int main ()
{
    //nombre del archivo
    string na = "datos3.txt";
    
    //crear un objeto de archivo de lectura
    
    ifstream archivo (na);
    
    // variable de string para leer cada linea
    string texto;
    
    vector <string> vlineas;
    
    //leo las lineas del archivo
    
    while (getline(archivo,texto))
    {
     //   cout << texto << endl;
        vlineas.push_back(texto);
    }
    //imprimiendo el vector de lineas
    for (auto i:vlineas)
    {
        cout << i << endl;
        
    }
    // imprimir usando el for tradicional
    
    for (int i=0; i < vlineas.size();i++)
    {
        cout << vlineas[i] << endl;
    }
    //vectores columna
    vector<string> nombres;
    vector <float> notas1;
    vector <float> notas2;
    // recorrer el vector vlineas y actualizar los vectores columna
    for (int i =1; i< vlineas.size();i++)
    {
        auto datos = split(vlineas[i],',');
        nombres.push_back(datos[0]);
        
        notas1.push_back(stof(datos[1].c_str()));
          notas2.push_back(stof(datos[1].c_str()));
    }
    for (auto i : nombres)
    cout << i << endl;
    float promedio=0;
    for (auto i:notas1)
    {
        cout << i << endl;
        promedio +=i; // promedio = promedio + i;
    }
    promedio = promedio / notas1.size();
    cout << "El promedio es: " << promedio;
    for (auto i:notas1)
    cout << i << endl;
    for (auto i:notas2)
    cout << i << endl;
    
 
    
    cout << i << endl;
}
    return 0;
}