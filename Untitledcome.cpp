#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    double x1, x2;
    double discriminante;
    cout << "Ingresa los datos de la ecuacion cuadratica solucitada con el valor de A, B, C y depues te dara rapidamente los varores de x1 y x2 :)"<<endl;

    // Solicitar al usuario los valores de a, b y c
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    // Calcular las ra�ces
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    cout << "Las raices son: "<<endl;

    // Mostrar las ra�ces con dos decimales
    cout << "x1 = " << round(x1 * 100) / 100 << endl;
    cout << "x2 = " << round(x2 * 100) / 100 << endl;

    return 0;
}

