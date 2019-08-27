#ifndef VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription
#define VERWALTUNGSSCHALE_dictionaries_HPP_ConceptDescription

#include <vector>
#include <string>

namespace Verwaltungsschale::dictionaries
{
    class ConceptDescription : HasDataSpecification, Identifiable
    {
        //@Property("name")
        virtual std::string getName();

        //@Property("name")
        virtual void setName(std::string name);

        //@Adjacency(label = "hasConceptDescription")
        virtual std::vector<ConceptDescription> getConceptDescriptions();

        //@Adjacency(label = "hasConceptDescription")
        //virtual List<Has> getConceptDescriptionRelations();

        //@Incidence(label = "hasConceptDescription")
        //       public Has addConceptDescription(ConceptDescription conceptDescription)
        //{
        //return addFramedEdge("hasConceptDescription", conceptDescription, Has.class);
        //}
    };
}

#endif

