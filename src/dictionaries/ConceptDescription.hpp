#ifndef VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription
#define VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription

#include <vector>
#include <string>

namespace Verwaltungsschale::dictionaries
{
    class ConceptDescription : HasDataSpecification, Identifiable
    {
        std::vector<Reference> isCaseOf;
    };
}

#endif

