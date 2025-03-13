#pragma once

#ifndef PIA_H
#define PIA_H

#include <string>

namespace PIA
{
	//estructura nodo para PILA
	struct Node_S{
		std::string nombre;
		int precio;
		Node_S* next;
	};
	
	//estructura nodo para COLA
	struct Node_Q{
		int id;
		Node_Q* next;
	};
		
	struct Cola{
		Node_Q* ini;
		Node_Q* fin;
	};
	
	class PIAClass{
		
		public:
			Cola* cola;
			Node_S* top;
			Node_S* temp_stack;
			int total_clientes;
			int total_venta;
			
		PIAClass(){
			cola = NULL;
			top = NULL;
			temp_stack = NULL;
			total_clientes = 0;
			total_venta = 0;
		}
		
		void hacer_fila(); //ingresar cliente en Cola
		void agregar_carrito(std::string nombre, int precio); //ingresar articulos en carrito (Pila)
		void fila_actual(); //mostrar fila
		void sig_En_Fila(); //atender cliente y guardar en historial
		void total_compra_cliente(); //total compra cliente
		void total_venta_dia(); //total venta del dia
	};
	
}

#endif

