#include "Person.h"

int main()
{
    int i = 3;
    int const ci = 3;
    i = 4;
    // ci = 4;

    int& ri = i;
    ri = 5;

    int const & cri = i;
    // cri = 6;

    // int& cri = ci;

    int* pI = &i;
    // int* pII = &pI;
    int j = 9;
    int const * pcI = pI; // pointer to a const
    // *pcI = 4;
    pcI = &j;
    j = *pcI;

    int * const cpI = pI; // cont pointer
    *cpI = 4;
    // cpI = &j;

    int const * const crazy = pI; // const pointer to a const
    // *crazy = 4;
    // crazy = &j;
    j = *crazy;

    return 0;
}