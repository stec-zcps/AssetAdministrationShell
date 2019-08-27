#ifndef VERWALTUNGSSCHALE_referencing_HPP_Identifiable
#define VERWALTUNGSSCHALE_referencing_HPP_Identifiable

#include "Referable.hpp"
#include "Identifier.hpp"
#include "../AdministrativeInformation.hpp"

namespace Verwaltungsschale::common
{
    class Identifiable : Referable
    {
        AdministrativeInformation administrativeInformation;
        Identifier identification;
    };
}

#endif