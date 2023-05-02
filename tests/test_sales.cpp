#include "sales.h"
#include "catch.hpp"

TEST_CASE("test sales constructor 1")
{
    Sales test_sale(PRODUCTS::RR_2C, 25, Priority::MAX_PRIORITY);

    REQUIRE(test_sale.get_sales_product() == PRODUCTS::RR_2C);
    REQUIRE(test_sale.get_sales_priority() == Priority::MAX_PRIORITY);
    REQUIRE(test_sale.get_sales_quantity() == 25);
}

TEST_CASE("test sales constructor 2")
{
    Sales test_sale(PRODUCTS::RR_2C, 35.1, Priority::LOW_PRIORITY);

    float value = 35.1;

    REQUIRE(test_sale.get_sales_product() == PRODUCTS::RR_2C);
    REQUIRE(test_sale.get_sales_priority() == Priority::LOW_PRIORITY);
    REQUIRE(test_sale.get_sales_quantity() == value);
}

TEST_CASE("testing set_sales_requeriment")
{
    Sales test_sales;

    test_sales.set_sales_requeriment(PRODUCTS::RM_1C,75,Priority::MEDIUM_PRIORITY);

    Sales expected_sale(PRODUCTS::RM_1C,75,Priority::MEDIUM_PRIORITY);

    auto true_list = test_sales.get_sales_requeriment();

    std::list<Sales> test_list = {expected_sale};

    REQUIRE(test_list.size() == true_list.size());
}

TEST_CASE("testing set_sales_requeriment 2")
{
    Sales test_sales;

    test_sales.set_sales_requeriment(PRODUCTS::RM_1C,75,Priority::MEDIUM_PRIORITY);
    test_sales.set_sales_requeriment(PRODUCTS::RR_2C,50,Priority::LOW_PRIORITY);
    test_sales.set_sales_requeriment(PRODUCTS::RR_2C,36,Priority::MAX_PRIORITY);

    Sales expected_sale(PRODUCTS::RM_1C,75,Priority::MEDIUM_PRIORITY);
    Sales expected_sale1(PRODUCTS::RR_2C,50,Priority::LOW_PRIORITY);
    Sales expected_sale2(PRODUCTS::RR_2C,36,Priority::MAX_PRIORITY);

    auto true_list = test_sales.get_sales_requeriment();

    std::list<Sales> test_list = {expected_sale,expected_sale1,expected_sale2};

    REQUIRE(test_list.size() == true_list.size());
}

