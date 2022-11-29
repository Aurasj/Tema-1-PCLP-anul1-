#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fin("cod.txt");
    string a = {0}, b = {0};
    char firstchar[] = {0};
    int v = 0;
    
    fin >> a;
    
    firstchar[0] = a[0];
    v = stoi(firstchar);
    
    for (int i = 1; i < a.length(); i++)
    {
        b[i] = (int(a[i]) - v) % 256;
        cout << b[i];
    }
    
    return 0;
}