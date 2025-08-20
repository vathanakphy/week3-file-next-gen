#ifndef MODEL_PRODUCT_H
#define MODEL_PRODUCT_H

#include <string>

struct Product {
    int id;
    std::string name;
    int quantity;
    double price;
};

#endif 