//
// Created by mendel bellaiche on 24/01/2023.
//

#include "Tag.h"

#include <utility>

Tag::Tag(std::string name): m_name(std::move(name)) {

}

Tag::~Tag() {
}

void Tag::setName(std::string name) {
    this->m_name = std::move(name);
}

void Tag::setText(std::string text) {
    this->m_text = std::move(text);
}

void Tag::addTag(Tag *tag) {

}
