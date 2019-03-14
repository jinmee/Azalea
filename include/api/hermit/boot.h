static const uint8_t boot_code[] = {
0xFA, 0x0F, 0x01, 0x16, 0x34, 0x80, 0x0F, 0x20,
0xC0, 0x0C, 0x01, 0x0F, 0x22, 0xC0, 0x66, 0xEA,
0x18, 0x80, 0x00, 0x00, 0x08, 0x00, 0x90, 0x90,
0x31, 0xC0, 0x66, 0xB8, 0x10, 0x00, 0x8E, 0xD8,
0x8E, 0xC0, 0x8E, 0xE0, 0x8E, 0xE8, 0x8E, 0xD0,
0xBC, 0x10, 0x82, 0x00, 0x00, 0xEB, 0x49, 0xEB,
0xFE, 0x90, 0x90, 0x90, 0x17, 0x00, 0x3A, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x9A,
0xCF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x92,
0xCF, 0x00, 0x90, 0x90, 0x17, 0x00, 0x5E, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x9A, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x90, 0x90,
0x9C, 0x58, 0x89, 0xC1, 0x35, 0x00, 0x00, 0x20,
0x00, 0x50, 0x9D, 0x9C, 0x58, 0x51, 0x9D, 0x31,
0xC8, 0x74, 0xFE, 0xB8, 0x00, 0x00, 0x00, 0x80,
0x0F, 0xA2, 0x3D, 0x01, 0x00, 0x00, 0x80, 0x72,
0xFE, 0xB8, 0x01, 0x00, 0x00, 0x80, 0x0F, 0xA2,
0xF7, 0xC2, 0x00, 0x00, 0x00, 0x20, 0x74, 0xFE,
0x0F, 0x20, 0xE0, 0x83, 0xC8, 0x20, 0x0F, 0x22,
0xE0, 0xB9, 0x80, 0x00, 0x00, 0xC0, 0x0F, 0x32,
0x0D, 0x00, 0x01, 0x00, 0x00, 0x0F, 0x30, 0xB8,
0xAF, 0xBE, 0xAD, 0xDE, 0x01, 0xE8, 0x83, 0xC8,
0x01, 0x0F, 0x22, 0xD8, 0x0F, 0x20, 0xE0, 0x25,
0xFF, 0xF9, 0xFB, 0xFF, 0x0D, 0x80, 0x00, 0x00,
0x00, 0x0F, 0x22, 0xE0, 0x0F, 0x20, 0xC0, 0x83,
0xE0, 0xFB, 0x83, 0xC8, 0x02, 0x25, 0xFF, 0xFF,
0xFF, 0xBF, 0x25, 0xFF, 0xFF, 0xFF, 0xDF, 0x25,
0xFF, 0xFF, 0xFE, 0xFF, 0x0D, 0x00, 0x00, 0x00,
0x80, 0x0F, 0x22, 0xC0, 0x0F, 0x01, 0x15, 0x54,
0x80, 0x00, 0x00, 0x66, 0xB8, 0x10, 0x00, 0x8E,
0xD0, 0x8E, 0xD8, 0x8E, 0xC0, 0xEA, 0x18, 0x81,
0x00, 0x00, 0x08, 0x00, 0x90, 0x90, 0x90, 0x90,
0x68, 0x00, 0x00, 0x80, 0x00, 0xC3, 0x90, 0x90,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
};
