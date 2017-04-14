#include "header.h"


float ltrapesium(int s1, int s2, int t){
    float l_trap;
    l_trap=(s1+s2)*t/2;
    return l_trap;
}
float vkerucut(int r, int t){
    float v_ker;
    v_ker=3.14*r*r*t/3;
    return v_ker;
}
float vtabung(int r, int t){
    float v_tab;
    v_tab=3.14*r*r*t;
    return v_tab;
}
