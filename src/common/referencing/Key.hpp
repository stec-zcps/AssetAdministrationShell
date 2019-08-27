#ifndef VERWALTUNGSSCHALE_referencing_HPP_Key
#define VERWALTUNGSSCHALE_referencing_HPP_Key

#include "KeyType.hpp"

namespace Verwaltungsschale::common::referencing
{
    class Key
    {
        std::string type = "GlobalReference";
        bool local;
        std::string value;
        Verwaltungsschale::common::referencing::KeyType idType;
	};
}

#endif