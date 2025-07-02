#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream image_Input;
    image_Input.open("./images/Imagem.ppm");

    if (image_Input.is_open()) {
        // Header
        image_Input << "P3" << endl;
        image_Input << "70 50" << endl;  // Exatamente igual ao seu código
        image_Input << "255" << endl;

        // Gerar imagem: 50% AZUL (superior) + 50% VERMELHO (inferior)
        for (int linha = 0; linha < 50; linha++) {
            for (int coluna = 0; coluna < 70; coluna++) {
                if (linha < 25) {
                    // Primeiras 25 linhas = AZUL (parte superior)
                    image_Input << "0 0 255 ";
                } else {
                    // Últimas 25 linhas = VERMELHO (parte inferior)
                    image_Input << "255 0 0 ";
                }
            }
            image_Input << endl;
        }
    }
    
    image_Input.close();
    return 0;
}