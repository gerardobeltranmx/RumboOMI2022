#include <iostream>
using namespace std;
#define T int
// Definición de la estructura de datos


typedef struct nodo {
   T info;
   struct nodo *izq;
   struct nodo *der;
} TNodo;


TNodo *buscarNodo(TNodo *raiz, T buscar){
    if(raiz==NULL)
        return NULL;
    else if(raiz->info == buscar)
        return raiz;
    else if(buscar < raiz->info)
        return buscarNodo(raiz->izq, buscar);
    else
        return buscarNodo(raiz->der, buscar);
}

int agregarNodo(TNodo **raiz, T dato)
{
TNodo *padre = NULL;
TNodo *actual = *raiz;
int enc=0;
/* Buscar el dato en el árbol, manteniendo un puntero al nodo padre */
while(actual!=NULL && enc==0) {
 padre = actual;
 if(dato < actual->info) 
  actual = actual->izq;
 else if(dato > actual->info) 
  actual = actual->der;
 else
  enc=1;
}
/* Si se ha encontrado el elemento, regresar sin insertar */
if(enc==1) return 0;
// Crea el nuevo nodo
TNodo *nuevo = new  TNodo; 
nuevo->info= dato;
nuevo->izq=NULL;
nuevo->der=NULL;
/* Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será
el nodo raiz*/
if(padre==NULL) {
 *raiz=nuevo;
}
/* Si el dato es menor que el que contiene el nodo padre, lo insertamos
en la rama izquierda */
else if(dato < padre->info) //Si es menor que el padre lo insertamos a la izq.
 	padre->izq= nuevo;
else  // Si es mayor lo insertamos a la derecha
	 padre->der = nuevo;
return 1;
}

void inOrden(TNodo *raiz){
 if(raiz!=NULL){ 
  inOrden(raiz->izq);
  cout << raiz->info << " "; 
  inOrden(raiz->der);
 }
}
void preOrden(TNodo *raiz){
 if(raiz!=NULL){
  cout << raiz->info << " "; 
  preOrden(raiz->izq);
  preOrden(raiz->der);
 }
}
void posOrden(TNodo *raiz){
 if(raiz!=NULL){
  posOrden(raiz->izq);
  posOrden(raiz->der);
  cout << raiz->info << " "; 
 }
}


int main(){

    TNodo *Arbol=NULL;
    int N, i, dato;
    cin >> N;


    for (i=0; i< N; i++){
        cin >> dato;
        agregarNodo(&Arbol, dato);    
    }

    preOrden(Arbol);
    cout << endl;
    inOrden(Arbol);
    cout << endl;
    posOrden(Arbol);
    cout << endl;





return 0;

}
