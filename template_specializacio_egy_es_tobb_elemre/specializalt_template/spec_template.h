#ifndef SPEC_TEMPLATE
#define SPEC_TEMPLATE

template <typename> class spec_template;

template<typename  T>
class spec_template<void(T)>{
public:
    spec_template();
    void print();

};

template<typename  T>
spec_template<void(T)>::spec_template(){}

template<typename  T>
void spec_template<void(T)>::print(){
    std::cout<<"This is a general handling"<<std::endl;
}

/* ** */
template<>
class spec_template<void(int)>{
public:
    spec_template(){};
    void print(){
        std::cout<<"This is an int handling"<<std::endl;
    };

};

/* ** */
template<>
class spec_template<std::string>{
public:
    spec_template(){};
    void print(){
        std::cout<<"This is a string handling"<<std::endl;
    };

};

/* ** */
template<typename  T, typename  K>
class spec_template<void(T, K)>{
public:
    spec_template(){};
    void print(){
        std::cout<<"This is a twice handling"<<std::endl;
    };

};
#endif // SPEC_TEMPLATE
