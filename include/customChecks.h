#pragma once

#include <tp/dzx.h>

struct customCheck
{
    char stage[8];
    u8 room;

    u8 chestType;

    u8 saveFlag;
    u8 itemID;

    u32 X;
    u32 Y;
    u32 Z;

    s32 Angle;

    void (*override)();
};

namespace mod
{
    customCheck customChecks[30] = {
        /*Ordon Shield*/
        {"F_SP103", 0, 0, 0x74, 0x2A, 0x454BF27A, 0x4479E28F, 0x447534C8, 0xF932, nullptr},
        /*Ordon Sword*/
        {"R_SP01", 5, 0, 0x70, 0x28, 0x439D0602, 0x0, 0xC26ABE99, 0xCC7D, nullptr},
        /*Sera Bottle*/
        {"F_SP103", 0, 1, 0x7C, 0x65, 0x444C8DC3, 0x42AF0000, 0xC4CB2577, 0xA3E7, nullptr},
        /*Slingshot*/
        {"F_SP103", 0, 0, 0x78, 0x4B, 0xC3EDF8A9, 0x44CD922E, 0x45F31BF5, 0x7881, nullptr},
        /*Lantern*/
        {"F_SP108", 4, 1, 0xF8, 0x48, 0xC66D4C1B, 0x41C19A25, 0xC65D2696, 0x36EC, nullptr},
        /*Zora Armor*/
        {"F_SP111", 0, 1, 0x7C, 0x31, 0x46A85A96, 0x43FA0000, 0x43944190, 0xC270, nullptr},
        /*Coral Earring*/
        {"F_SP111", 0, 1, 0x78, 0x3D, 0x46A81087, 0x43FA57D9, 0xC3BCEFAC, 0xC270, nullptr},
        /*Auru's Memo*/
        {"F_SP115", 0, 1, 0x7C, 0x90, 0xC7E2E398, 0xC6770800, 0x47656746, 0x143D, nullptr},
        /*Ashei's Sketch*/
        {"F_SP114", 0, 1, 0x7C, 0x91, 0x46F71891, 0xC6502A32, 0xC6348FA6, 0x86E6, nullptr},
        /*Horse Call*/
        {"R_SP109", 0, 1, 0x74, 0x84, 0x43CDBCA1, 0x0, 0xC31EEBF3, 0xBDBE, nullptr},
        /*Coro Key*/
        {"F_SP108", 4, 0, 0xF4, 0xFE, 0xC64BA600, 0x403DA884, 0xC663BC8E, 0x7A11, nullptr},
        /*Gate Keys*/
        {"F_SP121", 13, 1, 0x7C, 0xF3, 0xC7B4AC85, 0xC5B9FA52, 0x46E55D7A, 0x7E72, nullptr},
        /*Camp Key*/
        {"F_SP118", 1, 0, 0x7C, 0x20, 0x457F816B, 0x43820000, 0xC572F680, 0x0000, nullptr},
        /*Jovani Poe*/
        {"R_SP160", 5, 0, 0x7C, 0xE0, 0x45906531, 0xC2960000, 0x45229AEB, 0xC3C9, nullptr},
        /*Shadow Crystal*/
        {"F_SP117", 1, 0, 0x7C, 0x32, 0xC36EB7DC, 0x44CB2000, 0xC5964574, 0x0000, nullptr},
        /*Master Sword*/
        {"F_SP117", 1, 2, 0x78, 0x29, 0x4372ACFB, 0x44CB2000, 0xC5991A55, 0x0000, nullptr},
        /*Powered Dominion Rod*/
        {"R_SP209", 7, 1, 0x70, 0x4C, 0xC3DB30E9, 0xC4408000, 0xC523C471, 0x3CF0, nullptr},
        /*Light Master Sword*/
        {"D_MN08", 0, 1, 0x7C, 0x49, 0x436A0208, 0xC3480000, 0x4624E8AA, 0xFE4C, nullptr},
        /*Ending Blow*/
        {"F_SP108", 6, 2, 0xF0, 0xE1, 0xC71A5B41, 0x44898000, 0xC6E08544, 0x0000, nullptr},
        /*Shield Bash*/
        {"F_SP104", 1, 2, 0x6C, 0xE2, 0xC4BB1F1C, 0x438C0000, 0xC613CAAA, 0x4138, nullptr},
        /*Back Slice*/
        {"F_SP122", 8, 2, 0x78, 0xE3, 0xC78590C8, 0xC4834000, 0x45B7BC37, 0xC15B, nullptr},
        /*Helm Splitter*/
        {"F_SP122", 16, 2, 0x74, 0xE4, 0xC75990D6, 0xC5BEA000, 0x46C3B269, 0x0000, nullptr},
        /*Mortal Draw*/
        {"F_SP124", 0, 2, 0x78, 0xE5, 0xC53E0B78, 0x41C428F6, 0x46318C93, 0x4565, nullptr},
        /*Jump Strike*/
        {"F_SP111", 0, 2, 0x6C, 0xE6, 0x467D1395, 0x44034000, 0xC1F855A7, 0x3EE7, nullptr},
        /*Great Spin*/
        {"F_SP116", 1, 2, 0x78, 0xE7, 0x42204113, 0x44480000, 0xC61FB41E, 0x0000, nullptr},
        /*Youth's Scent*/
        {"F_SP121", 3, 0, 0x70, 0xB4, 0xC681A76B, 0xC5C99000, 0x4783ED29, 0xA6A9, nullptr},
        /*Ilia's Scent*/
        {"F_SP121", 9, 0, 0x6C, 0xB0, 0xC5DD1EF2, 0x4529ED9A, 0xC73F5AD1, 0x71A6, nullptr},
        /*Poe Scent*/
        {"D_MN10", 2, 0, 0x3C, 0xB2, 0xC1571A39, 0xC1200000, 0x4355109A, 0x0000, nullptr},
        /*Reekfish Scent*/
        {"F_SP113", 1, 0, 0x64, 0xB3, 0x456A7496, 0xC5BB109B, 0x464D4470, 0xD6E8, nullptr},
        /*Medicine Scent*/
        {"R_SP160", 2, 0, 0x74, 0xB5, 0x45EC0BF6, 0xC33E0000, 0xC4D9EA4C, 0xC26D, nullptr}};
};