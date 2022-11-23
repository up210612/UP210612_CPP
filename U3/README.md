<div align=center>

# :sparkles: _Unit 3 README_ :sparkles:


<img alt="cat" src= 'imagenes_u2/cat.gif'
width='300' />



## Programs done in this unit: </div>
 
 <h2> 
 - PDF exercises
 
 :octocat: - _First program: 01-biseccion.cpp_  </h2>

<h3>

_Description:_ Write a program that implements a bisecction function. </h3>


```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 

double fnEcuacion1 (double x){  //x²-8x+15

    double y;
       return ((pow (x,2)) - 8*x + 15);
     //y = pow (x,2) - 8*x + 15;
    // return y;

}


int main()
{
    double x1=4;
    double x2=7;
    double xm;

    double errorAb = .001;  //Error absoluto /estandar. 
    double errorRe = abs(x2 - x1); //error relativo con valor avsoluto para descartar el signo 
    int i= 1;
    while (errorRe> errorAb){

        xm = (x1+x2)/2;
        //y1 = fnEcuacion1(x1);
        //y2 =fnEcuacion1 (xm);

        if (fnEcuacion1(x1)*fnEcuacion1 (xm) <0 ){
            x2 =xm;
        } else {
            x1=xm;
        }
        errorRe = abs ((x2 -x1));
        i = i+1;
    } 

    cout << "i= "<< i << " raiz= "<< xm << endl;
    cout << ". . . Terminado" << endl;

   /* double r = fnEcuacion1 (0);
    cout<< r<<endl; */

    return 0;
}

```

_Results_

![p1](imagenes_u2/impuesto1.png) 
![p1](imagenes_u2/impu2.png) 



 <h2>
 
 :octocat: -_Second program: 02-añoB.cpp_ </h2>

<h3>  

_Description:_  Write a program that based on the formula given by the teacher, it can determinates if the year inserted is a leap-year.  </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
#include "sara.h"
using namespace std;


int main (){

    int year;
    cout<<"Ingrese año"<<endl;
    cin>>year;
    cout<< esBisiesto(year)<< endl; 

    return 0; 
    
}
```
_Results_

![p2](imagenes_u2/empleados.png) 

  <h2>

 :octocat: -_Third program: 03-coseno.cpp_ </h2>

<h3>  

_Description:_  Write a program that executes the cos function. </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
#include "sara.h"
using namespace std;

int main (){
    
    double signo=-1, rad,coseno,acumular=0; 
    int expo=0; 
    cout<< "Coseno de que grado desea obtener"<<endl; 
    cin>> rad;
    rad= G2R(rad); 
    
    for(int i=0; i<=5; i++){
      double fact=  factorial(expo);
      signo=signo*-1;
      coseno=signo*((pow(rad,expo))/factorial(expo)); 
      acumular=acumular+coseno;
      expo=expo+2; 

    }

    cout<< "Resultado= "<< acumular<<endl; 
    
    
}
```
_Results_

![p2](imagenes_u2/juegos1.png) 
![p2](imagenes_u2/juego2.png) 



  <h2>

 :octocat: -_Fourth program: 40-DesviacionE.cpp_ </h2>

<h3>  

_Description:_  Write a program that based on the population given, it must determinates the standard deviation </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int datos = 0, i = 1, acumular = 0, media = 0, Z = 0;
    int vector[100];
    float DE,DP, A = 0;
    cout << "Desviación Estandar Poblacional" << endl;
    cout << "Nota: coloque 0 cuando NO deseé agregar más datos" << endl;
    cout << endl;

    do
    {

        cout << "Ingrese el dato " << i << endl;
        cin >> datos;
        vector[i] = datos;
        i++;

    } while (datos != 0);

    for (int j = 1; j <= i; j++)
    {
        acumular = acumular + vector[j];
    }
    media = acumular / (i - 2);
    cout << endl;
    cout << "La media de los datos es igual a " << media << endl;
    cout << endl;

    for (int j = 1; j <= i - 2; j++)
    {
        Z = pow((vector[j] - media), 2);
        // cout << Z << endl;
        A = A + Z;
    }
    // out << A << endl;
    DE = A / (i - 2);
    DE = sqrt(DE);
    cout << "La desviación Estandar poblacional de los datos ingresados es igual a " << DE << endl;
    cout << endl;

    DP = A / (i - 3);
    DP = sqrt(DP);
    cout << "La desviación Estandar de la muestra es igual a " << DP << endl;
    cout << endl;



    return 0;
}


