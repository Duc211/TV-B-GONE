/*
 * WORLD_IR_CODES_NA.h
 * Extracted from WORLD_IR_CODES.h
 * NA codes only; indices are sequential from 000.
 */

#include "global.h"

const uint16_t code_na000Times[] = {
  60, 60,
  60, 2700,
  120, 60,
  240, 60,
};
const uint8_t code_na000Codes[] = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x10,
};
const struct IrCode code_na000Code = {
  freq_to_timerval(38400),
  26,             // # of pairs
  2,              // # of bits per index
  code_na000Times,
  code_na000Codes
};

const uint16_t code_na001Times[] = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
};
const uint8_t code_na001Codes[] = {
  0xD5,
  0x41,
  0x11,
  0x00,
  0x14,
  0x44,
  0x6D,
  0x54,
  0x11,
  0x10,
  0x01,
  0x44,
  0x45,
};
const struct IrCode code_na001Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na001Codes
};

const uint16_t code_na002Times[] = {
  42, 46,
  42, 133,
  42, 7519,
  347, 176,
  347, 177,
};
const uint8_t code_na002Codes[] = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x48,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x49,
  0x20,
  0x80,
};
const struct IrCode code_na002Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na002Times,
  code_na002Codes
};

const uint16_t code_na003Times[] = {
  26, 185,
  27, 80,
  27, 185,
  27, 4549,
};
const uint8_t code_na003Codes[] = {
  0x15,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x9B,
  0x95,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x99,
};
const struct IrCode code_na003Code = {
  freq_to_timerval(38610),
  64,		// # of pairs
  2,		// # of bits per index
  code_na003Times,
  code_na003Codes
};

const uint16_t code_na004Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na004Codes[] = {
  0xA0,
  0x00,
  0x01,
  0x04,
  0x92,
  0x48,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na004Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na004Codes
};

const uint16_t code_na005Times[] = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
};
const uint8_t code_na005Codes[] = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na005Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na005Codes
};

const uint16_t code_na006Times[] = {
  50, 62,
  50, 172,
  50, 4541,
  448, 466,
  450, 465,
};
const uint8_t code_na006Codes[] = {
  0x64,
  0x90,
  0x00,
  0x04,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x12,
  0x40,
  0x00,
  0x12,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0x90,
};
const struct IrCode code_na006Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na006Times,
  code_na006Codes
};

const uint16_t code_na007Times[] = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12107,
};
const uint8_t code_na007Codes[] = {
  0x09,
  0x94,
  0x53,
  0x29,
  0x94,
  0xD9,
  0x85,
  0x32,
  0x8A,
  0x65,
  0x32,
  0x9B,
  0x20,
};
const struct IrCode code_na007Code = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na007Times,
  code_na007Codes
};

const uint16_t code_na008Times[] = {
  56, 58,
  56, 170,
  56, 4011,
  898, 450,
  900, 449,
};
const uint8_t code_na008Codes[] = {
  0x64,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x82,
  0x01,
  0x04,
  0x10,
  0x48,
  0x2A,
  0x10,
  0x01,
  0x24,
  0x02,
  0x48,
  0x00,
  0x82,
  0x08,
  0x04,
  0x10,
  0x41,
  0x20,
  0x90,
};
const struct IrCode code_na008Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na008Times,
  code_na008Codes
};

const uint16_t code_na009Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na009Codes[] = {
  0x84,
  0x90,
  0x00,
  0x20,
  0x80,
  0x08,
  0x00,
  0x00,
  0x09,
  0x24,
  0x92,
  0x40,
  0x0A,
  0xBA,
  0x40,
};
const struct IrCode code_na009Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na009Codes
};

const uint16_t code_na010Times[] = {
  51, 55,
  51, 158,
  51, 2286,
  841, 419,
};
const uint8_t code_na010Codes[] = {
  0xD4,
  0x00,
  0x15,
  0x10,
  0x25,
  0x00,
  0x05,
  0x44,
  0x09,
  0x40,
  0x01,
  0x51,
  0x01,
};
const struct IrCode code_na010Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na010Times,
  code_na010Codes
};

const uint16_t code_na011Times[] = {
  55, 55,
  55, 172,
  55, 4039,
  55, 9348,
  56, 0,
  884, 442,
  885, 225,
};
const uint8_t code_na011Codes[] = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na011Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na011Times,
  code_na011Codes
};

const uint16_t code_na012Times[] = {
  81, 87,
  81, 254,
  81, 3280,
  331, 336,
  331, 337,
};
const uint8_t code_na012Codes[] = {
  0x64,
  0x12,
  0x08,
  0x24,
  0x00,
  0x08,
  0x20,
  0x10,
  0x09,
  0x2A,
  0x10,
  0x48,
  0x20,
  0x90,
  0x00,
  0x20,
  0x80,
  0x40,
  0x24,
  0x90,
};
const struct IrCode code_na012Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na012Times,
  code_na012Codes
};

const uint16_t code_na013Times[] = {
  53, 55,
  53, 167,
  53, 2304,
  53, 9369,
  893, 448,
  895, 447,
};
const uint8_t code_na013Codes[] = {
  0x80,
  0x12,
  0x40,
  0x04,
  0x00,
  0x09,
  0x00,
  0x12,
  0x41,
  0x24,
  0x82,
  0x01,
  0x00,
  0x10,
  0x48,
  0x24,
  0xAA,
  0xE8,
};
const struct IrCode code_na013Code = {
  freq_to_timerval(38462),
  48,		// # of pairs
  3,		// # of bits per index
  code_na013Times,
  code_na013Codes
};

const uint16_t code_na014Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na014Codes[] = {
  0xA0,
  0x00,
  0x09,
  0x04,
  0x92,
  0x40,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na014Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na014Times,
  code_na014Codes
};

const uint16_t code_na015Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na015Codes[] = {
  0xA0,
  0x80,
  0x01,
  0x04,
  0x12,
  0x48,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na015Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na015Times,
  code_na015Codes
};

