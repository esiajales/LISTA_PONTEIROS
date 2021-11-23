 p = &i; Legal
 *q = &j; Ilegal
 p = &*&i; Legal
 i = (*&)j; Ilegal
 i = *&j; Legal
 i = &&j; Ilegal
 q = *p; Legal
 i = (*p)` + *q; Ilegal
