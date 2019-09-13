#include <iostream>
#include <string.h>
using namespace std;

 typedef enum _ciudad{

Maldonado, San_Carlos, Piriapolis, FIN

 }ciudad;

int main()
{
   // char palabra[20];
    string palabra;
    ciudad localidad=FIN;

    cout<<"Ingrese ciudad!"<<endl;
    getline(cin, palabra ,'\n');
//    cin.getline(palabra, 20);


//
//    if (strcmp(palabra, "Maldonado")==0){
//      localidad=Maldonado;
//      }
//    if (strcmp(palabra, "San Carlos")==0){
//      localidad=San_Carlos;
//      }
//    if (strcmp(palabra, "Piriapolis")==0){
//      localidad=Piriapolis;
//    }
    if (palabra=="Maldonado"){

      localidad=Maldonado;


    }
    if (palabra=="SanCarlos"){

      localidad=San_Carlos;


    }
    if (palabra=="Piriapolis"){

      localidad=Piriapolis;


    }



   //cout<<localidad<<endl;



   switch (localidad){

    case Maldonado:
    cout<<"Estamos en Maldonado  "<<endl;
    break;



      case San_Carlos:
    cout<<"Estamos en San Carlos "<<endl;
    break;




      case Piriapolis:
    cout<<"Estamos en Piriapolis "<<endl;
    break;

    default:
    cout<< "Estas en narnia"<<endl;
    break;


   }



    return 0;



}