const uint16_t code_na016Times[] = {
  28, 90,
  28, 211,
  28, 2507,
};
const uint8_t code_na016Codes[] = {
  0x54,
  0x04,
  0x10,
  0x00,
  0x95,
  0x01,
  0x04,
  0x00,
  0x10,
};
const struct IrCode code_na016Code = {
  freq_to_timerval(34483),
  34,		// # of pairs
  2,		// # of bits per index
  code_na016Times,
  code_na016Codes
};

const uint16_t code_na017Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na017Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na017Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na017Codes
};

const uint16_t code_na018Times[] = {
  51, 55,
  51, 161,
  51, 2566,
  849, 429,
  849, 430,
};
const uint8_t code_na018Codes[] = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x00,
  0x49,
  0x00,
  0x12,
  0x00,
  0x24,
  0xA8,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x10,
  0x01,
  0x24,
  0x00,
  0x48,
  0x00,
  0x92,
  0xA0,
  0x20,
  0x82,
  0x09,
  0x04,
  0x10,
  0x40,
  0x04,
  0x90,
  0x01,
  0x20,
  0x02,
  0x48,
};
const struct IrCode code_na018Code = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_na018Times,
  code_na018Codes
};

const uint16_t code_na019Times[] = {
  40, 42,
  40, 124,
  40, 4601,
  325, 163,
  326, 163,
};
const uint8_t code_na019Codes[] = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x10,
  0x00,
  0x20,
  0x80,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x80,
  0x40,
  0x00,
  0x82,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na019Code = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na019Times,
  code_na019Codes
};

const uint16_t code_na020Times[] = {
  60, 55,
  60, 163,
  60, 4099,
  60, 9698,
  61, 0,
  898, 461,
  900, 230,
};
const uint8_t code_na020Codes[] = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na020Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na020Times,
  code_na020Codes
};

const uint16_t code_na021Times[] = {
  48, 52,
  48, 160,
  48, 400,
  48, 2335,
  799, 400,
};
const uint8_t code_na021Codes[] = {
  0x80,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xC0,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x00,
};
const struct IrCode code_na021Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_na021Codes
};

const uint16_t code_na022Times[] = {
  53, 60,
  53, 175,
  53, 4463,
  53, 9453,
  892, 450,
  895, 225,
};
const uint8_t code_na022Codes[] = {
  0x80,
  0x02,
  0x40,
  0x00,
  0x02,
  0x40,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x48,
  0x0A,
  0xBA,
  0x00,
};
const struct IrCode code_na022Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na022Times,
  code_na022Codes
};

const uint16_t code_na023Times[] = {
  48, 52,
  48, 409,
  48, 504,
  48, 10461,
};
const uint8_t code_na023Codes[] = {
  0xA1,
  0x18,
  0x61,
  0xA1,
  0x18,
  0x7A,
  0x11,
  0x86,
  0x1A,
  0x11,
  0x86,
};
const struct IrCode code_na023Code = {
  freq_to_timerval(40000),
  44,		// # of pairs
  2,		// # of bits per index
  code_na023Times,
  code_na023Codes
};

const uint16_t code_na024Times[] = {
  58, 60,
  58, 2569,
  118, 60,
  237, 60,
  238, 60,
};
const uint8_t code_na024Codes[] = {
  0x69,
  0x24,
  0x10,
  0x40,
  0x03,
  0x12,
  0x48,
  0x20,
  0x80,
  0x00,
};
const struct IrCode code_na024Code = {
  freq_to_timerval(38462),
  26,		// # of pairs
  3,		// # of bits per index
  code_na024Times,
  code_na024Codes
};

const uint16_t code_na025Times[] = {
  84, 90,
  84, 264,
  84, 3470,
  346, 350,
  347, 350,
};
const uint8_t code_na025Codes[] = {
  0x64,
  0x92,
  0x49,
  0x00,
  0x00,
  0x00,
  0x00,
  0x02,
  0x49,
  0x2A,
  0x12,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x09,
  0x24,
  0x90,
};
const struct IrCode code_na025Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na025Times,
  code_na025Codes
};

const uint16_t code_na026Times[] = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12582,
};
const uint8_t code_na026Codes[] = {
  0x09,
  0x94,
  0x53,
  0x65,
  0x32,
  0x99,
  0x85,
  0x32,
  0x8A,
  0x6C,
  0xA6,
  0x53,
  0x20,
};
const struct IrCode code_na026Code = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na026Times,
  code_na026Codes
};

const uint16_t code_na027Times[] = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
};
const uint8_t code_na027Codes[] = {
  0xC5,
  0x41,
  0x11,
  0x10,
  0x14,
  0x44,
  0x6C,
  0x54,
  0x11,
  0x11,
  0x01,
  0x44,
  0x44,
};
const struct IrCode code_na027Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na027Times,
  code_na027Codes
};

const uint16_t code_na028Times[] = {
  118, 121,
  118, 271,
  118, 4750,
  258, 271,
};
const uint8_t code_na028Codes[] = {
  0xC4,
  0x45,
  0x14,
  0x04,
  0x6C,
  0x44,
  0x51,
  0x40,
  0x44,
};
const struct IrCode code_na028Code = {
  freq_to_timerval(38610),
  36,		// # of pairs
  2,		// # of bits per index
  code_na028Times,
  code_na028Codes
};

const uint16_t code_na029Times[] = {
  88, 90,
  88, 91,
  88, 181,
  177, 91,
  177, 8976,
};
const uint8_t code_na029Codes[] = {
  0x0C,
  0x92,
  0x53,
  0x46,
  0x16,
  0x49,
  0x29,
  0xA2,
  0xC0,
};
const struct IrCode code_na029Code = {
  freq_to_timerval(35842),
  22,		// # of pairs
  3,		// # of bits per index
  code_na029Times,
  code_na029Codes
};

const uint16_t code_na030Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na030Codes[] = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na030Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na030Times,
  code_na030Codes
};

const uint16_t code_na031Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8977,
  177, 90,
};
const uint8_t code_na031Codes[] = {
  0x06,
  0x12,
  0x49,
  0x46,
  0x32,
  0x61,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na031Code = {
  freq_to_timerval(35842),
  24,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na031Codes
};

const uint16_t code_na032Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na032Codes[] = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na032Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na032Times,
  code_na032Codes
};

