#ifndef PRODUCT
#define PRODUCT



enum ptype {FOOD, PACK, OTHER};
typedef enum ptype ptype;

typedef struct 
{
    double weight;
    double ppk; //price per kilo
}Food;


typedef struct 
{
    int counter;
    double up; // unit price

}Pack;

typedef struct 
{
   double price;

}Other;


typedef union data 
    {
        Food f;
        Pack p;
        Other o;
    }data;

typedef struct Product
{
    char* name;
    double price;
    data t;
    ptype pt;

}Product;


char* get_name(Product *p);

double get_price(Product *p);

ptype get_type(Product *p);


#endif