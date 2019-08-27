#ifndef VERWALTUNGSSCHALE_HPP_Submodel
#define VERWALTUNGSSCHALE_HPP_Submodel

#include <string>

namespace Verwaltungsschale
{
    class Submodel : HasDataSpecification, HasKind, HasSemantics, Identifiable, Qualifiable
    {
        std::string getSubmodelElements();
        void setSubmodelElements(std::vector<Verwaltungsschale::modeling::SubmodelElement> submodelElements);
    };
}

#endif