const uint16_t code_na033Times[] = {
  40, 43,
  40, 122,
  40, 5297,
  334, 156,
  336, 155,
};
const uint8_t code_na033Codes[] = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x82,
  0x00,
  0x20,
  0x00,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x82,
  0x08,
  0x00,
  0x80,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na033Code = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na033Times,
  code_na033Codes
};

const uint16_t code_na034Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na034Codes[] = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na034Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na034Times,
  code_na034Codes
};

const uint16_t code_na035Times[] = {
  96, 93,
  97, 93,
  97, 287,
  97, 3431,
};
const uint8_t code_na035Codes[] = {
  0x16,
  0x66,
  0x5D,
  0x59,
  0x99,
  0x50,
};
const struct IrCode code_na035Code = {
  freq_to_timerval(41667),
  22,		// # of pairs
  2,		// # of bits per index
  code_na035Times,
  code_na035Codes
};

const uint16_t code_na036Times[] = {
  82, 581,
  84, 250,
  84, 580,
  85, 0,
};
const uint8_t code_na036Codes[] = {
  0x15,
  0x9A,
  0x9C,
};
const struct IrCode code_na036Code = {
  freq_to_timerval(37037),
  11,		// # of pairs
  2,		// # of bits per index
  code_na036Times,
  code_na036Codes
};

const uint16_t code_na037Times[] = {
  39, 263,
  164, 163,
  514, 164,
};
const uint8_t code_na037Codes[] = {
  0x80,
  0x45,
  0x00,
};
const struct IrCode code_na037Code = {
  freq_to_timerval(41667),
  11,		// # of pairs
  2,		// # of bits per index
  code_na037Times,
  code_na037Codes
};

const uint16_t code_na038Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na038Codes[] = {
  0xA4,
  0x10,
  0x40,
  0x00,
  0x82,
  0x09,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na038Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na038Times,
  code_na038Codes
};

const uint16_t code_na039Times[] = {
  113, 101,
  688, 2707,
};
const uint8_t code_na039Codes[] = {
  0x11,
};
const struct IrCode code_na039Code = {
  freq_to_timerval(40000),
  4,		// # of pairs
  2,		// # of bits per index
  code_na039Times,
  code_na039Codes
};

const uint16_t code_na040Times[] = {
  113, 101,
  113, 201,
  113, 2707,
};
const uint8_t code_na040Codes[] = {
  0x06,
  0x04,
};
const struct IrCode code_na040Code = {
  freq_to_timerval(40000),
  8,		// # of pairs
  2,		// # of bits per index
  code_na040Times,
  code_na040Codes
};

const uint16_t code_na041Times[] = {
  58, 62,
  58, 2746,
  117, 62,
  242, 62,
};
const uint8_t code_na041Codes[] = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x00,
};
const struct IrCode code_na041Code = {
  freq_to_timerval(76923),
  26,		// # of pairs
  2,		// # of bits per index
  code_na041Times,
  code_na041Codes
};

const uint16_t code_na042Times[] = {
  54, 65,
  54, 170,
  54, 4099,
  54, 8668,
  899, 226,
  899, 421,
};
const uint8_t code_na042Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na042Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na042Times,
  code_na042Codes
};

const uint16_t code_na043Times[] = {
  43, 120,
  43, 121,
  43, 3491,
  131, 45,
};
const uint8_t code_na043Codes[] = {
  0x15,
  0x75,
  0x56,
  0x55,
  0x75,
  0x54,
};
const struct IrCode code_na043Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na043Times,
  code_na043Codes
};

const uint16_t code_na044Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na044Codes[] = {
  0x84,
  0x90,
  0x00,
  0x00,
  0x02,
  0x49,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na044Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na044Codes
};

const uint16_t code_na045Times[] = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na045Codes[] = {
  0x80,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na045Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na045Times,
  code_na045Codes
};

const uint16_t code_na046Times[] = {
  51, 277,
  52, 53,
  52, 105,
  52, 277,
  52, 2527,
  52, 12809,
  103, 54,
};
const uint8_t code_na046Codes[] = {
  0x0B,
  0x12,
  0x63,
  0x44,
  0x92,
  0x6B,
  0x44,
  0x92,
  0x50,
};
const struct IrCode code_na046Code = {
  freq_to_timerval(29412),
  23,		// # of pairs
  3,		// # of bits per index
  code_na046Times,
  code_na046Codes
};

const uint16_t code_na047Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na047Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x24,
  0x92,
  0x09,
  0x20,
  0x00,
  0x40,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na047Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na047Times,
  code_na047Codes
};

const uint16_t code_na048Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na048Codes[] = {
  0x80,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na048Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na048Times,
  code_na048Codes
};

const uint16_t code_na049Times[] = {
  274, 854,
  274, 1986,
};
const uint8_t code_na049Codes[] = {
  0x14,
  0x11,
  0x40,
};
const struct IrCode code_na049Code = {
  freq_to_timerval(45455),
  11,		// # of pairs
  2,		// # of bits per index
  code_na049Times,
  code_na049Codes
};

const uint16_t code_na050Times[] = {
  80, 88,
  80, 254,
  80, 3750,
  359, 331,
};
const uint8_t code_na050Codes[] = {
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x52,
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x50,
};
const struct IrCode code_na050Code = {
  freq_to_timerval(55556),
  48,		// # of pairs
  2,		// # of bits per index
  code_na050Times,
  code_na050Codes
};

const uint16_t code_na051Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na051Codes[] = {
  0xA0,
  0x10,
  0x01,
  0x24,
  0x82,
  0x48,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na051Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na051Times,
  code_na051Codes
};

const uint16_t code_na052Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na052Codes[] = {
  0xA4,
  0x90,
  0x48,
  0x00,
  0x02,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na052Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na052Times,
  code_na052Codes
};

const uint16_t code_na053Times[] = {
  51, 232,
  51, 512,
  51, 792,
  51, 2883,
};
const uint8_t code_na053Codes[] = {
  0x22,
  0x21,
  0x40,
  0x1C,
  0x88,
  0x85,
  0x00,
  0x40,
};
const struct IrCode code_na053Code = {
  freq_to_timerval(55556),
  30,		// # of pairs
  2,		// # of bits per index
  code_na053Times,
  code_na053Codes
};

