#ifndef TEMPLATE_WITH_ITERATOR
#include <vector>
#define TEMPLATE_WITH_ITERATOR

template<class T>
class my_example_template_with_iterator{
public:
    my_example_template_with_iterator();
    void fillVec();                         //void visszatérésű függvény a vektor feltöltésére
    void show();                            //void visszatérésű függvény a vektor kiíratására
private:
    typename std::vector<T> vec;            //a vektor mint adatszerkezet
    typename std::vector<T>::iterator itr;  //iteraátor a vektorhoz
};

template<class T>
my_example_template_with_iterator<T>::my_example_template_with_iterator(){}     //üres konstruktor

template<class T>
void my_example_template_with_iterator<T>::fillVec(){
    for(int idx = 0; idx<10; ++idx){
        vec.push_back(idx);                 //a vektor feltöltése 0-9-ig
    }
}

template<class T>
void my_example_template_with_iterator<T>::show(){
    for(itr = vec.begin(); itr != vec.end(); ++itr){    //a vector std beli beginje és endje használaával
        std::cout<<*itr<<std::endl;                     //kiíratás iterátorral
    }
}

#endif // TEMPLATE_WITH_ITERATOR
