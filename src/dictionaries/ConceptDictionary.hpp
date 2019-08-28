#ifndef VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDictionary
#define VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDictionary

using namespace Verwaltungsschale::common;

namespace Verwaltungsschale {
    namespace dictionaries {
        class ConceptDictionary : Referable {
            std::vector<ConceptDescription> conceptDescriptions;
        };
    }
}

#endif
