#ifndef VERWALTUNGSSCHALE_HPP_Asset
#define VERWALTUNGSSCHALE_HPP_Asset

#include "Submodel.hpp"

namespace Verwaltungsschale
{
    class Asset : HasDataSpecification, Identifiable, HasKind
    {
        Verwaltungsschale::common::referencing::Reference assetIdentificationModel; //Referenz auf Submodels
    };
}

#endif
