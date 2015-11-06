

#define min(a,b) (((a) < (b)) ? (a) : (b))


#define SERVICE_BAT             0x2003
#define ATTR_BAT_V              0x1001
#define ATTR_BAT_CHG            0x1002

#define SERVICE_GPS             0x2001    //SPEC
#define ATTR_GPS_LOCATION       0x0001    //SPEC
#define ATTR_GPS_SPEED          0x0003    //spec
#define ATTR_GPS_ALTITUDE       0x1001
#define ATTR_GPS_FIX_QUALITY    0x0102    //SPEC
#define ATTR_GPS_SATELLITES     0x0101    //spec

#define SERVICE_NFC             0x1E01   //NFC is not in spec now, we chose id from experimentation range
#define ATTR_NFC_GET_UID        0x1001
#define ATTR_NFC_READ_NDEF      0x1002
#define ATTR_NFC_WRITE_NDEF     0x1003
#define ATTR_NFC_ERASE_NDEF     0x1004
