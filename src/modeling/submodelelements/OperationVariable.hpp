#ifndef VERWALTUNGSSCHALE_modeling_HPP_OperationVariable
#define VERWALTUNGSSCHALE_modeling_HPP_OperationVariable

namespace Verwaltungsschale {
    namespace modeling {
        namespace submodelelements {
            class OperationVariable : SubmodelElement {
                std::vector<SubmodelElement> value;
            };
        }
    }
}

#endif
