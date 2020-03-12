#ifndef SORT_HELPER_H
#define SORT_HELPER_H



namespace sort_helper {

class Helper
{
public:
    template <class T>
    using Compareable = bool(*)(const T& i, const T& j);
    static int* GeneratorRandomIntArray(int n, int LR, int RR);

    template <class T>
    static inline bool Ascending(const T& i, const T& j) { return i < j;}

    template <class T>
    static inline bool Descending(const T& i, const T& j) { return i > j;}
};

};


#endif // SORT_HELPER_H
