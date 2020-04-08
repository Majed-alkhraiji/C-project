#include<stdio.h>
#include<stdlib.h>
#include"product.h"

Product* new_product(char* n, double weight, double ppk){
    Product* p = (Product*)calloc(1,sizeof(Product));
    Food* f = (Food*)calloc(1,sizeof(Food));
    p->name = n;
    p->pt = FOOD;

    f->weight = weight;
    f->ppk = ppk;


    return p;

}

double get_food_price(Food* f, Product* p){

    p->price = f->ppk*f->weight;
    return p->price;


}
