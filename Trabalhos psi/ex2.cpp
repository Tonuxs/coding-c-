#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct ponto{
   int X = 0;
   int Y = 0;
};

int main(){
  ponto notas[5];
  for(int i = 0; i < 5; i++){
    cout << "ensira o valor de X: " << endl;
    cin >> notas[i].X;
    system("cls");
    cout << "ensira o valor de Y: " << endl;
    cin >> notas[i].Y;
    cout << "os pontos tem a seguinte coordenada: " << endl
    << "x: " << notas[i].X << endl << "Y: " << notas[i].Y << endl;
  } 
}