const uint16_t code_na054Times[] = {
  51, 232,
  51, 512,
  51, 792,
  51, 2883,
};
const uint8_t code_na054Codes[] = {
  0x22,
  0x20,
  0x15,
  0x72,
  0x22,
  0x01,
  0x54,
};
const struct IrCode code_na054Code = {
  freq_to_timerval(55556),
  28,		// # of pairs
  2,		// # of bits per index
  code_na054Times,
  code_na054Codes
};

const uint16_t code_na055Times[] = {
  3, 10,
  3, 20,
  3, 30,
  3, 12778,
};
const uint8_t code_na055Codes[] = {
  0x81,
  0x51,
  0x14,
  0xB8,
  0x15,
  0x11,
  0x44,
};
const struct IrCode code_na055Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na055Times,
  code_na055Codes
};

const uint16_t code_na056Times[] = {
  55, 193,
  57, 192,
  57, 384,
  58, 0,
};
const uint8_t code_na056Codes[] = {
  0x2A,
  0x57,
};
const struct IrCode code_na056Code = {
  freq_to_timerval(37175),
  8,		// # of pairs
  2,		// # of bits per index
  code_na056Times,
  code_na056Codes
};

const uint16_t code_na057Times[] = {
  45, 148,
  46, 148,
  46, 351,
  46, 2781,
};
const uint8_t code_na057Codes[] = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_na057Code = {
  freq_to_timerval(40000),
  14,		// # of pairs
  2,		// # of bits per index
  code_na057Times,
  code_na057Codes
};

const uint16_t code_na058Times[] = {
  22, 101,
  22, 219,
  23, 101,
  23, 219,
  31, 218,
};
const uint8_t code_na058Codes[] = {
  0x8D,
  0xA4,
  0x08,
  0x04,
  0x04,
  0x92,
  0x4C,
};
const struct IrCode code_na058Code = {
  freq_to_timerval(33333),
  18,		// # of pairs
  3,		// # of bits per index
  code_na058Times,
  code_na058Codes
};

const uint16_t code_na059Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na059Codes[] = {
  0xA4,
  0x12,
  0x09,
  0x00,
  0x80,
  0x40,
  0x20,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na059Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na059Times,
  code_na059Codes
};

const uint16_t code_na060Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na060Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x04,
  0x92,
  0x41,
  0x24,
  0x00,
  0x40,
  0x00,
  0x92,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na060Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na060Times,
  code_na060Codes
};

const uint16_t code_na061Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na061Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x24,
  0x92,
  0x41,
  0x04,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na061Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na061Times,
  code_na061Codes
};

const uint16_t code_na062Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na062Codes[] = {
  0xA0,
  0x02,
  0x08,
  0x04,
  0x90,
  0x41,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na062Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na062Times,
  code_na062Codes
};

const uint16_t code_na063Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na063Codes[] = {
  0xA4,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na063Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na063Times,
  code_na063Codes
};

const uint16_t code_na064Times[] = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
};
const uint8_t code_na064Codes[] = {
  0xC0,
  0x01,
  0x51,
  0x55,
  0x54,
  0x04,
  0x2C,
  0x00,
  0x15,
  0x15,
  0x55,
  0x40,
  0x40,
};
const struct IrCode code_na064Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na064Times,
  code_na064Codes
};

const uint16_t code_na065Times[] = {
  48, 98,
  48, 197,
  98, 846,
  395, 392,
  1953, 392,
};
const uint8_t code_na065Codes[] = {
  0x84,
  0x92,
  0x01,
  0x24,
  0x12,
  0x00,
  0x04,
  0x80,
  0x08,
  0x09,
  0x92,
  0x48,
  0x04,
  0x90,
  0x48,
  0x00,
  0x12,
  0x00,
  0x20,
  0x26,
  0x49,
  0x20,
  0x12,
  0x41,
  0x20,
  0x00,
  0x48,
  0x00,
  0x80,
  0x80,
};
const struct IrCode code_na065Code = {
  freq_to_timerval(59172),
  78,		// # of pairs
  3,		// # of bits per index
  code_na065Times,
  code_na065Codes
};

const uint16_t code_na066Times[] = {
  38, 276,
  165, 154,
  415, 155,
  742, 154,
};
const uint8_t code_na066Codes[] = {
  0xC0,
  0x45,
  0x02,
  0x01,
  0x14,
  0x08,
  0x04,
  0x50,
  0x00,
};
const struct IrCode code_na066Code = {
  freq_to_timerval(38462),
  33,		// # of pairs
  2,		// # of bits per index
  code_na066Times,
  code_na066Codes
};

const uint16_t code_na067Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na067Codes[] = {
  0x80,
  0x02,
  0x49,
  0x24,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na067Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na067Times,
  code_na067Codes
};

const uint16_t code_na068Times[] = {
  43, 121,
  43, 9437,
  130, 45,
  131, 45,
};
const uint8_t code_na068Codes[] = {
  0x8C,
  0x30,
  0x0D,
  0xCC,
  0x30,
  0x0C,
};
const struct IrCode code_na068Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na068Times,
  code_na068Codes
};

const uint16_t code_na069Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na069Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na069Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na069Times,
  code_na069Codes
};

const uint16_t code_na070Times[] = {
  27, 76,
  27, 182,
  27, 183,
  27, 3199,
};
const uint8_t code_na070Codes[] = {
  0x40,
  0x02,
  0x08,
  0xA2,
  0xE0,
  0x00,
  0x82,
  0x28,
  0x40,
};
const struct IrCode code_na070Code = {
  freq_to_timerval(38462),
  33,		// # of pairs
  2,		// # of bits per index
  code_na070Times,
  code_na070Codes
};

const uint16_t code_na071Times[] = {
  37, 181,
  37, 272,
};
const uint8_t code_na071Codes[] = {
  0x11,
  0x40,
};
const struct IrCode code_na071Code = {
  freq_to_timerval(55556),
  8,		// # of pairs
  2,		// # of bits per index
  code_na071Times,
  code_na071Codes
};

