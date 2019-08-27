#ifndef VERWALTUNGSSCHALE_modeling_HPP_Property
#define VERWALTUNGSSCHALE_modeling_HPP_Property

namespace Verwaltungsschale::modeling::submodelelements
{
    class Property : DataElement
    {
        std::string value;
        Reference valueId;
    };
}

#endif
