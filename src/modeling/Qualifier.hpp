#ifndef VERWALTUNGSSCHALE_modeling_HPP_qualifier
#define VERWALTUNGSSCHALE_modeling_HPP_qualifier

using namespace Verwaltungsschale::common;
using namespace Verwaltungsschale::common::types;
using namespace Verwaltungsschale::common::referencing;

namespace Verwaltungsschale::modeling
{
    class Qualifier : Constraint, HasSemantics
    {
        QualifierType qualifierType;
        PropertyValueType qualifierValue;
        Reference qualifierValueId;
    };
}

#endif
