//
// Created by mendel bellaiche on 24/01/2023.
//

#include "Tag.h"

#include <utility>

Tag::Tag(std::string name): m_name(std::move(name)) {}

Tag::~Tag() {
    for (Attribute *attr: this->attributes) {
        attr = nullptr;
        delete attr;
    }
}

void Tag::setName(std::string name) {
    this->m_name = std::move(name);
}

void Tag::setText(std::string text) {
    this->tags.clear();
    this->m_text = std::move(text);
}

void Tag::addTag(Tag *tag) {
    this->m_text = nullptr;
}

void Tag::addAttribute(Attribute *attribute) {
    this->attributes.push_back(attribute);
}

std::string Tag::toString() const {
    std::string result;
    result += "<"+this->m_name;

    if (!this->attributes.empty()) {
        for (Attribute *attr: attributes) {
            result += " "+attr->toString();
        }
    }

    result += ">";

    if (this->tags.empty() && !this->m_text.empty()) {
        result += this->m_text;
    }

    if (this->isOrphan) {
        result += " />";
    } else {
        result += "</"+this->m_name+">";
    }
    return result;
}

void Tag::setOrphan(bool orphan) {
    this->isOrphan = orphan;
}
