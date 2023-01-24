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
    auto *metaCharsetHeadTag = new Tag("meta", 2);
    auto *metaViewportHeadTag = new Tag("meta", 2);
    auto *titleHeadTag = new Tag("title", 1);
    auto *bodyTag = new Tag("body", 1);

    auto *metaCharsetHeadAttribute = new Attribute("charset", "UTF-8");
    auto *metaViewportNameHeadAttribute = new Attribute("name", "viewport");
    auto *metaViewportContentHeadAttribute = new Attribute("name", "width=device-width,initial-scale=1.0");
    metaCharsetHeadTag->addAttribute(metaCharsetHeadAttribute);
    metaViewportHeadTag->addAttribute(metaViewportNameHeadAttribute);
    metaViewportHeadTag->addAttribute(metaViewportContentHeadAttribute);
    titleHeadTag->setText("Html Generator");

    headTag->addTag(metaCharsetHeadTag);
    headTag->addTag(metaViewportHeadTag);

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
