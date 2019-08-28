#ifndef VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription
#define VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription

#include <vector>
#include <string>

namespace Verwaltungsschale {
    namespace dictionaries {
        class ConceptDescription : HasDataSpecification, Identifiable {
            ConceptDescription() = default;

            std::vector<Reference> isCaseOf;
        };
    }
}

#endif

