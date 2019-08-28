#ifndef VERWALTUNGSSCHALE_HPP_Submodel
#define VERWALTUNGSSCHALE_HPP_Submodel

#include <string>

namespace Verwaltungsschale
{
    class Submodel : HasDataSpecification, HasKind, HasSemantics, Identifiable, Qualifiable
    {
    public:
        Qualifier qualifier;
        std::vector<SubmodelElement> elements;
    };
}

#endif
