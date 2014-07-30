
%typemap(rp_cpp_in) SWIGTYPE "$1_type";
%typemap(rp_cpp_call) SWIGTYPE "$1_name";

%typemap(rp_excel) std::string "C";
%typemap(rp_excel) std::string& "C";
%typemap(rp_excel) std::string const & "C";
%typemap(rp_excel) long "N";
%typemap(rp_excel) double "E";
%typemap(rp_excel) bool "L";
%typemap(rp_excel) void "L";

%typemap(rp_excel_in) long "long*";
%typemap(rp_excel_in) double "double*";
%typemap(rp_excel_in) std::string& "char*";
%typemap(rp_excel_in) std::string const & "char*";

%typemap(rp_excel_call) long "*$1_name";
%typemap(rp_excel_call) double "*$1_name";
%typemap(rp_excel_call) SWIGTYPE "$1_name";

%typemap(rp_excel_out) bool "bool*";
%typemap(rp_excel_out) long "long*";
%typemap(rp_excel_out) double "double*";
%typemap(rp_excel_out) std::string "char*";
%typemap(rp_excel_out) void "bool*";

%typemap(rp_excel_get) void "";
%typemap(rp_excel_get) SWIGTYPE "        $1_type returnValue =\n    ";

%typemap(rp_cpp_ret) void "";
%typemap(rp_cpp_ret) SWIGTYPE "return ";

%typemap(rp_cpp_type) SWIGTYPE "$1_type";

%typemap(rp_excel_ret) void %{
        static bool ret = true;
        return &ret;
%}

%typemap(rp_excel_ret) bool %{
        static bool ret = true;
        ret = returnValue;
        return &ret;
%}

%typemap(rp_excel_ret) long %{
        static long ret = true;
        ret = returnValue;
        return &ret;
%}

%typemap(rp_excel_ret) double %{
        static double ret = 0;
        ret = returnValue;
        return &ret;
%}

%typemap(rp_excel_ret) std::string %{
        static char ret[XL_MAX_STR_LEN];
        ObjectHandler::stringToChar(returnValue, ret);
        return ret;
%}

//%typemap(rp_vo_in) SWIGTYPE "$1_type";

%typemap(rp_vo_declare) SWIGTYPE "$1_type $1_name_";

%typemap(rp_vo_call) SWIGTYPE %{                    & boost::serialization::make_nvp("$1_name", $1_name_)
%}

%typemap(rp_vo_prop) SWIGTYPE %{            "$1_name",
%}

//%typemap(rp_vo_ctor_decl) SWIGTYPE %{                $1_type $1_name,
//%}

%typemap(rp_vo_ctor_init) SWIGTYPE %{            $1_name_($1_name),
%}

%typemap(rp_vo_cnv) SWIGTYPE "ObjectHandler::convert2<$1_type>(value)";

%include oh.i
