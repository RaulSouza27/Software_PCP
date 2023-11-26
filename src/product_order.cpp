#include "product_order.hpp"

namespace pcp
{
    ProductOrder::ProductOrder(){}

    int ProductOrder::get_lead_time()
    {
        int lead_time;

        lead_time = product_order.end_date - product_order.start_date;

        return lead_time;
    }

    float ProductOrder::stock_level(const PRODUCTS &product)
    {
        float stock_level;

        for (size_t i = 0; i < list_of_orders.size(); i++)
        {
            if (list_of_orders.at(i).type == product)
            {
                stock_level = stock_level + list_of_orders.at(i).quantity;
            }
        }
        return stock_level;
    }

    float ProductOrder::raw_material_stock_level(const RawMaterial &material)
    {
        float stock;

        for (size_t i = 0; i < product_order.materials_used.size(); i++)
        {
            if (product_order.materials_used.at(i).raw_material == material)
            {
                stock += product_order.materials_used.at(i).quantity;
            }
        }
        return stock;
    }


} // namespace pcp
