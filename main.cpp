#include <iostream>

using namespace std;

int main() {
    // FALTAN VARIABLES: ¡No olvides crear las variables para hambre, energía, etc.!

    int opcion;
    bool mascotaViva = true; 

    cout << "¡Bienvenido a tu Tamagotchi en C++!" << endl;

    while (mascotaViva) {
        
        // --- ARTE ASCII: ESTADO NORMAL ---
        // Usamos diagonales invertidas (\\) y otros símbolos para dibujar un gatito.
        cout << "\n   /\\_/\\   " << endl;
        cout << "  ( o.o )  " << endl;
        cout << "   > ^ <   " << endl;

        cout << "\n--- ESTADO DE TU MASCOTA ---" << endl;
        // FALTAN INSTRUCCIONES: Imprimir los valores de las variables aquí.

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
                // Este ciclo "for" simula que pasa el tiempo imprimiendo puntos
                for(int i = 0; i < 5; i++) {
                    cout << ".";
                }
                cout << endl;
                
                // ARTE ASCII: COMIENDO
                cout << "   /\\_/\\   " << endl;
                cout << "  ( ^o^ ) c[]" << endl; 
                cout << "¡Yum! Tu mascota se comió todo." << endl;
                // FALTAN INSTRUCCIONES: Subir variable de comida.
                break;
                
            case 2:
                cout << "\nJugando";
                for(int i = 0; i < 5; i++) {
                    cout << ".";
                }
                cout << endl;
                
                // ARTE ASCII: JUGANDO
                cout << "  \\ /\\_/\\ /  " << endl;
                cout << "   ( >w< )   " << endl;
                cout << "¡Yupi! Jugaron un buen rato." << endl;
                // FALTAN INSTRUCCIONES: Subir felicidad, bajar energía.
                break;
                
            case 3:
                cout << "\nDurmiendo";
                for(int i = 0; i < 5; i++) {
                    cout << "z";
                }
                cout << endl;
                
                // ARTE ASCII: DURMIENDO
                cout << "   /\\_/\\   " << endl;
                cout << "  ( -.- ) zZz" << endl;
                cout << "Tu mascota está descansando." << endl;
                // FALTAN INSTRUCCIONES: Subir energía.
                break;
                
            case 4:
                cout << "\n¡Adiós! Nos vemos pronto." << endl;
                mascotaViva = false; 
                break;
                
            default:
                cout << "Opción no válida. Intenta con un número del 1 al 4." << endl;
        }

        // FALTAN INSTRUCCIONES: Bajar las estadísticas con el paso del tiempo 
        // y revisar con un "if" si la mascota sigue viva.
    }

    // ARTE ASCII: FIN DEL JUEGO
    cout << "\n   /\\_/\\   " << endl;
    cout << "  ( x_x )  " << endl;
    cout << "Fin del juego." << endl;

    return 0;
}