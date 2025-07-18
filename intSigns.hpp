#ifndef INTSIGNS
#define INTSIGNS

bool isNegative(int num) 
{
    return num >> 31;
}

signed int sign(int num) 
{
    return -2*isNegative(num) + 1;
}

#endif
