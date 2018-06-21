#ifndef ALMA_H
#define ALMA_H

template<class T>       //T típust használjon az osztály deklarálásakor
class Alma{             //az Alma osztályon
public:
    Alma(){}            //konstruktor az Alma osztályon
    T sum(T a, T b){    //T típust ad vissza a sum függvény ami két T típusú valamit vár
        return a+b;     //amin értelmezett a "+".
    }
};

#endif // ALMA_H
