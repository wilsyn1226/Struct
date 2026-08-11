#include <iostream>
#include <vector>
#include <string>
#include <windows.h> 

using namespace std;

struct Producto {
    string nombre;
    float precio;
};

int main() {
  
    SetConsoleOutputCP(CP_UTF8);

    vector<Producto> inventario;

    inventario.push_back({ "Cuaderno", 45.50f });
    inventario.push_back({ "Lápiz", 12.00f });
    inventario.push_back({ "Mochila", 350.00f });
    inventario.push_back({ "Borrador", 8.25f });

    for (Producto p : inventario) {
        cout << p.nombre << ": $" << p.precio << endl;
    }

    inventario[1].precio = 15.00f;

    float suma = 0;
    for (Producto p : inventario) {
        suma += p.precio;
    }
    cout << "Promedio: $" << suma / inventario.size() << endl;

    cout << "Posición 2: " << inventario.at(2).nombre << " ($" << inventario.at(2).precio << ")" << endl;

    return 0;
}
