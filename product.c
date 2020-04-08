#include<stdio.h>
#include<stdlib.h>
#include"product.h"

char* get_name(Product *p){
    return p->name;
}

double get_price(Product *p){
    return p->price;
}

ptype get_type(Product *p){ //must return enum

    return p->pt;    
}