const uint16_t code_na072Times[] = {
  54, 65,
  54, 170,
  54, 4099,
  54, 8668,
  899, 226,
  899, 421,
};
const uint8_t code_na072Codes[] = {
  0xA0,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x00,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na072Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na072Times,
  code_na072Codes
};

const uint16_t code_na073Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na073Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x00,
  0x00,
  0x24,
  0x92,
  0x49,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na073Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na073Times,
  code_na073Codes
};

const uint16_t code_na074Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na074Codes[] = {
  0xA4,
  0x00,
  0x41,
  0x00,
  0x92,
  0x08,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na074Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na074Times,
  code_na074Codes
};

const uint16_t code_na075Times[] = {
  51, 98,
  51, 194,
  102, 931,
  390, 390,
  390, 391,
};
const uint8_t code_na075Codes[] = {
  0x60,
  0x00,
  0x01,
  0x04,
  0x10,
  0x49,
  0x24,
  0x82,
  0x08,
  0x2A,
  0x00,
  0x00,
  0x04,
  0x10,
  0x41,
  0x24,
  0x92,
  0x08,
  0x20,
  0xA0,
};
const struct IrCode code_na075Code = {
  freq_to_timerval(41667),
  52,		// # of pairs
  3,		// # of bits per index
  code_na075Times,
  code_na075Codes
};

const uint16_t code_na076Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na076Codes[] = {
  0xA0,
  0x92,
  0x09,
  0x04,
  0x00,
  0x40,
  0x20,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na076Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na076Times,
  code_na076Codes
};

const uint16_t code_na077Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8977,
  177, 90,
};
const uint8_t code_na077Codes[] = {
  0x10,
  0xA2,
  0x62,
  0x31,
  0x98,
  0x51,
  0x31,
  0x18,
  0x00,
};
const struct IrCode code_na077Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na077Times,
  code_na077Codes
};

const uint16_t code_na078Times[] = {
  40, 275,
  160, 154,
  480, 155,
};
const uint8_t code_na078Codes[] = {
  0x80,
  0x45,
  0x04,
  0x01,
  0x14,
  0x10,
  0x04,
  0x50,
  0x40,
};
const struct IrCode code_na078Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na078Times,
  code_na078Codes
};

const uint16_t code_na079Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na079Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x90,
  0x08,
  0x20,
  0x02,
  0x41,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na079Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na079Times,
  code_na079Codes
};

const uint16_t code_na080Times[] = {
  3, 10,
  3, 20,
  3, 30,
  3, 12778,
};
const uint8_t code_na080Codes[] = {
  0x81,
  0x50,
  0x40,
  0xB8,
  0x15,
  0x04,
  0x08,
};
const struct IrCode code_na080Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na080Times,
  code_na080Codes
};

const uint16_t code_na081Times[] = {
  48, 52,
  48, 409,
  48, 504,
  48, 9978,
};
const uint8_t code_na081Codes[] = {
  0x18,
  0x46,
  0x18,
  0x68,
  0x47,
  0x18,
  0x46,
  0x18,
  0x68,
  0x44,
};
const struct IrCode code_na081Code = {
  freq_to_timerval(40000),
  40,		// # of pairs
  2,		// # of bits per index
  code_na081Times,
  code_na081Codes
};

const uint16_t code_na082Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8888,
  177, 90,
  177, 179,
};
const uint8_t code_na082Codes[] = {
  0x0A,
  0x12,
  0x49,
  0x2A,
  0xB2,
  0xA1,
  0x24,
  0x92,
  0xA8,
};
const struct IrCode code_na082Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na082Times,
  code_na082Codes
};

const uint16_t code_na083Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8977,
  177, 90,
};
const uint8_t code_na083Codes[] = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na083Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na083Times,
  code_na083Codes
};

const uint16_t code_na084Times[] = {
  41, 43,
  41, 128,
  41, 7476,
  336, 171,
  338, 169,
};
const uint8_t code_na084Codes[] = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x40,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x08,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x01,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x48,
  0x20,
  0x80,
};
const struct IrCode code_na084Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na084Times,
  code_na084Codes
};

const uint16_t code_na085Times[] = {
  55, 60,
  55, 165,
  55, 2284,
  445, 437,
  448, 436,
};
const uint8_t code_na085Codes[] = {
  0x64,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x80,
  0xA1,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x10,
};
const struct IrCode code_na085Code = {
  freq_to_timerval(38462),
  44,		// # of pairs
  3,		// # of bits per index
  code_na085Times,
  code_na085Codes
};

const uint16_t code_na086Times[] = {
  42, 46,
  42, 126,
  42, 6989,
  347, 176,
  347, 177,
};
const uint8_t code_na086Codes[] = {
  0x60,
  0x82,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x92,
  0x00,
  0x20,
  0x80,
  0x40,
  0x00,
  0x90,
  0x40,
  0x04,
  0x00,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x82,
  0x09,
  0x04,
  0x12,
  0x48,
  0x00,
  0x82,
  0x01,
  0x00,
  0x02,
  0x41,
  0x00,
  0x10,
  0x01,
  0x04,
  0x80,
};
const struct IrCode code_na086Code = {
  freq_to_timerval(37175),
  100,		// # of pairs
  3,		// # of bits per index
  code_na086Times,
  code_na086Codes
};

const uint16_t code_na087Times[] = {
  56, 69,
  56, 174,
  56, 4165,
  56, 9585,
  880, 222,
  880, 435,
};
const uint8_t code_na087Codes[] = {
  0xA0,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na087Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na087Times,
  code_na087Codes
};

const uint16_t code_na088Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na088Codes[] = {
  0x80,
  0x00,
  0x40,
  0x04,
  0x12,
  0x08,
  0x04,
  0x92,
  0x40,
  0x00,
  0x00,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na088Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na088Times,
  code_na088Codes
};

const uint16_t code_na089Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na089Codes[] = {
  0xA0,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na089Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na089Times,
  code_na089Codes
};

const uint16_t code_na090Times[] = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
  177, 181,
};
const uint8_t code_na090Codes[] = {
  0x10,
  0xAB,
  0x11,
  0x8C,
  0xC2,
  0xAC,
  0x46,
  0x00,
};
const struct IrCode code_na090Code = {
  freq_to_timerval(35714),
  20,		// # of pairs
  3,		// # of bits per index
  code_na090Times,
  code_na090Codes
};

