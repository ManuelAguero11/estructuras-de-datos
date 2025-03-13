#include <iostream>
#include "PIA.cpp"
#include "PIA.h"

using namespace std;
using namespace PIA;

int main(){
	PIAClass Caja;
	Caja.hacer_fila();
	//Actividad 2
	Caja.agregar_carrito("Almohada", 125);
	Caja.agregar_carrito("Libreta", 25);
	Caja.agregar_carrito("Set Cuchillos", 225);
	Caja.agregar_carrito("Cortina Baño", 110);
	Caja.agregar_carrito("Pulpa molida 1Kg", 180);
	Caja.hacer_fila();
	Caja.agregar_carrito("Toalla MB", 169);
	Caja.agregar_carrito("Vajilla 16pz", 499);
	Caja.agregar_carrito("Ensaladera", 99);
	Caja.agregar_carrito("Cortina Azul", 140);
	Caja.agregar_carrito("Cesto Basura", 280);
	Caja.hacer_fila();
	Caja.agregar_carrito("Auriculares", 59);
	Caja.agregar_carrito("Plumones Sharpie", 75);
	Caja.agregar_carrito("Coca Cola 2.5L", 55);
	Caja.agregar_carrito("Tapete Baño", 129);
	Caja.agregar_carrito("Azucar 1Kg", 80);
	Caja.hacer_fila();
	Caja.agregar_carrito("Abanico Pedestal", 325);
	Caja.agregar_carrito("Mochila", 135);
	Caja.agregar_carrito("Florero Vidrio", 199);
	Caja.agregar_carrito("Colchoneta", 399);
	Caja.agregar_carrito("Sabana 4pz MAT ", 159);
	Caja.hacer_fila();
	Caja.agregar_carrito("Cubre Colchon IN", 260);
	Caja.agregar_carrito("Almohada", 99);
	Caja.agregar_carrito("Vela Cactus", 79);
	Caja.agregar_carrito("Organizador 3 Niv", 200);
	Caja.agregar_carrito("Pistola NERF", 450);
	Caja.fila_actual();
	//tenia la idea de hacer una PILA para cada cliente en la Cola
	//ya que actualmente los articulos estan apilados juntos
	//como si fueran de un solo cliente
	
	//La Actividad 3 no la programe ya que no entendi lo que habia que hacer exactamente
}
