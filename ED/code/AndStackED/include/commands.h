/******************************************************************************/
#define NULLOP          0
#define SETREG          0x10
#define RESET           0x20
#define SILENCE         0x30
#define CALIBRATE_R     0x40
#define SET_MAC_CMD     0x50
#define BOOT_OVER_AIR   0x60
#define SET_NEXT_KEY    0x70
#define SET_NEXT_IV     0x80
#define ASVOL_NETCMD    0x90
#define BOA_CHANNEL     0xA0
#define SHORT_NETJOIN   0xF0

#define BROADCAST       0
#define STRINGADDR      1
#define NIADDR          2
#define MACADDR         3

#define FLOAT_VAL       0
#define BYTE_VAL        (1<<2)
#define SHORT_VAL       (2<<2)
#define LONG_VAL        (3<<2)

// float registers
#define SET_DFK0    1
#define SET_DFK1    2
#define SET_DFK2    3
#define SET_DFK3    4

#define SET_TK_CUR          5
#define SET_TK_POW          6
#define SET_VIN_TURN_ON     7
#define SET_VIN_SHUT_OFF    8

#define SET_LC00 10
#define SET_LC01 11
#define SET_LC10 12
#define SET_LC11 13 
#define SET_LC20 14
#define SET_LC21 15
#define SET_LC30 16
#define SET_LC31 17
#define SET_LC40 18
#define SET_LC41 19
#define SET_LC50 20
#define SET_LC51 21
#define SET_LC60 22
#define SET_LC61 23

//#define SET_VIN_DISABLE_RADIO 22

#define SET_VREF0 24
#define SET_VREF1 25
#define SET_VREF2 26

// INT32 registers
#define DEBUG_POWER         1
#define SET_DF_TOLERANCE    2

// INT16 registers
#define SET_GROUP_ID        1
#define JOIN                2
#define SET_ED_GW           3

#define SetCyclesTo500              4   /*defCyclesTo500*/
#define SetCyclesTo10               5   /*defCyclesTo10 */
#define SetCyclesToStep500Channel   6   /*defCyclesToStep500Channel */
#define SetCyclesToStep10Channel    7   /*defCyclesToStep10Channel */
#define SetCyclesToSoftKick         8   /*defCyclesToSoftKick */ 
#define SetCyclesToHardKick         9   /*defCyclesToHardKick */
#define SetImageAddr                10  /*imageAddr*/
#define SetVersionLow               11
#define SetVersionHigh              12

#define BootImage                   13
#define SyncWord                    14
//#define DelayedPackagePrep          15
#define SetBasePtr                  16
#define SetCurNoise                 17
// setting pure offset - for 8k image, does not need to be in low image
#define MicroOffset                 18

// Registers for Oscillation Settings
// SetOscLowCurrentLimitInma set to 0 disables
#define SetLowCurrentLimitTo255   19


#define ReadPBOneCommand            24
#define SetPBByte                   25

// Registers for FET Failure Recognition
// FetFailureCount set to 0 disables
#define FetFailureCount             26
#define FetCurrentThreshold         27
#define FetDeltaCurrent             28

#define GndShift                    29

#define SetVoutLimitCount          33
#define SetVoutLimit               34
#define SetIoutLimitCount          35
#define SetIoutLimit               36

// BYTE and BOOL registers
// from 0 to 15 - P1 and P2 pins directly - will be used for OPEN, MPP, LED (?)

#define MPP      4
#define MODULE   5

#define TEST_1   6
#define TEST_2   7
#define TEST_3   8
#define TEST_4   9

#define CLEAR_THE_PAGE  10
#define FLASH_REFRESH2  11
#define RANDOMIZE       12
#define STAY_IN_RX      13
#define INSTALL_DATE    14
//#define BEAT_SPIKES     15

// MAC bytes
#define MAC0    (16+0)
#define MAC1    (16+1)
#define MAC2    (16+2)
#define MAC3    (16+3)
#define MAC4    (16+4)
#define MAC5    (16+5)

