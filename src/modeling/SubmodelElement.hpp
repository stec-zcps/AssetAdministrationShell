#ifndef VERWALTUNGSSCHALE_modeling_HPP_submodelelement
#define VERWALTUNGSSCHALE_modeling_HPP_submodelelement

using namespace Verwaltungsschale::common;

namespace Verwaltungsschale::modeling
{
    class SubmodelElement : HasDataSpecification, Referable, Qualifiable, HasSemantics, HasKind
    {
    };
}

#endif
