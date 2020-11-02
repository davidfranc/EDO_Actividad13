#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &sistemaOperativo, const string &procesador, int memoriaRam, int almacenamiento)
{
    this->sistemaOperativo = sistemaOperativo;
    this->procesador = procesador;
    this->memoriaRam = memoriaRam;
    this->almacenamiento = almacenamiento;
}

void Computadora::setSistemaOperativo(const string &v)
{
    sistemaOperativo = v;
}

string Computadora::getSistemaOperativo()
{
    return sistemaOperativo;
}

void Computadora::setProcesador(const string &v)
{
    procesador = v;
}

string Computadora::getProcesador()
{
    return procesador;
}
void Computadora::setMemoriaRam(int v)
{
    memoriaRam = v;
}

int Computadora::getMemoriaRam()
{
    return memoriaRam;
}
void Computadora::setAlmacenamiento(int v)
{
    almacenamiento = v;
}

int Computadora::getAlmacenamiento()
{
    return almacenamiento;
}
