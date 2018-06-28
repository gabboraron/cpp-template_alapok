#ifndef CHANGER
#define CHANGER

template<class T>       //T típust használjon az osztály deklarálásakor
class changer{             //a changer osztályon
public:
    changer(T &val);        //ertek atvetele cim szerint
};

template<class T>
changer<T>::changer(T &val){
    std::cout<<"templatebe kapott ertek: " << val << std::endl;
    ++val;                  //mivel cimszerint lett atveve ezert a foprogram beli erteket valtoztatjuk.
    std::cout<<"templateben valtoztatott ertek: " << val << std::endl;

}       //konstruktor

#endif // CHANGER


