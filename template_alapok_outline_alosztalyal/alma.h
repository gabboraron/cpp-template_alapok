#ifndef ALMA_H
#define ALMA_H
                        //A template fordítási időben jön létre ezért nem találna külső fájlokat így itt kell kifejteni

template<class T>       //T típust használjon az osztály deklarálásakor
class Alma{             //az Alma osztályon
public:
    Alma();             //konstruktor az Alma osztályon
    T sum(T a, T b);    //T típust ad vissza a sum függvény ami két T típusú valamit vár
    class Barack{           //Az alma osztály alosztálya Barack néven
    public:
        T mult(T a, T b);   //aminek van egy mult függvénye ami két T típust vár és egy ugyanolyan T típust ad vissza
    };
};

template<class T>
Alma<T>::Alma(){}       //Alma T paraméterrel ellátott osztályon belüli Alma konstruktor

template<class T>
T Alma<T>::sum(T a, T b){    //T típusú paraméterrel ellátott Alma osztály sum függvénye ami T típust ad vissza, két T típusú valamit vár
        return a+b;          //amin értelmezett a "+".
        }

template<class T>
T Alma<T>::Barack::mult(T a, T b){ //T típust ad vissza az Alma sablonosztály T típuspraméterrel Barack alosztályának mult függvénye ami két T típusú paramétert vár.
        return a*b;
        }

#endif // ALMA_H
