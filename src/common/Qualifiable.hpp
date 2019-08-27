#ifndef VERWALTUNGSSCHALE_referencing_HPP_Qualifiable
#define VERWALTUNGSSCHALE_referencing_HPP_Qualifiable

#include "../modeling/Constraint.hpp"

using namespace Verwaltungsschale::modeling;

namespace Verwaltungsschale::common
{
    class Qualifiable
    {
        std::vector<Constraint> qualifier;
    };
}

#endif
