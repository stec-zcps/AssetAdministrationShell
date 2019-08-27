#ifndef VERWALTUNGSSCHALE_HPP_Asset
#define VERWALTUNGSSCHALE_HPP_Asset

#include "Submodel.hpp"

namespace Verwaltungsschale
{
    class Asset : HasDataSpecification, Identifiable, HasKind
    {
        //@Property("assetIdentificationModel")
        void setassetIdentificationModel(Submodel assetIdentificationModel);

        //@Property("assetIdentificationModel")
        void getassetIdentificationModel();

        //@Adjacency(label = "hasAssetRelation")
        std::vector<Asset> getRelatedAssets();

        //@Adjacency(label = "hasAssetRelation")
        //public abstract List<Has> getAssetRelations();

        //@Incidence(label = "hasAssetRelation")
        //public Has addRelatedAsset(Asset asset)
        //{
        //return addFramedEdge("hasAssetRelation", asset, Has.class);
        //}
    };
}

#endif
