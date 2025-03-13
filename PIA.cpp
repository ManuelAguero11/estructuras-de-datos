#include <iostream>
#include <string>
#include "PIA.h"

using namespace PIA;
using namespace std;

void PIA::PIAClass::hacer_fila(){
	if (cola == NULL){
		cola = new Cola;
		Node_Q* ini_node = new Node_Q;
		Node_Q* fin_node = new Node_Q;
		cola->fin = ini_node;
		cola->fin = fin_node;
		Node_Q* new_element = new Node_Q;
		new_element->id = total_clientes += 1;
		new_element->next = NULL;
		cola->ini = new_element;
		cola->fin = new_element;
		cout << "Nuevo cliente con ID: " << new_element->id << endl;
		return;
	}
	Node_Q* new_element = new Node_Q;
	new_element->id = total_clientes += 1;
	new_element->next = NULL;
	
	cola->fin->next = new_element;
	cola->fin = new_element;
	
	cout << "Nuevo cliente con ID: " << new_element->id << endl;
	return;
}

void PIA::PIAClass::agregar_carrito(std::string nombre, int precio){
	Node_S* new_node = new Node_S; 
    new_node->nombre = nombre;
    new_node->precio = precio;
    new_node->next = NULL;
    
    cout << "\tArticulo: " << new_node->nombre << " Precio: $" << new_node->precio << " agregado al carrito" << endl;

    if (top == NULL){
		top = new_node;
	}
    else{
        new_node->next = top;
        top = new_node;
    }
}

void PIA::PIAClass::fila_actual(){
	Cola* temp = cola;
	Node_Q* temp_node = new Node_Q;
	Node_Q* temp_ini = cola->ini;
	cout << "Fila actual: " << endl;
	if(temp!=NULL){
		
		do{
			temp_node = temp->ini->next;
			cout << "Cliente ID: " << temp->ini->id << endl;
			temp->ini = temp->ini->next;
		}while(temp_node!=NULL);
		
		cout << "Fin de la fila" << endl;
	}
	cola->ini = temp_ini;
}

void PIA::PIAClass::sig_En_Fila(){
	Cola* temp = cola;
	Node_Q* temp_node = new Node_Q;
	Node_Q* temp_ini = cola->ini;
	
	temp_node = temp->ini;
	cout << "\nAtendiendo cliente ID:  " << temp->ini->id << endl;
		
	system("pause");
	cout << "\nCliente atentido.\n" << endl;
	temp->ini = temp->ini->next;
	cola->ini = temp->ini;
		
	return;
}

void PIA::PIAClass::total_compra_cliente(){
	
}

void PIA::PIAClass::total_venta_dia(){
	
}

