#ifndef VERWALTUNGSSCHALE_modeling_HPP_Formula
#define VERWALTUNGSSCHALE_modeling_HPP_Formula

using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale::modeling
{
    class Formula : Constraint
    {
        std::vector<Reference> dependsOn;
    };
}

#endif
