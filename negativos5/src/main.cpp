#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
   int valores[5], count = 0;

    for(int i=0; i<5; i++){
        std::cin >> valores[i];
    }

    for (int i = 0; i < 5; i++){
        if(valores[i] < 0){
            count++;
        }
    }

    cout << count;

    return 0;
}
