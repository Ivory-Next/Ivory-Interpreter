#include <stdio.h>
#include "../Ivoryc.h"


char *st_Ivory_lang_ivh_text[] = {
    "//Ivory.lang\n",
    "void print(string str);\n",
    "void println(string str) {\n",
    "    print(str + \"\\n\");\n",
    "}\n",
    "\n",
    "public class File {\n",
    "    native_pointer fp;\n",
    "    constructor initialize(native_pointer fp) {\n",
    "\t    this.fp = fp;\n",
    "    }\n",
    "}\n",
    "\n",
    "File fopen(string file_name, string mode);\n",
    "string fgets(File file);\n",
    "void fputs(string str, File file);\n",
    "void fclose(File file);\n",
    "\n",
    "double to_double(int int_value) {\n",
    "    return int_value;\n",
    "}\n",
    "\n",
    "int to_int(double double_value) {\n",
    "    return double_value;\n",
    "}\n",
    "\n",
    "int parse_int(string str);// throws NumberFormatException;\n",
    "double parse_double(string str);// throws NumberFormatException;\n",
    "long double parse_long_double(string str) ;\n",
    "\n",
    "void randomize();\n",
    "int random(int range);\n",
    "\n",
    "class StackTrace {\n",
    "    int\tline_number;\n",
    "    string file_name;\n",
    "    string function_name;\n",
    "}\n",
    "\n",
    "abstract public class Exception {\n",
    "    public string message;\n",
    "    public StackTrace[] stack_trace;\n",
    "    public void print_stack_trace() {\n",
    "\tint i;\n",
    "\tprintln(\"Exception occured. \" + this.message);\n",
    "\tfor (i = 0; i < this.stack_trace.size(); i++) {\n",
    "\t    println(\"\\tat \" \n",
    "\t\t    + this.stack_trace[i].function_name\n",
    "\t\t    + \"(\" + this.stack_trace[i].file_name\n",
    "\t\t    + \":\" + this.stack_trace[i].line_number + \")\");\n",
    "\t}\n",
    "    }\n",
    "    public virtual constructor initialize() {\n",
    "\tthis.stack_trace = new StackTrace[0];\n",
    "    }\n",
    "}\n",
    "\n",
    "abstract public class BugException : Exception {\n",
    "}\n",
    "\n",
    "abstract public class RuntimeException : Exception {\n",
    "}\n",
    "\n",
    "public class NullPointerException : BugException {\n",
    "}\n",
    "\n",
    "public class ArrayIndexOutOfBoundsException : BugException {\n",
    "}\n",
    "\n",
    "public class StringIndexOutOfBoundsException : BugException {\n",
    "}\n",
    "\n",
    "public class DivisionByZeroException : RuntimeException {\n",
    "}\n",
    "\n",
    "public class MultibyteCharacterConvertionException : RuntimeException {\n",
    "}\n",
    "\n",
    "public class ClassCastException : BugException {\n",
    "}\n",
    "\n",
    "public abstract class ApplicationException : Exception {\n",
    "}\n",
    "\n",
    "public class NumberFormatException : ApplicationException {\n",
    "}\n",
    "\n",
    "delegate int HogeDelegate(int value);\n",
    "\n",
    "// BUGBUG for test routine\n",
    "string test_native(object o);\n",
    "\n",
    "void foo_file(File file) {\n",
    "}\n",
    "\n",
    "//object\n",
    "/*public class test_class {\n",
    "    public string str;\n",
    "    public constructor initialize(string str) { this.str = str; }\n",
    "    //object get_object_from_string(string value);\n",
    "}*/\n",
    "\n",
    NULL
};
char *st_Ivory_lang_ivy_text[] = {
    "using Ivory.lang;\n",
    "\n",
    "native_pointer __fopen(string file_name, string mode);\n",
    "string __fgets(native_pointer fp);\n",
    "void __fputs(string str, native_pointer fp);\n",
    "void __fclose(native_pointer fp);\n",
    "\n",
    "File fopen(string file_name, string mode) {\n",
    "    native_pointer fp = __fopen(file_name, mode);\n",
    "    if (fp == null) {\n",
    "\treturn null;\n",
    "    } else {\n",
    "\treturn new File(fp);\n",
    "    }\n",
    "}\n",
    "\n",
    "string fgets(File file) {\n",
    "    return __fgets(file.fp);\n",
    "}\n",
    "\n",
    "void fputs(string str, File file) {\n",
    "    __fputs(str, file.fp);\n",
    "}\n",
    "\n",
    "void fclose(File file) {\n",
    "    __fclose(file.fp);\n",
    "}\n",
    NULL
};
char *st_Ivory_Math_ivh_text[] = {
    "double fabs(double z);\n",
    "double pow(double z, double x);\n",
    "double fmod(double number, double divisor);\n",
    "double ceil(double z);\n",
    "double floor(double z);\n",
    "double sqrt(double z);\n",
    "double exp(double z);\n",
    "double log10(double z);\n",
    "double log(double z);\n",
    "double sin(double radian);\n",
    "double cos(double radian);\n",
    "double tan(double radian);\n",
    "double asin(double arg);\n",
    "double acos(double arg);\n",
    "double atan(double arg);\n",
    "double atan2(double num, double den);\n",
    "double sinh(double value);\n",
    "double cosh(double value);\n",
    "double tanh(double value);\n",
    NULL
};
char *st_Ivory_IO_ivh_text[] = {
    "/* Ivory.IO package \n",
    " * provide some function for I/O stream controlling\n",
    " */\n",
    "string gets();\n",
    "int puts(string str);\n",
    NULL
};
char *st_Ivory_System_ivh_text[] = {
    "/* Ivory.System package \n",
    " * ported from stdlib.h\n",
    " */\n",
    "void abort();\n",
    "void exit(int status);\n",
    "int system(string s);\n",
    "string getenv(string name);\n",
    NULL
};
char *st_Ivory_Type_ivh_text[] = {
    "/* Ivory.Type package\n",
    " */\n",
    "enum TypeID {\n",
    "\tVOID_TYPE,\n",
    "    BOOLEAN_TYPE,\n",
    "    INT_TYPE,\n",
    "    DOUBLE_TYPE,\n",
    "    LONG_DOUBLE_TYPE,\n",
    "    OBJECT_TYPE,\n",
    "    STRING_TYPE,\n",
    "    CLASS_TYPE,\n",
    "    DELEGATE_TYPE,\n",
    "    ENUM_TYPE,\n",
    "    NULL_TYPE,\n",
    "    NATIVE_POINTER_TYPE,\n",
    "    BASE_TYPE,\n",
    "\tUNCLEAR_TYPE,\n",
    "    UNSPECIFIED_IDENTIFIER_TYPE\n",
    "}\n",
    "\n",
    "public class Type {\n",
    "\tprivate int code;\n",
    "\tpublic TypeID type_id;\n",
    "\n",
    "\tconstructor initialize(int code) {\n",
    "\t    this.code = code;\n",
    "\t\tswitch (code) {\n",
    "\t\t\tcase 1:\t\tthis.type_id = TypeID.VOID_TYPE;\n",
    "\t\t\tcase 2:\t\tthis.type_id = TypeID.BOOLEAN_TYPE;\n",
    "\t\t\tcase 3:\t\tthis.type_id = TypeID.INT_TYPE;\n",
    "\t\t\tcase 4:\t\tthis.type_id = TypeID.DOUBLE_TYPE;\n",
    "\t\t\tcase 5:\t\tthis.type_id = TypeID.LONG_DOUBLE_TYPE;\n",
    "\t\t\tcase 6:\t\tthis.type_id = TypeID.OBJECT_TYPE;\n",
    "\t\t\tcase 7:\t\tthis.type_id = TypeID.STRING_TYPE;\n",
    "\t\t\tcase 8:\t\tthis.type_id = TypeID.CLASS_TYPE;\n",
    "\t\t\tcase 9:\t\tthis.type_id = TypeID.DELEGATE_TYPE;\n",
    "\t\t\tcase 10: \tthis.type_id = TypeID.ENUM_TYPE;\n",
    "\t\t\tcase 11:\tthis.type_id = TypeID.NULL_TYPE;\n",
    "\t\t\tcase 12:\tthis.type_id = TypeID.NATIVE_POINTER_TYPE;\n",
    "\t\t\tcase 13:\tthis.type_id = TypeID.BASE_TYPE;\n",
    "\t\t\tcase 14:\tthis.type_id = TypeID.UNCLEAR_TYPE;\n",
    "\t\t\tcase 15:\tthis.type_id = TypeID.UNSPECIFIED_IDENTIFIER_TYPE;\n",
    "\t\t\tdefault:\t0;\n",
    "\t\t}\n",
    "    }\n",
    "\n",
    "\tpublic string tostring() {\n",
    "\t\treturn (string)this.type_id;\n",
    "\t}\n",
    "}\n",
    "\n",
    "int __typeof(object o);\n",
    "Type typeof(object o) {\n",
    "\tint code = __typeof(o);\n",
    "\tType ret = new Type(code);\n",
    "\treturn ret;\n",
    "}\n",
    NULL
};

BuiltinScript Ivyc_builtin_script[] = {
    {"Ivory.lang", IVH_SOURCE, st_Ivory_lang_ivh_text},
    {"Ivory.lang", IVY_SOURCE, st_Ivory_lang_ivy_text},
    {"Ivory.Math", IVH_SOURCE, st_Ivory_Math_ivh_text},
    {"Ivory.IO", IVH_SOURCE, st_Ivory_IO_ivh_text},
    {"Ivory.System", IVH_SOURCE, st_Ivory_System_ivh_text},
    {"Ivory.Type", IVH_SOURCE, st_Ivory_Type_ivh_text},
    {NULL, IVY_SOURCE, NULL}
};
