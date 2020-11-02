#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora
{
private:
    string sistemaOperativo;
    string procesador;
    int memoriaRam;
    float almacenamiento;
public:
    Computadora();
    Computadora(const string &sistemaOperativo, const string &procesador, int memoriaRam, int almacenamiento);
    void setSistemaOperativo(const string &v);
    string getSistemaOperativo();
    void setProcesador(const string &v);
    string getProcesador();
    void setMemoriaRam(int v);
    int getMemoriaRam();
    void setAlmacenamiento(int v);
    int getAlmacenamiento();
    
    friend ostream &operator<< (ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(20) << c.sistemaOperativo;
        out << setw(15) << c.procesador;
        out << setw(5) << c.memoriaRam ;
        out << setw(5) << c.almacenamiento;
        out << endl;
        return out;
    }

    friend istream &operator>> (istream &in, Computadora &c)
    {
        cout << "Sistema Operativo: ";
        getline(cin, c.sistemaOperativo);
        cout << "Procesador: ";
        getline(cin, c.procesador);
        cout << "Memoria RAM: ";
        cin >> c.memoriaRam;
        cout << "Almacenamiento: ";
        cin >> c.almacenamiento;
        return in;
    }
    bool operator== (const Computadora &p)
    {
        return sistemaOperativo == p.sistemaOperativo;
    }
    bool operator== (const Computadora &p) const
    {
        return sistemaOperativo == p.sistemaOperativo;
    }
};



#endif