const uint16_t code_na091Times[] = {
  48, 100,
  48, 200,
  48, 1050,
  400, 400,
};
const uint8_t code_na091Codes[] = {
  0xD5,
  0x41,
  0x51,
  0x40,
  0x14,
  0x04,
  0x2D,
  0x54,
  0x15,
  0x14,
  0x01,
  0x40,
  0x41,
};
const struct IrCode code_na091Code = {
  freq_to_timerval(58824),
  52,		// # of pairs
  2,		// # of bits per index
  code_na091Times,
  code_na091Codes
};

const uint16_t code_na092Times[] = {
  54, 56,
  54, 170,
  54, 4927,
  451, 447,
};
const uint8_t code_na092Codes[] = {
  0xD1,
  0x00,
  0x11,
  0x00,
  0x04,
  0x00,
  0x11,
  0x55,
  0x6D,
  0x10,
  0x01,
  0x10,
  0x00,
  0x40,
  0x01,
  0x15,
  0x55,
};
const struct IrCode code_na092Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  2,		// # of bits per index
  code_na092Times,
  code_na092Codes
};

const uint16_t code_na093Times[] = {
  55, 57,
  55, 167,
  55, 4400,
  895, 448,
  897, 447,
};
const uint8_t code_na093Codes[] = {
  0x60,
  0x90,
  0x00,
  0x20,
  0x80,
  0x00,
  0x04,
  0x02,
  0x01,
  0x00,
  0x90,
  0x48,
  0x2A,
  0x02,
  0x40,
  0x00,
  0x82,
  0x00,
  0x00,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na093Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na093Times,
  code_na093Codes
};

const uint16_t code_na094Times[] = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
};
const uint8_t code_na094Codes[] = {
  0x10,
  0x94,
  0x62,
  0x31,
  0x98,
  0x4A,
  0x31,
  0x18,
  0x00,
};
const struct IrCode code_na094Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na094Times,
  code_na094Codes
};

const uint16_t code_na095Times[] = {
  56, 58,
  56, 174,
  56, 4549,
  56, 9448,
  440, 446,
};
const uint8_t code_na095Codes[] = {
  0x80,
  0x02,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x17,
  0x08,
};
const struct IrCode code_na095Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na095Times,
  code_na095Codes
};

const uint16_t code_na096Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na096Codes[] = {
  0x80,
  0x80,
  0x40,
  0x04,
  0x92,
  0x49,
  0x20,
  0x92,
  0x00,
  0x04,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na096Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na096Times,
  code_na096Codes
};

const uint16_t code_na097Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na097Codes[] = {
  0x84,
  0x80,
  0x00,
  0x24,
  0x10,
  0x41,
  0x00,
  0x80,
  0x01,
  0x24,
  0x12,
  0x48,
  0x0A,
  0xBA,
  0x40,
};
const struct IrCode code_na097Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na097Times,
  code_na097Codes
};

const uint16_t code_na098Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na098Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x00,
  0x41,
  0x00,
  0x92,
  0x08,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na098Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na098Times,
  code_na098Codes
};

const uint16_t code_na099Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na099Codes[] = {
  0x80,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na099Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na099Times,
  code_na099Codes
};

const uint16_t code_na100Times[] = {
  43, 171,
  45, 60,
  45, 170,
  54, 2301,
};
const uint8_t code_na100Codes[] = {
  0x29,
  0x59,
  0x65,
  0x55,
  0xEA,
  0x56,
  0x59,
  0x55,
  0x70,
};
const struct IrCode code_na100Code = {
  freq_to_timerval(35842),
  34,		// # of pairs
  2,		// # of bits per index
  code_na100Times,
  code_na100Codes
};

const uint16_t code_na101Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na101Codes[] = {
  0xA0,
  0x00,
  0x09,
  0x04,
  0x92,
  0x40,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na101Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na101Times,
  code_na101Codes
};

const uint16_t code_na102Times[] = {
  86, 87,
  86, 258,
  86, 3338,
  346, 348,
  348, 347,
};
const uint8_t code_na102Codes[] = {
  0x64,
  0x02,
  0x08,
  0x00,
  0x02,
  0x09,
  0x04,
  0x12,
  0x49,
  0x0A,
  0x10,
  0x08,
  0x20,
  0x00,
  0x08,
  0x24,
  0x10,
  0x49,
  0x24,
  0x10,
};
const struct IrCode code_na102Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na102Times,
  code_na102Codes
};

const uint16_t code_na103Times[] = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na103Codes[] = {
  0x80,
  0x02,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na103Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na103Times,
  code_na103Codes
};

const uint16_t code_na104Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na104Codes[] = {
  0xA4,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na104Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na104Times,
  code_na104Codes
};

const uint16_t code_na105Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na105Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x12,
  0x49,
  0x04,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x0A,
  0x38,
  0x40,
};
const struct IrCode code_na105Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na105Times,
  code_na105Codes
};

const uint16_t code_na106Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na106Codes[] = {
  0x80,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x24,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na106Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na106Times,
  code_na106Codes
};

const uint16_t code_na107Times[] = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na107Codes[] = {
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na107Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na107Times,
  code_na107Codes
};

const uint16_t code_na108Times[] = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na108Codes[] = {
  0x80,
  0x90,
  0x40,
  0x00,
  0x90,
  0x40,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na108Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na108Times,
  code_na108Codes
};

const uint16_t code_na109Times[] = {
  58, 61,
  58, 211,
  58, 9582,
  73, 4164,
  883, 211,
  1050, 494,
};
const uint8_t code_na109Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x24,
  0x92,
  0x41,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2E,
  0x28,
  0x00,
};
const struct IrCode code_na109Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na109Times,
  code_na109Codes
};

const uint16_t code_na110Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na110Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x12,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na110Code = {
  freq_to_timerval(40161),
  38,		// # of pairs
  3,		// # of bits per index
  code_na110Times,
  code_na110Codes
};

const uint16_t code_na111Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na111Codes[] = {
  0x84,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na111Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na111Times,
  code_na111Codes
};

const uint16_t code_na112Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na112Codes[] = {
  0xA4,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na112Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na112Times,
  code_na112Codes
};

