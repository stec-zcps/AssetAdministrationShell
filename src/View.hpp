#ifndef VERWALTUNGSSCHALE_HPP_View
#define VERWALTUNGSSCHALE_HPP_View

namespace Verwaltungsschale
{
    class View : HasDataSpecification, Referable, HasSemantics
    {
        Referable containedElement;
    };
}

#endif

