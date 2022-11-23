#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <cstring>

using namespace std;

int main()
{
    string ApP, ApM, Nom, FdN, RFC;
    int posicion;

    cout << "¿Cuál es su primer nombre?" << endl;
    cin >> Nom;
    cout << "¿Cuál es su apellido paterno?" << endl;
    cin >> ApP;
    cout << "¿Cuál es su apellido materno?" << endl;
    cin >> ApM;
    cout << "Fecha de nacimiento (dd.mm.yyyy)- use los puntos de separación-" << endl;
    cin >> FdN;

    

    for (int i=1; i<= ApP.length(); i++)
    {
        if(ApP[i]=='a'||ApP[i]=='e'||ApP[i]=='i'||ApP[i]=='o'||ApP[i]=='u'){
            posicion=i;
            break; 
        }
    }

    RFC = RFC + ApP.substr(0, 1) + ApP.substr(posicion, 1) + ApM.substr(0, 1) + Nom.substr(0, 1) + FdN.substr(6, 4) + FdN.substr(3, 2) + FdN.substr(0, 2);
    string toupper(RFC);

    std::transform(RFC.begin(), RFC.end(),RFC.begin(), ::toupper);
    cout << "Su RFC es " << RFC << endl;
    return 0;
}
