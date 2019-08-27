#ifndef VERWALTUNGSSCHALE_referencing_HPP_Identifier
#define VERWALTUNGSSCHALE_referencing_HPP_Identifier

namespace Verwaltungsschale::common
{
    class Identifier
    {
        std::string id;
        referencing::IdentifierType identifierType;
    public:

        std::string getId()
        {
            return id;
        }

        void setId(std::string id)
        {
            this->id = id;
        }

        referencing::IdentifierType getIdentifierType()
        {
            return identifierType;
        }

        void setIdentifierType(referencing::IdentifierType identifierType)
        {
            this->identifierType = identifierType;
        }
    };
}

#endif
