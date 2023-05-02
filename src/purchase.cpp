#include "purchase.h"

Purchasing::Purchasing()
{
}

Purchasing::Purchasing(RawMaterial mp,float quantity)
    : mp(mp),quantity(quantity)
{
    buy_list =
    {

    };
}

auto Purchasing::set_new_purchase(RawMaterial mp, float quantity) -> void
{
    Purchasing new_buy(mp,quantity);

    buy_list.push_back(new_buy);
}

auto Purchasing::get_purchase_list() -> std::list<Purchasing>
{
    return buy_list;
}

auto Purchasing::get_raw_material() -> RawMaterial
{
    return mp;
}

auto Purchasing::get_quantity() -> float
{
    return quantity;
}