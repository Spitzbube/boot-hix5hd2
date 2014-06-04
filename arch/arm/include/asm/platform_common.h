/******************************************************************************
 *    COPYRIGHT (C) 2013 Czyong. Hisilicon
 *    All rights reserved.
 * ***
 *    Create by Czyong 2013-02-27
 *
******************************************************************************/

#ifndef PLATFORM_COMMONH
#define PLATFORM_COMMONH
/******************************************************************************/

#define _HI3716M                      (0x08)
#define _HI3716H                      (0x0D)
#define _HI3716C                      (0x1E)
#define _HI3712                       (0x00)

#define _HI3716M_V100                 (0x0837200200LL)
#define _HI3716M_V200                 (0x0837160200LL)
#define _HI3716M_V300                 (0x0837160300LL)

#define _HI3716C_V200ES               (0x0019400200LL)
#define _HI3716C_V100                 (0x1E37200200LL)
#define _HI3716C_V200                 (0x0037160200LL)
#define _HI3716H_V200                 (0x0437160200LL)
#define _HI3719C_V100                 (0x0837160200LL)
#define _HI3718C_V100                 (0x1037160200LL)

#define _HI3716M_V400                 (0x1C37160200LL)
#define _HI3716MV400_MASK             (0xFEFFFFFFFFLL)

#define _HI3719M_V100_A               (0x1E37160200LL)
#define _HI3719MV100_A_MASK           (0xFEFFFFFFFFLL)

#define _HI3716H_V100                 (0x0D37200200LL)
#define _HI3716X_MASK                 (0xFFFFFFFFFFLL)

#define _HI3719M_V100                 (0x0037190100LL)
#define _HI3718M_V100                 (0x0437190100LL)
#define _HI3719M_MASK                 (0xFFFFFFFFFFLL)
#define _HI3718M_MASK                 (0xFEFFFFFFFFLL)

#define _HI3712_V100                  (0x0037120100LL)
#define _HI3712_MASK                  (0x00FFFFFFFFLL)
#define _HI3712_V100A      (0)
#define _HI3712_V100B      (1)
#define _HI3712_V100C      (2)
#define _HI3712_V100D      (3)
#define _HI3712_V100E      (4)
#define _HI3712_V100F      (5)
#define _HI3712_V100G      (6)
#define _HI3712_V100I      (7)

/* The support device every chip platform */
#define DEV_HINFC_AUTO     0x01
#define DEV_HINFC301       0x02
#define DEV_HINFC504       0x03
#define DEV_HINFC610       0x04
#define DEV_HINFC_MASK     0x0F

#define DEV_EMMC_AUTO      0x10
#define DEV_EMMCV100       0x20
#define DEV_EMMCV200       0x20
#define DEV_EMMC_MASK      0xF0

#define DEV_HISFC_AUTO     0x100
#define DEV_HISFC300       0x200
#define DEV_HISFC350       0x300
#define DEV_HISFC_MASK     0xF00

/******************************************************************************/
#endif /* PLATFORM_COMMONH */
