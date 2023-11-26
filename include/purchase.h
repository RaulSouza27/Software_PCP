#pragma once

#include "products.h"
#include <vector>

namespace pcp
{

    class Purchasing
    {
    private:
        RawMaterial mp;
        float quantity;
        float price;
        std::vector<Purchasing> buy_list;

    public:
        Purchasing();
        Purchasing(RawMaterial mp, float quantity, float price);
        auto set_new_purchase(RawMaterial mp, float quantity, float price) -> void;
        auto get_purchase_list() -> std::vector<Purchasing>;
        auto get_raw_material() -> RawMaterial;
        auto get_quantity() -> float;
        auto cost_per_unit(const RawMaterial &material) -> float;
    };

} // namespace pcp
