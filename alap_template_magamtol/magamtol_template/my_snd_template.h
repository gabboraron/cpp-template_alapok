#ifndef MY_SND_TEMPLATE
#define MY_SND_TEMPLATE

template<class T, class K>
class my_snd_template{
public:
    my_snd_template();
    T add_by_fst(T a, K b);
    K add_by_snd(T a, K b);
};


template<class T, class K>
my_snd_template<T, K>::my_snd_template(){}

template<class T, class K>
T my_snd_template<T, K>::add_by_fst(T a, K b){
    return a+b;
}

template<class T, class K>
K my_snd_template<T, K>::add_by_snd(T a, K b){
    return a+b;
}

#endif // MY_SND_TEMPLATE
