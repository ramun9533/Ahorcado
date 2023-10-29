#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Dibujo(int estado){
    switch (estado)
    {
    case 5:
        /* code */
        cout << "\033[2J\033[H";
        cout << " O" << endl;
        cout << "Esa letra es incorrecta. "<<endl<<"La cantidad de errores que llevas es: "<<estado<<endl;
        cout << "Ingresa una letra mas: ";

        break;
    case 4:
        /* code */
        cout << "\033[2J\033[H"; // Caracteres de control ANSI para borrar la pantalla.
        cout << " O" << endl;
        cout << "/ " << endl;
        cout << "Esa letra es incorrecta. "<<endl<<"La cantidad de errores que llevas es: "<<estado<<endl;
        cout << "Ingresa una letra mas: ";

        break;
    case 3:
        /* code */
        cout << "\033[2J\033[H";
        cout << " O" << endl;
        cout << "/| " << endl;
        cout << "Esa letra es incorrecta. "<<endl<<"La cantidad de errores que llevas es: "<<estado<<endl;
        cout << "Ingresa una letra mas: ";

        break;
    case 2:
        /* code */
        cout << "\033[2J\033[H";
        cout << " O" << endl;
        cout << "/|\\ " << endl;
        cout << "Esa letra es incorrecta. "<<endl<<"La cantidad de errores que llevas es: "<<estado<<endl;
        cout << "Ingresa una letra mas: ";

        break;
    case 1:
        /* code */
        cout << "\033[2J\033[H";
        cout << " O" << endl;
        cout << "/|\\ " << endl;
        cout << "/" << endl;
        cout << "Esa letra es incorrecta. "<<endl<<"La cantidad de errores que llevas es: "<<estado<<endl;
        cout << "Ingresa una letra mas: ";

        break;
    case 0:
        /* code */
        cout << "\033[2J\033[H";
        cout << " O" << endl;
        cout << "/|\\ " << endl;
        cout << "/ \\" << endl;
        break;
    
    default:
        break;
    }
}    

int main() {
     string palabra = "elefante"; // Palabra a adivinar
     string palabraAdivinada(palabra.length(), '_'); // Inicializa con guiones
    char letra; // Letra proporcionada por el usuario

     cout << "Adivina la palabra: " << palabraAdivinada <<  endl;

    int intentos = 6; // Número de intentos permitidos

    while (intentos > 0) {
         cout << "Ingresa una letra: ";
         cin >> letra;

        bool acierto = false;

        for (size_t i = 0; i < palabra.length(); ++i) {
            if (letra == palabra[i]) {
                acierto = true;
                palabraAdivinada[i] = letra;
            }
        }

        if (acierto) {
             cout << "Letra encontrada: " << palabraAdivinada <<  endl;
            if (palabraAdivinada == palabra) {
                 cout << "¡Ganaste! La palabra es: " << palabra <<  endl;
                break;
            }
        } else {
            --intentos;
            cout << "Letra incorrecta. Te quedan " << intentos << " intentos." << endl;
            Dibujo(intentos);
        }
    }

    if (intentos == 0) {
        cout << "¡Perdiste! La palabra era: " << palabra << endl;
    }

    return 0;
}
