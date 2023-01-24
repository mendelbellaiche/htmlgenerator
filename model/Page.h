//
// Created by mendel bellaiche on 24/01/2023.
//

#ifndef HTMLGENERATOR_PAGE_H
#define HTMLGENERATOR_PAGE_H


#include <string>
#include "Tag.h"

class Page {
private:
    std::string m_name;
    Tag* tagHtml;

public:
    [[nodiscard]] std::string toString() const;
};


#endif //HTMLGENERATOR_PAGE_H