```
_Results_

![p2](imagenes_u2/pizza1.png) 
![p2](imagenes_u2/pizza2.png) 

 
 
 <h2>

 :octocat: -_Fifth program: 05-sistema monetario.cpp_ </h2>

<h3>  

_Description:_  Make a program that will tell you the most optimal way in wich an specific amount of money, can be deliverd. </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int billete[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int vect[10] = {0};
    int cantidad = 0;
    cout << "Ingrese cantidad requerida" << endl;
    cin >> cantidad;

    for (int j = 0; j <= 9; j++)
    {
        while (cantidad >= billete[j])
        {
            vect[j] = vect[j] + 1;
            cantidad = cantidad - billete[j];
        }

        cout << vect[j] << " billetes de " << billete[j] << endl;
    }

    cout<<endl;

    return 0;
}
```
_Results_

![p2](imagenes_u2/temp.png) 

 <h2>

 :octocat: -_Sixth program: 06-A2R.cpp_ </h2>

<h3>  

_Description:_ Create a program that will change from arabic to roman.  </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int n, v;
    int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string sigla[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string num = "";
    int i = 0;

    cout << "Ingrese número arábigo a convertir" << endl;
    cin >> n;
    while (n > 0)
    {
        if (n >= valor[i])
        {
            v = n / valor[i];
            n = n % valor[i];
            for (int j = 0; j < v; j++)
            {
                num = num + sigla[i];
            }
        }
        i++;
    }
    cout << num << endl;
    return 0;
}
```
_Results_

![p2](imagenes_u2/productos.png) 

<h2>

 :octocat: -_Seventh program: 07-RFC.cpp_ </h2>

<h3>  

_Description:_ Determinates the RFC of a person.  </h3>

```
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

```
_Results_

![p2](imagenes_u2/bin2dec.png) 

<h2>

 :octocat: -_Eight program: 08-oVec.cpp_ </h2>

<h3>  

_Description:_ organices the values of a vector </h3>

```
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int i, j,n, temp, vector[100];
    cout << "¿Cuantos números deseas ingresar?" << endl;
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        cout << "Ingresa un número" << endl;
        cin >> vector[i];
    }

    // método de la burbuja

    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    for (i = 0; i <= n; i++)
    {
        cout << vector[i] << endl;
    }
    return 0;
}
```
_Results_

![p2](imagenes_u2/bin2dec.png) 

<h2>

 :octocat: -_Nineth program: 09-recursiva.cpp_ </h2>

<h3>  

_Description:_ INvestigate how a recursive function works.  </h3>

```
#include<iostream>
using namespace std;

int factorial(int n);

int main(){
   int n, r;
   cout << "FACTORIAL : Escribe un numero : ";
   cin >> n;
   r=factorial(n);
   cout << n << "! = " << r << endl;
}

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1); // Recursividad: n>1
   return 1; // Condición para n == 1 y n == 0 
}
```
_Results_

![p2](imagenes_u2/bin2dec.png) 

<h2>

 :octocat: -_Extra-Personal Library: sara.h_ </h2>

<h3>  

_Description:_ #include "sara.h"
  </h3>

```
#include <iostream>
using namespace std;

int suma(int x, int y)
{
    return (x + y);
}

double G2R(double a)
{

    double r;
    r = a * M_PI / 180;
    return r;
}

double seno(double a)
{

    return sin(G2R(a));
}

int factorial(int i)
{

    int Z = 1;
    if (i != 0)
    {
        do
        {
            Z = i * Z;
            i--;

        } while (i != 0);
    }
    else
    {
        Z = 1;
    }

    return Z;
}

bool esBisiesto(int year)
{

    bool r = true;
    r = year % 400 == 0 || (year == 0 && year % 100 != 0);

    return r;
}

```




## Class exercises done in this unit: </div>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/E05BreakCOntinuos.cpp"> :white_small_square: - Break Continous.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/E06SUmatoria.cpp"> :white_small_square: - Sumatoria.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/E07Factorial.cpp">:white_small_square: - Factorial.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/E11FUnciones.cpp">:white_small_square: - Funciones.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/E1_tablas.cpp">:white_small_square: - Tablas.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/cicloWhile.cpp">:white_small_square: - Ciclo while.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/compraProd.cpp">:white_small_square: - Compra productos.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/rentas.cpp">:white_small_square: - Rentas.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/blob/main/U2/switchCase.cpp">:white_small_square: - Switch Case.cpp</a>