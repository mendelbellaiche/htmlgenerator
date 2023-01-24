//
// Created by mendel bellaiche on 24/01/2023.
//

#include "Page.h"

Page::Page(Tag *tag): m_tagHtml(tag) {}

Page::~Page() {
    this->m_tagHtml = nullptr;
    delete this->m_tagHtml;
}

std::string Page::toString() const {
    std::string result;
    result += "<!DOCTYPE html>\n";
    result += this->m_tagHtml->toString();
    return result;
}
