#include "sales.h"

Sales::Sales(PRODUCTS products, float quantity, Priority number_of_priority)
    : products(products), quantity(quantity), number_of_priority(number_of_priority)
{
    list_of_sales =
        {

        };
}

Sales::Sales()
{
}

auto Sales::get_sales_requeriment() -> std::list<Sales>
{
    return list_of_sales;
}

auto Sales::set_sales_requeriment(PRODUCTS products, float quantity, Priority number_of_priority) -> void
{
    Sales sale(products, quantity, number_of_priority);

    list_of_sales.push_back(sale);
}

auto Sales::get_sales_product() -> PRODUCTS
{
    return products;
}
auto Sales::get_sales_quantity() -> float
{
    return quantity;
}
auto Sales::get_sales_priority() -> Priority
{
    return number_of_priority;
}