/*-------------------------------------------------------------------------------------------
    - Nombre: Óscar Moreira Estévez
    - Asignatura: Algortirmos y Estructura de Datos Avanzada
    - Práctica 1: Implementacion de estructuras de datos

    - Fichero: Vector.h
    - Descripción: Fichero donde creamos la clase Vector con todos los métodos principales.
--------------------------------------------------------------------------------------------*/

#pragma once
#include <iostream>

using namespace std;

template <class T>

class Vector {
  private:
    T*  v_;
    int size_;

  public:
    Vector();
    Vector(int size);
    ~Vector();

  //---- Métodos ----
    int size();
    void resize(int newSize);
    void pushBack(T data);
    T front();
    T back();
    void write();

  //------- Sobrecarga de operadores ----
    T& operator[] (int position);
    const T& operator[] (int position) const ;
    Vector<T>& operator= (const Vector& v);

  private:
    void buildVector();
    void removeVector();
};

//-----------------------------------------------------------------------------
//-------- Constructores ----------
template <class T>
Vector<T>::Vector() {
  v_ = NULL;
  size_ = 0;
}

template <class T>
Vector<T>::Vector(int size) {
  v_ = NULL;
  size_ = size;

  buildVector();
}


//----------- Destructor-----------
template <class T>
Vector<T>::~Vector() {
  removeVector();
}


//---------- Métodos -------------
template <class T>
int Vector<T>::size() {
  return size_;
}

template <class T>
void Vector<T>::resize(int newSize) {
  removeVector();
  size_ = newSize;
  buildVector();
}

template <class T>
void Vector<T>::pushBack(T data) {
  Vector<T> vect(size_ + 1);

  for (int i = 0; i < size_; i++)    
    vect[i] = v_[i];
  
  vect[vect.size() - 1] = data;
  resize(vect.size());

  for (int i = 0; i < size_; i++)    
    v_[i] = vect[i];  
}


template <class T>
T Vector<T>::front() {
  return v_[0];
}

template <class T>
T Vector<T>::back() {
  return v_[size_ -1];
}


template <class T>
void Vector<T>::write() {
  cout << "[ ";
  for (int i = 0; i < size_; i++) {
    cout << v_[i] << " ";
  }
  cout << "]\n";  
}


//------------ Sobrecarga de operadores --------------
template <class T>
T& Vector<T>::operator[] (int position) {
  return v_[position];
}

template <class T>
const T& Vector<T>:: operator[] (int position) const {
  return v_[position];
}

template <class T>
Vector<T>& Vector<T>::operator= (const Vector<T>& v) {
  resize(v.size_);
  
  for (int i = 0; i < size_; i++) {
    v_[i] = v[i];
  }
  return *this;
}



//------------------------ Métodos Privados -------------------------
//Reservamos la memoria para el vector
template <class T>
void Vector<T>::buildVector() {
  v_ = new T[size_];
}

//Eliminamos la memoria reservada del vector
template <class T>
void Vector<T>::removeVector() {
  if (v_ != NULL) {
    delete[] v_; 
    v_ = NULL;   
  }
}
