#pragma once

#include "products.h"
#include <list>
namespace pcp
{

    class Sales
    {
    public:
        Sales();
        Sales(PRODUCTS products, float quantity, Priority number_of_priority);
        auto get_sales_requeriment() -> std::list<Sales>;
        auto set_sales_requeriment(PRODUCTS products, float quantity, Priority number_of_priority) -> void;
        auto get_sales_product() -> PRODUCTS;
        auto get_sales_quantity() -> float;
        auto get_sales_priority() -> Priority;

    private:
        PRODUCTS products;
        float quantity;
        Priority number_of_priority;
        std::list<Sales> list_of_sales;
    };

} // namespace pcp
