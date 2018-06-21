#ifndef MY_TEMPLATE_H
#define MY_TEMPLATE_H

template<class T>
class my_template{
public:
    my_template();
    T add(T a);
    T mult(T a, T b);
};

template<class T>
my_template<T>::my_template(){}

template<class T>
T my_template<T>::add(T a){
    return a + 1;
}

template<class T>
T my_template<T>::mult(T a, T b){
    return a * b;
}


#endif // MY_TEMPLATE_H
