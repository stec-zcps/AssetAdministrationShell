#ifndef VERWALTUNGSSCHALE_referencing_HPP_Referable
#define VERWALTUNGSSCHALE_referencing_HPP_Referable

#include "types/LangString.hpp"

using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale::common
{
    class Referable
    {
    public:
        std::string idShort;
        std::string category;
        Verwaltungsschale::common::types::LangString description;
        Referable* parent;
    };
}

#endif
