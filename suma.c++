#include <iostream>
using namespace std;

int main (){
    int x;
    int y;
    int r;
    cout << "vamos a sumar." "\n" "pon el primer numero ";
    cin >> x;
    cout<< "pon el segundo numero ";
    cin >> y;
    r=x+y;
    cout << "el resultado es "+ to_string(r);
    return 0;
}