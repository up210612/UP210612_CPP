<div align=center>

# :sparkles: _Unit 1 README_ :sparkles:


<img alt="calavera" src= 'imagenes/calavera.gif'
width='300' />



## Programs done in this unit: </div>

 <a href="https://github.com/up210612/UP210612_CPP/tree/main/U1#-octocat---first-program-holacpp--"> - First Program: Hola.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/tree/main/U1#octocat--second-program-parimparcpp-"> - Second program: ParImpar.cpp</a>

 <a href="https://github.com/up210612/UP210612_CPP/tree/main/U1#octocat--third-program-tiposdatoscpp-">- Third program: TiposDatos.cpp</a>

 
 <h2> 
 
 :octocat: - _First program: Hola.cpp_  </h2>

<h3>

_Description:_ Student must do a program in which she'll print a Hello world </h3>


```
#include <iostream>

using namespace std;
int main(){

    cout << "Hola Mundo"<< endl;
    return 0;

}
```

_Results_

![p1](imagenes/hola_cpp.png) 


 <h2>
 
 :octocat: -_Second program: ParImpar.cpp_ </h2>

<h3>  

_Description:_  A program that allows the student to print a short message of "Par o Impar" </h3>

```
#include <iostream>
using namespace std;

int main()
{
    cout <<"Par o Impar"<< endl<<endl; // (/n) para salto de linea//

    return 0;
}
```
_Results_

![p2](imagenes/parImp.png) 

  <h2>

 :octocat: -_Third program: TiposDatos.cpp_ </h2>

<h3>  

_Description:_  A program where they can play around with the different types of variables that can be used in their code. (char, int, float, doble...)" </h3>

```
int main( )
{

    int unsigned entero = 2147483647;
    float flotante= 3.4e38;
    double grande =2.23585215828441;
    char caracter= 'A';

    cout<< "Este programa muestra los tipos de datos. \n";
    cout<< "EL numero entero es: " << entero << endl;
    cout<< "El tamaño del entero es: " <<sizeof (entero) << "bytes" << endl;
    cout<< "El caracter char es: " << caracter << endl; 
    cout<< "El tamaño del char es: " <<sizeof (caracter) << "bytes" << endl;
    cout<< "El valor de PI es: " << PI << endl; 
    cout<< "El valor de pi es: " << pi << endl; 
    getchar(); //Para correr en terminal

    /*
    cout<< 
    */
    return 0;
}
```
_Results_

![p2](imagenes/tipdat.png) 


  <h2>

 :octocat: -_Fourth program: Ciclos.cpp_ </h2>

<h3>  

_Description:_  Introduction to cycles using the structure IF to add even and odd numbers respectively. And finally add up both results. </h3>

```
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int impar = 0;
    int par = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i %2 == 0)
        {
            par = par +i;
            
        } else {
            impar= impar+i;
            // Tambien se puede poner com suma+=i;
        }
        
    }

    printf("La suma de los pares es %d \n", par);
    printf ("La suma de los impares es %d \n", impar);
    int suma= par+impar;
    printf ("La suma total es de %d \n", suma);
    
    return 0;
}
```
_Results_

![p2](imagenes/ciclo.png) 
 
 
 <h2>

 :octocat: -_Fifth program: edades.cpp_ </h2>

<h3>  

_Description:_  Introduction to cycles using the structure IF to add even and odd numbers respectively. And finally add up both results. </h3>

```
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int impar = 0;
    int par = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i %2 == 0)
        {
            par = par +i;
            
        } else {
            impar= impar+i;
            // Tambien se puede poner com suma+=i;
        }
        
    }

    printf("La suma de los pares es %d \n", par);
    printf ("La suma de los impares es %d \n", impar);
    int suma= par+impar;
    printf ("La suma total es de %d \n", suma);
    
    return 0;
}
```
_Results_

![p2](imagenes/ciclo.png) 

