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
    Tag* m_tagHtml;

public:
    Page(Tag *tag);
    ~Page();
    [[nodiscard]] std::string toString() const;
};


#endif //HTMLGENERATOR_PAGE_H
