#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream out("cod.txt");
    string a = {0}, b = {0};
    int v = 0;

    getline(cin, a);
    cin >> v;

    out << v;

    for (int i = 0; i < a.length(); i++)
    {
        b[i] = (int(a[i]) + v) % 256;
        out << b[i];
    }         
    
    return 0;
}