// Timer channels
#define SET_T3CH0                   22
#define SET_T3CH1                   23
// Radio Channel
#define TREAT_LB_AS_CHAN            1
#define SET_CHANNEL                 26

// FLASH control
#define FLASH_REFRESH               27
#define FLASH_AVAILABLE             28

#define REPORT_UTC                  29
#define RESTART_MEASUREMENT         30                         
#define DISSOLVE_NETWORK            31
#define REPORT_SCALING              32

#define COEFFICIENTS_AVAILABLE      33
//#define THIRTY_THREE_MV             34

#define RADIO_POWER                 35
#define PRODUCTION                  36
#define ENSURE_WD_RESET             37
#define USE_12_kBod                 38
#define USE_FEC                     39
#define ENABLE_HOPPING              40
#define IS_RELAY                    41
#define IS_500_ALWAYS               42
#define REPEATER_CHANNEL            43
#define REPEATER_POWER              44
#define SEARCH_FOR_COMMUNICATION    45

#define SET_SHOW_STATE              46
#define SetCriticalLevel500         47
#define SetCriticalLevel10          48

#define END_OF_TEST                 49
#define CLEAR_MAX_BUNCH             50
#define SYNCHRONIZE_MPP_CYCLES      51
#define BOOT_PAGE_IMAGE             52
#define SET_START500_CHANNEL        53
#define TRY_OTHER_IMAGE             54
#define CHECK_FLASH                 55
#define SWITCH_SECURITY             56
#define CALIBRATION_FROM_FLASH      57
#define CALIBRATION_REPEAT          58

#define USE250                      59
#define SPECULATIVE_REPORT          60
#define REP_STEP                    61

#define OV_STARTUP                  62
#define T_SUPERHOT                  63
#define T_HOT                       64
#define T_COLD                      65
#define T_TIME                      66
#define NETWORK_CNST_1              67
#define NETWORK_CNST_2              68
#define T_OC_JUMP                   69

#define OC_STEP                     70
#define RESERVED1                   71
#define RESERVED2                   72

#define OV_STEP                     73
#define SHUNT                       74
#define MAX_OFF                     75
#define VIN_LIMIT                   76
#define VIN_TURN_ON                 77
#define VIN_SWITCH_OFF              78
#define VIN_DISABLE_RADIO           79

#define SET_RBUNCH                  80
#define SET_GBUNCH                  81
//#define DEV250                      82
#define SHORT_CIRCUIT_LEVEL         82

#define FUSE_Comm                   83
#define FUSE_OVOC                   84
#define LOW_UTC                     85
#define HIGH_UTC                    86

#define K_OV_VOLT                   87
#define K_OC_CUR                    88

//#define TEST_STAND                  91
#define XTAL_OFF                    92

#define SYNCH_PHASE                 93
#define SYNCH_FREQ                  94
#define BANDWIDTH250                95
#define TEMP_CALIBRATE              96
#define SET_MPPF                    97
#define BANDWIDTH_500               100

#define EIGHT_K_WRITEMPB            110
#define EIGHT_K_WRITEMFPB           111
#define EIGHT_K_READMFPB            112
#define READ_COEFFICIENTS           113

