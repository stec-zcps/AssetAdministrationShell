#ifndef VERWALTUNGSSCHALE_modeling_HPP_qualifier
#define VERWALTUNGSSCHALE_modeling_HPP_qualifier

using namespace Verwaltungsschale::common;
using namespace Verwaltungsschale::common::types;
using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale {
    namespace modeling {
        class Qualifier : Constraint, HasSemantics {
        public:
            QualifierType qualifierType;
            PropertyValueType qualifierValue;
            Reference qualifierValueId;

            explicit Qualifier(QualifierType qualifierType) : qualifierType(qualifierType) {}
        };
    }
}

#endif
