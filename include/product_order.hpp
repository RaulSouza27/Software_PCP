#pragma once

#include "products.h"
#include <string>
#include <vector>

namespace pcp
{
    struct RawMaterialUsed
    {
        RawMaterial used;
        float quantity;
    };
    
    struct ProductOrderCtx
    {
        int order_id;
        float quantity;
        PRODUCTS type;
        int start_date;
        int end_date;
        std::vector<RawMaterialStock> materials_used;
    };
    
    class ProductOrder
    {
    private:
        ProductOrderCtx product_order;
        std::vector<ProductOrderCtx> list_of_orders;
    public:
        ProductOrder();

        void set_product_order(const ProductOrderCtx &product_order);
        auto get_product_order() -> ProductOrderCtx;
        auto get_lead_time() -> int;
        auto stock_level(const PRODUCTS &product) -> float;
        auto raw_material_stock_level(const RawMaterial &material) -> float;
    };
    
} // namespace pcp
