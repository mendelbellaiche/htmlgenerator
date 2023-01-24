//
// Created by mendel bellaiche on 24/01/2023.
//

#ifndef HTMLGENERATOR_TAG_H
#define HTMLGENERATOR_TAG_H

#include <vector>
#include <string>
#include "Attribute.h"

class Tag {

private:
    bool isOrphan = false;
    std::string m_name;
    std::string m_text;
    std::vector<Attribute*> attributes;
    std::vector<Tag*> tags;

public:
    explicit Tag(std::string name);
    ~Tag();
    void setOrphan(bool orphan);
    void setName(std::string name);
    void setText(std::string text);
    void addTag(Tag *tag);
    void addAttribute(Attribute *attribute);
    [[nodiscard]] std::string toString() const;
};


#endif //HTMLGENERATOR_TAG_H
