//
// Created by mendel bellaiche on 24/01/2023.
//

#include <iostream>
#include <format>

#include "model/Tag.h"
#include "model/Attribute.h"

using namespace std;


int main() {

    Attribute *a1 = new Attribute("href", "https://www.google.com");
    Tag *t1 = new Tag("a");
    t1->addAttribute(a1);
    t1->setText("Go to google");
    cout << t1->toString();
    return 0;
}
