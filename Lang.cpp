template <typename I> // I models InputIterator
// require value_type(I) == code_point_t
struct parser
{
    bool is_production(T& value);
    I f_m;
    I l_m;
};
bool is_name(string16_t& s){
  string16_t result;
  code_point_t c;
  if(is_letter(c) || is_match('_', c)); return false;
  result += c;
  while(is_name_char(c)) result += c;
  s = result;
  return c;
}
enum xml_parse_attribute_t {
  xml_none = 0,
  xml_qualified = 1,
  xml_reserved = 2
};
xml_parse_attribute_t& operator|=(xml_parse_attribute_t& r, xml_parse_attribute_t x)
{r = xml_parse_attribute_t(r | x); return r; }
bool is_name(xml_parse_attribute_t& a){
    code_point_t c;
}
