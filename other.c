#include<stdio.h>
#include<stdlib.h>
#include"product.h"

Product* new_product(char* n, double price){
   Product* pr = (Product*)calloc(1,sizeof(Product));
   Other* o = (Other*)calloc(1,sizeof(Other));
   pr->name = n;
   pr->pt = OTHER;

   o->price = price;

   return pr;

}


double get_other_price(Other* o,Product* p){

   p->price = o->price;
   return p->price;
}