#include <iostream>

using namespace std;

int main() {

    // Variables de la mascota
    int hambre = 50;
    int felicidad = 50;
    int energia = 50;

    int opcion;
    bool mascotaViva = true;

    cout << "¡Bienvenido a tu Tamagotchi en C++!" << endl;

    while (mascotaViva) {

        // Limitar valores entre 0 y 100
        if (hambre < 0) hambre = 0;
        if (hambre > 100) hambre = 100;

        if (felicidad < 0) felicidad = 0;
        if (felicidad > 100) felicidad = 100;

        if (energia < 0) energia = 0;
        if (energia > 100) energia = 100;

        // Estado normal
        cout << "\n   /\\_/\\\\   " << endl;
        cout << "  ( o.o )  " << endl;
        cout << "   > ^ <   " << endl;

        cout << "\n--- ESTADO DE TU MASCOTA ---" << endl;
        cout << "Hambre: " << hambre << endl;
        cout << "Felicidad: " << felicidad << endl;
        cout << "Energia: " << energia << endl;

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

            hambre -= 25;
            felicidad += 5;
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
            hambre += 10;
            break;

        case 4:

            cout << "\n¡Adiós! Nos vemos pronto." << endl;
            mascotaViva = false;
            break;

        default:
            cout << "Opción no válida." << endl;
        }

        // Paso del tiempo
        hambre += 5;
        energia -= 5;
        felicidad -= 2;

        // Mantener valores entre 0 y 100
        if (hambre < 0) hambre = 0;
        if (hambre > 100) hambre = 100;

        if (felicidad < 0) felicidad = 0;
        if (felicidad > 100) felicidad = 100;

        if (energia < 0) energia = 0;
        if (energia > 100) energia = 100;

        // Condición de derrota
        if (hambre >= 100 || energia <= 0 || felicidad <= 0) {
            cout << "\nTu mascota ya no pudo seguir..." << endl;
            mascotaViva = false;
        }
    }

    // Fin del juego
    cout << "\n   /\\_/\\\\   " << endl;
    cout << "  ( x_x )  " << endl;
    cout << "Fin del juego." << endl;

    return 0;
}