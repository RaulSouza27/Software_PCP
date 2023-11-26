#include "purchase.h"

namespace pcp
{

    Purchasing::Purchasing()
    {
    }

    Purchasing::Purchasing(RawMaterial mp, float quantity, float price)
        : mp(mp), quantity(quantity), price(price)
    {
        buy_list =
            {

            };
    }

    auto Purchasing::set_new_purchase(RawMaterial mp, float quantity, float price) -> void
    {
        Purchasing new_buy(mp, quantity,price);

        buy_list.push_back(new_buy);
    }

    auto Purchasing::get_purchase_list() -> std::vector<Purchasing>
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

    auto Purchasing::cost_per_unit(const RawMaterial &material) -> float
    {
        float cost;

        for (size_t i = 0; i < buy_list.size(); i++)
        {
            if (buy_list.at(i).mp == material)
            {
                cost = buy_list.at(i).quantity / buy_list.at(i).price;
            }
        }

        return cost;
    }


} // namespace pcp
