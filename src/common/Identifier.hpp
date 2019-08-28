#ifndef VERWALTUNGSSCHALE_referencing_HPP_Identifier
#define VERWALTUNGSSCHALE_referencing_HPP_Identifier

namespace Verwaltungsschale {
    namespace common {
        class Identifier {
        public:
            Verwaltungsschale::common::types::Id id;
            referencing::IdentifierType identifierType;

            Identifier(Verwaltungsschale::common::types::Id id_, referencing::IdentifierType identifierType_) {
                id = id_;
                identifierType = identifierType_;
            }
        };
    }
}

#endif