const uint16_t code_na113Times[] = {
  56, 54,
  56, 166,
  56, 3945,
  896, 442,
  896, 443,
};
const uint8_t code_na113Codes[] = {
  0x60,
  0x00,
  0x00,
  0x20,
  0x02,
  0x09,
  0x04,
  0x02,
  0x01,
  0x00,
  0x90,
  0x48,
  0x2A,
  0x00,
  0x00,
  0x00,
  0x80,
  0x08,
  0x24,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na113Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na113Times,
  code_na113Codes
};

const uint16_t code_na114Times[] = {
  44, 50,
  44, 147,
  44, 447,
  44, 2236,
  791, 398,
  793, 397,
};
const uint8_t code_na114Codes[] = {
  0x84,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xD2,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x40,
};
const struct IrCode code_na114Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na114Times,
  code_na114Codes
};

const uint16_t code_na115Times[] = {
  81, 86,
  81, 296,
  81, 3349,
  328, 331,
  329, 331,
};
const uint8_t code_na115Codes[] = {
  0x60,
  0x82,
  0x00,
  0x20,
  0x80,
  0x41,
  0x04,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x00,
  0x82,
  0x01,
  0x04,
  0x12,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_na115Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na115Times,
  code_na115Codes
};

const uint16_t code_na116Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na116Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x24,
  0x00,
  0x40,
  0x00,
  0x92,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na116Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na116Times,
  code_na116Codes
};

const uint16_t code_na117Times[] = {
  49, 54,
  49, 158,
  49, 420,
  49, 2446,
  819, 420,
  821, 419,
};
const uint8_t code_na117Codes[] = {
  0x84,
  0x00,
  0x00,
  0x08,
  0x12,
  0x40,
  0x01,
  0xD2,
  0x00,
  0x00,
  0x04,
  0x09,
  0x20,
  0x00,
  0x40,
};
const struct IrCode code_na117Code = {
  freq_to_timerval(41667),
  38,		// # of pairs
  3,		// # of bits per index
  code_na117Times,
  code_na117Codes
};

const uint16_t code_na118Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na118Codes[] = {
  0x84,
  0x90,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na118Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na118Times,
  code_na118Codes
};

const uint16_t code_na119Times[] = {
  55, 63,
  55, 171,
  55, 4094,
  55, 9508,
  881, 219,
  881, 438,
};
const uint8_t code_na119Codes[] = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na119Code = {
  freq_to_timerval(55556),
  38,		// # of pairs
  3,		// # of bits per index
  code_na119Times,
  code_na119Codes
};

const uint16_t code_na120Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na120Codes[] = {
  0xA0,
  0x12,
  0x00,
  0x04,
  0x80,
  0x49,
  0x24,
  0x92,
  0x40,
  0x00,
  0x00,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na120Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na120Times,
  code_na120Codes
};

const uint16_t code_na121Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na121Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na121Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na121Times,
  code_na121Codes
};

const uint16_t code_na122Times[] = {
  80, 95,
  80, 249,
  80, 3867,
  81, 0,
  329, 322,
};
const uint8_t code_na122Codes[] = {
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x90,
  0x0A,
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x90,
  0x0B,
};
const struct IrCode code_na122Code = {
  freq_to_timerval(52632),
  48,		// # of pairs
  3,		// # of bits per index
  code_na122Times,
  code_na122Codes
};

const uint16_t code_na123Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na123Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na123Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na123Times,
  code_na123Codes
};

const uint16_t code_na124Times[] = {
  54, 56,
  54, 151,
  54, 4092,
  54, 8677,
  900, 421,
  901, 226,
};
const uint8_t code_na124Codes[] = {
  0x80,
  0x00,
  0x48,
  0x04,
  0x92,
  0x01,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na124Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na124Times,
  code_na124Codes
};

const uint16_t code_na125Times[] = {
  55, 63,
  55, 171,
  55, 4094,
  55, 9508,
  881, 219,
  881, 438,
};
const uint8_t code_na125Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na125Code = {
  freq_to_timerval(55556),
  38,		// # of pairs
  3,		// # of bits per index
  code_na125Times,
  code_na125Codes
};

const uint16_t code_na126Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na126Codes[] = {
  0xA4,
  0x10,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na126Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na126Times,
  code_na126Codes
};

const uint16_t code_na127Times[] = {
  114, 100,
  115, 100,
  115, 200,
  115, 2706,
};
const uint8_t code_na127Codes[] = {
  0x1B,
  0x59,
};
const struct IrCode code_na127Code = {
  freq_to_timerval(25641),
  8,		// # of pairs
  2,		// # of bits per index
  code_na127Times,
  code_na127Codes
};

const uint16_t code_na128Times[] = {
  86, 87,
  86, 258,
  86, 3338,
  346, 348,
  348, 347,
};
const uint8_t code_na128Codes[] = {
  0x60,
  0x02,
  0x08,
  0x00,
  0x02,
  0x49,
  0x04,
  0x12,
  0x49,
  0x0A,
  0x00,
  0x08,
  0x20,
  0x00,
  0x09,
  0x24,
  0x10,
  0x49,
  0x24,
  0x00,
};
const struct IrCode code_na128Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na128Times,
  code_na128Codes
};

const uint16_t code_na129Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na129Codes[] = {
  0xA4,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na129Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na129Times,
  code_na129Codes
};

const uint16_t code_na130Times[] = {
  88, 90,
  88, 258,
  88, 2247,
  358, 349,
  358, 350,
};
const uint8_t code_na130Codes[] = {
  0x64,
  0x00,
  0x08,
  0x24,
  0x82,
  0x09,
  0x24,
  0x10,
  0x01,
  0x0A,
  0x10,
  0x00,
  0x20,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x04,
  0x10,
};
const struct IrCode code_na130Code = {
  freq_to_timerval(37037),
  52,		// # of pairs
  3,		// # of bits per index
  code_na130Times,
  code_na130Codes
};

const uint16_t code_na131Times[] = {
  54, 65,
  54, 170,
  54, 4099,
  54, 8668,
  899, 226,
  899, 421,
};
const uint8_t code_na131Codes[] = {
  0xA0,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x24,
  0x82,
  0x40,
  0x00,
  0x10,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na131Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na131Times,
  code_na131Codes
};

