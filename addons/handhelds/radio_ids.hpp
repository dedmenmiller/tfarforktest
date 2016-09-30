#define TF_RADIO_ID_full(baseClass,displayNameBase,index) class baseClass##_##index : baseClass \
    { \
        displayName = displayNameBase index; \
        scope = 1; \
        scopeCurator = 1; \
        tf_prototype = 0; \
        tf_radio = 1; \
    };

#define TF_RADIO_IDS_1(baseClass,displayNameBase,index,one) class baseClass##_##index : baseClass \
{ \
    displayName = displayNameBase index; \
};

#define TF_RADIO_IDS_10(baseClass,displayNameBase,index10) \
class baseClass##_##index10##1 : baseClass {displayName = displayNameBase index10##1; }; \
class baseClass##_##index10##2 : baseClass {displayName = displayNameBase index10##2; }; \
class baseClass##_##index10##3 : baseClass {displayName = displayNameBase index10##3; }; \
class baseClass##_##index10##4 : baseClass {displayName = displayNameBase index10##4; }; \
class baseClass##_##index10##5 : baseClass {displayName = displayNameBase index10##5; }; \
class baseClass##_##index10##6 : baseClass {displayName = displayNameBase index10##6; }; \
class baseClass##_##index10##7 : baseClass {displayName = displayNameBase index10##7; }; \
class baseClass##_##index10##8 : baseClass {displayName = displayNameBase index10##8; }; \
class baseClass##_##index10##9 : baseClass {displayName = displayNameBase index10##9; };

#define TF_RADIO_IDS_100(baseClass,displayNameBase,index100) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##0)
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##1) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##2) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##3) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##4) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##5) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##6) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##7) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##8) \
    //TF_RADIO_IDS_10(baseClass,displayNameBase,index##9)


#define TF_RADIO_IDS_999(baseClass,displayNameBase) \
TF_RADIO_IDS_1(baseClass,displayNameBase,2,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,3,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,4,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,5,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,6,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,7,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,8,1) \
TF_RADIO_IDS_1(baseClass,displayNameBase,9,1) \
TF_RADIO_IDS_10(baseClass,displayNameBase,1) \
TF_RADIO_IDS_10(baseClass,displayNameBase,2) \
TF_RADIO_IDS_10(baseClass,displayNameBase,3) \
TF_RADIO_IDS_10(baseClass,displayNameBase,4) \
TF_RADIO_IDS_10(baseClass,displayNameBase,5) \
TF_RADIO_IDS_10(baseClass,displayNameBase,6) \
TF_RADIO_IDS_10(baseClass,displayNameBase,7) \
TF_RADIO_IDS_10(baseClass,displayNameBase,8) \
TF_RADIO_IDS_10(baseClass,displayNameBase,9) \
TF_RADIO_IDS_100(baseClass,displayNameBase,1) \
TF_RADIO_IDS_100(baseClass,displayNameBase,2) \
TF_RADIO_IDS_100(baseClass,displayNameBase,3) \
TF_RADIO_IDS_100(baseClass,displayNameBase,4) \
TF_RADIO_IDS_100(baseClass,displayNameBase,5) \
TF_RADIO_IDS_100(baseClass,displayNameBase,6) \
TF_RADIO_IDS_100(baseClass,displayNameBase,7) \
TF_RADIO_IDS_100(baseClass,displayNameBase,8) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,9) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,1000,1)

#define TF_RADIO_IDS(baseClass,displayNameBase) \
    TF_RADIO_ID_full(baseClass,displayNameBase,1) \
    TF_RADIO_IDS_999(baseClass,displayNameBase)
