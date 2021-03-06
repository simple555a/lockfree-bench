//$$CDS-header$$

#include "map2/map_insdel_func.h"
#include "map2/map_type_bronson_avltree.h"

namespace map2 {
    CDSUNIT_DEFINE_BronsonAVLTreeMap( cc::bronson_avltree::implementation_tag, Map_InsDel_func)

    CPPUNIT_TEST_SUITE_PART( Map_InsDel_func, run_BronsonAVLTreeMap )
        CDSUNIT_TEST_BronsonAVLTreeMap
    CPPUNIT_TEST_SUITE_END_PART()
} // namespace map2
