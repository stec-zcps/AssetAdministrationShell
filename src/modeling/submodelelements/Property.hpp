#ifndef VERWALTUNGSSCHALE_modeling_HPP_Property
#define VERWALTUNGSSCHALE_modeling_HPP_Property

namespace Verwaltungsschale::modeling::submodelelements
{
    class Property : DataElement
    {
        Verwaltungsschale::common::types::anySimpleTypedef valueType;
        Verwaltungsschale::common::types::PropertyValueType value;
        Reference valueId;
    };
}

#endif
