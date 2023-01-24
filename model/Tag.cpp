//
// Created by mendel bellaiche on 24/01/2023.
//

#include <iostream>
#include <utility>
#include "Tag.h"

Tag::Tag(std::string name, int deepTabulation): m_name(std::move(name)), m_deepTabulation(deepTabulation) {}

Tag::~Tag() {
    for (Attribute *attr: this->attributes) {
        attr = nullptr;
        delete attr;
    }
}

void Tag::setDeepTabulation(int deepTabulation) {
    this->m_deepTabulation = deepTabulation;
}

void Tag::setName(std::string name) {
    this->m_name = std::move(name);
}

void Tag::setText(std::string text) {
    this->tags.clear();
    this->m_text = std::move(text);
}

void Tag::addTag(Tag *tag) {
    tags.push_back(tag);
}

void Tag::addAttribute(Attribute *attribute) {
    this->attributes.push_back(attribute);
}

std::string Tag::toString() const {
    std::string result = getPrefixTag();

    if (!this->isOrphan && this->tags.empty() && !this->m_text.empty()) {
        result += this->m_text;
    } else if (!this->isOrphan && !this->tags.empty() && this->m_text.empty()) {
        for (Tag *tag: tags) {

            result += tag->toString();
        }
    } else {

    }

    result += getPostfixTag();

    return result;
}

void Tag::setOrphan(bool orphan) {
    if (orphan) {
        this->m_text = nullptr;
        this->tags.clear();
    }
    this->isOrphan = orphan;
}

std::string Tag::getPrefixTag() const {
    std::string result;

    for (int i=0; i<m_deepTabulation; i++) {
        result += "\t";
    }

    result += "<"+this->m_name;

    if (!this->attributes.empty()) {
        for (Attribute *attr: attributes) {
            result += " "+attr->toString();
        }
    }

    result += ">";

    if (!isOrphan && !tags.empty()) {
        result += "\n";
    }

    return result;
}

std::string Tag::getPostfixTag() const {
    std::string result;

    if (this->isOrphan) {
        result += " />";
    } else {

        if (m_text.empty() && !tags.empty()) {
            for (int i=0; i<m_deepTabulation; i++) {
                result += "\t";
            }
        }

        result += "</"+this->m_name+">\n";


    }



    return result;
}
