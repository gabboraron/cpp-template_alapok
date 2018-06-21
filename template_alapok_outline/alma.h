#ifndef ALMA_H
#define ALMA_H

template<class T>       //T típust használjon az osztály deklarálásakor
class Alma{             //az Alma osztályon
public:
    Alma();             //konstruktor az Alma osztályon
    T sum(T a, T b);    //T típust ad vissza a sum függvény ami két T típusú valamit vár
                        //amin értelmezett a "+".
};

template<class T>
Alma<T>::Alma(){}       //Alma T paraméterrel ellátott osztályon belüli Alma konstruktor

template<class T>
T Alma<T>::sum(T a, T b){    //T típusú paraméterrel ellátott Alma osztály sum függvénye ami T típust ad vissza, két T típusú valamit vár
        return a+b;          //amin értelmezett a "+".
        }

#endif // ALMA_H
