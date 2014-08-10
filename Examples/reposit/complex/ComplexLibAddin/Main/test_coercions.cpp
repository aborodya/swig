
#include <iostream>
#include "AddinCpp/add_all.hpp"
#include "oh/addin.hpp"
#include "test_all.hpp"

void testCoercions() {
    std::cout << std::endl;
    std::cout << "Testing coercions" << std::endl;
    std::cout << std::endl;

    std::cout << ComplexLibAddinCpp::clShowGrade2(75L) << std::endl;
    std::cout << ComplexLibAddinCpp::clShowGrade2("90") << std::endl;
    try {
        std::cout << ComplexLibAddinCpp::clShowGrade2(75.) << std::endl;
    } catch(const std::exception &e) {
        std::cout << "Expected error : " << e.what() << std::endl;
    }
}

