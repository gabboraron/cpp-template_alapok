#ifndef ALMA_H
#define ALMA_H

template<class T>       //T t�pust haszn�ljon az oszt�ly deklar�l�sakor
class Alma{             //az Alma oszt�lyon
public:
    Alma(){}            //konstruktor az Alma oszt�lyon
    T sum(T a, T b){    //T t�pust ad vissza a sum f�ggv�ny ami k�t T t�pus� valamit v�r
        return a+b;     //amin �rtelmezett a "+".
    }
};

#endif // ALMA_H
