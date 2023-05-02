#pragma once

#include "products.h"
#include <list>

class Purchasing
{
private:
    RawMaterial mp;
    float quantity;
    std::list<Purchasing> buy_list;
public:
    Purchasing();
    Purchasing(RawMaterial mp,float quantity);
    auto set_new_purchase(RawMaterial mp, float quantity) -> void;
    auto get_purchase_list() -> std::list<Purchasing>;
    auto get_raw_material() -> RawMaterial;
    auto get_quantity() -> float;
};
