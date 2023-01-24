//
// Created by mendel bellaiche on 24/01/2023.
//

#ifndef HTMLGENERATOR_ATTRIBUTE_H
#define HTMLGENERATOR_ATTRIBUTE_H

#include <string>

class Attribute {
private:
    std::string m_name;
    std::string m_value;

public:
    Attribute(std::string name, std::string value);
    ~Attribute();
    [[nodiscard]] std::string toString() const;
};


#endif //HTMLGENERATOR_ATTRIBUTE_H
