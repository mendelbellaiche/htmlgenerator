//
// Created by mendel bellaiche on 24/01/2023.
//

#include <iostream>
#include <format>

#include "model/Tag.h"
#include "model/Attribute.h"
#include "model/Page.h"

using namespace std;


int main() {

    /* auto *a1 = new Attribute("href", "https://www.google.com");
    auto *t1 = new Tag("a");
    t1->addAttribute(a1);
    t1->setText("Go to google"); */

    auto *htmlTag = new Tag("html");
    auto *headTag = new Tag("head", 1);
    auto *bodyTag = new Tag("body", 1);

    auto *googleLink = new Tag("a", 2);
    auto *attributeLinkGoogle = new Attribute("href", "https://www.google.com");
    googleLink->addAttribute(attributeLinkGoogle);
    googleLink->setText("Go to google");
    bodyTag->addTag(googleLink);

    auto attrLangHtml = new Attribute("lang", "en");
    htmlTag->addAttribute(attrLangHtml);
    htmlTag->addTag(headTag);
    htmlTag->addTag(bodyTag);

    auto *page = new Page(htmlTag);
    cout << page->toString();

    page = nullptr;
    delete page;

    return 0;
}
