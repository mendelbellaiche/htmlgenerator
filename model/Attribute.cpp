//
// Created by mendel bellaiche on 24/01/2023.
//

#include "Attribute.h"

#include <utility>

Attribute::Attribute(std::string name, std::string value): m_name(std::move(name)), m_value(std::move(value)) {}

Attribute::~Attribute() {
    this->m_name = nullptr;
    this->m_value = nullptr;
}

std::string Attribute::toString() const {
    return this->m_name+"=\""+this->m_value+"\"";
}