const uint16_t code_na132Times[] = {
  28, 106,
  28, 238,
  28, 370,
  28, 1173,
};
const uint8_t code_na132Codes[] = {
  0x22,
  0x20,
  0x00,
  0x17,
  0x22,
  0x20,
  0x00,
  0x14,
};
const struct IrCode code_na132Code = {
  freq_to_timerval(83333),
  32,		// # of pairs
  2,		// # of bits per index
  code_na132Times,
  code_na132Codes
};

const uint16_t code_na133Times[] = {
  13, 741,
  15, 489,
  15, 740,
  17, 4641,
  18, 0,
};
const uint8_t code_na133Codes[] = {
  0x09,
  0x24,
  0x49,
  0x48,
  0xB4,
  0x92,
  0x44,
  0x94,
  0x8C,
};
const struct IrCode code_na133Code = {
  freq_to_timerval(41667),
  24,		// # of pairs
  3,		// # of bits per index
  code_na133Times,
  code_na133Codes
};

const uint16_t code_na134Times[] = {
  56, 54,
  56, 166,
  56, 3945,
  896, 442,
  896, 443,
};
const uint8_t code_na134Codes[] = {
  0x60,
  0x90,
  0x00,
  0x24,
  0x10,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x02,
  0x40,
  0x00,
  0x90,
  0x40,
  0x00,
  0x12,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x80,
};
const struct IrCode code_na134Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na134Times,
  code_na134Codes
};

const uint16_t code_na135Times[] = {
  53, 59,
  53, 171,
  53, 2301,
  892, 450,
  895, 448,
};
const uint8_t code_na135Codes[] = {
  0x60,
  0x12,
  0x49,
  0x00,
  0x00,
  0x09,
  0x00,
  0x00,
  0x49,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0xA8,
  0x01,
  0x24,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x48,
};
const struct IrCode code_na135Code = {
  freq_to_timerval(38462),
  88,		// # of pairs
  3,		// # of bits per index
  code_na135Times,
  code_na135Codes
};

const uint16_t code_na136Times[] = {
  53, 59,
  53, 171,
  53, 2301,
  55, 0,
  892, 450,
  895, 448,
};
const uint8_t code_na136Codes[] = {
  0x84,
  0x82,
  0x49,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x49,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0xAA,
  0x48,
  0x24,
  0x90,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x4B,
};
const struct IrCode code_na136Code = {
  freq_to_timerval(38610),
  88,		// # of pairs
  3,		// # of bits per index
  code_na136Times,
  code_na136Codes
};

const IrCode* const NApowerCodes[] = {
  &code_na000Code,
  &code_na001Code,
  &code_na002Code,
  &code_na003Code,
  &code_na004Code,
  &code_na005Code,
  &code_na006Code,
  &code_na007Code,
  &code_na008Code,
  &code_na009Code,
  &code_na010Code,
  &code_na011Code,
  &code_na012Code,
  &code_na013Code,
  &code_na014Code,
  &code_na015Code,
  &code_na016Code,
  &code_na017Code,
  &code_na018Code,
  &code_na019Code,
  &code_na020Code,
  &code_na021Code,
  &code_na022Code,
  &code_na023Code,
  &code_na024Code,
  &code_na025Code,
  &code_na026Code,
  &code_na027Code,
  &code_na028Code,
  &code_na029Code,
  &code_na030Code,
  &code_na031Code,
  &code_na032Code,
  &code_na033Code,
  &code_na034Code,
  &code_na035Code,
  &code_na036Code,
  &code_na037Code,
  &code_na038Code,
  &code_na039Code,
  &code_na040Code,
  &code_na041Code,
  &code_na042Code,
  &code_na043Code,
  &code_na044Code,
  &code_na045Code,
  &code_na046Code,
  &code_na047Code,
  &code_na048Code,
  &code_na049Code,
  &code_na050Code,
  &code_na051Code,
  &code_na052Code,
  &code_na053Code,
  &code_na054Code,
  &code_na055Code,
  &code_na056Code,
  &code_na057Code,
  &code_na058Code,
  &code_na059Code,
  &code_na060Code,
  &code_na061Code,
  &code_na062Code,
  &code_na063Code,
  &code_na064Code,
  &code_na065Code,
  &code_na066Code,
  &code_na067Code,
  &code_na068Code,
  &code_na069Code,
  &code_na070Code,
  &code_na071Code,
  &code_na072Code,
  &code_na073Code,
  &code_na074Code,
  &code_na075Code,
  &code_na076Code,
  &code_na077Code,
  &code_na078Code,
  &code_na079Code,
  &code_na080Code,
  &code_na081Code,
  &code_na082Code,
  &code_na083Code,
  &code_na084Code,
  &code_na085Code,
  &code_na086Code,
  &code_na087Code,
  &code_na088Code,
  &code_na089Code,
  &code_na090Code,
  &code_na091Code,
  &code_na092Code,
  &code_na093Code,
  &code_na094Code,
  &code_na095Code,
  &code_na096Code,
  &code_na097Code,
  &code_na098Code,
  &code_na099Code,
  &code_na100Code,
  &code_na101Code,
  &code_na102Code,
  &code_na103Code,
  &code_na104Code,
  &code_na105Code,
  &code_na106Code,
  &code_na107Code,
  &code_na108Code,
  &code_na109Code,
  &code_na110Code,
  &code_na111Code,
  &code_na112Code,
  &code_na113Code,
  &code_na114Code,
  &code_na115Code,
  &code_na116Code,
  &code_na117Code,
  &code_na118Code,
  &code_na119Code,
  &code_na120Code,
  &code_na121Code,
  &code_na122Code,
  &code_na123Code,
  &code_na124Code,
  &code_na125Code,
  &code_na126Code,
  &code_na127Code,
  &code_na128Code,
  &code_na129Code,
  &code_na130Code,
  &code_na131Code,
  &code_na132Code,
  &code_na133Code,
  &code_na134Code,
  &code_na135Code,
  &code_na136Code,
};

uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
