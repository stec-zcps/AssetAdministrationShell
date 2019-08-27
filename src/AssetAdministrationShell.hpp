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
        Verwaltungsschale::Asset asset;
        std::vector<Verwaltungsschale::Submodel> submodels;
//    public:
        //  @Adjacency(label = "derivedFrom")
        AssetAdministrationShell getDerivedFrom()
        {
            //return traverse(v->v.out ("derivedFrom")).tostd::vector(AssetAdministrationShell.class).get(0);
        }

        //  @Incidence(label = "derivedFrom")
        //Has setDerivedFrom(AssetAdministrationShell assetAdministrationShell)
        //{
        //    return addFramedEdge("derivedFrom", assetAdministrationShell, Has.class);
        //}

        //@Property("security")
        void setSecurity(std::vector<Security> security);

        //@Property("security")
        std::vector<Security> getSecurity();

        //@Adjacency(label = "asset")
        Asset getAsset()
        {
            return asset;
            //return this.traverse(v->v.out ("asset")).tostd::vector(Asset.class).get(0);
        }

        //@Incidence(label = "asset")
        //Has setAsset(Asset asset)
        //{
        //return addFramedEdge("asset", asset, Has.class);
        //}

        //@Adjacency(label = "submodel")
        std::vector<Submodel> getSubmodels()
        {
            return submodels;
            //return (std::vector<Submodel>)this.traverse(v->v.out ("submodel")).tostd::vector(Submodel.class);
        }

        //@Incidence(label = "submodel")
        //Has setSubmodel(Submodel submodel)
        //{
        //return addFramedEdge("submodel", submodel, Has.class);
        //}

        // @Property("conceptDictionary")
        void setConceptDictionaries(std::vector<Verwaltungsschale::dictionaries::ConceptDictionary> conceptDictionaries);

    //@Property("conceptDictionary")
    std::vector<ConceptDictionary> getConceptDictionaries();

    //@Property("view")
    void setViews(std::vector<Verwaltungsschale::View> views);

    //@Property("view")
    std::vector<View> getView();
};
}

#endif
