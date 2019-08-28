#ifndef VERWALTUNGSSCHALE_modeling_HPP_Formula
#define VERWALTUNGSSCHALE_modeling_HPP_Formula

using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale {
    namespace modeling {
        class Formula : Constraint {
        public:
            std::vector<Reference> dependsOn;
        };
    }
}

#endif
