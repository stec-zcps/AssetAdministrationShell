#ifndef VERWALTUNGSSCHALE_modeling_HPP_SubmodelElementCollection
#define VERWALTUNGSSCHALE_modeling_HPP_SubmodelElementCollection

namespace Verwaltungsschale {
    namespace modeling {
        namespace submodelelements {
            class SubmodelElementCollection {
                std::vector<Verwaltungsschale::modeling::SubmodelElement> value;
                bool ordered;
                bool allowDuplicates;
            };
        }
    }
}

#endif