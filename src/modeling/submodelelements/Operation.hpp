#ifndef VERWALTUNGSSCHALE_modeling_HPP_Operation
#define VERWALTUNGSSCHALE_modeling_HPP_Operation

#include "OperationVariable.hpp"

namespace Verwaltungsschale::modeling::submodelelements
{
    class Operation : SubmodelElement
    {
        std::vector<OperationVariable> in;
        std::vector<OperationVariable> out;
    };
}

#endif
