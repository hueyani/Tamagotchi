#include <iostream>
#include <string>
using namespace std;

int main() {

    // Estadísticas
    string nombre = "Nat";
    int salud = 80;
    int energia = 80;
    int hambre = 20;
    int felicidad = 80;

    int opcion;
    bool mascotaViva = true;

    cout << "¡Bienvenido a tu Tamagotchi en C++!" << endl;

    while (mascotaViva) {

        cout << "\n   /\\_/\\\\ " << endl;
        cout << "  ( o.o )" << endl;
        cout << "   > ^ <" << endl;

        cout << "\n--- ESTADO DE " << nombre << " ---" << endl;
        cout << "Salud: " << salud << endl;
        cout << "Energia: " << energia << endl;
        cout << "Hambre: " << hambre << endl;
        cout << "Felicidad: " << felicidad << endl;

        cout << "\n¿Qué quieres hacer?" << endl;
        cout << "1. Darle de comer" << endl;
        cout << "2. Jugar con ella" << endl;
        cout << "3. Ponerla a dormir" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "\nComiendo";
            for(int i=0;i<5;i++)
                cout << ".";
            cout << endl;

            cout << "   /\\_/\\\n";
            cout << "  ( ^o^ ) c[]\n";

            hambre -= 30;
            felicidad += 5;

            if(hambre < 0)
                hambre = 0;

            if(felicidad > 100)
                felicidad = 100;

            break;

        case 2:

            cout << "\nJugando";
            for(int i=0;i<5;i++)
                cout << ".";
            cout << endl;

            cout << "  \\/\\_/\\\\/\n";
            cout << "   ( >w< )\n";

            felicidad += 20;
            energia -= 20;
            hambre += 10;

            if(felicidad > 100)
                felicidad = 100;

            break;

        case 3:

            cout << "\nDurmiendo";
            for(int i=0;i<5;i++)
                cout << "z";
            cout << endl;

            cout << "   /\\_/\\\\\n";
            cout << "  ( -.- ) zZz\n";

            energia += 40;

            if(energia > 100)
                energia = 100;

            break;

        case 4:
            mascotaViva = false;
            cout << "\n¡Hasta luego!" << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
        }

        if(!mascotaViva)
            break;

        // Paso del tiempo
        hambre += 5;
        energia -= 5;
        felicidad -= 3;

        // Limitar valores
        if(hambre > 100)
            hambre = 100;

        if(energia < 0)
            energia = 0;

        if(felicidad < 0)
            felicidad = 0;

        // La salud depende del estado de la mascota
        if(hambre >= 80)
            salud -= 10;

        if(energia <= 20)
            salud -= 10;

        if(felicidad <= 20)
            salud -= 5;

        if(salud > 100)
            salud = 100;

        if(salud < 0)
            salud = 0;

        // Revisar si sigue viva
        if(salud == 0 || hambre == 100){

            mascotaViva = false;

            cout << "\nTu mascota no pudo seguir..." << endl;
        }

    }

    cout << "\n   /\\_/\\\\ " << endl;
    cout << "  ( x_x )" << endl;
    cout << "Fin del juego." << endl;

    return 0;
}