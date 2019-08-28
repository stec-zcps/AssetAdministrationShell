#ifndef VERWALTUNGSSCHALE_referencing_HPP_Identifiable
#define VERWALTUNGSSCHALE_referencing_HPP_Identifiable

#include "Referable.hpp"
#include "Identifier.hpp"
#include "../AdministrativeInformation.hpp"

namespace Verwaltungsschale {
    namespace common {
        class Identifiable : Referable {
        public:
            AdministrativeInformation administrativeInformation;
            Identifier identification;

            Identifiable() : identification(identification) {

            }
        };
    }
}

#endif