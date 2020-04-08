#include<stdio.h>
#include<stdlib.h>
#include"product.h"

Product* new_product(char* n, int counter, double up){
    Product* pr = (Product*)calloc(1,sizeof(Product));
    Pack* p = (Pack*)calloc(1,sizeof(Pack));
    pr->name = n;
    pr->pt = PACK;

    p->counter = counter;
    p->up = up;
    


    return p;

}


double get_pack_price(Pack* pa, Product* pr){

    pr->price = pa->up;
    return p->price;
}
