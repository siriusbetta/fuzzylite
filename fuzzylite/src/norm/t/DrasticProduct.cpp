/*
 Copyright © 2010-2016 by FuzzyLite Limited.
 All rights reserved.

 This file is part of fuzzylite®.

 fuzzylite® is free software: you can redistribute it and/or modify it under
 the terms of the FuzzyLite License included with the software.

 You should have received a copy of the FuzzyLite License along with
 fuzzylite®. If not, see <http://www.fuzzylite.com/license/>.

 fuzzylite® is a registered trademark of FuzzyLite Limited.

 */

#include "fl/norm/t/DrasticProduct.h"

#include "fl/Operation.h"

namespace fl {

    std::string DrasticProduct::className() const {
        return "DrasticProduct";
    }

    scalar DrasticProduct::compute(scalar a, scalar b) const {
        if (Op::isEq(Op::max(a, b), 1.0)) {
            return Op::min(a, b);
        }
        return 0.0;
    }

    DrasticProduct* DrasticProduct::clone() const {
        return new DrasticProduct(*this);
    }

    TNorm* DrasticProduct::constructor() {
        return new DrasticProduct;
    }

}
