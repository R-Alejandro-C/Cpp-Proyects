#include <iostream>
#include <stdio.h>
struct Productos {
    int codProducto;
    char tipProd[100];
    char nomProd[100];
    char descripProd[100];
    float precioUni;
};

struct Clientes {
    int codCliente;
    char nombCliente[100];
    char apeCliente[100];
    char dniCliente[100];
    int telefCliente;
};

struct Ventas {
    int codCliente;
    int codProducto;
    int diaVenta;
    int mesVenta;
    int anioVenta;
};

int menu();
void crear(FILE*H);
void ingresar(FILE*H,Productos rprod);
void mostrar(FILE*H,Productos rprod);
void salir();

int menu();
void crear(FILE*H);
void ingresar(FILE*H,Clientes rclient);
void mostrar(FILE*H,Clientes rclient);
void salir();

int menu();
void crear(FILE*H);
void ingresar(FILE*H,Ventas rvent);
void mostrar(FILE*H,Ventas rvent);
void salir();

using namespace std;

int main() {
    int opc;
    char rpta;

    Productos rprod;
    FILE*H;
    do{
        system("cls");
        opc=menu();
        switch (opc){
            case 1: crear(H);break;

            case 2: ingresar(H,rprod);break;

            case 3: mostrar(H,rprod);break;

            case 4:salir();
        }
        if(opc!=4){
            cout<<"Desea Continuar S/N ==> ";
            cin>>rpta;
        }
        else
            rpta='N';
    }while(rpta=='S'||rpta=='s');

    system("PAUSE");
}

int menu(){
    int opcion;
    cout<<"Bodega POVIS\n";
    cout<<"Menu Principal\n";
    cout<<"1.Crear Archivo Productos\n";
    cout<<"2.Ingresar Nuevo Producto\n";
    cout<<"3.Buscar Producto\n";
    cout<<"4.Mostrar Relacion de Productos\n";
    cout<<"5.Salir\n";
    cout<<"Digite una opcion=> ";
    cin>>opcion;
    return opcion;
}
void crear(FILE*H){
    H=fopen("c:prod.txt","w");
    if(H==NULL)
        cout<<"No se puede abrir el archivo prod \n";
    else{
        cout<<"Creacion exitosa \n";
        fclose(H);
    }
}

void ingresar(FILE*H, Productos prod){
    char temp[2];
    cout<<"Ingreso de Nuevo Producto \n";
    cout<<"Digite datos del Producto \n";
    gets (temp);
    cout << "Codigo: ";
       cin >> prod.codProducto;
       cin.ignore();
    cout<<"tipo: ";gets(prod.tipProd);
    cout<<"nombre: ";gets(prod.nomProd);
    cout<<"descripcion: ";gets(prod.descripProd);
    cout<<"Precio por unidad: ";
    cin >> prod.precioUni;
    H=fopen("c:prod.txt","a");
    if(H!=NULL){
        fwrite(&prod,sizeof(prod),1,H);
        if(!ferror(H))
            fclose(H);
        else
            cout<<"Error de escritura en archivo prod \n";
    }
    else
        cout<<"No se puede abrir el archivo prod \n";
}
