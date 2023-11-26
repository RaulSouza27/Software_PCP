#pragma once


namespace pcp
{

    enum class PRODUCTS
    {
        UNKNOWN_PRODUCTS,
        RR_2C,
        RM_1C
    };

    enum class Priority
    {
        UNKNOWN_PRIORITY,
        MAX_PRIORITY,
        MEDIUM_PRIORITY,
        LOW_PRIORITY
    };

    struct EMULSIONS
    {
        float RR2C;
        float RM1C;
    };

    enum class RawMaterial
    {
        UNKNOW,
        ACID,
        SALT,
        CAP,
        WATER,
        GENAMIN,
        DIESEL
    };

    struct RawMaterialStock
    {
        RawMaterial raw_material;
        float quantity;
    };

} // namespace pcp
