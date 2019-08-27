#ifndef VERWALTUNGSSCHALE_referencing_HPP_Referable
#define VERWALTUNGSSCHALE_referencing_HPP_Referable

using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale::common
{
    class Referable
    {
        std::string idShort;
        std::string category;
        std::string description;
        Referable* parent;
    };
}

#endif
