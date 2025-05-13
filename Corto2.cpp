#include <iostream>
using namespace std;
int main(){
int edad, genero, estilo;
float Cartera = 200;
float PreFinal;
cout <<"Bienvenido a la plataforma Web de L-shoes"<<endl; // paso 1: edad 
cout <<"Por favor, ingrese su edad o la edad de la persona a la cual se le comprara el calzado"<<endl;
cout << " 1.de 0 a 12 años"<<endl;
cout << " 2.de 13 a 17 años"<<endl;
cout << " 3.de 18 a 64 años"<<endl;
cout << " 4.de 65 años en adelante"<<endl;
cin >> edad;
switch (edad){
    case 1:
    cout << "La talla recomendada es 34"<<endl;
    break;
      case 2:
    cout << "La talla recomendada es 38"<<endl;
    break;
      case 3:
    cout << "La talla recomendada es 40"<<endl;
    break;
      case 4:
    cout << "La talla recomendada es 42"<<endl;
    break;

}
cout << "Ya seleccionada la talla, ingrese su genero para mostrar los estilos de zapatos"<<endl; // paso 2: genero 
cout << "1.Hombre"<<endl;
cout <<"2.mujer"<<endl;
cout <<"3. mostrar todo el calzado"<<endl;
cin >> genero;
switch (genero){  // paso 3 : calzado disponible para hombres y mujeres 
    case 1:
    cout << "los zapatos para hombre son:"<<endl;
    cout << "Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64)."<<endl;
    cout << "Zapato Formal: $120 (descuento del 20%, precio con descuento $96)"<<endl;
    cout << "Zapato Premium: $250 (descuento del 20%, precio con descuento $200)."<<endl;
    break;
    case 2:
     cout << "los zapatos para mujer son:"<<endl;
    cout << "Zapato Casual: $70 (descuento del 15%, precio con descuento $59.50)."<<endl;
    cout << "Zapato Elegante: $100 (descuento del 15%, precio con descuento $85)"<<endl;
    cout << "Zapato Premium: $250 (descuento del 15%, precio con descuento $212.50)."<<endl;
    break;
    case 3:
    cout << "Todas los estilos de zapatos son:"<<endl;
    cout << "Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64)."<<endl;
    cout << "Zapato Formal: $120 (descuento del 20%, precio con descuento $96)"<<endl;
    cout << "Zapato Premium: $250 (descuento del 20%, precio con descuento $200)."<<endl;
    cout << "Zapato Casual: $70 (descuento del 15%, precio con descuento $59.50)."<<endl;
    cout << "Zapato Elegante: $100 (descuento del 15%, precio con descuento $85)"<<endl;
    cout << "Zapato Premium: $250 (descuento del 15%, precio con descuento $212.50)."<<endl;
    break;   
}

cout << "Ahora por favor seleccione el estilo de calzado que desea comparar. SALDO DISPONIBLE ($200)"<<endl;

    cout << "1. Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64)."<<endl;
    cout << "2. Zapato Formal: $120 (descuento del 20%, precio con descuento $96)"<<endl;
    cout << "3. Zapato Premium: $250 (descuento del 20%, precio con descuento $200)."<<endl;
    cout << "4. (mujer)Zapato Casual: $70 (descuento del 15%, precio con descuento $59.50)."<<endl;
    cout << "5. (mujer)Zapato Elegante: $100 (descuento del 15%, precio con descuento $85)"<<endl;
    cout << "6. (mujer)Zapato Premium: $250 (descuento del 15%, precio con descuento $212.50)."<<endl;
cin >> estilo;
switch (estilo){// paso 4 y paso 5: verificar si el usuario cuenta con dinero suficiente paa realizar la ompra y mostrar el saldo restante 
case 1:
PreFinal = Cartera - 64;
cout << "Usted eligio el zapato deportivo, su saldo disponible actual es de :"<< PreFinal <<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;
case 2:
PreFinal = Cartera - 96;
cout << "Usted eligio el Zapato formal, su saldo actual es de:"<< PreFinal <<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;
case 3:
PreFinal = Cartera - 200;
cout << "Usted eligio el Zapato Premium, su saldo actual es de:"<< PreFinal <<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;
case 4:
PreFinal = Cartera - 59.50;
cout << "Usted eligio el Zapato Casual (mujer), su saldo actual es de:"<< PreFinal <<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;
case 5:
PreFinal = Cartera - 85;
cout << "usted eligio el Zapato elegante (mujer), su saldo actual es de:"<< PreFinal <<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;
case 6:
PreFinal = Cartera - 212.50;
cout << "Usted eligio el Zapato Premium (mujer), su saldo actual es de:"<< PreFinal <<endl;
cout << "Usted no cuenta con el saldo suficiente para realizar la compra, le hacen falta $12.50"<<endl;
cout << "Muchas gracias por comprar en L-shoes. Feliz dia"<<endl;
break;


}




    return 0;
}