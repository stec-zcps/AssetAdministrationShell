#ifndef VERWALTUNGSSCHALE_HPP_AssetAdministrationShell
#define VERWALTUNGSSCHALE_HPP_AssetAdministrationShell

#include "includeCommon.hpp"
#include "includeDictionaries.hpp"
#include "includeModeling.hpp"

#include <vector>

#include "Asset.hpp"
#include "Submodel.hpp"
#include "Security.hpp"
#include "View.hpp"

namespace Verwaltungsschale
{
    class AssetAdministrationShell : HasDataSpecification, Identifiable
    {
    public:
        Security security;
        Verwaltungsschale::common::referencing::Reference derivedFrom;

        AssetAdministrationShell() = default;

        std::vector<Verwaltungsschale::dictionaries::ConceptDictionary> conceptDictionaries;
        std::vector<Verwaltungsschale::View> views;
        Verwaltungsschale::Asset asset;
        std::vector<Verwaltungsschale::Submodel> submodels;
    };
}

#endif
