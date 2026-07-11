#include <iostream>
#include <string>
using namespace std;

int main() {

    // Variables de la mascota
    int hambre = 50;      // 0 = sin hambre, 100 = mucha hambre
    int energia = 80;
    int felicidad = 80;

    int opcion;
    bool mascotaViva = true;

    cout << "¡Bienvenido a tu Tamagotchi en C++!" << endl;

    while (mascotaViva) {

        // Estado normal
        cout << "\n   /\\_/\\\\   " << endl;
        cout << "  ( o.o )  " << endl;
        cout << "   > ^ <   " << endl;

        cout << "\n--- ESTADO DE TU MASCOTA ---" << endl;
        cout << "Hambre: " << hambre << "/100" << endl;
        cout << "Energia: " << energia << "/100" << endl;
        cout << "Felicidad: " << felicidad << "/100" << endl;

        cout << "\n¿Qué quieres hacer?" << endl;
        cout << "1. Darle de comer" << endl;
        cout << "2. Jugar con ella" << endl;
        cout << "3. Ponerla a dormir" << endl;
        cout << "4. Salir del juego" << endl;
        cout << "Elige un número: ";
        cin >> opcion;

        switch (opcion) {

        case 1:
            cout << "\nComiendo";
            for (int i = 0; i < 5; i++)
                cout << ".";
            cout << endl;

            cout << "   /\\_/\\\\   " << endl;
            cout << "  ( ^o^ ) c[]" << endl;
            cout << "¡Yum! Tu mascota se comió todo." << endl;

            hambre -= 30;
            if (hambre < 0)
                hambre = 0;
            break;

        case 2:
            cout << "\nJugando";
            for (int i = 0; i < 5; i++)
                cout << ".";
            cout << endl;

            cout << "  \\\\ /\\_/\\\\ /" << endl;
            cout << "   ( >w< )" << endl;
            cout << "¡Yupi! Jugaron un buen rato." << endl;

            felicidad += 20;
            energia -= 20;
            hambre += 10;

            if (felicidad > 100)
                felicidad = 100;
            if (energia < 0)
                energia = 0;
            break;

        case 3:
            cout << "\nDurmiendo";
            for (int i = 0; i < 5; i++)
                cout << "z";
            cout << endl;

            cout << "   /\\_/\\\\   " << endl;
            cout << "  ( -.- ) zZz" << endl;
            cout << "Tu mascota está descansando." << endl;

            energia += 30;
            hambre += 15;

            if (energia > 100)
                energia = 100;
            break;

        case 4:
            cout << "\n¡Adiós! Nos vemos pronto." << endl;
            mascotaViva = false;
            break;

        default:
            cout << "Opción no válida. Intenta con un número del 1 al 4." << endl;
        }

        // Paso del tiempo
        if (mascotaViva) {
            hambre += 5;
            energia -= 5;
            felicidad -= 3;

            if (hambre > 100)
                hambre = 100;
            if (energia < 0)
                energia = 0;
            if (felicidad < 0)
                felicidad = 0;

            // Revisar si la mascota sigue viva
            if (hambre >= 100 || energia <= 0 || felicidad <= 0) {
                mascotaViva = false;
                cout << "\nTu mascota ya no pudo seguir..." << endl;
            }
        }
    }

    // Fin del juego
    cout << "\n   /\\_/\\\\   " << endl;
    cout << "  ( x_x )  " << endl;
    cout << "Fin del juego." << endl;

    return 0;
}