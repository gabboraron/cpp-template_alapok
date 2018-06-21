#ifndef SPEC_TEMPLATE
#define SPEC_TEMPLATE

template<class T>
class spec_template{
public:
    spec_template();
    void print();

};

template<class T>
spec_template<T>::spec_template(){}

template<class T>
void spec_template<T>::print(){
    std::cout<<"This is a general handling"<<std::endl;
}

/* ** */
template<>
class spec_template<int>{
public:
    spec_template(){};
    void print(){
        std::cout<<"This is an int handling"<<std::endl;
    };

};

/*template<int>
void spec_template<int>::print(){
    std::cout<<"This is an int handling"<<std::endl;
}*/

/* ** */
template<>
class spec_template<std::string>{
public:
    spec_template(){};
    void print(){
        std::cout<<"This is a string handling"<<std::endl;
    };

};
#endif // SPEC_TEMPLATE
