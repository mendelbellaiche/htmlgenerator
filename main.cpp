//
// Created by mendel bellaiche on 24/01/2023.
//

#include <iostream>
#include <format>
#include <string>

#include "model/Tag.h"
#include "model/Attribute.h"
#include "model/Page.h"

using namespace std;


std::string generateHtml() {
    auto *htmlTag = new Tag("html");
    auto *headTag = new Tag("head", 1);
    auto *metaCharsetHeadTag = new Tag("meta", 2);
    auto *metaViewportHeadTag = new Tag("meta", 2);
    auto *titleHeadTag = new Tag("title", 2);
    auto *linkCssHeadTag = new Tag("link", 2);
    auto *bodyTag = new Tag("body", 1);


    auto *metaCharsetHeadAttribute = new Attribute("charset", "UTF-8");
    auto *metaViewportNameHeadAttribute = new Attribute("name", "viewport");
    auto *metaViewportContentHeadAttribute = new Attribute("name", "width=device-width,initial-scale=1.0");
    auto *relCssHeadAttribute = new Attribute("rel", "stylesheet");
    auto *hrefCssHeadAttribute = new Attribute("href", "index.css");
    metaCharsetHeadTag->addAttribute(metaCharsetHeadAttribute);
    metaViewportHeadTag->addAttribute(metaViewportNameHeadAttribute);
    metaViewportHeadTag->addAttribute(metaViewportContentHeadAttribute);
    linkCssHeadTag->addAttribute(relCssHeadAttribute);
    linkCssHeadTag->addAttribute(hrefCssHeadAttribute);
    titleHeadTag->setText("Html Generator");

    linkCssHeadTag->setOrphan(true);
    
    headTag->addTag(metaCharsetHeadTag);
    headTag->addTag(metaViewportHeadTag);
    headTag->addTag(linkCssHeadTag);

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
    std::string res = page->toString();
    page = nullptr;
    delete page;

    return res;
}



int main() {

    std::string htmlStr = generateHtml();
    cout << htmlStr;
    return 0;
}
