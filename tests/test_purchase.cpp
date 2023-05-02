#include "catch.hpp"
#include "purchase.h"

TEST_CASE("testing costructor Purchasing")
{
    Purchasing buy(RawMaterial::ACID,35000);

    REQUIRE(buy.get_quantity() == 35000);
    REQUIRE(buy.get_raw_material() == RawMaterial::ACID);
}

TEST_CASE("testing constructor purchasing 2")
{
    Purchasing buy(RawMaterial::CAP,17);

    REQUIRE(buy.get_quantity() == 17);
    REQUIRE(buy.get_raw_material() == RawMaterial::CAP);
}

