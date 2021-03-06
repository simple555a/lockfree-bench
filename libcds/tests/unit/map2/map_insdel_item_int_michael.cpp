//$$CDS-header$$

#include "map2/map_insdel_item_int.h"
#include "map2/map_type_michael.h"

namespace map2 {
    CDSUNIT_DEFINE_MichaelMap( cc::michael_map::implementation_tag, Map_InsDel_Item_int )

    CPPUNIT_TEST_SUITE_PART( Map_InsDel_Item_int, run_MichaelMap )
        CDSUNIT_TEST_MichaelMap
    CPPUNIT_TEST_SUITE_END_PART()
} // namespace map2