/*
// float registers
#define SET_DFK0    1
#define SET_DFK1    2
#define SET_DFK2    3
#define SET_DFK3    4

#define SET_TK_CUR          5
#define SET_TK_POW          6
#define SET_VIN_TURN_ON     7
#define SET_VIN_SHUT_OFF    8

#define SET_LC00 10
#define SET_LC01 11
#define SET_LC10 12
#define SET_LC11 13 
#define SET_LC20 14
#define SET_LC21 15
#define SET_LC30 16
#define SET_LC31 17
#define SET_LC40 18
#define SET_LC41 19
#define SET_LC50 20
#define SET_LC51 21

#define SET_VIN_DISABLE_RADIO 22

#define SET_VREF0 24
#define SET_VREF1 25
#define SET_VREF2 26

// INT32 registers
#define DEBUG_POWER         1
#define SET_DF_TOLERANCE    2

// INT16 registers
#define SET_GROUP_ID        1
#define JOIN                2
#define SET_ED_GW           3

#define SetCyclesTo500              4   // defCyclesTo500
#define SetCyclesTo10               5   // defCyclesTo10 
#define SetCyclesToStep500Channel   6   // defCyclesToStep500Channel 
#define SetCyclesToStep10Channel    7   // defCyclesToStep10Channel 
#define SetCyclesToSoftKick         8   // defCyclesToSoftKick 
#define SetCyclesToHardKick         9   // defCyclesToHardKick 
#define SetImageAddr                10  // imageAddr
#define SetVersionLow               11
#define SetVersionHigh              12

#define BootImage                   13
#define SyncWord                    14
// BYTE and BOOL registers
// from 0 to 15 - P1 and P2 pins directly - will be used for OPEN, MPP, LED (?)

#define MPP     4
#define MODULE  5

#define TEST_1   6
#define TEST_2   7
#define TEST_3   8
#define TEST_4   9

#define CLEAR_THE_PAGE  10
#define FLASH_REFRESH2  11
#define RANDOMIZE       12
#define STAY_IN_RX      13
#define INSTALL_DATE    14
//#define BEAT_SPIKES     15

// MAC bytes
#define MAC0    (16+0)
#define MAC1    (16+1)
#define MAC2    (16+2)
#define MAC3    (16+3)
#define MAC4    (16+4)
#define MAC5    (16+5)

// Timer channels
#define SET_T3CH0                   22
#define SET_T3CH1                   23

// Radio Channel
#define SET_CHANNEL                 26

// FLASH control
#define FLASH_REFRESH               27
#define FLASH_AVAILABLE             28

#define RESTART_MEASUREMENT         30                         
#define DISSOLVE_NETWORK            31
#define REPORT_SCALING              32

#define COEFFICIENTS_AVAILABLE      33
#define THIRTY_THREE_MV             34
#define RADIO_POWER                 35
#define PRODUCTION                  36
#define ENSURE_WD_RESET             37
#define USE_10_kBod                 38
#define USE_FEC                     39
#define ENABLE_HOPPING              40
#define IS_RELAY                    41
#define IS_500_ALWAYS               42
#define REPEATER_CHANNEL            43
#define REPEATER_POWER              44
#define SEARCH_FOR_COMMUNICATION    45

#define SET_SHOW_STATE              46
#define SetCriticalLevel500         47
#define SetCriticalLevel10          48

#define END_OF_TEST                 49
#define CLEAR_MAX_BUNCH             50
#define SYNCHRONIZE_MPP_CYCLES      51
#define BOOT_PAGE_IMAGE             52
#define SET_START500_CHANNEL        53
#define TRY_OTHER_IMAGE             54
#define CHECK_FLASH                 55
#define SWITCH_SECURITY             56
#define CALIBRATION_FROM_FLASH      57
#define CALIBRATION_REPEAT          58

#define USE250                      59
#define SPECULATIVE_REPORT          60
#define REP_STEP                    61

#define OV_STARTUP                  62
#define T_SUPERHOT                  63
#define T_HOT                       64
#define T_COLD                      65
#define T_TIME                      66
#define NETWORK_CNST_1              67
#define NETWORK_CNST_2              68
#define T_OC_JUMP                   69

#define POWER_DISSIPATION_LIMIT     70
#define POWER_DISSIPATION_TIME      71
#define WIGGLE_DCHAN                72
#define OV_STEP                     73
#define SHUNT                       74
#define MAX_OFF                     75

#define VIN_LIMIT                   76
#define VIN_TURN_ON                 77
#define VIN_SWITCH_OFF              78
#define VIN_DISABLE_RADIO           79
*/
