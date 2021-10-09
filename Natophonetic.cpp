#include <iostream>
using namespace std;

int main(){
    char huruf;
    string konversi;

    cout << "-------------NATO alphabet-------------\n";
    cout << "Masukkan huruf : ";
    cin >> huruf;

    switch (huruf){
        case 'a': konversi="alfa"; break;
        case 'b': konversi="bravo"; break;
        case 'c': konversi="charlie"; break;
        case 'd': konversi="delta"; break;
        case 'e': konversi="echo"; break;
        case 'f': konversi="foxtrot"; break;
        case 'g': konversi="golf"; break;
        case 'h': konversi="hotel"; break;
        case 'i': konversi="india"; break;
        case 'j': konversi="juliett"; break;
        case 'k': konversi="kilo"; break;
        case 'l': konversi="lima"; break;
        case 'm': konversi="mike"; break;
        case 'n': konversi="november"; break;
        case 'o': konversi="oscar"; break;
        case 'p': konversi="papa"; break;
        case 'q': konversi="quebec"; break;
        case 'r': konversi="romeo"; break;
        case 's': konversi="sierra"; break;
        case 't': konversi="tango"; break;
        case 'u': konversi="uniform"; break;
        case 'v': konversi="victor"; break;
        case 'w': konversi="whiskey"; break;
        case 'x': konversi="xray"; break;
        case 'y': konversi="yankee"; break;
        case 'z': konversi="zulu"; break;
        default : konversi = "invalid input";
    }
    cout << huruf << " adalah " << konversi;
    return 0;
}
