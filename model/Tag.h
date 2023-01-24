//
// Created by mendel bellaiche on 24/01/2023.
//

#ifndef HTMLGENERATOR_TAG_H
#define HTMLGENERATOR_TAG_H

#include <string>

class Tag {

private:
    std::string m_name;
    std::string m_text;
    std::vector<Tag> *tags;

public:
    Tag(std::string name);
    ~Tag();
    void setName(std::string name);
    void setText(std::string text);
    void addTag(Tag *tag);
};


#endif //HTMLGENERATOR_TAG_H
