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
    int m_deepTabulation = 0;
    std::string m_name;
    std::string m_text;
    std::vector<Attribute*> attributes;
    std::vector<Tag*> tags;

public:
    explicit Tag(std::string name, int deepTabulation=0);
    ~Tag();
    void setOrphan(bool orphan);
    void setName(std::string name);
    void setText(std::string text);
    void setDeepTabulation(int deepTabulation);
    void addTag(Tag *tag);
    void addAttribute(Attribute *attribute);
    std::string getPrefixTag() const;
    std::string getPostfixTag() const;
    [[nodiscard]] std::string toString() const;
};


#endif //HTMLGENERATOR_TAG_H
