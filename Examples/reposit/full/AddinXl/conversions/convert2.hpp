
#ifndef addincpp_convert2_hpp
#define addincpp_convert2_hpp

#include <boost/lexical_cast.hpp>
#include <ohxl/convert_oper.hpp>
#include <Library/adder2.hpp>

namespace ObjectHandler {

    //inline bool is_numeric(const std::string &s, long &l) {
    //    try {
    //        l = boost::lexical_cast<long>(s);
    //        return true;
    //    } catch(...) {
    //        return false;
    //    }
    //}

    //template<class container_t>
    //SimpleLib::Long convertLong(const container_t& c) {
    //    if(c.type() == typeid(long))
    //        return SimpleLib::Long(c.operator long());
    //    else if(c.type() == typeid(std::string)) {
    //        std::string s = c.operator std::string();
    //        long l;
    //        if (is_numeric(s, l))
    //            return SimpleLib::Long(l);
    //        else
    //            OH_FAIL("unable to convert string '" << s << "' to type 'SimpleLib::Long'");
    //    }
    //    OH_FAIL("unable to convert type '" << c.type().name() << "' to type 'SimpleLib::Long'");
    //}

    template<> 
    SimpleLib::Long convert2<SimpleLib::Long, ConvertOper>(const ConvertOper& c);
}

#endif


