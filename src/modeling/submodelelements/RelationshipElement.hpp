#ifndef VERWALTUNGSSCHALE_modeling_HPP_RelationshopElement
#define VERWALTUNGSSCHALE_modeling_HPP_RelationshopElement

#include "../../common/Referable.hpp"

namespace Verwaltungsschale {
    namespace modeling {
        namespace submodelelements {
            class RelationshipElement : SubmodelElement {
                Verwaltungsschale::common::Referable first;
                Verwaltungsschale::common::Referable second;
            };
        }
    }
}

#endif
