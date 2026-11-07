#include "config.h"

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

/* Duplicate timing table, same as na004 !
 const uint16_t code_na014Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
  code_na014Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na015Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
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

/* Duplicate timing table, same as na001 !
 const uint16_t code_na027Times[] = {
 	50, 100,
 	50, 200,
 	50, 800,
 	400, 400,
 };
 */
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
  code_na001Times,
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

/* Duplicate timing table, same as na009 !
 const uint16_t code_na030Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
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

/* Duplicate timing table, same as na009 !
 const uint16_t code_na032Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
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

/* Duplicate timing table, same as na004 !
 const uint16_t code_na034Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na038Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na047Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na047Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na048Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
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
  code_na044Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na051Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na051Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na052Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na053 !
 const uint16_t code_na054Times[] = {
 	51, 232,
 	51, 512,
 	51, 792,
 	51, 2883,
 };
 */
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
  code_na053Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na059Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na059Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na060Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na060Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na061Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na061Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na062Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na062Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na063Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na063Codes
};

/* Duplicate timing table, same as na001 !
 const uint16_t code_na064Times[] = {
 	50, 100,
 	50, 200,
 	50, 800,
 	400, 400,
 };
 */
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
  code_na001Times,
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

/* Duplicate timing table, same as na044 !
 const uint16_t code_na067Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
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
  code_na044Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na069Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na042 !
 const uint16_t code_na072Times[] = {
 	54, 65,
 	54, 170,
 	54, 4099,
 	54, 8668,
 	899, 226,
 	899, 421,
 };
 */
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
  code_na042Times,
  code_na072Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na073Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na073Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na074Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na076Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na076Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_na077Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
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
  code_na031Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na079Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na079Codes
};

/* Duplicate timing table, same as na055 !
 const uint16_t code_na080Times[] = {
 	3, 10,
 	3, 20,
 	3, 30,
 	3, 12778,
 };
 */
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
  code_na055Times,
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

/* Duplicate timing table, same as na031 !
 const uint16_t code_na083Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
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
  code_na031Times,
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

/* Duplicate timing table, same as na009 !
 const uint16_t code_na088Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
  code_na088Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na089Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
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

/* Duplicate timing table, same as na005 !
 const uint16_t code_na094Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
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
  code_na005Times,
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

/* Duplicate timing table, same as na009 !
 const uint16_t code_na096Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
  code_na096Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na097Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
  code_na097Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na098Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
  code_na098Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na099Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
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
  code_na009Times,
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

/* Duplicate timing table, same as na004 !
 const uint16_t code_na101Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
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

/* Duplicate timing table, same as na045 !
 const uint16_t code_na103Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
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
  code_na045Times,
  code_na103Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na104Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na104Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na105Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na105Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na106Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
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
  code_na044Times,
  code_na106Codes
};

/* Duplicate timing table, same as na045 !
 const uint16_t code_na107Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
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
  code_na045Times,
  code_na107Codes
};

/* Duplicate timing table, same as na045 !
 const uint16_t code_na108Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
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
  code_na045Times,
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


/* Duplicate timing table, same as na017 !
 const uint16_t code_na110Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na110Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na111Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
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
  code_na044Times,
  code_na111Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na112Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
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
  code_na004Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na116Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na044 !
 const uint16_t code_na118Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
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
  code_na044Times,
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


/* Duplicate timing table, same as na017 !
 const uint16_t code_na120Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
  code_na120Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na121Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na017 !
 const uint16_t code_na123Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na119 !
 const uint16_t code_na125Times[] = {
 	55, 63,
 	55, 171,
 	55, 4094,
 	55, 9508,
 	881, 219,
 	881, 438,
 };
 */
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
  code_na119Times,
  code_na125Codes
};


/* Duplicate timing table, same as na017 !
 const uint16_t code_na126Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na102 !
 const uint16_t code_na128Times[] = {
 	86, 87,
 	86, 258,
 	86, 3338,
 	346, 348,
 	348, 347,
 };
 */
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
  code_na102Times,
  code_na128Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na129Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
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
  code_na017Times,
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

/* Duplicate timing table, same as na042 !
 const uint16_t code_na131Times[] = {
 	54, 65,
 	54, 170,
 	54, 4099,
 	54, 8668,
 	899, 226,
 	899, 421,
 };
 */
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
  code_na042Times,
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

/* Duplicate timing table, same as na113 !
 const uint16_t code_na134Times[] = {
 	56, 54,
 	56, 166,
 	56, 3945,
 	896, 442,
 	896, 443,
 };
 */
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
  code_na113Times,
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




const uint16_t code_na137Times[] = {
  43, 47,
  43, 91,
  43, 8324,
  88, 47,
  133, 133,
  264, 90,
  264, 91,
};
const uint8_t code_na137Codes[] = {
  0xA4,
  0x08,
  0x00,
  0x00,
  0x00,
  0x00,
  0x64,
  0x2C,
  0x40,
  0x80,
  0x00,
  0x00,
  0x00,
  0x06,
  0x41,
};
const struct IrCode code_na137Code = {
  freq_to_timerval(35714),
  40,		// # of pairs
  3,		// # of bits per index
  code_na137Times,
  code_na137Codes
};
const uint16_t code_na138Times[] = {
  47, 265,
  51, 54,
  51, 108,
  51, 263,
  51, 2053,
  51, 11647,
  100, 109,
};
const uint8_t code_na138Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x35,
  0x89,
  0x24,
  0x9A,
  0xD6,
  0x24,
  0x92,
  0x48,
};
const struct IrCode code_na138Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na138Times,
  code_na138Codes
};
const uint16_t code_na139Times[] = {
  43, 206,
  46, 204,
  46, 456,
  46, 3488,
};
const uint8_t code_na139Codes[] = {
  0x1A,
  0x56,
  0xA6,
  0xD6,
  0x95,
  0xA9,
  0x90,
};
const struct IrCode code_na139Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_na139Times,
  code_na139Codes
};

/* Duplicate timing table, same as na000 !
 const uint16_t code_na140Times[] = {
 	58, 60,
 	58, 2687,
 	118, 60,
 	237, 60,
 	238, 60,
 };
 */
/*
const uint8_t code_na140Codes[] = {
 	0x68,
 	0x20,
 	0x80,
 	0x40,
 	0x03,
 	0x10,
 	0x41,
 	0x00,
 	0x80,
 	0x00,
 };
 const struct IrCode code_na140Code = {
 	freq_to_timerval(38462),
 	26,		// # of pairs
 	3,		// # of bits per index
 	code_na000Times,
 	code_na140Codes
 };// Duplicate IR Code - same as na000
 */

const uint16_t code_na141Times[] = {
  44, 45,
  44, 131,
  44, 7462,
  346, 176,
  346, 178,
};
const uint8_t code_na141Codes[] = {
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
const struct IrCode code_na141Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na141Times,
  code_na141Codes
};// Duplicate IR Code? Similar to NA002

const uint16_t code_na142Times[] = {
  24, 190,
  25, 80,
  25, 190,
  25, 4199,
  25, 4799,
};
const uint8_t code_na142Codes[] = {
  0x04,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x53,
  0x44,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x51,
};
const struct IrCode code_na142Code = {
  freq_to_timerval(38610),
  64,		// # of pairs
  3,		// # of bits per index
  code_na142Times,
  code_na142Codes
};
// This is actually power TOGGLE for Samsung TVs. Therefore followed later by new eu141, discrete OFF
const uint16_t code_na143Times[] = {
  53, 63,
  53, 172,
  53, 4472,
  54, 0,
  455, 468,
};
const uint8_t code_na143Codes[] = {
  0x84,
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
  0xB0,
};
const struct IrCode code_na143Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na143Times,
  code_na143Codes
};
const uint16_t code_na144Times[] = {
  50, 54,
  50, 159,
  50, 2307,
  838, 422,
};
const uint8_t code_na144Codes[] = {
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
const struct IrCode code_na144Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na144Times,
  code_na144Codes
};// Duplicate IR Code? - Similar to NA010


/* Duplicate timing table, same as na004 !
 const uint16_t code_na145Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na145Codes[] = {
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
const struct IrCode code_na145Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na145Codes
};


/* Duplicate timing table, same as na005 !
 const uint16_t code_na146Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_na146Codes[] = {
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
 const struct IrCode code_na146Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_na146Codes
 };// Duplicate IR Code - same as na005
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_na147Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
/*
const uint8_t code_na147Codes[] = {
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
 const struct IrCode code_na147Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_na147Codes
 };// Duplicate IR Code - same as NA004
 */

/* Duplicate timing table, same as na009 !
 const uint16_t code_na148Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na148Codes[] = {
  0x84,
  0x00,
  0x48,
  0x04,
  0x02,
  0x01,
  0x04,
  0x80,
  0x09,
  0x00,
  0x12,
  0x40,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na148Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na148Codes
};
const uint16_t code_na149Times[] = {
  46, 206,
  46, 459,
  46, 3447,
};
const uint8_t code_na149Codes[] = {
  0x05,
  0x01,
  0x51,
  0x81,
  0x40,
  0x54,
  0x40,
};
const struct IrCode code_na149Code = {
  freq_to_timerval(33445),
  26,		// # of pairs
  2,		// # of bits per index
  code_na149Times,
  code_na149Codes
};
const uint16_t code_na150Times[] = {
  53, 59,
  53, 171,
  53, 2302,
  895, 449,
};
const uint8_t code_na150Codes[] = {
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x56,
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x55,
};
const struct IrCode code_na150Code = {
  freq_to_timerval(38462),
  88,		// # of pairs
  2,		// # of bits per index
  code_na150Times,
  code_na150Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_na151Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
/*
const uint8_t code_na151Codes[] = {
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
 const struct IrCode code_na151Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na021Times,
 	code_na151Codes
 };// Duplicate IR Code - same as NA021
 */

const uint16_t code_na152Times[] = {
  53, 54,
  53, 156,
  53, 2542,
  851, 425,
  853, 424,
};
const uint8_t code_na152Codes[] = {
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
const struct IrCode code_na152Code = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_na152Times,
  code_na152Codes
};// Duplicate IR Code? - Similar to NA018

const uint16_t code_na153Times[] = {
  28, 92,
  28, 213,
  28, 214,
  28, 2771,
};
const uint8_t code_na153Codes[] = {
  0x68,
  0x08,
  0x20,
  0x00,
  0xEA,
  0x02,
  0x08,
  0x00,
  0x10,
};
const struct IrCode code_na153Code = {
  freq_to_timerval(33333),
  34,		// # of pairs
  2,		// # of bits per index
  code_na153Times,
  code_na153Codes
};
const uint16_t code_na154Times[] = {
  15, 844,
  16, 557,
  16, 844,
  16, 5224,
};
const uint8_t code_na154Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_na154Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  2,		// # of bits per index
  code_na154Times,
  code_na154Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na155Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na155Codes[] = {
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
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na155Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na155Codes
};
const uint16_t code_na156Times[] = {
  50, 54,
  50, 158,
  50, 418,
  50, 2443,
  843, 418,
};
const uint8_t code_na156Codes[] = {
  0x80,
  0x80,
  0x00,
  0x08,
  0x12,
  0x40,
  0x01,
  0xC0,
  0x40,
  0x00,
  0x04,
  0x09,
  0x20,
  0x00,
  0x00,
};
const struct IrCode code_na156Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na156Times,
  code_na156Codes
};
const uint16_t code_na157Times[] = {
  48, 301,
  48, 651,
  48, 1001,
  48, 3001,
};
const uint8_t code_na157Codes[] = {
  0x22,
  0x20,
  0x00,
  0x01,
  0xC8,
  0x88,
  0x00,
  0x00,
  0x40,
};
const struct IrCode code_na157Code = {
  freq_to_timerval(35714),
  34,		// # of pairs
  2,		// # of bits per index
  code_na157Times,
  code_na157Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na158Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na158Codes[] = {
  0x84,
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
  0xBA,
  0x40,
};
const struct IrCode code_na158Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na158Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na159Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na159Codes[] = {
  0xA4,
  0x80,
  0x41,
  0x00,
  0x12,
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
const struct IrCode code_na159Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na159Codes
};

/* Duplicate timing table, same as na022 !
 const uint16_t code_na160Times[] = {
 	53, 60,
 	53, 175,
 	53, 4463,
 	53, 9453,
 	892, 450,
 	895, 225,
 };
 */
/*
const uint8_t code_na160Codes[] = {
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
 const struct IrCode code_na160Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na022Times,
 	code_na160Codes
 };// Duplicate IR Code - Same as NA022
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_na161Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na161Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na161Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na161Codes
};
const uint16_t code_na162Times[] = {
  49, 52,
  49, 102,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_na162Codes[] = {
  0x47,
  0x00,
  0x23,
  0x3C,
  0x01,
  0x59,
  0xE0,
  0x04,
};
const struct IrCode code_na162Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_na162Times,
  code_na162Codes
};
const uint16_t code_na163Times[] = {
  14, 491,
  14, 743,
  14, 4926,
};
const uint8_t code_na163Codes[] = {
  0x55,
  0x40,
  0x42,
  0x55,
  0x40,
  0x41,
};
const struct IrCode code_na163Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na163Times,
  code_na163Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na164Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na164Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x10,
  0x01,
  0x20,
  0x82,
  0x48,
  0x0B,
  0x3D,
  0x00,
};
const struct IrCode code_na164Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na164Codes
};
const uint16_t code_na165Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
};
const uint8_t code_na165Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x72,
  0x24,
  0x9A,
  0xD1,
  0xC8,
  0x92,
  0x48,
};
const struct IrCode code_na165Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na165Codes
};
const uint16_t code_na166Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1445,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_na166Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x04,
  0x64,
  0x62,
  0x00,
  0xE0,
  0x00,
  0x2B,
  0x23,
  0x10,
  0x07,
  0x00,
  0x00,
  0x80,
};
const struct IrCode code_na166Code = {
  freq_to_timerval(34483),
  46,		// # of pairs
  3,		// # of bits per index
  code_na166Times,
  code_na166Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na167Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na167Codes[] = {
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
const struct IrCode code_na167Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na167Codes
};// Duplicate IR Code? - Smilar to NA020

const uint16_t code_na168Times[] = {
  53, 53,
  53, 160,
  53, 1697,
  838, 422,
};
const uint8_t code_na168Codes[] = {
  0xD5,
  0x50,
  0x15,
  0x11,
  0x65,
  0x54,
  0x05,
  0x44,
  0x59,
  0x55,
  0x01,
  0x51,
  0x15,
};
const struct IrCode code_na168Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na168Times,
  code_na168Codes
};
const uint16_t code_na169Times[] = {
  49, 205,
  49, 206,
  49, 456,
  49, 3690,
};
const uint8_t code_na169Codes[] = {
  0x1A,
  0x56,
  0xA5,
  0xD6,
  0x95,
  0xA9,
  0x40,
};
const struct IrCode code_na169Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_na169Times,
  code_na169Codes
};
const uint16_t code_na170Times[] = {
  48, 150,
  50, 149,
  50, 347,
  50, 2936,
};
const uint8_t code_na170Codes[] = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_na170Code = {
  freq_to_timerval(38462),
  14,		// # of pairs
  2,		// # of bits per index
  code_na170Times,
  code_na170Codes
};


/* Duplicate timing table, same as na004 !
 const uint16_t code_na171Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na171Codes[] = {
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
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na171Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na171Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_na172Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_na172Codes[] = {
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
 const struct IrCode code_na172Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_na172Codes
 };// Duplicate IR Code - same as eu009!
 */

/* Duplicate timing table, same as na004 !
 const uint16_t code_na173Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na173Codes[] = {
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
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na173Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na173Codes
};
const uint16_t code_na174Times[] = {
  14, 491,
  14, 743,
  14, 5178,
};
const uint8_t code_na174Codes[] = {
  0x45,
  0x50,
  0x02,
  0x45,
  0x50,
  0x01,
};
const struct IrCode code_na174Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na174Times,
  code_na174Codes
};
const uint16_t code_na175Times[] = {
  3, 1002,
  3, 1495,
  3, 3059,
};
const uint8_t code_na175Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_na175Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_na175Times,
  code_na175Codes
};
const uint16_t code_na176Times[] = {
  13, 445,
  13, 674,
  13, 675,
  13, 4583,
};
const uint8_t code_na176Codes[] = {
  0x6A,
  0x82,
  0x83,
  0xAA,
  0x82,
  0x81,
};
const struct IrCode code_na176Code = {
  freq_to_timerval(40161),
  24,		// # of pairs
  2,		// # of bits per index
  code_na176Times,
  code_na176Codes
};
const uint16_t code_na177Times[] = {
  85, 89,
  85, 264,
  85, 3402,
  347, 350,
  348, 350,
};
const uint8_t code_na177Codes[] = {
  0x60,
  0x90,
  0x40,
  0x20,
  0x80,
  0x40,
  0x20,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x41,
  0x00,
  0x82,
  0x01,
  0x00,
  0x82,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_na177Code = {
  freq_to_timerval(35714),
  52,		// # of pairs
  3,		// # of bits per index
  code_na177Times,
  code_na177Codes
};
const uint16_t code_na178Times[] = {
  46, 300,
  49, 298,
  49, 648,
  49, 997,
  49, 3056,
};
const uint8_t code_na178Codes[] = {
  0x0C,
  0xB2,
  0xCA,
  0x49,
  0x13,
  0x0B,
  0x2C,
  0xB2,
  0x92,
  0x44,
  0xB0,
};
const struct IrCode code_na178Code = {
  freq_to_timerval(33333),
  28,		// # of pairs
  3,		// # of bits per index
  code_na178Times,
  code_na178Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na179Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na179Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x92,
  0x09,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na179Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na179Codes
};
const uint16_t code_na180Times[] = {
  1037, 4216,
  1040, 0,
};
const uint8_t code_na180Codes[] = {
  0x10,
};
const struct IrCode code_na180Code = {
  freq_to_timerval(41667),
  2,		// # of pairs
  2,		// # of bits per index
  code_na180Times,
  code_na180Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na181Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na181Codes[] = {
  0xA0,
  0x02,
  0x01,
  0x04,
  0x90,
  0x48,
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
const struct IrCode code_na181Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na181Codes
};
const uint16_t code_na182Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 2947,
};
const uint8_t code_na182Codes[] = {
  0x16,
  0xE5,
  0x90,
};
const struct IrCode code_na182Code = {
  freq_to_timerval(41667),
  10,		// # of pairs
  2,		// # of bits per index
  code_na182Times,
  code_na182Codes
};
const uint16_t code_na183Times[] = {
  15, 493,
  16, 493,
  16, 698,
  16, 1414,
};
const uint8_t code_na183Codes[] = {
  0x16,
  0xAB,
  0x56,
  0xA9,
};
const struct IrCode code_na183Code = {
  freq_to_timerval(34602),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na183Codes
};
const uint16_t code_na184Times[] = {
  3, 496,
  3, 745,
  3, 1488,
};
const uint8_t code_na184Codes[] = {
  0x41,
  0x24,
  0x12,
  0x41,
  0x00,
};
const struct IrCode code_na184Code = {
  0,              // Non-pulsed code
  17,		// # of pairs
  2,		// # of bits per index
  code_na184Times,
  code_na184Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na185Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na185Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x82,
  0x49,
  0x04,
  0x80,
  0x40,
  0x00,
  0x12,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na185Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na185Codes
};
const uint16_t code_na186Times[] = {
  55, 55,
  55, 167,
  55, 4577,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_na186Codes[] = {
  0x80,
  0x92,
  0x00,
  0x00,
  0x92,
  0x00,
  0x00,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na186Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na186Times,
  code_na186Codes
};
const uint16_t code_na187Times[] = {
  91, 88,
  91, 267,
  91, 3621,
  361, 358,
  361, 359,
};
const uint8_t code_na187Codes[] = {
  0x60,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x42,
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x40,
};
const struct IrCode code_na187Code = {
  freq_to_timerval(33333),
  48,		// # of pairs
  3,		// # of bits per index
  code_na187Times,
  code_na187Codes
};
const uint16_t code_na188Times[] = {
  84, 88,
  84, 261,
  84, 3360,
  347, 347,
  347, 348,
};
const uint8_t code_na188Codes[] = {
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
const struct IrCode code_na188Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na188Times,
  code_na188Codes
};// Duplicate IR Code? - Similar to NA115

const uint16_t code_na189Times[] = {
  16, 838,
  17, 558,
  17, 839,
  17, 6328,
};
const uint8_t code_na189Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_na189Code = {
  freq_to_timerval(31250),
  24,		// # of pairs
  2,		// # of bits per index
  code_na189Times,
  code_na189Codes
};// Duplicate IR Code? -  Similar to EU017


/* Duplicate timing table, same as eu046 !
 const uint16_t code_na190Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na190Codes[] = {
  0x26,
  0xAB,
  0x66,
  0xAA,
};
const struct IrCode code_na190Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na190Codes
};
const uint16_t code_na191Times[] = {
  49, 53,
  49, 104,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_na191Codes[] = {
  0x40,
  0x1A,
  0x23,
  0x00,
  0xD0,
  0x80,
};
const struct IrCode code_na191Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na191Times,
  code_na191Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na192Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na192Codes[] = {
  0x80,
  0x00,
  0x00,
  0x20,
  0x92,
  0x49,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na192Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na192Codes
};
const uint16_t code_na193Times[] = {
  112, 107,
  113, 107,
  677, 2766,
};
const uint8_t code_na193Codes[] = {
  0x26,
};
const struct IrCode code_na193Code = {
  freq_to_timerval(38462),
  4,		// # of pairs
  2,		// # of bits per index
  code_na193Times,
  code_na193Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na194Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
/*
const uint8_t code_na194Codes[] = {
 	0xA0,
 	0x00,
 	0x41,
 	0x04,
 	0x92,
 	0x08,
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
 const struct IrCode code_na194Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_na194Codes
 }; // Duplicate IR code - same as EU008
 */
/* Duplicate timing table, same as na009 !
 const uint16_t code_na195Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na195Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x10,
  0x49,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na195Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na195Codes
};
const uint16_t code_na196Times[] = {
  310, 613,
  310, 614,
  622, 8312,
};
const uint8_t code_na196Codes[] = {
  0x26,
};
const struct IrCode code_na196Code = {
  freq_to_timerval(41667),
  4,		// # of pairs
  2,		// # of bits per index
  code_na196Times,
  code_na196Codes
};// Duplicate IR Code? - Similar to EU056

const uint16_t code_na197Times[] = {
  50, 158,
  53, 51,
  53, 156,
  53, 2180,
};
const uint8_t code_na197Codes[] = {
  0x25,
  0x59,
  0x9A,
  0x5A,
  0xE9,
  0x56,
  0x66,
  0x96,
  0xA0,
};
const struct IrCode code_na197Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na197Times,
  code_na197Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_na198Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
const uint8_t code_na198Codes[] = {
  0x10,
  0x92,
  0x54,
  0x24,
  0xB3,
  0x09,
  0x25,
  0x42,
  0x48,
};
const struct IrCode code_na198Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na198Codes
};

/* Duplicate timing table, same as eu060 !
 const uint16_t code_na199Times[] = {
 	50, 158,
 	53, 51,
 	53, 156,
 	53, 2180,
 };
 */
const uint8_t code_na199Codes[] = {
  0x25,
  0x99,
  0x9A,
  0x5A,
  0xE9,
  0x66,
  0x66,
  0x96,
  0xA0,
};
const struct IrCode code_na199Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na197Times,
  code_na199Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na200Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na200Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x90,
  0x41,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na200Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na200Codes
};
const uint16_t code_na201Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
  100, 112,
};
const uint8_t code_na201Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x51,
  0xCB,
  0xD6,
  0x4A,
  0x39,
  0x72,
};
const struct IrCode code_na201Code = {
  freq_to_timerval(30395),
  29,		// # of pairs
  3,		// # of bits per index
  code_na201Times,
  code_na201Codes
};
const uint16_t code_na202Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 112,
};
const uint8_t code_na202Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x4A,
  0x38,
  0x9A,
  0xC9,
  0x28,
  0xE2,
  0x48,
};
const struct IrCode code_na202Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na202Times,
  code_na202Codes
};

/* Duplicate timing table, same as eu049 !
 const uint16_t code_na203Times[] = {
 	55, 55,
 	55, 167,
 	55, 4577,
 	55, 9506,
 	448, 445,
 	450, 444,
 };
 */
const uint8_t code_na203Codes[] = {
  0x84,
  0x82,
  0x00,
  0x04,
  0x82,
  0x00,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0x87,
  0x41,
};
const struct IrCode code_na203Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na186Times,
  code_na203Codes
};
const uint16_t code_na204Times[] = {
  94, 473,
  94, 728,
  102, 1637,
};
const uint8_t code_na204Codes[] = {
  0x41,
  0x24,
  0x12,
};
const struct IrCode code_na204Code = {
  freq_to_timerval(38462),
  12,		// # of pairs
  2,		// # of bits per index
  code_na204Times,
  code_na204Codes
};
const uint16_t code_na205Times[] = {
  49, 263,
  50, 54,
  50, 108,
  50, 263,
  50, 2029,
  50, 10199,
  100, 110,
};
const uint8_t code_na205Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x49,
  0x38,
  0x9A,
  0xD1,
  0x24,
  0xE2,
  0x48,
};
const struct IrCode code_na205Code = {
  freq_to_timerval(38610),
  31,		// # of pairs
  3,		// # of bits per index
  code_na205Times,
  code_na205Codes
};
const uint16_t code_na206Times[] = {
  4, 499,
  4, 750,
  4, 4999,
};
const uint8_t code_na206Codes[] = {
  0x05,
  0x54,
  0x06,
  0x05,
  0x54,
  0x04,
};
const struct IrCode code_na206Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na206Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_na207Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_na207Codes[] = {
  0x14,
  0x54,
  0x06,
  0x14,
  0x54,
  0x04,
};
const struct IrCode code_na207Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na207Codes
};
const uint16_t code_na208Times[] = {
  14, 491,
  14, 743,
  14, 4422,
};
const uint8_t code_na208Codes[] = {
  0x45,
  0x44,
  0x56,
  0x45,
  0x44,
  0x55,
};
const struct IrCode code_na208Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na208Times,
  code_na208Codes
};
const uint16_t code_na209Times[] = {
  5, 568,
  5, 854,
  5, 4999,
};
const uint8_t code_na209Codes[] = {
  0x55,
  0x45,
  0x46,
  0x55,
  0x45,
  0x44,
};
const struct IrCode code_na209Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na209Times,
  code_na209Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na210Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na210Codes[] = {
  0x19,
  0x57,
  0x59,
  0x55,
};
const struct IrCode code_na210Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na210Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_na211Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
const uint8_t code_na211Codes[] = {
  0x04,
  0x92,
  0x49,
  0x28,
  0xC6,
  0x49,
  0x24,
  0x92,
  0x51,
  0x80,
};
const struct IrCode code_na211Code = {
  freq_to_timerval(35714),
  26,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na211Codes
};
const uint16_t code_na212Times[] = {
  6, 566,
  6, 851,
  6, 5474,
};
const uint8_t code_na212Codes[] = {
  0x05,
  0x45,
  0x46,
  0x05,
  0x45,
  0x44,
};
const struct IrCode code_na212Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na212Times,
  code_na212Codes
};
const uint16_t code_na213Times[] = {
  14, 843,
  16, 555,
  16, 841,
  16, 4911,
};
const uint8_t code_na213Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_na213Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na213Times,
  code_na213Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_na214Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_na214Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x51,
  0xC8,
  0x9A,
  0xC9,
  0x47,
  0x22,
  0x48,
};
const struct IrCode code_na214Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na214Codes
};
const uint16_t code_na215Times[] = {
  6, 925,
  6, 1339,
  6, 2098,
  6, 2787,
};
const uint8_t code_na215Codes[] = {
  0x90,
  0x0D,
  0x00,
};
const struct IrCode code_na215Code = {
  0,              // Non-pulsed code
  12,		// # of pairs
  2,		// # of bits per index
  code_na215Times,
  code_na215Codes
};
const uint16_t code_na216Times[] = {
  53, 59,
  53, 170,
  53, 4359,
  892, 448,
  893, 448,
};
const uint8_t code_na216Codes[] = {
  0x60,
  0x00,
  0x00,
  0x24,
  0x80,
  0x09,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x00,
  0x00,
  0x00,
  0x92,
  0x00,
  0x24,
  0x12,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x80,
};
const struct IrCode code_na216Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na216Times,
  code_na216Codes
};
const uint16_t code_na217Times[] = {
  55, 57,
  55, 167,
  55, 4416,
  895, 448,
  897, 447,
};
const uint8_t code_na217Codes[] = {
  0x60,
  0x00,
  0x00,
  0x20,
  0x10,
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
  0x40,
  0x24,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na217Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na217Times,
  code_na217Codes
};

const uint16_t code_na218Times[] = {
  26, 185,
  27, 80,
  27, 185,
  27, 4249,
};
const uint8_t code_na218Codes[] = {
  0x1A,
  0x5A,
  0x65,
  0x67,
  0x9A,
  0x65,
  0x9A,
  0x9B,
  0x9A,
  0x5A,
  0x65,
  0x67,
  0x9A,
  0x65,
  0x9A,
  0x9B,
  0x9A,
  0x5A,
  0x65,
  0x65,
};
const struct IrCode code_na218Code = {
  freq_to_timerval(38462),
  80,		// # of pairs
  2,		// # of bits per index
  code_na218Times,
  code_na218Codes
};
const uint16_t code_na219Times[] = {
  51, 56,
  51, 162,
  51, 2842,
  848, 430,
  850, 429,
};
const uint8_t code_na219Codes[] = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x82,
  0x40,
  0x00,
  0x10,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x12,
  0x09,
  0x00,
  0x00,
  0x40,
  0x24,
  0x80,
};
const struct IrCode code_na219Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na219Times,
  code_na219Codes
};
const uint16_t code_na220Times[] = {
  16, 559,
  16, 847,
  16, 5900,
  17, 559,
  17, 847,
};
const uint8_t code_na220Codes[] = {
  0x0E,
  0x38,
  0x21,
  0x82,
  0x26,
  0x20,
  0x82,
  0x48,
  0x23,
};
const struct IrCode code_na220Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na220Times,
  code_na220Codes
};
const uint16_t code_na221Times[] = {
  16, 484,
  16, 738,
  16, 739,
  16, 4795,
};
const uint8_t code_na221Codes[] = {
  0x6A,
  0xA0,
  0x03,
  0xAA,
  0xA0,
  0x01,
};
const struct IrCode code_na221Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na221Times,
  code_na221Codes
};
const uint16_t code_na222Times[] = {
  48, 52,
  48, 160,
  48, 400,
  48, 2120,
  799, 400,
};
const uint8_t code_na222Codes[] = {
  0x84,
  0x82,
  0x40,
  0x08,
  0x92,
  0x48,
  0x01,
  0xC2,
  0x41,
  0x20,
  0x04,
  0x49,
  0x24,
  0x00,
  0x40,
};
const struct IrCode code_na222Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na222Times,
  code_na222Codes
};
const uint16_t code_na223Times[] = {
  16, 851,
  17, 554,
  17, 850,
  17, 851,
  17, 4847,
};
const uint8_t code_na223Codes[] = {
  0x45,
  0x86,
  0x5B,
  0x05,
  0xC6,
  0x5B,
  0x05,
  0xB0,
  0x42,
};
const struct IrCode code_na223Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na223Times,
  code_na223Codes
};
const uint16_t code_na224Times[] = {
  14, 491,
  14, 743,
  14, 5126,
};
const uint8_t code_na224Codes[] = {
  0x55,
  0x50,
  0x02,
  0x55,
  0x50,
  0x01,
};
const struct IrCode code_na224Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na224Codes
};
const uint16_t code_na225Times[] = {
  14, 491,
  14, 743,
  14, 4874,
};
const uint8_t code_na225Codes[] = {
  0x45,
  0x54,
  0x42,
  0x45,
  0x54,
  0x41,
};
const struct IrCode code_na225Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na225Times,
  code_na225Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_na226Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
const uint8_t code_na226Codes[] = {
  0x84,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xC2,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x40,
};
const struct IrCode code_na226Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_na226Codes
};
const uint16_t code_na227Times[] = {
  3, 9,
  3, 19,
  3, 29,
  3, 39,
  3, 9968,
};
const uint8_t code_na227Codes[] = {
  0x60,
  0x00,
  0x88,
  0x00,
  0x02,
  0xE3,
  0x00,
  0x04,
  0x40,
  0x00,
  0x16,
};
const struct IrCode code_na227Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_na227Times,
  code_na227Codes
};
const uint16_t code_na228Times[] = {
  15, 138,
  15, 446,
  15, 605,
  15, 6565,
};
const uint8_t code_na228Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0xA0,
};
const struct IrCode code_na228Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  2,		// # of bits per index
  code_na228Times,
  code_na228Codes
};
const uint16_t code_na229Times[] = {
  48, 50,
  48, 148,
  48, 149,
  48, 1424,
};
const uint8_t code_na229Codes[] = {
  0x48,
  0x80,
  0x0E,
  0x22,
  0x00,
  0x10,
};
const struct IrCode code_na229Code = {
  freq_to_timerval(40000),
  22,		// # of pairs
  2,		// # of bits per index
  code_na229Times,
  code_na229Codes
};
const uint16_t code_na230Times[] = {
  87, 639,
  88, 275,
  88, 639,
};
const uint8_t code_na230Codes[] = {
  0x15,
  0x9A,
  0x94,
};
const struct IrCode code_na230Code = {
  freq_to_timerval(35714),
  11,		// # of pairs
  2,		// # of bits per index
  code_na230Times,
  code_na230Codes
};
const uint16_t code_na231Times[] = {
  3, 8,
  3, 18,
  3, 24,
  3, 38,
  3, 9969,
};
const uint8_t code_na231Codes[] = {
  0x60,
  0x80,
  0x88,
  0x00,
  0x00,
  0xE3,
  0x04,
  0x04,
  0x40,
  0x00,
  0x06,
};
const struct IrCode code_na231Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_na231Times,
  code_na231Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na232Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na232Codes[] = {
  0x2A,
  0xAB,
  0x6A,
  0xAA,
};
const struct IrCode code_na232Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na232Codes
};
const uint16_t code_na233Times[] = {
  13, 608,
  14, 141,
  14, 296,
  14, 451,
  14, 606,
  14, 608,
  14, 6207,
};
const uint8_t code_na233Codes[] = {
  0x04,
  0x94,
  0x4B,
  0x24,
  0x95,
  0x35,
  0x24,
  0xA2,
  0x59,
  0x24,
  0xA8,
  0x40,
};
const struct IrCode code_na233Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  3,		// # of bits per index
  code_na233Times,
  code_na233Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na234Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na234Codes[] = {
  0x19,
  0xAB,
  0x59,
  0xA9,
};
const struct IrCode code_na234Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na234Codes
};
const uint16_t code_na235Times[] = {
  3, 8,
  3, 18,
  3, 28,
  3, 12731,
};
const uint8_t code_na235Codes[] = {
  0x80,
  0x01,
  0x00,
  0xB8,
  0x55,
  0x10,
  0x08,
};
const struct IrCode code_na235Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na235Times,
  code_na235Codes
};
const uint16_t code_na236Times[] = {
  46, 53,
  46, 106,
  46, 260,
  46, 1502,
  46, 10962,
  93, 53,
  93, 106,
};
const uint8_t code_na236Codes[] = {
  0x46,
  0x80,
  0x00,
  0x00,
  0x00,
  0x03,
  0x44,
  0x52,
  0x00,
  0x00,
  0x0C,
  0x22,
  0x22,
  0x90,
  0x00,
  0x00,
  0x60,
  0x80,
};
const struct IrCode code_na236Code = {
  freq_to_timerval(35714),
  46,		// # of pairs
  3,		// # of bits per index
  code_na236Times,
  code_na236Codes
};


/* Duplicate timing table, same as eu098 !
 const uint16_t code_na237Times[] = {
 	3, 8,
 	3, 18,
 	3, 28,
 	3, 12731,
 };
 */
const uint8_t code_na237Codes[] = {
  0x80,
  0x04,
  0x00,
  0xB8,
  0x55,
  0x40,
  0x08,
};
const struct IrCode code_na237Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na235Times,
  code_na237Codes
};



const uint16_t code_na238Times[] = {
  14, 491,
  14, 743,
  14, 4674,
};
const uint8_t code_na238Codes[] = {
  0x55,
  0x50,
  0x06,
  0x55,
  0x50,
  0x05,
};
const struct IrCode code_na238Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na238Times,
  code_na238Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_na239Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_na239Codes[] = {
  0x45,
  0x54,
  0x02,
  0x45,
  0x54,
  0x01,
};
const struct IrCode code_na239Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na239Codes
};
const uint16_t code_na240Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 5000,
};
const uint8_t code_na240Codes[] = {
  0x29,
  0x9A,
  0x9B,
  0xA9,
  0x9A,
  0x9A,
};
const struct IrCode code_na240Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_na240Times,
  code_na240Codes
};
const uint16_t code_na241Times[] = {
  14, 491,
  14, 743,
  14, 5881,
};
const uint8_t code_na241Codes[] = {
  0x44,
  0x40,
  0x02,
  0x44,
  0x40,
  0x01,
};
const struct IrCode code_na241Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na241Times,
  code_na241Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na242Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na242Codes[] = {
  0x84,
  0x10,
  0x00,
  0x20,
  0x90,
  0x01,
  0x00,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na242Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na242Codes
};
const uint16_t code_na243Times[] = {
  48, 246,
  50, 47,
  50, 94,
  50, 245,
  50, 1488,
  50, 10970,
  100, 47,
  100, 94,
};
const uint8_t code_na243Codes[] = {
  0x0B,
  0x12,
  0x49,
  0x24,
  0x92,
  0x49,
  0x8D,
  0x1C,
  0x89,
  0x27,
  0xFC,
  0xAB,
  0x47,
  0x22,
  0x49,
  0xFF,
  0x2A,
  0xD1,
  0xC8,
  0x92,
  0x7F,
  0xC9,
  0x00,
};
const struct IrCode code_na243Code = {
  freq_to_timerval(38462),
  59,		// # of pairs
  3,		// # of bits per index
  code_na243Times,
  code_na243Codes
};
const uint16_t code_na244Times[] = {
  16, 847,
  16, 5900,
  17, 559,
  17, 846,
  17, 847,
};
const uint8_t code_na244Codes[] = {
  0x62,
  0x08,
  0xA0,
  0x8A,
  0x19,
  0x04,
  0x08,
  0x40,
  0x83,
};
const struct IrCode code_na244Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na244Times,
  code_na244Codes
};
const uint16_t code_na245Times[] = {
  14, 491,
  14, 743,
  14, 4622,
};
const uint8_t code_na245Codes[] = {
  0x45,
  0x54,
  0x16,
  0x45,
  0x54,
  0x15,
};
const struct IrCode code_na245Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na245Times,
  code_na245Codes
};
const uint16_t code_na246Times[] = {
  24, 185,
  27, 78,
  27, 183,
  27, 1542,
};
const uint8_t code_na246Codes[] = {
  0x19,
  0x95,
  0x5E,
  0x66,
  0x55,
  0x50,
};
const struct IrCode code_na246Code = {
  freq_to_timerval(38462),
  22,		// # of pairs
  2,		// # of bits per index
  code_na246Times,
  code_na246Codes
};


const uint16_t code_na247Times[] = {
  56, 55,
  56, 168,
  56, 4850,
  447, 453,
  448, 453,
};
const uint8_t code_na247Codes[] = {
  0x64,
  0x10,
  0x00,
  0x04,
  0x10,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x10,
  0x40,
  0x00,
  0x10,
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
const struct IrCode code_na247Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na247Times,
  code_na247Codes
};
const uint16_t code_na248Times[] = {
  49, 52,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_na248Codes[] = {
  0x22,
  0x80,
  0x1A,
  0x18,
  0x01,
  0x10,
  0xC0,
  0x02,
};
const struct IrCode code_na248Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_na248Times,
  code_na248Codes
};
const uint16_t code_na249Times[] = {
  55, 55,
  55, 167,
  55, 5023,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_na249Codes[] = {
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
const struct IrCode code_na249Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na249Times,
  code_na249Codes
};


/* Duplicate timing table, same as eu054 !
 const uint16_t code_na250Times[] = {
 	49, 53,
 	49, 104,
 	49, 262,
 	49, 264,
 	49, 8030,
 	100, 103,
 };
 */
const uint8_t code_na250Codes[] = {
  0x46,
  0x80,
  0x23,
  0x34,
  0x00,
  0x80,
};
const struct IrCode code_na250Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na191Times,
  code_na250Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_na251Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_na251Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x71,
  0x44,
  0x9A,
  0xD1,
  0xC5,
  0x12,
  0x48,
};
const struct IrCode code_na251Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na251Codes
};


const uint16_t code_na252Times[] = {
  48, 98,
  48, 196,
  97, 836,
  395, 388,
  1931, 389,
};
const uint8_t code_na252Codes[] = {
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
  0x82,
};
const struct IrCode code_na252Code = {
  freq_to_timerval(58824),
  77,		// # of pairs
  3,		// # of bits per index
  code_na252Times,
  code_na252Codes
};
const uint16_t code_na253Times[] = {
  3, 9,
  3, 31,
  3, 42,
  3, 10957,
};
const uint8_t code_na253Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0x80,
};
const struct IrCode code_na253Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  2,		// # of bits per index
  code_na253Times,
  code_na253Codes
};
const uint16_t code_na254Times[] = {
  49, 53,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_na254Codes[] = {
  0x22,
  0x00,
  0x1A,
  0x10,
  0x00,
  0x40,
};
const struct IrCode code_na254Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na254Times,
  code_na254Codes
};
const uint16_t code_na255Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 4713,
};
const uint8_t code_na255Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_na255Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_na255Times,
  code_na255Codes
};

const uint16_t code_na256Times[] = {
  14, 491,
  14, 743,
  14, 5430,
};
const uint8_t code_na256Codes[] = {
  0x44,
  0x44,
  0x02,
  0x44,
  0x44,
  0x01,
};
const struct IrCode code_na256Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na256Times,
  code_na256Codes
};


const uint16_t code_na257Times[] = {
  19, 78,
  21, 27,
  21, 77,
  21, 3785,
  22, 0,
};
const uint8_t code_na257Codes[] = {
  0x09,
  0x24,
  0x92,
  0x49,
  0x12,
  0x4A,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x94,
  0x89,
  0x69,
  0x24,
  0x92,
  0x49,
  0x22,
  0x49,
  0x44,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x91,
  0x30,
};
const struct IrCode code_na257Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_na257Times,
  code_na257Codes
};

/* Duplicate timing table, same as eu051 !
 const uint16_t code_na258Times[] = {
 	84, 88,
 	84, 261,
 	84, 3360,
 	347, 347,
 	347, 348,
 };
 */
const uint8_t code_na258Codes[] = {
  0x64,
  0x00,
  0x09,
  0x24,
  0x00,
  0x09,
  0x24,
  0x00,
  0x09,
  0x2A,
  0x10,
  0x00,
  0x24,
  0x90,
  0x00,
  0x24,
  0x90,
  0x00,
  0x24,
  0x90,
};
const struct IrCode code_na258Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na188Times,
  code_na258Codes
};

/* Duplicate timing table, same as eu120 !
 const uint16_t code_na259Times[] = {
 	19, 78,
 	21, 27,
 	21, 77,
 	21, 3785,
 	22, 0,
 };
 */
const uint8_t code_na259Codes[] = {
  0x04,
  0xA4,
  0x92,
  0x49,
  0x22,
  0x49,
  0x48,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x94,
  0x89,
  0x68,
  0x94,
  0x92,
  0x49,
  0x24,
  0x49,
  0x29,
  0x12,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x91,
  0x30,
};
const struct IrCode code_na259Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_na257Times,
  code_na259Codes
};
const uint16_t code_na260Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5443,
};
const uint8_t code_na260Codes[] = {
  0x6A,
  0xA0,
  0x0B,
  0xAA,
  0xA0,
  0x09,
};
const struct IrCode code_na260Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na260Times,
  code_na260Codes
};
const uint16_t code_na261Times[] = {
  50, 54,
  50, 158,
  50, 407,
  50, 2153,
  843, 407,
};
const uint8_t code_na261Codes[] = {
  0x80,
  0x10,
  0x40,
  0x08,
  0x92,
  0x48,
  0x01,
  0xC0,
  0x08,
  0x20,
  0x04,
  0x49,
  0x24,
  0x00,
  0x00,
};
const struct IrCode code_na261Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na261Times,
  code_na261Codes
};
const uint16_t code_na262Times[] = {
  55, 56,
  55, 168,
  55, 3929,
  56, 0,
  882, 454,
  884, 452,
};
const uint8_t code_na262Codes[] = {
  0x84,
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
  0x92,
  0x00,
  0x00,
  0x82,
  0x09,
  0x24,
  0x00,
  0x08,
  0x00,
  0x12,
  0x41,
  0x24,
  0xB0,
};
const struct IrCode code_na262Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na262Times,
  code_na262Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na263Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na263Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
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
const struct IrCode code_na263Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na263Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_na264Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_na264Codes[] = {
  0x44,
  0x40,
  0x56,
  0x44,
  0x40,
  0x55,
};
const struct IrCode code_na264Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na264Codes
};
const uint16_t code_na265Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 782,
  154, 2947,
};
const uint8_t code_na265Codes[] = {
  0x05,
  0xC4,
  0x59,
};
const struct IrCode code_na265Code = {
  freq_to_timerval(41667),
  8,		// # of pairs
  3,		// # of bits per index
  code_na265Times,
  code_na265Codes
};
const uint16_t code_na266Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1449,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_na266Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x8C,
  0x8C,
  0x40,
  0x03,
  0xF1,
  0xEB,
  0x23,
  0x10,
  0x00,
  0xFC,
  0x74,
};
const struct IrCode code_na266Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_na266Times,
  code_na266Codes
};

/* Duplicate timing table, same as eu129 !
 const uint16_t code_na267Times[] = {
 	50, 50,
 	50, 99,
 	50, 251,
 	50, 252,
 	50, 1449,
 	50, 11014,
 	102, 49,
 	102, 98,
 };
 */
const uint8_t code_na267Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x8C,
  0x8C,
  0x40,
  0x03,
  0xE3,
  0xEB,
  0x23,
  0x10,
  0x00,
  0xF8,
  0xF4,
};
const struct IrCode code_na267Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_na266Times,
  code_na267Codes
};
const uint16_t code_na268Times[] = {
  14, 491,
  14, 743,
  14, 4170,
};
const uint8_t code_na268Codes[] = {
  0x55,
  0x55,
  0x42,
  0x55,
  0x55,
  0x41,
};
const struct IrCode code_na268Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na268Times,
  code_na268Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_na269Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_na269Codes[] = {
  0x05,
  0x50,
  0x06,
  0x05,
  0x50,
  0x04,
};
const struct IrCode code_na269Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na269Codes
};

/* Duplicate timing table, same as eu071 !
 const uint16_t code_na270Times[] = {
 	14, 491,
 	14, 743,
 	14, 4422,
 };
 */
const uint8_t code_na270Codes[] = {
  0x55,
  0x54,
  0x12,
  0x55,
  0x54,
  0x11,
};
const struct IrCode code_na270Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na208Times,
  code_na270Codes
};
const uint16_t code_na271Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5939,
};
const uint8_t code_na271Codes[] = {
  0x40,
  0x0A,
  0x83,
  0x80,
  0x0A,
  0x81,
};
const struct IrCode code_na271Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na271Times,
  code_na271Codes
};
const uint16_t code_na272Times[] = {
  6, 566,
  6, 851,
  6, 5188,
};
const uint8_t code_na272Codes[] = {
  0x54,
  0x45,
  0x46,
  0x54,
  0x45,
  0x44,
};
const struct IrCode code_na272Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na272Times,
  code_na272Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na273Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na273Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
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
const struct IrCode code_na273Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na273Codes
};
const uint16_t code_na274Times[] = {
  86, 91,
  87, 90,
  87, 180,
  87, 8868,
  88, 0,
  174, 90,
};
const uint8_t code_na274Codes[] = {
  0x14,
  0x95,
  0x4A,
  0x35,
  0x9A,
  0x4A,
  0xA5,
  0x1B,
  0x00,
};
const struct IrCode code_na274Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na274Times,
  code_na274Codes
};
const uint16_t code_na275Times[] = {
  4, 1036,
  4, 1507,
  4, 3005,
};
const uint8_t code_na275Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_na275Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_na275Times,
  code_na275Codes
};

const uint16_t code_na276Times[] = {
  0, 0,
  14, 141,
  14, 452,
  14, 607,
  14, 6310,
};
const uint8_t code_na276Codes[] = {
  0x64,
  0x92,
  0x4A,
  0x24,
  0x92,
  0xE3,
  0x24,
  0x92,
  0x51,
  0x24,
  0x96,
  0x00,
};

const struct IrCode code_na276Code = {
  0,              // Non-pulsed code
  30,		// # of pairs
  3,		// # of bits per index
  code_na276Times,
  code_na276Codes
};

const uint16_t code_na277Times[] = {
  448, 448,
  56, 168,
  56, 56,
  56, 4526,
 };

const uint8_t code_na277Codes[] = {
  0x15,
  0xAA,
  0x95,
  0xAA,
  0xAA,
  0x5A,
  0x55,
  0xA5,
  0xB1,
  0x5A,
  0xA9,
  0x5A,
  0xAA,
  0xA5,
  0xA5,
  0x5A,
  0x5B,
};

const struct IrCode code_na277Code = {
  freq_to_timerval(38462),
  68,   // # of pairs
  2,    // # of bits per index
  code_na277Times,
  code_na277Codes
};

const uint16_t code_na278Times[] = { 312, 159, 49, 118, 49, 34, 49, 37, 47, 117, 48, 35, 48, 118, 46, 118, 49, 35, 49, 117, 46, 37, 47, 34, 48, 38, 46, 38, 46, 35, 46, 34, 48, 37, 47, 37, 46, 0 };
const uint8_t code_na278Codes[] = { 0x00, 0x42, 0x21, 0x0C, 0x85, 0x29, 0x82, 0x20, 0x88, 0x67, 0x0A, 0x02, 0x11, 0x09, 0x25, 0x28, 0x44, 0x21, 0xA9, 0x62, 0x63, 0x5C, 0x35, 0x3C, 0x6A, 0x52, 0xC6, 0xE1, 0xB8, 0x22, 0x10, 0x52, 0x52, 0xC1, 0x4A, 0x70, 0xD4, 0xA3, 0x94, 0xA5, 0x1B, 0x86, 0xF1, 0xA9, 0x4B, 0x63, 0x5A, 0xE4, 0x08, 0x6A, 0x53, 0xC7, 0x16, 0xB8, 0x6E, 0x1B, 0xC6, 0xF1, 0xAC, 0x6D, 0x69, 0xD0, 0x20, 0x88, 0x41, 0x48, 0x50, 0x80, 0x88, 0x43, 0x8C, 0x80 };
const struct IrCode code_na278Code = {
  freq_to_timerval(38000),
  114,
  5,
  code_na278Times,
  code_na278Codes
};

const uint16_t code_na279Times[] = { 313, 159, 49, 118, 49, 37, 46, 37, 46, 118, 46, 35, 49, 35, 50, 34, 49, 34, 49, 117, 50, 118, 49, 0 };
const uint8_t code_na279Codes[] = { 0x01, 0x12, 0x33, 0x42, 0x34, 0x12, 0x42, 0x51, 0x12, 0x41, 0x67, 0x17, 0x71, 0x77, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x89, 0x78, 0x18, 0x89, 0xA8, 0x88, 0x88, 0x81, 0x88, 0x18, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x18, 0x81, 0x11, 0x81, 0x18, 0x88, 0x8B };
const struct IrCode code_na279Code = {
  freq_to_timerval(38000),
  114,
  4,
  code_na279Times,
  code_na279Codes
};

const uint16_t code_na280Times[] = { 309, 306, 310, 443, 58, 165, 57, 54, 57, 53, 57, 166, 57, 165, 58, 53, 57, 0 };
const uint8_t code_na280Codes[] = { 0x01, 0x23, 0x23, 0x45, 0x23, 0x63, 0x65, 0x73, 0x23, 0x25, 0x24, 0x74, 0x74, 0x74, 0x34, 0x47, 0x47, 0x45, 0x74, 0x74, 0x74, 0x57, 0x57, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x47, 0x64, 0x74, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x46, 0x76, 0x34, 0x52, 0x62, 0x45, 0x80 };
const struct IrCode code_na280Code = {
  freq_to_timerval(38000),
  115,
  4,
  code_na280Times,
  code_na280Codes
};

const uint16_t code_na281Times[] = { 309, 306, 309, 444, 57, 166, 58, 53, 57, 53, 58, 165, 57, 165, 57, 54, 57, 0 };
const uint8_t code_na281Codes[] = { 0x01, 0x23, 0x23, 0x45, 0x23, 0x63, 0x62, 0x37, 0x44, 0x56, 0x24, 0x73, 0x43, 0x47, 0x34, 0x34, 0x43, 0x47, 0x44, 0x34, 0x43, 0x64, 0x54, 0x34, 0x43, 0x47, 0x34, 0x74, 0x43, 0x44, 0x54, 0x73, 0x47, 0x34, 0x34, 0x43, 0x44, 0x34, 0x73, 0x47, 0x34, 0x74, 0x43, 0x44, 0x34, 0x43, 0x44, 0x34, 0x73, 0x47, 0x34, 0x75, 0x42, 0x56, 0x65, 0x64, 0x56, 0x80 };
const struct IrCode code_na281Code = {
  freq_to_timerval(38000),
  115,
  4,
  code_na281Times,
  code_na281Codes
};

const uint16_t code_na282Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na282Codes[] = { 0x1A, 0xAA, 0x65, 0xA5, 0xA5, 0x55, 0x9A, 0x5A, 0x5A, 0xAA, 0x65, 0x55, 0xB0 };
const struct IrCode code_na282Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na282Times,
  code_na282Codes
};

const uint16_t code_na283Times[] = { 844, 421, 54, 157, 54, 54, 52, 53, 51, 54, 52, 156, 52, 54, 51, 157, 55, 53, 52, 157, 55, 156, 54, 0 };
const uint8_t code_na283Codes[] = { 0x01, 0x23, 0x45, 0x23, 0x63, 0x46, 0x46, 0x36, 0x37, 0x26, 0x58, 0x92, 0x67, 0xA8, 0x7B };
const struct IrCode code_na283Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na283Times,
  code_na283Codes
};

const uint16_t code_na284Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na284Codes[] = { 0x15, 0x65, 0x6A, 0x5A, 0xAA, 0x9A, 0x95, 0xA5, 0x55, 0x55, 0x6A, 0xAA, 0xB0 };
const struct IrCode code_na284Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na284Times,
  code_na284Codes
};

const uint16_t code_na285Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na285Codes[] = { 0x15, 0x65, 0x6A, 0x5A, 0xAA, 0x9A, 0x95, 0xA5, 0x55, 0x55, 0x6A, 0xAA, 0xB0 };
const struct IrCode code_na285Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na285Times,
  code_na285Codes
};

const uint16_t code_na286Times[] = { 897, 441, 60, 163, 60, 164, 60, 53, 59, 54, 59, 165, 59, 52, 60, 54, 60, 52, 59, 53, 59, 164, 59, 55, 60, 788, 60, 165, 60, 162, 60, 51, 59, 0 };
const uint8_t code_na286Codes[] = { 0x00, 0x44, 0x31, 0x8C, 0x84, 0x29, 0x82, 0x21, 0x90, 0xE7, 0x18, 0x50, 0x91, 0x8C, 0xE7, 0x1A, 0x14, 0x81, 0x88, 0xE7, 0x19, 0x92, 0x31, 0x9C, 0x6B, 0x1A, 0x10, 0x91, 0x8C, 0x84, 0x33, 0x10, 0x64, 0x10, 0x67, 0x68, 0x90, 0x84, 0xA4, 0x87, 0x38, 0xD0, 0x84, 0x24, 0x83, 0x58, 0xD0, 0x84, 0xA4, 0x83, 0x20, 0xD0, 0x84, 0x8C, 0xE3, 0x22, 0x4C, 0x94, 0x10, 0x64, 0x3A, 0x4C, 0x81, 0x8C, 0xE3, 0x38, 0xC2, 0xA4, 0xA4, 0xA7, 0x6B, 0x98, 0x84, 0x21, 0x24, 0x3A, 0xC6, 0x80, 0x89, 0x03, 0x39, 0xD2, 0x64, 0x8C, 0x63, 0x21, 0x12, 0x64, 0x25, 0x24, 0x39, 0xC6, 0x84, 0x25, 0xA5, 0x69, 0xC6, 0x84, 0x8C, 0x63, 0x22, 0xC6, 0x81, 0x28, 0x42, 0x69, 0xDF, 0x00 };
const struct IrCode code_na286Code = {
  freq_to_timerval(38000),
  172,
  5,
  code_na286Times,
  code_na286Codes
};

const uint16_t code_na287Times[] = { 320, 961, 62, 144, 59, 43, 61, 144, 59, 145, 58, 43, 61, 41, 58, 48, 56, 46, 56, 150, 53, 153, 59, 46, 56, 148, 58, 0 };
const uint8_t code_na287Codes[] = { 0x01, 0x22, 0x23, 0x22, 0x24, 0x32, 0x22, 0x56, 0x78, 0x88, 0x88, 0x98, 0xA8, 0x8B, 0xCD };
const struct IrCode code_na287Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na287Times,
  code_na287Codes
};

const uint16_t code_na288Times[] = { 29, 13236, 322, 960, 59, 147, 59, 43, 56, 150, 56, 45, 59, 45, 56, 147, 56, 46, 59, 46, 56, 0 };
const uint8_t code_na288Codes[] = { 0x01, 0x23, 0x33, 0x43, 0x33, 0x35, 0x53, 0x33, 0x63, 0x67, 0x28, 0x87, 0x98, 0x28, 0x79, 0xA0 };
const struct IrCode code_na288Code = {
  freq_to_timerval(38000),
  31,
  4,
  code_na288Times,
  code_na288Codes
};

const uint16_t code_na289Times[] = { 884, 394, 62, 143, 51, 50, 52, 50, 54, 47, 54, 149, 54, 48, 51, 154, 51, 152, 49, 52, 49, 53, 49, 154, 51, 151, 51, 0 };
const uint8_t code_na289Codes[] = { 0x01, 0x23, 0x45, 0x44, 0x67, 0x84, 0x22, 0x22, 0x22, 0x92, 0x2A, 0x84, 0xB2, 0x22, 0xCD };
const struct IrCode code_na289Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na289Times,
  code_na289Codes
};

const uint16_t code_na290Times[] = { 444, 441, 55, 160, 55, 53, 55, 161, 55, 521, 442, 441, 57, 158, 57, 51, 55, 0 };
const uint8_t code_na290Codes[] = { 0x01, 0x21, 0x22, 0x22, 0x32, 0x22, 0x33, 0x23, 0x32, 0x33, 0x33, 0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x34, 0x52, 0x32, 0x33, 0x33, 0x26, 0x33, 0x22, 0x32, 0x23, 0x22, 0x22, 0x33, 0x32, 0x22, 0x22, 0x22, 0x72, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 0x28 };
const struct IrCode code_na290Code = {
  freq_to_timerval(38000),
  100,
  4,
  code_na290Times,
  code_na290Codes
};

const uint16_t code_na291Times[] = { 446, 437, 59, 156, 59, 49, 60, 156, 60, 48, 59, 48, 60, 516, 445, 438, 59, 0 };
const uint8_t code_na291Codes[] = { 0x01, 0x23, 0x44, 0x55, 0x13, 0x44, 0x55, 0x21, 0x44, 0x11, 0x13, 0x45, 0x51, 0x33, 0x11, 0x33, 0x11, 0x33, 0x11, 0x33, 0x12, 0x13, 0x31, 0x24, 0x46, 0x74, 0x35, 0x11, 0x31, 0x52, 0x13, 0x11, 0x14, 0x31, 0x22, 0x44, 0x31, 0x14, 0x44, 0x45, 0x52, 0x44, 0x44, 0x45, 0x52, 0x23, 0x45, 0x55, 0x13, 0x38 };
const struct IrCode code_na291Code = {
  freq_to_timerval(38000),
  100,
  4,
  code_na291Times,
  code_na291Codes
};

const uint16_t code_na292Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na292Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na292Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na292Times,
  code_na292Codes
};

const uint16_t code_na293Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na293Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na293Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na293Times,
  code_na293Codes
};

const uint16_t code_na294Times[] = { 453, 423, 68, 146, 68, 39, 69, 41, 66, 41, 66, 42, 66, 149, 60, 47, 60, 154, 60, 155, 60, 157, 57, 157, 57, 50, 57, 513, 444, 431, 62, 152, 62, 45, 62, 0 };
const uint8_t code_na294Codes[] = { 0x00, 0x44, 0x11, 0x90, 0xA5, 0x31, 0x4E, 0x73, 0xA0, 0xE7, 0x39, 0xD0, 0x73, 0x9D, 0x08, 0x3A, 0x10, 0x84, 0xA5, 0x4B, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xD6, 0xC5, 0xB1, 0x8C, 0x63, 0x5C, 0x74, 0x9D, 0x08, 0x43, 0xE0, 0xF7, 0xBD, 0x10, 0x43, 0xDE, 0xF8, 0x21, 0xEF, 0x84, 0x1F, 0x08, 0x42, 0x10, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x21, 0x08, 0x3E, 0x0F, 0x7B, 0xDF, 0x10 };
const struct IrCode code_na294Code = {
  freq_to_timerval(38000),
  100,
  5,
  code_na294Times,
  code_na294Codes
};

const uint16_t code_na295Times[] = { 347, 174, 42, 46, 42, 131, 42, 47, 42, 48, 41, 46, 42, 132, 42, 130, 42, 45, 41, 131, 41, 47, 41, 48, 42, 43, 42, 1054, 347, 175, 41, 133, 41, 132, 41, 130, 42, 129, 42, 0 };
const uint8_t code_na295Codes[] = { 0x00, 0x44, 0x11, 0x8C, 0x64, 0x28, 0x4A, 0x10, 0x8C, 0xC4, 0x29, 0x4A, 0x11, 0x8C, 0xC6, 0x3A, 0x02, 0x90, 0x8C, 0x64, 0x40, 0x42, 0x15, 0x0D, 0x6B, 0x42, 0x02, 0xA5, 0x0D, 0x6B, 0x42, 0x02, 0xA5, 0x0C, 0x8B, 0x42, 0x0E, 0x90, 0x8C, 0x64, 0x63, 0x5C, 0x54, 0x84, 0x6B, 0x21, 0x10, 0x50, 0x84, 0x63, 0x31, 0x10, 0x80, 0x8C, 0x6B, 0x33, 0xCE, 0x10, 0x9C, 0x63, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x72, 0x84, 0x50, 0x32, 0xD0, 0x80, 0xA4, 0x43, 0x31, 0x0A, 0x52, 0x84, 0x63, 0x21, 0x22, 0x73, 0x9C, 0x43, 0x31, 0x24, 0x70, 0xA4, 0x43, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x11, 0x08, 0x43, 0x22, 0xD0, 0x80, 0x8C, 0x6B, 0x33, 0xCE, 0x12, 0x84, 0x23, 0x19, 0x02, 0x10, 0x84, 0x23, 0x19, 0x10, 0x72, 0x84, 0x23, 0x19, 0x0E, 0x52, 0x84, 0x63, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x11, 0x08, 0x70, 0x22, 0xD9, 0x30 };
const struct IrCode code_na295Code = {
  freq_to_timerval(38000),
  220,
  5,
  code_na295Times,
  code_na295Codes
};

const uint16_t code_na296Times[] = { 347, 172, 44, 46, 42, 130, 42, 46, 42, 47, 42, 48, 41, 47, 41, 132, 42, 132, 41, 130, 42, 45, 42, 131, 41, 48, 41, 46, 41, 131, 42, 43, 41, 1054, 346, 175, 42, 129, 42, 0 };
const uint8_t code_na296Codes[] = { 0x00, 0x44, 0x31, 0x90, 0x85, 0x18, 0xC6, 0x33, 0x10, 0xE5, 0x18, 0xC6, 0x31, 0x91, 0x08, 0x4A, 0x86, 0xB3, 0x10, 0xAC, 0x52, 0x86, 0x42, 0x30, 0xA5, 0x53, 0x46, 0x32, 0x18, 0xA5, 0x6B, 0x5A, 0x32, 0x10, 0x85, 0x68, 0xDC, 0xB2, 0x30, 0xA5, 0x7C, 0x22, 0xA1, 0x0C, 0xC4, 0x63, 0x14, 0xA1, 0x98, 0xC4, 0x39, 0x54, 0x31, 0x98, 0xC4, 0x3A, 0x12, 0xD6, 0xAC, 0x8C, 0x29, 0x54, 0xD1, 0x8C, 0x84, 0x21, 0x5A, 0xD6, 0x8D, 0x68, 0x43, 0x14, 0xA1, 0xB8, 0xE4, 0x41, 0x5A, 0x36, 0x8C, 0x64, 0x21, 0x44, 0x91, 0x38, 0xE4, 0x41, 0x52, 0x91, 0xAD, 0x64, 0x63, 0x14, 0xA1, 0x98, 0xC4, 0x63, 0x14, 0xA1, 0x09, 0x64, 0x21, 0x5A, 0x36, 0x8C, 0x64, 0x42, 0x24, 0xA1, 0x90, 0x8C, 0x29, 0x54, 0xA1, 0x8C, 0x8C, 0x29, 0x5A, 0x91, 0x90, 0x8C, 0x29, 0x64, 0xA1, 0x98, 0x8C, 0x29, 0x54, 0xA1, 0x8C, 0x8C, 0x29, 0x54, 0x91, 0xAC, 0xCB, 0x61, 0x5F, 0x30 };
const struct IrCode code_na296Code = {
  freq_to_timerval(38000),
  220,
  5,
  code_na296Times,
  code_na296Codes
};

const uint16_t code_na297Times[] = { 903, 452, 59, 171, 56, 171, 56, 58, 57, 58, 56, 169, 60, 171, 57, 170, 57, 168, 59, 169, 59, 58, 57, 57, 59, 168, 56, 56, 59, 56, 58, 58, 60, 57, 59, 55, 56, 0 };
const uint8_t code_na297Codes[] = { 0x00, 0x44, 0x31, 0x90, 0x85, 0x30, 0x84, 0x71, 0xA1, 0x29, 0x52, 0xC6, 0x42, 0x0C, 0xA9, 0x62, 0x88, 0xB1, 0x8C, 0x6D, 0x50, 0xC8, 0x31, 0x8C, 0xAC, 0x50, 0xC8, 0xB1, 0x8C, 0x6D, 0x50, 0xC8, 0x31, 0x8D, 0x0E, 0x50, 0xC6, 0x41, 0x8D, 0xAE, 0x78, 0xC6, 0xB1, 0x8D, 0xAE, 0x50, 0xC8, 0x31, 0x8D, 0x0E, 0x50, 0xC6, 0x41, 0x8D, 0xAE, 0x80, 0x86, 0x21, 0x8D, 0xAE, 0x50, 0x84, 0x71, 0x15, 0x31, 0x0C, 0x80 };
const struct IrCode code_na297Code = {
  freq_to_timerval(38000),
  106,
  5,
  code_na297Times,
  code_na297Codes
};

const uint16_t code_na298Times[] = { 27, 1815, 302, 896, 52, 50, 50, 150, 49, 50, 50, 47, 53, 50, 50, 50, 49, 150, 50, 52, 47, 152, 50, 149, 50, 49, 49, 53, 47, 53, 46, 53, 47, 52, 52, 295, 300, 895, 52, 152, 47, 50, 52, 51, 50, 152, 52, 47, 49, 51, 52, 48, 49, 298, 52, 149, 52, 147, 52, 148, 50, 0 };
const uint8_t code_na298Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC7, 0x39, 0xC8, 0x83, 0xA5, 0x47, 0x38, 0xD0, 0xB5, 0xA1, 0x87, 0x39, 0xCE, 0xD7, 0x3E, 0x04, 0x21, 0xCE, 0x73, 0x90, 0x84, 0x39, 0xCE, 0x73, 0xB5, 0xF0, 0x81, 0x08, 0x73, 0x9C, 0x68, 0x5A, 0xE3, 0x29, 0xD2, 0xA7, 0x39, 0x08, 0x43, 0xAC, 0xE7, 0x41, 0xD7, 0x65, 0x0D, 0x0B, 0x39, 0xC8, 0x43, 0x9C, 0xE7, 0x39, 0x1B, 0x08, 0x5E, 0xF8, 0x39, 0xCE, 0x42, 0x30, 0xE7, 0x39, 0xC8, 0x44, 0xC2, 0x17, 0xC9, 0xCE, 0x7D, 0x4B, 0x67, 0x39, 0x08, 0x73, 0xA5, 0xCA, 0xC9, 0x08, 0x43, 0x9D, 0x68, 0x42, 0xCE, 0x36, 0xAB, 0x87, 0x39, 0xD0, 0x85, 0x9C, 0xE4, 0x21, 0xD3, 0x07, 0x73, 0xA4, 0x21, 0xD6, 0x73, 0x90, 0x87, 0x39, 0xEC, 0xAE, 0x23, 0xC0 };
const struct IrCode code_na298Code = {
  freq_to_timerval(38000),
  175,
  5,
  code_na298Times,
  code_na298Codes
};

const uint16_t code_na299Times[] = { 61, 1780, 302, 894, 52, 50, 50, 149, 49, 48, 52, 47, 52, 48, 52, 149, 49, 50, 50, 50, 49, 149, 49, 150, 50, 146, 52, 147, 49, 53, 47, 50, 51, 48, 50, 47, 49, 47, 52, 146, 49, 297, 299, 894, 52, 152, 49, 51, 49, 147, 50, 152, 47, 149, 51, 147, 47, 52, 46, 50, 51, 51, 53, 50, 50, 53, 46, 53, 50, 297, 300, 893, 50, 52, 51, 150, 52, 150, 49, 152, 46, 150, 52, 0 };
const uint8_t code_na299Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x46, 0x14, 0x51, 0x87, 0x20, 0x80, 0xC9, 0x08, 0xA2, 0xCC, 0x34, 0xD1, 0x42, 0x20, 0x92, 0x08, 0x24, 0x83, 0x8F, 0x15, 0x00, 0x88, 0x25, 0x10, 0x89, 0x44, 0x22, 0x49, 0x20, 0x82, 0x4E, 0x3C, 0x90, 0x84, 0x09, 0x24, 0xCD, 0x34, 0x75, 0x15, 0x58, 0xF2, 0x09, 0x08, 0x95, 0xC8, 0x48, 0x74, 0x42, 0x60, 0x22, 0xD9, 0x68, 0xB3, 0x5B, 0x14, 0x50, 0x92, 0x14, 0x24, 0x82, 0x20, 0x82, 0x48, 0x39, 0xC7, 0x5E, 0x10, 0x22, 0x51, 0x18, 0x22, 0x44, 0x15, 0xF2, 0x09, 0x24, 0x88, 0x1C, 0x84, 0xF1, 0x82, 0x8A, 0x34, 0xC5, 0x14, 0x61, 0x42, 0x20, 0x82, 0x4B, 0x91, 0x29, 0x52, 0x4C, 0xD1, 0x8D, 0x98, 0x39, 0xE8, 0x0C, 0xB3, 0x46, 0x14, 0x53, 0x53, 0x35, 0xF2, 0x09, 0x24, 0xE3, 0xC9, 0x39, 0x83, 0x46, 0x15, 0x33, 0x42, 0x24, 0x92, 0x08, 0x24, 0x82, 0x87, 0x61, 0x3A, 0x40 };
const struct IrCode code_na299Code = {
  freq_to_timerval(38000),
  175,
  6,
  code_na299Times,
  code_na299Codes
};

const uint16_t code_na300Times[] = { 908, 441, 71, 159, 71, 49, 74, 157, 74, 156, 74, 49, 71, 47, 74, 47, 71, 50, 71, 52, 71, 160, 71, 1996, 71, 0 };
const uint8_t code_na300Codes[] = { 0x01, 0x22, 0x33, 0x44, 0x56, 0x75, 0x22, 0x88, 0x88, 0x98, 0x88, 0xAA, 0x88, 0x88, 0x8A, 0x8A, 0x88, 0xA8, 0xBA, 0x88, 0x88, 0x88, 0x8A, 0x88, 0x88, 0xA8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8A, 0x8A, 0x8C };
const struct IrCode code_na300Code = {
  freq_to_timerval(38000),
  70,
  4,
  code_na300Times,
  code_na300Codes
};

const uint16_t code_na301Times[] = { 911, 437, 76, 155, 71, 50, 71, 160, 73, 50, 70, 50, 71, 1994, 70, 160, 71, 0 };
const uint8_t code_na301Codes[] = { 0x01, 0x22, 0x23, 0x33, 0x22, 0x22, 0x24, 0x22, 0x22, 0x22, 0x22, 0x32, 0x22, 0x22, 0x23, 0x53, 0x52, 0x32, 0x63, 0x22, 0x22, 0x22, 0x23, 0x22, 0x25, 0x35, 0x22, 0x25, 0x22, 0x22, 0x22, 0x22, 0x23, 0x23, 0x78 };
const struct IrCode code_na301Code = {
  freq_to_timerval(38000),
  70,
  4,
  code_na301Times,
  code_na301Codes
};

const uint16_t code_na302Times[] = { 383, 189, 46, 46, 51, 143, 44, 47, 49, 142, 43, 47, 44, 48, 46, 142, 43, 49, 43, 44, 51, 142, 43, 144, 48, 141, 49, 139, 46, 143, 46, 140, 43, 46, 46, 50, 46, 139, 44, 46, 49, 47, 46, 48, 46, 49, 46, 44, 43, 143, 49, 140, 49, 141, 43, 50, 46, 146, 41, 46, 46, 47, 48, 144, 48, 142, 44, 50, 44, 143, 44, 49, 44, 144, 48, 0 };
const uint8_t code_na302Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x06, 0x1C, 0x81, 0x09, 0x28, 0xB1, 0x8C, 0x18, 0xD3, 0x8F, 0x11, 0x04, 0x52, 0x11, 0x35, 0x15, 0x54, 0x72, 0x16, 0x5C, 0xA6, 0x08, 0x64, 0x80, 0x5A, 0x64, 0x72, 0x16, 0x6D, 0xC7, 0x54, 0x55, 0xE3, 0x06, 0x05, 0xF4, 0x20, 0x79, 0x57, 0x95, 0x5A, 0x16, 0xC1, 0x58, 0xE3, 0xC4, 0x88, 0x65, 0x63, 0x56, 0x35, 0x63, 0x56, 0x35, 0x63, 0x38, 0x65, 0x5E, 0x55, 0xE5, 0x5E, 0x55, 0xE5, 0x5E, 0x59, 0xE1, 0x24, 0x3C, 0x71, 0x96, 0x84, 0xE2, 0x04, 0x16, 0x50 };
const struct IrCode code_na302Code = {
  freq_to_timerval(38000),
  106,
  6,
  code_na302Times,
  code_na302Codes
};

const uint16_t code_na303Times[] = { 382, 190, 46, 51, 46, 142, 43, 49, 48, 142, 43, 48, 49, 142, 43, 47, 48, 143, 44, 47, 46, 143, 46, 144, 44, 48, 44, 142, 46, 47, 46, 141, 46, 49, 47, 143, 46, 48, 46, 138, 47, 48, 47, 142, 44, 46, 44, 49, 43, 143, 46, 46, 43, 50, 46, 139, 48, 0 };
const uint8_t code_na303Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x4C, 0x31, 0x28, 0x6B, 0x61, 0x1A, 0x21, 0x31, 0xC6, 0x7B, 0x20, 0xE8, 0x44, 0xF2, 0x71, 0xA7, 0x42, 0x1E, 0x15, 0x12, 0xAD, 0x07, 0x41, 0x4C, 0x95, 0xD4, 0xC9, 0x2D, 0x8B, 0x4C, 0x9D, 0x27, 0x49, 0xD2, 0x71, 0x30, 0x21, 0x5A, 0x19, 0x83, 0xA0, 0xE9, 0x3A, 0x4E, 0x31, 0xE4, 0xE9, 0x3A, 0x4E, 0x84, 0x34, 0xE8, 0x41, 0xFB, 0x20, 0x93, 0x27, 0x49, 0x6D, 0x67, 0x00 };
const struct IrCode code_na303Code = {
  freq_to_timerval(38000),
  106,
  5,
  code_na303Times,
  code_na303Codes
};

const uint16_t code_na304Times[] = { 309, 161, 49, 106, 52, 34, 49, 109, 48, 32, 51, 34, 49, 34, 49, 33, 48, 34, 49, 108, 48, 4423, 18, 0 };
const uint8_t code_na304Codes[] = { 0x01, 0x23, 0x45, 0x36, 0x63, 0x77, 0x86, 0x66, 0x63, 0x79, 0x63, 0x37, 0x8A, 0xB0 };
const struct IrCode code_na304Code = {
  freq_to_timerval(38000),
  27,
  4,
  code_na304Times,
  code_na304Codes
};

const uint16_t code_na305Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na305Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na305Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na305Times,
  code_na305Codes
};

const uint16_t code_na306Times[] = { 438, 438, 52, 161, 55, 161, 56, 160, 56, 52, 55, 53, 55, 746, 439, 434, 55, 0 };
const uint8_t code_na306Codes[] = { 0x01, 0x22, 0x34, 0x52, 0x55, 0x55, 0x53, 0x35, 0x25, 0x55, 0x54, 0x42, 0x22, 0x23, 0x32, 0x25, 0x55, 0x44, 0x45, 0x55, 0x25, 0x23, 0x55, 0x55, 0x55, 0x55, 0x44, 0x45, 0x25, 0x55, 0x55, 0x44, 0x55, 0x22, 0x55, 0x44, 0x46, 0x73, 0x22, 0x25, 0x53, 0x45, 0x55, 0x52, 0x24, 0x35, 0x55, 0x55, 0x52, 0x33, 0x22, 0x22, 0x35, 0x55, 0x55, 0x55, 0x55, 0x35, 0x22, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x24, 0x44, 0x45, 0x55, 0x55, 0x23, 0x45, 0x55, 0x58 };
const struct IrCode code_na306Code = {
  freq_to_timerval(38000),
  148,
  4,
  code_na306Times,
  code_na306Codes
};

const uint16_t code_na307Times[] = { 439, 435, 55, 161, 56, 160, 55, 53, 56, 53, 56, 52, 55, 745, 438, 435, 55, 163, 53, 160, 55, 160, 56, 0 };
const uint8_t code_na307Codes[] = { 0x01, 0x12, 0x13, 0x31, 0x33, 0x45, 0x52, 0x13, 0x13, 0x55, 0x53, 0x31, 0x11, 0x22, 0x11, 0x15, 0x55, 0x53, 0x33, 0x33, 0x14, 0x22, 0x33, 0x33, 0x33, 0x34, 0x55, 0x11, 0x13, 0x34, 0x55, 0x53, 0x33, 0x11, 0x55, 0x21, 0x36, 0x71, 0x11, 0x15, 0x52, 0x33, 0x33, 0x38, 0x95, 0x23, 0x33, 0x33, 0x3A, 0x21, 0x11, 0x12, 0x23, 0x33, 0x33, 0x33, 0x35, 0x23, 0x11, 0x33, 0x35, 0x55, 0x33, 0x33, 0x11, 0x25, 0x33, 0x33, 0x33, 0x33, 0x22, 0x33, 0x11, 0x4B };
const struct IrCode code_na307Code = {
  freq_to_timerval(38000),
  148,
  4,
  code_na307Times,
  code_na307Codes
};

const uint16_t code_na308Times[] = { 441, 435, 57, 158, 57, 50, 56, 54, 54, 51, 57, 53, 54, 50, 56, 51, 54, 158, 57, 157, 56, 158, 56, 161, 54, 517, 54, 161, 54, 157, 57, 51, 56, 0 };
const uint8_t code_na308Codes[] = { 0x00, 0x44, 0x11, 0x08, 0x64, 0x08, 0x4A, 0x61, 0x1C, 0xE5, 0x40, 0x92, 0xA3, 0xA8, 0x21, 0x2A, 0x12, 0xA5, 0x04, 0x21, 0x0A, 0x54, 0xA0, 0x84, 0x21, 0x49, 0xD4, 0xB3, 0x14, 0xC2, 0x5B, 0x00, 0x36, 0x90, 0x21, 0x08, 0x4A, 0x45, 0x28, 0x21, 0x08, 0x4A, 0x83, 0x9C, 0x22, 0x11, 0x5C, 0x73, 0x9D, 0xE2, 0x10, 0x84, 0x32, 0x1C, 0x45, 0x30, 0x8A, 0x83, 0xBC, 0x21, 0x0A, 0x45, 0x00 };
const struct IrCode code_na308Code = {
  freq_to_timerval(38000),
  100,
  5,
  code_na308Times,
  code_na308Codes
};

const uint16_t code_na309Times[] = { 439, 443, 53, 162, 53, 55, 53, 163, 53, 522, 440, 443, 53, 54, 53, 0 };
const uint8_t code_na309Codes[] = { 0x05, 0x14, 0x92, 0x29, 0x24, 0x93, 0x49, 0x94, 0x49, 0x44, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0x94, 0x91, 0x32, 0xA2, 0x89, 0x25, 0x12, 0x49, 0x28, 0x94, 0x8A, 0x48, 0xA4, 0x92, 0x49, 0x25, 0x92, 0x49, 0x24, 0x89, 0x29, 0x70 };
const struct IrCode code_na309Code = {
  freq_to_timerval(38000),
  100,
  3,
  code_na309Times,
  code_na309Codes
};

const uint16_t code_na310Times[] = { 99, 61, 59, 221, 59, 147, 59, 88, 59, 38, 58, 221, 59, 37, 58, 147, 58, 38, 58, 40, 56, 40, 56, 88, 58, 88, 58, 37, 59, 0 };
const uint8_t code_na310Codes[] = { 0x01, 0x23, 0x14, 0x56, 0x76, 0x88, 0x9A, 0xB4, 0x85, 0x6C, 0x36, 0x85, 0x38, 0x8D, 0xD8, 0x7C, 0x45, 0x35, 0x48, 0x9B, 0x68, 0x88, 0x85, 0x18, 0xCE };
const struct IrCode code_na310Code = {
  freq_to_timerval(38000),
  50,
  4,
  code_na310Times,
  code_na310Codes
};

const uint16_t code_na311Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na311Codes[] = { 0x15, 0x55, 0x95, 0xA6, 0xAA, 0xAA, 0x6A, 0x59, 0x6A, 0x99, 0x55, 0x66, 0xB0 };
const struct IrCode code_na311Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na311Times,
  code_na311Codes
};

const uint16_t code_na312Times[] = { 60, 120, 60, 60 };
const uint8_t code_na312Codes[] = { 0x2B, 0xD2, 0x90 };
const struct IrCode code_na312Code = {
  freq_to_timerval(38000),
  22,
  1,
  code_na312Times,
  code_na312Codes
};

const uint16_t code_na313Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na313Codes[] = { 0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0xA9, 0x95, 0x56, 0x70 };
const struct IrCode code_na313Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na313Times,
  code_na313Codes
};

const uint16_t code_na314Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na314Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x56, 0x6A, 0xA9, 0xB0 };
const struct IrCode code_na314Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na314Times,
  code_na314Codes
};

const uint16_t code_na315Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na315Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na315Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na315Times,
  code_na315Codes
};

const uint16_t code_na316Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na316Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na316Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na316Times,
  code_na316Codes
};

const uint16_t code_na317Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na317Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na317Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na317Times,
  code_na317Codes
};

const uint16_t code_na318Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na318Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na318Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na318Times,
  code_na318Codes
};

const uint16_t code_na319Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na319Codes[] = { 0x16, 0x55, 0x56, 0x6A, 0xA9, 0xAA, 0xA9, 0x95, 0x55, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na319Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na319Times,
  code_na319Codes
};

const uint16_t code_na320Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na320Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na320Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na320Times,
  code_na320Codes
};

const uint16_t code_na321Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na321Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na321Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na321Times,
  code_na321Codes
};

const uint16_t code_na322Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na322Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na322Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na322Times,
  code_na322Codes
};

const uint16_t code_na323Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na323Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na323Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na323Times,
  code_na323Codes
};

const uint16_t code_na324Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na324Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na324Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na324Times,
  code_na324Codes
};

const uint16_t code_na325Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na325Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na325Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na325Times,
  code_na325Codes
};

const uint16_t code_na326Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na326Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na326Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na326Times,
  code_na326Codes
};

const uint16_t code_na327Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na327Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na327Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na327Times,
  code_na327Codes
};

const uint16_t code_na328Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na328Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na328Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na328Times,
  code_na328Codes
};

const uint16_t code_na329Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na329Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na329Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na329Times,
  code_na329Codes
};

const uint16_t code_na330Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na330Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na330Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na330Times,
  code_na330Codes
};

const uint16_t code_na331Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na331Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na331Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na331Times,
  code_na331Codes
};

const uint16_t code_na332Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na332Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na332Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na332Times,
  code_na332Codes
};

const uint16_t code_na333Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na333Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na333Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na333Times,
  code_na333Codes
};

const uint16_t code_na334Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na334Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na334Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na334Times,
  code_na334Codes
};

const uint16_t code_na335Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na335Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na335Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na335Times,
  code_na335Codes
};

const uint16_t code_na336Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na336Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na336Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na336Times,
  code_na336Codes
};

const uint16_t code_na337Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na337Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na337Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na337Times,
  code_na337Codes
};

const uint16_t code_na338Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na338Codes[] = { 0x1A, 0x65, 0x9A, 0x65, 0xA5, 0x9A, 0x65, 0x9A, 0x5A, 0xAA, 0xA5, 0x55, 0x70 };
const struct IrCode code_na338Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na338Times,
  code_na338Codes
};

const uint16_t code_na339Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na339Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na339Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na339Times,
  code_na339Codes
};

const uint16_t code_na340Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na340Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na340Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na340Times,
  code_na340Codes
};

const uint16_t code_na341Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na341Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na341Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na341Times,
  code_na341Codes
};

const uint16_t code_na342Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na342Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na342Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na342Times,
  code_na342Codes
};

const uint16_t code_na343Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na343Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na343Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na343Times,
  code_na343Codes
};

const uint16_t code_na344Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na344Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na344Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na344Times,
  code_na344Codes
};

const uint16_t code_na345Times[] = { 355, 171, 47, 41, 46, 128, 49, 38, 46, 41, 46, 40, 47, 40, 49, 41, 46, 7457, 354, 172, 46, 129, 46, 0 };
const uint8_t code_na345Codes[] = { 0x01, 0x21, 0x34, 0x45, 0x61, 0x74, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x22, 0x24, 0x28, 0x94, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x22, 0x24, 0x28, 0x94, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x2A, 0xA4, 0xAB };
const struct IrCode code_na345Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na345Times,
  code_na345Codes
};

const uint16_t code_na346Times[] = { 351, 177, 42, 46, 42, 133, 42, 45, 43, 45, 42, 130, 45, 130, 44, 131, 45, 131, 44, 46, 42, 131, 45, 45, 43, 130, 50, 125, 50, 38, 45, 7547, 351, 176, 45, 46, 43, 131, 46, 45, 44, 132, 45, 7548, 352, 177, 46, 130, 45, 42, 45, 0 };
const uint8_t code_na346Codes[] = { 0x00, 0x44, 0x32, 0x0C, 0x23, 0x20, 0xC2, 0x32, 0x0C, 0x44, 0x08, 0xC6, 0x40, 0x8C, 0x64, 0x10, 0xC8, 0x11, 0x8C, 0x21, 0x18, 0x82, 0x53, 0x1D, 0x09, 0x0A, 0x96, 0xC4, 0x35, 0xAE, 0x33, 0xE1, 0x12, 0xAC, 0x21, 0x18, 0xC2, 0x11, 0x8C, 0x21, 0x11, 0x08, 0x30, 0x8C, 0x83, 0x08, 0xE5, 0x30, 0x8C, 0x64, 0x20, 0xC6, 0xC5, 0xA8, 0xCD, 0xA3, 0x96, 0xC5, 0xA9, 0x06, 0x32, 0xD9, 0x5B, 0x0D, 0x8B, 0x19, 0x02, 0x31, 0x90, 0x23, 0x08, 0xCA, 0x90, 0x8C, 0x64, 0x08, 0xC6, 0x42, 0xAC, 0x84, 0x18, 0xC8, 0x41, 0xA9, 0x65, 0x41, 0xAE, 0xB0, 0xAA, 0x2A, 0x32, 0x0D, 0x84, 0x64 };
const struct IrCode code_na346Code = {
  freq_to_timerval(38000),
  150,
  5,
  code_na346Times,
  code_na346Codes
};

const uint16_t code_na347Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na347Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na347Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na347Times,
  code_na347Codes
};

const uint16_t code_na348Times[] = { 356, 169, 49, 38, 49, 126, 49, 7505, 49, 0 };
const uint8_t code_na348Codes[] = { 0x05, 0x12, 0x49, 0x24, 0x92, 0x51, 0x24, 0x92, 0x49, 0x44, 0x92, 0x49, 0x28, 0xA4, 0x91, 0x28, 0xA4, 0x91, 0x4C, 0x14, 0x49, 0x24, 0x92, 0x49, 0x44, 0x92, 0x49, 0x25, 0x12, 0x49, 0x24, 0xA2, 0x92, 0x44, 0xA2, 0x92, 0x45, 0x30, 0x51, 0x24, 0x92, 0x49, 0x25, 0x12, 0x49, 0x24, 0x94, 0x49, 0x24, 0x92, 0x8A, 0x49, 0x12, 0x8A, 0x49, 0x15, 0x00 };
const struct IrCode code_na348Code = {
  freq_to_timerval(38000),
  150,
  3,
  code_na348Times,
  code_na348Codes
};

const uint16_t code_na349Times[] = { 348, 174, 44, 43, 45, 130, 45, 42, 45, 43, 45, 45, 42, 43, 44, 130, 45, 129, 44, 7494, 348, 173, 45, 46, 42, 42, 45, 0 };
const uint8_t code_na349Codes[] = { 0x01, 0x23, 0x31, 0x43, 0x56, 0x43, 0x31, 0x73, 0x31, 0x43, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x42, 0x72, 0x83, 0x29, 0xA1, 0x23, 0x3B, 0xC3, 0x31, 0x43, 0x31, 0x23, 0x31, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x31, 0x43, 0x31, 0x23, 0x34, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x34, 0x33, 0x31, 0x23, 0x14, 0x33, 0x34, 0x33, 0x84, 0x33, 0x14, 0x33, 0x32, 0x38, 0x28, 0x23, 0x32, 0x38, 0x22, 0x73, 0x8D };
const struct IrCode code_na349Code = {
  freq_to_timerval(38000),
  200,
  4,
  code_na349Times,
  code_na349Codes
};

const uint16_t code_na350Times[] = { 348, 174, 44, 43, 45, 130, 45, 42, 45, 43, 45, 45, 42, 43, 44, 130, 45, 129, 44, 7494, 348, 173, 45, 46, 42, 42, 45, 0 };
const uint8_t code_na350Codes[] = { 0x01, 0x23, 0x31, 0x43, 0x56, 0x43, 0x31, 0x73, 0x31, 0x43, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x42, 0x72, 0x83, 0x29, 0xA1, 0x23, 0x3B, 0xC3, 0x31, 0x43, 0x31, 0x23, 0x31, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x31, 0x43, 0x31, 0x23, 0x34, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x34, 0x33, 0x31, 0x23, 0x14, 0x33, 0x34, 0x33, 0x84, 0x33, 0x14, 0x33, 0x32, 0x38, 0x28, 0x23, 0x32, 0x38, 0x22, 0x73, 0x8D };
const struct IrCode code_na350Code = {
  freq_to_timerval(38000),
  200,
  4,
  code_na350Times,
  code_na350Codes
};

const uint16_t code_na351Times[] = { 348, 172, 46, 44, 43, 128, 43, 44, 45, 42, 45, 129, 45, 45, 42, 42, 42, 45, 42, 132, 42, 7473, 348, 175, 42, 0 };
const uint8_t code_na351Codes[] = { 0x01, 0x21, 0x33, 0x33, 0x33, 0x44, 0x44, 0x54, 0x67, 0x68, 0x76, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9C };
const struct IrCode code_na351Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na351Times,
  code_na351Codes
};

const uint16_t code_na352Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na352Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na352Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na352Times,
  code_na352Codes
};

const uint16_t code_na353Times[] = { 356, 167, 52, 39, 49, 124, 49, 39, 49, 36, 51, 39, 49, 126, 48, 39, 48, 40, 48, 42, 46, 40, 46, 130, 46, 42, 45, 42, 45, 130, 45, 7466, 352, 174, 353, 170, 48, 127, 48, 129, 45, 45, 43, 45, 43, 132, 43, 0 };
const uint8_t code_na353Codes[] = { 0x00, 0x44, 0x11, 0x8C, 0x63, 0x19, 0x0A, 0x31, 0x8C, 0xC3, 0x39, 0xCE, 0x84, 0x25, 0x49, 0x5B, 0x18, 0xC6, 0x31, 0x8C, 0x62, 0xDA, 0xB7, 0x39, 0xCD, 0x63, 0x9A, 0xE7, 0x39, 0xCD, 0x73, 0xE0, 0xD7, 0x35, 0xAD, 0x6B, 0x5A, 0xD6, 0xB5, 0xAD, 0x73, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5C, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xE6, 0xB9, 0xCE, 0x73, 0x5A, 0xE6, 0xB9, 0xCE, 0x73, 0x5C, 0xF8, 0x35, 0xCD, 0x6B, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5C, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xD7, 0x35, 0xAD, 0x6B, 0x5A, 0xD6, 0xB9, 0xAE, 0x73, 0x9C, 0xD6, 0xB9, 0xAE, 0x73, 0x9C, 0xD7, 0x3E, 0x27, 0x91, 0xCE, 0x73, 0x9C, 0xE7, 0x39, 0xCE, 0x79, 0xB1, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x6C, 0x63, 0x18, 0xC6, 0x31, 0x8B, 0x62, 0xD6, 0xB5, 0xD2, 0xB6, 0xAD, 0xAD, 0x6B, 0x56, 0xD7 };
const struct IrCode code_na353Code = {
  freq_to_timerval(38000),
  200,
  5,
  code_na353Times,
  code_na353Codes
};

const uint16_t code_na354Times[] = { 450, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na354Codes[] = { 0x1A, 0xA9, 0x65, 0x56, 0x96, 0x95, 0x69, 0x6A, 0xB0 };
const struct IrCode code_na354Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na354Times,
  code_na354Codes
};

const uint16_t code_na355Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na355Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na355Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na355Times,
  code_na355Codes
};

const uint16_t code_na356Times[] = { 352, 172, 47, 41, 47, 128, 46, 41, 47, 44, 46, 42, 46, 130, 46, 129, 46, 7471, 354, 173, 46, 132, 43, 132, 43, 42, 43, 45, 43, 7471, 353, 173, 46, 0 };
const uint8_t code_na356Codes[] = { 0x00, 0x44, 0x11, 0x84, 0x24, 0x18, 0xC6, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x39, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x32, 0x12, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x62, 0x98, 0xCA, 0x5B, 0x0A, 0xA6, 0x29, 0x6B, 0x5B, 0x56, 0xE4, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4E, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x53, 0x21, 0xE5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA6, 0x29, 0x8E, 0x63, 0x14, 0xA6, 0x29, 0x8C, 0x63, 0x14, 0xC8, 0x79, 0x4E, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x32, 0x1E, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x62, 0x98, 0xC6, 0x31, 0x4A, 0x62, 0x98, 0xC6, 0x31, 0x4C, 0x87, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x53, 0x40 };
const struct IrCode code_na356Code = {
  freq_to_timerval(38000),
  350,
  5,
  code_na356Times,
  code_na356Codes
};

const uint16_t code_na357Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na357Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na357Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na357Times,
  code_na357Codes
};

const uint16_t code_na358Times[] = { 353, 171, 45, 43, 45, 131, 45, 45, 42, 43, 45, 46, 42, 46, 45, 42, 46, 42, 42, 131, 43, 42, 43, 130, 43, 45, 45, 130, 46, 45, 42, 130, 45, 7469, 353, 172, 42, 45, 46, 130, 45, 7043, 18, 0 };
const uint8_t code_na358Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC4, 0x29, 0x0E, 0x82, 0x99, 0x23, 0x50, 0x4A, 0x42, 0x90, 0x23, 0x59, 0x4C, 0x41, 0xB1, 0x86, 0x32, 0x46, 0xB1, 0x34, 0x4E, 0x32, 0x4A, 0xF1, 0x34, 0x43, 0x5C, 0x22, 0xE4, 0x84, 0x27, 0x71, 0x02, 0x10, 0x84, 0x23, 0x58, 0x42, 0x10, 0x8D, 0x45, 0x20, 0x44, 0x35, 0x14, 0x85, 0x21, 0x64, 0xB2, 0xA5, 0xA2, 0x69, 0x48, 0x23, 0xCC, 0x4D, 0x11, 0xE7, 0x4A, 0x80 };
const struct IrCode code_na358Code = {
  freq_to_timerval(38000),
  101,
  5,
  code_na358Times,
  code_na358Codes
};

const uint16_t code_na359Times[] = { 340, 166, 46, 42, 44, 125, 43, 42, 44, 42, 43, 43, 43, 126, 43, 123, 44, 122, 46, 123, 46, 126, 47, 39, 46, 122, 46, 7280, 43, 40, 47, 42, 46, 40, 44, 123, 44, 7280, 340, 169, 46, 43, 44, 39, 43, 125, 340, 168, 46, 125, 46, 0 };
const uint8_t code_na359Codes[] = { 0x00, 0x44, 0x32, 0x10, 0x64, 0x20, 0xC8, 0x41, 0x90, 0x44, 0x29, 0x06, 0x42, 0x0C, 0x84, 0x31, 0x48, 0x42, 0x90, 0x65, 0x21, 0xC2, 0x21, 0x21, 0x21, 0x2A, 0x02, 0x74, 0xA9, 0x0B, 0x63, 0x40, 0x13, 0x14, 0x84, 0x29, 0x06, 0x42, 0x39, 0xE4, 0x31, 0x48, 0x32, 0x10, 0x64, 0x21, 0x44, 0x41, 0x90, 0x85, 0x21, 0x0A, 0x22, 0x18, 0x42, 0x44, 0x02, 0x22, 0x45, 0x46, 0x3B, 0xC5, 0x29, 0x90, 0xC3, 0x23, 0xA8, 0x41, 0x90, 0x83, 0x21, 0x0C, 0x42, 0x16, 0xA1, 0x29, 0x06, 0x44, 0x04, 0xA4, 0x21, 0x48, 0x32, 0x08, 0x86, 0x10, 0x90, 0x11, 0xA0, 0x22, 0xB1, 0xD4, 0x51, 0x4A, 0xE5, 0x11, 0x06, 0x42, 0x0C, 0x84, 0x19, 0x08, 0x51, 0x10, 0x64, 0x20, 0xC8, 0x42, 0x92, 0xC3, 0x21, 0x06, 0x42, 0x14, 0x96, 0x1A, 0x18, 0xCC, 0x10, 0xA2, 0x21, 0x8C, 0x64, 0x3C, 0x52, 0xB9, 0x44, 0x41, 0x90, 0x83, 0x21, 0x0A, 0x41, 0x94, 0x44, 0x29, 0x08, 0x52, 0x0C, 0x84, 0x30, 0xC8, 0x42, 0x90, 0x85, 0x21, 0x8A, 0x21, 0x08, 0x43, 0x20, 0x88, 0x61, 0x08, 0x44, 0x3E, 0x40 };
const struct IrCode code_na359Code = {
  freq_to_timerval(38000),
  250,
  5,
  code_na359Times,
  code_na359Codes
};

const uint16_t code_na360Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na360Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na360Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na360Times,
  code_na360Codes
};

const uint16_t code_na361Times[] = { 89, 89 };
const uint8_t code_na361Codes[] = { 0x00, 0x00 };
const struct IrCode code_na361Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na361Times,
  code_na361Codes
};

const uint16_t code_na362Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na362Codes[] = { 0x15, 0x55, 0x66, 0xA9, 0xAA, 0xAA, 0x99, 0x56, 0x65, 0x55, 0x5A, 0xAA, 0xB0 };
const struct IrCode code_na362Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na362Times,
  code_na362Codes
};

const uint16_t code_na363Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na363Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na363Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na363Times,
  code_na363Codes
};

const uint16_t code_na364Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na364Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na364Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na364Times,
  code_na364Codes
};

const uint16_t code_na365Times[] = { 89, 89 };
const uint8_t code_na365Codes[] = { 0x00, 0x00 };
const struct IrCode code_na365Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na365Times,
  code_na365Codes
};

const uint16_t code_na366Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na366Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na366Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na366Times,
  code_na366Codes
};

const uint16_t code_na367Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na367Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na367Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na367Times,
  code_na367Codes
};

const uint16_t code_na368Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na368Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na368Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na368Times,
  code_na368Codes
};

const uint16_t code_na369Times[] = { 89, 89 };
const uint8_t code_na369Codes[] = { 0x00, 0x00 };
const struct IrCode code_na369Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na369Times,
  code_na369Codes
};

const uint16_t code_na370Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na370Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na370Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na370Times,
  code_na370Codes
};

const uint16_t code_na371Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na371Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na371Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na371Times,
  code_na371Codes
};

const uint16_t code_na372Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na372Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na372Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na372Times,
  code_na372Codes
};

const uint16_t code_na373Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na373Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na373Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na373Times,
  code_na373Codes
};

const uint16_t code_na374Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na374Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na374Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na374Times,
  code_na374Codes
};

const uint16_t code_na375Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na375Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na375Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na375Times,
  code_na375Codes
};

const uint16_t code_na376Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na376Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na376Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na376Times,
  code_na376Codes
};

const uint16_t code_na377Times[] = { 400, 400, 50, 200, 50, 100, 50, 1000 };
const uint8_t code_na377Codes[] = { 0x15, 0x69, 0x99, 0xAA, 0x96, 0x66, 0x70 };
const struct IrCode code_na377Code = {
  freq_to_timerval(56000),
  26,
  2,
  code_na377Times,
  code_na377Codes
};

const uint16_t code_na378Times[] = { 400, 400, 50, 200, 50, 100, 50, 1000 };
const uint8_t code_na378Codes[] = { 0x15, 0x69, 0x59, 0x6A, 0x96, 0xA6, 0xB0 };
const struct IrCode code_na378Code = {
  freq_to_timerval(56000),
  26,
  2,
  code_na378Times,
  code_na378Codes
};

const uint16_t code_na379Times[] = { 18, 783, 17, 233, 18, 233, 18, 232, 18, 131, 18, 133, 18, 132, 17, 133, 18, 231, 17, 834, 18, 782, 17, 132, 18, 834, 18, 130, 57, 192, 59, 92, 58, 193, 58, 0 };
const uint8_t code_na379Codes[] = { 0x00, 0x44, 0x31, 0x10, 0xA1, 0x28, 0x88, 0x23, 0x14, 0x85, 0x38, 0x50, 0x51, 0x19, 0x06, 0x1A, 0x54, 0x21, 0x05, 0x05, 0x28, 0x88, 0x22, 0x88, 0xE4, 0x29, 0x48, 0x31, 0x14, 0x6B, 0x11, 0xC6, 0xC5, 0x09, 0x03, 0x11, 0x4A, 0x82, 0x88, 0xA2, 0x69, 0x4A, 0x43, 0x8C, 0x45, 0x71, 0x46, 0xF8, 0x44 };
const struct IrCode code_na379Code = {
  freq_to_timerval(38000),
  78,
  5,
  code_na379Times,
  code_na379Codes
};

const uint16_t code_na380Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na380Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na380Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na380Times,
  code_na380Codes
};

const uint16_t code_na381Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na381Codes[] = { 0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0 };
const struct IrCode code_na381Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na381Times,
  code_na381Codes
};

const uint16_t code_na382Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na382Codes[] = { 0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0 };
const struct IrCode code_na382Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na382Times,
  code_na382Codes
};

const uint16_t code_na383Times[] = { 905, 438, 68, 47, 68, 158, 71, 48, 70, 158, 68, 161, 68, 48, 70, 48, 68, 3957, 907, 439, 68, 50, 70, 45, 70, 156, 68, 0 };
const uint8_t code_na383Codes[] = { 0x01, 0x23, 0x23, 0x24, 0x42, 0x52, 0x66, 0x62, 0x42, 0x54, 0x72, 0x76, 0x66, 0x66, 0x27, 0x24, 0x48, 0x96, 0x2A, 0x27, 0x24, 0x44, 0x44, 0x66, 0x62, 0x54, 0x44, 0x72, 0x76, 0x26, 0xBB, 0xC7, 0x24, 0x7D };
const struct IrCode code_na383Code = {
  freq_to_timerval(38000),
  68,
  4,
  code_na383Times,
  code_na383Codes
};

const uint16_t code_na384Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na384Codes[] = { 0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0 };
const struct IrCode code_na384Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na384Times,
  code_na384Codes
};

const uint16_t code_na385Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na385Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na385Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na385Times,
  code_na385Codes
};

const uint16_t code_na386Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na386Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na386Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na386Times,
  code_na386Codes
};

const uint16_t code_na387Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na387Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na387Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na387Times,
  code_na387Codes
};

const uint16_t code_na388Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na388Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na388Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na388Times,
  code_na388Codes
};

const uint16_t code_na389Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na389Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na389Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na389Times,
  code_na389Codes
};

const uint16_t code_na390Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na390Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na390Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na390Times,
  code_na390Codes
};

const uint16_t code_na391Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na391Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na391Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na391Times,
  code_na391Codes
};

const uint16_t code_na392Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na392Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na392Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na392Times,
  code_na392Codes
};

const uint16_t code_na393Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na393Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na393Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na393Times,
  code_na393Codes
};

const uint16_t code_na394Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na394Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na394Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na394Times,
  code_na394Codes
};

const uint16_t code_na395Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na395Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na395Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na395Times,
  code_na395Codes
};

const uint16_t code_na396Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na396Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na396Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na396Times,
  code_na396Codes
};

const uint16_t code_na397Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na397Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na397Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na397Times,
  code_na397Codes
};

const uint16_t code_na398Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na398Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na398Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na398Times,
  code_na398Codes
};

const uint16_t code_na399Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na399Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na399Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na399Times,
  code_na399Codes
};

const uint16_t code_na400Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na400Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na400Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na400Times,
  code_na400Codes
};

const uint16_t code_na401Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na401Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na401Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na401Times,
  code_na401Codes
};

const uint16_t code_na402Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na402Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na402Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na402Times,
  code_na402Codes
};

const uint16_t code_na403Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na403Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na403Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na403Times,
  code_na403Codes
};

const uint16_t code_na404Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na404Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na404Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na404Times,
  code_na404Codes
};

const uint16_t code_na405Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na405Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na405Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na405Times,
  code_na405Codes
};

const uint16_t code_na406Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na406Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na406Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na406Times,
  code_na406Codes
};

const uint16_t code_na407Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na407Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na407Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na407Times,
  code_na407Codes
};

const uint16_t code_na408Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na408Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na408Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na408Times,
  code_na408Codes
};

const uint16_t code_na409Times[] = { 450, 447, 57, 166, 56, 166, 56, 56, 54, 56, 54, 168, 54, 166, 57, 169, 54, 169, 54, 4297, 54, 167, 57, 56, 57, 168, 54, 4296, 56, 167, 450, 446, 56, 169, 54, 0 };
const uint8_t code_na409Codes[] = { 0x00, 0x44, 0x21, 0x90, 0x84, 0x21, 0x4C, 0x72, 0x10, 0x84, 0x21, 0x0A, 0x42, 0x10, 0x84, 0x21, 0x48, 0x52, 0x98, 0xE8, 0x30, 0xC8, 0x42, 0x24, 0x01, 0x10, 0x86, 0x42, 0x10, 0x88, 0x42, 0x96, 0x42, 0x10, 0x84, 0x41, 0x08, 0x42, 0x10, 0x88, 0x21, 0x4A, 0x66, 0x20, 0xCB, 0x21, 0x08, 0xD0, 0x38, 0x21, 0x59, 0x08, 0x42, 0x21, 0x06, 0x19, 0x08, 0x42, 0x11, 0x04, 0x21, 0x08, 0x42, 0x14, 0x85, 0x29, 0x98, 0x60, 0xAC, 0x84, 0x23, 0x5E, 0x21, 0x08, 0x64, 0x21, 0x08, 0x84, 0x18, 0x64, 0x21, 0x08, 0x42, 0x90, 0x84, 0x21, 0x08, 0x82, 0x21, 0x06, 0x82, 0x82, 0xB2, 0x10, 0x91 };
const struct IrCode code_na409Code = {
  freq_to_timerval(38000),
  152,
  5,
  code_na409Times,
  code_na409Codes
};

const uint16_t code_na410Times[] = { 457, 448, 73, 156, 70, 161, 70, 48, 68, 46, 67, 51, 65, 51, 62, 164, 67, 162, 67, 164, 65, 48, 64, 51, 65, 164, 65, 161, 67, 4854, 457, 450, 65, 49, 65, 162, 67, 0 };
const uint8_t code_na410Codes[] = { 0x00, 0x44, 0x21, 0x90, 0xA6, 0x31, 0xD0, 0x92, 0x98, 0xCA, 0x59, 0x98, 0x53, 0x29, 0x66, 0x33, 0x0A, 0xD4, 0xA5, 0x28, 0x4B, 0x9E, 0xC4, 0xA4, 0xC6, 0x31, 0x8C, 0xC6, 0x24, 0xA6, 0x32, 0x96, 0x66, 0x14, 0xD0, 0x59, 0x8C, 0xC2, 0xC5, 0x29, 0x90 };
const struct IrCode code_na410Code = {
  freq_to_timerval(38000),
  65,
  5,
  code_na410Times,
  code_na410Codes
};

const uint16_t code_na411Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na411Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na411Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na411Times,
  code_na411Codes
};

const uint16_t code_na412Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na412Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na412Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na412Times,
  code_na412Codes
};

const uint16_t code_na413Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na413Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na413Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na413Times,
  code_na413Codes
};

const uint16_t code_na414Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na414Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na414Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na414Times,
  code_na414Codes
};

const uint16_t code_na415Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na415Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na415Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na415Times,
  code_na415Codes
};

const uint16_t code_na416Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na416Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na416Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na416Times,
  code_na416Codes
};

const uint16_t code_na417Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na417Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na417Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na417Times,
  code_na417Codes
};

const uint16_t code_na418Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na418Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na418Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na418Times,
  code_na418Codes
};

const uint16_t code_na419Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na419Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na419Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na419Times,
  code_na419Codes
};

const uint16_t code_na420Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na420Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na420Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na420Times,
  code_na420Codes
};

const uint16_t code_na421Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na421Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na421Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na421Times,
  code_na421Codes
};

const uint16_t code_na422Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na422Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na422Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na422Times,
  code_na422Codes
};

const uint16_t code_na423Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na423Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na423Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na423Times,
  code_na423Codes
};

const uint16_t code_na424Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na424Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na424Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na424Times,
  code_na424Codes
};

const uint16_t code_na425Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na425Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na425Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na425Times,
  code_na425Codes
};

const uint16_t code_na426Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na426Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na426Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na426Times,
  code_na426Codes
};

const uint16_t code_na427Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na427Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na427Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na427Times,
  code_na427Codes
};

const uint16_t code_na428Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na428Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na428Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na428Times,
  code_na428Codes
};

const uint16_t code_na429Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na429Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na429Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na429Times,
  code_na429Codes
};

const uint16_t code_na430Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na430Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na430Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na430Times,
  code_na430Codes
};

const uint16_t code_na431Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na431Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na431Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na431Times,
  code_na431Codes
};

const uint16_t code_na432Times[] = { 26, 185, 26, 79, 26, 4356 };
const uint8_t code_na432Codes[] = { 0x15, 0x50, 0x45, 0x46, 0x15, 0x45, 0x10, 0x12 };
const struct IrCode code_na432Code = {
  freq_to_timerval(38000),
  32,
  2,
  code_na432Times,
  code_na432Codes
};

const uint16_t code_na433Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na433Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0x99, 0x95, 0x66, 0x6A, 0xB0 };
const struct IrCode code_na433Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na433Times,
  code_na433Codes
};

const uint16_t code_na434Times[] = { 338, 166, 44, 40, 44, 124, 44, 43, 44, 0 };
const uint8_t code_na434Codes[] = { 0x05, 0x14, 0x51, 0x45, 0x14, 0x9A, 0x29, 0x24, 0x49, 0x45, 0x12, 0x89, 0x25, 0x22, 0x89, 0x28, 0x92, 0x8A, 0x50 };
const struct IrCode code_na434Code = {
  freq_to_timerval(38000),
  50,
  3,
  code_na434Times,
  code_na434Codes
};

const uint16_t code_na435Times[] = { 28, 181, 28, 79, 25, 79, 25, 76, 25, 181, 28, 182, 27, 79, 26, 78, 26, 4532, 25, 77, 25, 182, 28, 78, 27, 182, 28, 4322, 26, 181, 28, 76, 25, 0 };
const uint8_t code_na435Codes[] = { 0x00, 0x44, 0x30, 0x88, 0x85, 0x31, 0x02, 0x71, 0x10, 0x28, 0x00, 0x52, 0x11, 0x28, 0xC2, 0x52, 0xD4, 0xC0, 0x05, 0x4D, 0x61, 0x86, 0x11, 0x09, 0xC0, 0x0A, 0x96, 0x97, 0xB1, 0x70 };
const struct IrCode code_na435Code = {
  freq_to_timerval(38000),
  48,
  5,
  code_na435Times,
  code_na435Codes
};

const uint16_t code_na436Times[] = { 35, 175, 35, 69, 35, 174, 36, 69, 36, 175, 36, 174, 36, 4639, 36, 4429, 26, 184, 26, 79, 26, 78, 26, 4649, 26, 0 };
const uint8_t code_na436Codes[] = { 0x01, 0x11, 0x11, 0x02, 0x34, 0x13, 0x35, 0x36, 0x53, 0x33, 0x35, 0x33, 0x53, 0x55, 0x53, 0x57, 0x89, 0x9A, 0xA9, 0x88, 0x98, 0x9A, 0x98, 0xAB, 0x89, 0x99, 0x98, 0x99, 0x89, 0x88, 0x89, 0x8C };
const struct IrCode code_na436Code = {
  freq_to_timerval(38000),
  64,
  4,
  code_na436Times,
  code_na436Codes
};

const uint16_t code_na437Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na437Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na437Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na437Times,
  code_na437Codes
};

const uint16_t code_na438Times[] = { 28, 181, 27, 78, 28, 78, 28, 77, 28, 180, 28, 183, 25, 78, 27, 4596, 27, 80, 25, 77, 26, 80, 26, 77, 27, 77, 28, 4389, 28, 80, 27, 184, 25, 181, 28, 4596, 25, 184, 25, 80, 26, 180, 27, 181, 28, 0 };
const uint8_t code_na438Codes[] = { 0x00, 0x44, 0x31, 0x8C, 0x00, 0x09, 0x04, 0x31, 0x94, 0xC7, 0x20, 0xC2, 0x84, 0x95, 0x4B, 0x00, 0x40, 0x40, 0x30, 0x0D, 0x00, 0xC4, 0xE5, 0x8D, 0xF0, 0x18, 0x02, 0x17, 0x40, 0x31, 0x20, 0xC2, 0x37, 0x49, 0x53, 0x80, 0xC0, 0x40, 0x04, 0x0D, 0x20, 0xC4, 0x11, 0x8C, 0xB4, 0x18, 0x02, 0x31, 0xD4, 0x56 };
const struct IrCode code_na438Code = {
  freq_to_timerval(38000),
  80,
  5,
  code_na438Times,
  code_na438Codes
};

const uint16_t code_na439Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na439Codes[] = { 0x15, 0x99, 0x6A, 0x66, 0xA9, 0x95, 0x56, 0x6A, 0xB0 };
const struct IrCode code_na439Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na439Times,
  code_na439Codes
};

const uint16_t code_na440Times[] = { 20, 183, 30, 77, 28, 76, 28, 79, 28, 74, 31, 73, 30, 180, 27, 80, 27, 183, 27, 77, 25, 4585, 33, 178, 30, 74, 31, 78, 28, 73, 31, 180, 30, 76, 30, 178, 33, 180, 27, 181, 25, 81, 27, 178, 28, 4376, 31, 76, 33, 76, 30, 73, 30, 183, 30, 79, 28, 180, 25, 4587, 28, 183, 27, 76, 27, 184, 28, 4374, 31, 79, 28, 178, 30, 4582, 28, 182, 24, 4377, 25, 76, 34, 177, 31, 182, 27, 0 };
const uint8_t code_na440Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x86, 0x14, 0x61, 0xC2, 0x08, 0x82, 0x4A, 0x2C, 0xC3, 0x4E, 0x30, 0xF1, 0x50, 0x44, 0x54, 0x88, 0x4D, 0x45, 0x56, 0x19, 0x71, 0x18, 0x39, 0x91, 0x8F, 0x15, 0xA2, 0x4E, 0x6D, 0xC0, 0x9D, 0x3D, 0x02, 0x43, 0x09, 0xE3, 0x99, 0x19, 0x77, 0x9C, 0x79, 0xF8, 0x21, 0x46, 0x20, 0x82, 0x09, 0x78, 0xCF, 0x31, 0xA0, 0x82, 0x31, 0xA3, 0xA4, 0x3D, 0x00, 0x83, 0x0A, 0x53, 0x8C, 0x3C, 0x56, 0x93, 0x78, 0x98, 0x26, 0x45, 0xB0, 0x82, 0x0E, 0x74, 0x68, 0x42, 0x50, 0x9F, 0x32, 0x90, 0xAA };
const struct IrCode code_na440Code = {
  freq_to_timerval(38000),
  112,
  6,
  code_na440Times,
  code_na440Codes
};

const uint16_t code_na441Times[] = { 60, 120, 60, 60 };
const uint8_t code_na441Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na441Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na441Times,
  code_na441Codes
};

const uint16_t code_na442Times[] = { 60, 120, 60, 60 };
const uint8_t code_na442Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na442Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na442Times,
  code_na442Codes
};

const uint16_t code_na443Times[] = { 60, 120, 60, 60 };
const uint8_t code_na443Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na443Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na443Times,
  code_na443Codes
};

const uint16_t code_na444Times[] = { 60, 120, 60, 60 };
const uint8_t code_na444Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na444Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na444Times,
  code_na444Codes
};

const uint16_t code_na445Times[] = { 60, 120, 60, 60 };
const uint8_t code_na445Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na445Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na445Times,
  code_na445Codes
};

const uint16_t code_na446Times[] = { 60, 120, 60, 60 };
const uint8_t code_na446Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na446Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na446Times,
  code_na446Codes
};

const uint16_t code_na447Times[] = { 60, 120, 60, 60 };
const uint8_t code_na447Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na447Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na447Times,
  code_na447Codes
};

const uint16_t code_na448Times[] = { 60, 120, 60, 60 };
const uint8_t code_na448Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na448Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na448Times,
  code_na448Codes
};

const uint16_t code_na449Times[] = { 60, 120, 60, 60 };
const uint8_t code_na449Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na449Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na449Times,
  code_na449Codes
};

const uint16_t code_na450Times[] = { 60, 120, 60, 60 };
const uint8_t code_na450Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na450Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na450Times,
  code_na450Codes
};

const uint16_t code_na451Times[] = { 60, 120, 60, 60 };
const uint8_t code_na451Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na451Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na451Times,
  code_na451Codes
};

const uint16_t code_na452Times[] = { 60, 120, 60, 60 };
const uint8_t code_na452Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na452Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na452Times,
  code_na452Codes
};

const uint16_t code_na453Times[] = { 60, 120, 60, 60 };
const uint8_t code_na453Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na453Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na453Times,
  code_na453Codes
};

const uint16_t code_na454Times[] = { 60, 120, 60, 60 };
const uint8_t code_na454Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na454Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na454Times,
  code_na454Codes
};

const uint16_t code_na455Times[] = { 60, 120, 60, 60 };
const uint8_t code_na455Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na455Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na455Times,
  code_na455Codes
};

const uint16_t code_na456Times[] = { 60, 120, 60, 60 };
const uint8_t code_na456Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na456Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na456Times,
  code_na456Codes
};

const uint16_t code_na457Times[] = { 60, 120, 60, 60 };
const uint8_t code_na457Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na457Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na457Times,
  code_na457Codes
};

const uint16_t code_na458Times[] = { 60, 120, 60, 60 };
const uint8_t code_na458Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na458Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na458Times,
  code_na458Codes
};

const uint16_t code_na459Times[] = { 60, 120, 60, 60 };
const uint8_t code_na459Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na459Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na459Times,
  code_na459Codes
};

const uint16_t code_na460Times[] = { 60, 120, 60, 60 };
const uint8_t code_na460Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na460Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na460Times,
  code_na460Codes
};

const uint16_t code_na461Times[] = { 60, 120, 60, 60 };
const uint8_t code_na461Codes[] = { 0x45, 0x78 };
const struct IrCode code_na461Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na461Times,
  code_na461Codes
};

const uint16_t code_na462Times[] = { 60, 120, 60, 60 };
const uint8_t code_na462Codes[] = { 0x05, 0x78 };
const struct IrCode code_na462Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na462Times,
  code_na462Codes
};

const uint16_t code_na463Times[] = { 60, 120, 60, 60 };
const uint8_t code_na463Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na463Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na463Times,
  code_na463Codes
};

const uint16_t code_na464Times[] = { 60, 120, 60, 60 };
const uint8_t code_na464Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na464Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na464Times,
  code_na464Codes
};

const uint16_t code_na465Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na465Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na465Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na465Times,
  code_na465Codes
};

const uint16_t code_na466Times[] = { 400, 400, 50, 50, 50, 150, 50, 0 };
const uint8_t code_na466Codes[] = { 0x16, 0x66, 0x70 };
const struct IrCode code_na466Code = {
  freq_to_timerval(38000),
  10,
  2,
  code_na466Times,
  code_na466Codes
};

const uint16_t code_na467Times[] = { 400, 400, 50, 50, 50, 150, 50, 0 };
const uint8_t code_na467Codes[] = { 0x16, 0x66, 0x70 };
const struct IrCode code_na467Code = {
  freq_to_timerval(38000),
  10,
  2,
  code_na467Times,
  code_na467Codes
};

const uint16_t code_na468Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na468Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x95, 0x9A, 0x70 };
const struct IrCode code_na468Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na468Times,
  code_na468Codes
};

const uint16_t code_na469Times[] = { 401, 399, 51, 199, 52, 198, 51, 198, 52, 101, 49, 101, 49, 199, 48, 199, 48, 101, 49, 198, 52, 98, 52, 818, 402, 398, 51, 101, 51, 99, 51, 807, 49, 100, 51, 0 };
const uint8_t code_na469Codes[] = { 0x00, 0x44, 0x31, 0x10, 0xA6, 0x21, 0x88, 0x72, 0x20, 0xA5, 0x42, 0x42, 0x44, 0x91, 0x2A, 0x12, 0xD8, 0x21, 0x88, 0x4D, 0x2A, 0x5A, 0x96, 0xA5, 0xA5, 0x41, 0x4A, 0x71, 0x35, 0x2E, 0x13, 0x52, 0xF6, 0x08, 0x62, 0x13, 0x4A, 0x96, 0xA5, 0xA9, 0x69, 0x60, 0x52, 0x9C, 0x4D, 0x4B, 0x52, 0xD4, 0xC4 };
const struct IrCode code_na469Code = {
  freq_to_timerval(38000),
  78,
  5,
  code_na469Times,
  code_na469Codes
};

const uint16_t code_na470Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na470Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na470Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na470Times,
  code_na470Codes
};

const uint16_t code_na471Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na471Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na471Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na471Times,
  code_na471Codes
};

const uint16_t code_na472Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na472Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na472Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na472Times,
  code_na472Codes
};

const uint16_t code_na473Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na473Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na473Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na473Times,
  code_na473Codes
};

const uint16_t code_na474Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na474Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na474Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na474Times,
  code_na474Codes
};

const uint16_t code_na475Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na475Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na475Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na475Times,
  code_na475Codes
};

const uint16_t code_na476Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na476Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na476Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na476Times,
  code_na476Codes
};

const uint16_t code_na477Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na477Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na477Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na477Times,
  code_na477Codes
};

const uint16_t code_na478Times[] = { 89, 89 };
const uint8_t code_na478Codes[] = { 0x00, 0x00 };
const struct IrCode code_na478Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na478Times,
  code_na478Codes
};

const uint16_t code_na479Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na479Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na479Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na479Times,
  code_na479Codes
};

const uint16_t code_na480Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na480Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na480Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na480Times,
  code_na480Codes
};

const uint16_t code_na481Times[] = { 53, 187, 43, 38, 43, 39, 43, 78, 42, 39, 43, 9557, 54, 186, 42, 42, 40, 78, 43, 42, 40, 39, 42, 9557, 42, 40, 41, 41, 40, 9557, 43, 41, 40, 42, 41, 80, 53, 186, 42, 79, 43, 0 };
const uint8_t code_na481Codes[] = { 0x00, 0x44, 0x21, 0x88, 0x42, 0x11, 0x0A, 0x60, 0x88, 0xE8, 0x20, 0x84, 0x95, 0x2C, 0x04, 0x10, 0x86, 0x21, 0x31, 0x2D, 0x70, 0x08, 0xC1, 0x0C, 0x4F, 0x82, 0x8E, 0xE0, 0x08, 0x89, 0x8A, 0x8E, 0xA1, 0x1D, 0xD2, 0x08, 0x85, 0x31, 0x30, 0x42, 0x25, 0x00 };
const struct IrCode code_na481Code = {
  freq_to_timerval(38000),
  66,
  5,
  code_na481Times,
  code_na481Codes
};

const uint16_t code_na482Times[] = { 276, 79, 53, 36, 53, 79, 98, 38, 53, 35, 50, 38, 51, 38, 50, 39, 94, 39, 50, 83, 49, 12226, 276, 80, 53, 38, 50, 82, 95, 38, 49, 0 };
const uint8_t code_na482Codes[] = { 0x01, 0x12, 0x23, 0x41, 0x15, 0x56, 0x65, 0x55, 0x77, 0x77, 0x78, 0x97, 0xAB, 0xC5, 0xD9, 0xE7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x89, 0x7F };
const struct IrCode code_na482Code = {
  freq_to_timerval(38000),
  50,
  4,
  code_na482Times,
  code_na482Codes
};

const uint16_t code_na483Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na483Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na483Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na483Times,
  code_na483Codes
};

const uint16_t code_na484Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na484Codes[] = { 0x15, 0xA9, 0x6A, 0x56, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na484Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na484Times,
  code_na484Codes
};

const uint16_t code_na485Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na485Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na485Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na485Times,
  code_na485Codes
};

const uint16_t code_na486Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na486Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na486Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na486Times,
  code_na486Codes
};

const uint16_t code_na487Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na487Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x5A, 0x5A, 0x65, 0xA5, 0xB0 };
const struct IrCode code_na487Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na487Times,
  code_na487Codes
};

const uint16_t code_na488Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na488Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na488Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na488Times,
  code_na488Codes
};

const uint16_t code_na489Times[] = { 89, 89 };
const uint8_t code_na489Codes[] = { 0x00, 0x00 };
const struct IrCode code_na489Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na489Times,
  code_na489Codes
};

const uint16_t code_na490Times[] = { 89, 89 };
const uint8_t code_na490Codes[] = { 0x00, 0x00 };
const struct IrCode code_na490Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na490Times,
  code_na490Codes
};

const uint16_t code_na491Times[] = { 60, 120, 60, 60 };
const uint8_t code_na491Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na491Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na491Times,
  code_na491Codes
};

const uint16_t code_na492Times[] = { 89, 89 };
const uint8_t code_na492Codes[] = { 0x00, 0x00 };
const struct IrCode code_na492Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na492Times,
  code_na492Codes
};

const uint16_t code_na493Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na493Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na493Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na493Times,
  code_na493Codes
};

const uint16_t code_na494Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na494Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na494Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na494Times,
  code_na494Codes
};

const uint16_t code_na495Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na495Codes[] = { 0x1A, 0x5A, 0xA5, 0xA5, 0x6A, 0x5A, 0x95, 0xA5, 0x70 };
const struct IrCode code_na495Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na495Times,
  code_na495Codes
};

const uint16_t code_na496Times[] = { 348, 172, 46, 44, 43, 128, 43, 44, 45, 42, 45, 129, 45, 45, 42, 42, 42, 45, 42, 132, 42, 7473, 348, 175, 42, 0 };
const uint8_t code_na496Codes[] = { 0x01, 0x21, 0x33, 0x33, 0x33, 0x44, 0x44, 0x54, 0x67, 0x68, 0x76, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9C };
const struct IrCode code_na496Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na496Times,
  code_na496Codes
};

const uint16_t code_na497Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na497Codes[] = { 0x1A, 0x69, 0xA5, 0x96, 0x66, 0x5A, 0x99, 0xA5, 0x70 };
const struct IrCode code_na497Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na497Times,
  code_na497Codes
};

const uint16_t code_na498Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na498Codes[] = { 0x16, 0x5A, 0x5A, 0x56, 0x69, 0xA5, 0xA5, 0xA9, 0xA6, 0xA6, 0x59, 0x59, 0xB0 };
const struct IrCode code_na498Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na498Times,
  code_na498Codes
};

const uint16_t code_na499Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na499Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0x99, 0x95, 0x66, 0x6A, 0xB0 };
const struct IrCode code_na499Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na499Times,
  code_na499Codes
};

const uint16_t code_na500Times[] = { 53, 187, 43, 38, 43, 39, 43, 78, 42, 39, 43, 9557, 54, 186, 42, 42, 40, 78, 43, 42, 40, 39, 42, 9557, 42, 40, 41, 41, 40, 9557, 43, 41, 40, 42, 41, 80, 53, 186, 42, 79, 43, 0 };
const uint8_t code_na500Codes[] = { 0x00, 0x44, 0x21, 0x88, 0x42, 0x11, 0x0A, 0x60, 0x88, 0xE8, 0x20, 0x84, 0x95, 0x2C, 0x04, 0x10, 0x86, 0x21, 0x31, 0x2D, 0x70, 0x08, 0xC1, 0x0C, 0x4F, 0x82, 0x8E, 0xE0, 0x08, 0x89, 0x8A, 0x8E, 0xA1, 0x1D, 0xD2, 0x08, 0x85, 0x31, 0x30, 0x42, 0x25, 0x00 };
const struct IrCode code_na500Code = {
  freq_to_timerval(38000),
  66,
  5,
  code_na500Times,
  code_na500Codes
};

const uint16_t code_na501Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na501Codes[] = { 0x15, 0x55, 0x95, 0xA6, 0xAA, 0xAA, 0x6A, 0x59, 0x6A, 0x99, 0x55, 0x66, 0xB0 };
const struct IrCode code_na501Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na501Times,
  code_na501Codes
};

const uint16_t code_na502Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na502Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0xA6, 0x65, 0x59, 0x9A, 0xB0 };
const struct IrCode code_na502Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na502Times,
  code_na502Codes
};

const uint16_t code_na503Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na503Codes[] = { 0x15, 0x55, 0x6A, 0xA9, 0xAA, 0xAA, 0x95, 0x56, 0x66, 0x95, 0x59, 0x6A, 0xB0 };
const struct IrCode code_na503Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na503Times,
  code_na503Codes
};

const uint16_t code_na504Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na504Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0xA6, 0x65, 0x59, 0x9A, 0xB0 };
const struct IrCode code_na504Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na504Times,
  code_na504Codes
};

////////////////////////////////////////////////////////////////

//const array (called "NApowerCodes") of const pointers to IrCode structs
//-otherwise stated: "declare NApowerCodes as array of const pointers to const IrCode structs"
//-to confirm this, go to http://cdecl.org/ and paste "const int* const NApowerCodes[]", and you'll 
// see it means "declare NApowerCodes as array of const pointer to const int"
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
  &code_na137Code,
  &code_na138Code,
  &code_na139Code,
  &code_na000Code,
  &code_na141Code,
  &code_na142Code,
  &code_na143Code,
  &code_na277Code,
  &code_na144Code,
  &code_na145Code,
  &code_na005Code,
  &code_na004Code,
  &code_na148Code,
  &code_na149Code,
  &code_na150Code,
  &code_na021Code,
  &code_na152Code,
  &code_na153Code,
  &code_na154Code,
  &code_na155Code,
  &code_na156Code,
  &code_na157Code,
  &code_na158Code,
  &code_na159Code,
  &code_na022Code,
  &code_na161Code,
  &code_na162Code,
  &code_na163Code,
  &code_na277Code,
  &code_na143Code,
  &code_na164Code,
  &code_na165Code,
  &code_na166Code,
  &code_na167Code,
  &code_na168Code,
  &code_na169Code,
  &code_na170Code,
  &code_na171Code,
  &code_na173Code,
  &code_na174Code,
  &code_na175Code,
  &code_na176Code,
  &code_na177Code,
  &code_na178Code,
  &code_na179Code,
  &code_na180Code,
  &code_na181Code,
  &code_na182Code,
  &code_na183Code,
  &code_na184Code,
  &code_na185Code,
  &code_na186Code,
  &code_na187Code,
  &code_na188Code,
  &code_na189Code,
  &code_na190Code,
  &code_na191Code,
  &code_na192Code,
  &code_na193Code,
  &code_na195Code,
  &code_na196Code,
  &code_na197Code,
  &code_na198Code,
  &code_na199Code,
  &code_na200Code,
  &code_na201Code,
  &code_na202Code,
  &code_na203Code,
  &code_na204Code,
  &code_na205Code,
  &code_na206Code,
  &code_na207Code,
  &code_na208Code,
  &code_na209Code,
  &code_na210Code,
  &code_na211Code,
  &code_na212Code,
  &code_na213Code,
  &code_na214Code,
  &code_na215Code,
  &code_na216Code,
  &code_na217Code,
  &code_na218Code,
  &code_na219Code,
  &code_na220Code,
  &code_na221Code,
  &code_na222Code,
  &code_na223Code,
  &code_na224Code,
  &code_na225Code,
  &code_na226Code,
  &code_na227Code,
  &code_na228Code,
  &code_na229Code,
  &code_na230Code,
  &code_na231Code,
  &code_na232Code,
  &code_na233Code,
  &code_na234Code,
  &code_na235Code,
  &code_na236Code,
  &code_na237Code,
  &code_na238Code,
  &code_na239Code,
  &code_na240Code,
  &code_na241Code,
  &code_na242Code,
  &code_na243Code,
  &code_na244Code,
  &code_na245Code,
  &code_na246Code,
  &code_na247Code,
  &code_na248Code,
  &code_na249Code,
  &code_na250Code,
  &code_na251Code,
  &code_na252Code,
  &code_na253Code,
  &code_na254Code,
  &code_na255Code,
  &code_na256Code,
  &code_na257Code,
  &code_na258Code,
  &code_na259Code,
  &code_na260Code,
  &code_na261Code,
  &code_na262Code,
  &code_na263Code,
  &code_na264Code,
  &code_na265Code,
  &code_na266Code,
  &code_na267Code,
  &code_na268Code,
  &code_na269Code,
  &code_na270Code,
  &code_na271Code,
  &code_na272Code,
  &code_na273Code,
  &code_na274Code,
  &code_na275Code,
  &code_na276Code,
  &code_na278Code,
  &code_na279Code,
  &code_na280Code,
  &code_na281Code,
  &code_na282Code,
  &code_na283Code,
  &code_na284Code,
  &code_na285Code,
  &code_na286Code,
  &code_na287Code,
  &code_na288Code,
  &code_na289Code,
  &code_na290Code,
  &code_na291Code,
  &code_na292Code,
  &code_na293Code,
  &code_na294Code,
  &code_na295Code,
  &code_na296Code,
  &code_na297Code,
  &code_na298Code,
  &code_na299Code,
  &code_na300Code,
  &code_na301Code,
  &code_na302Code,
  &code_na303Code,
  &code_na304Code,
  &code_na305Code,
  &code_na306Code,
  &code_na307Code,
  &code_na308Code,
  &code_na309Code,
  &code_na310Code,
  &code_na311Code,
  &code_na312Code,
  &code_na313Code,
  &code_na314Code,
  &code_na315Code,
  &code_na316Code,
  &code_na317Code,
  &code_na318Code,
  &code_na319Code,
  &code_na320Code,
  &code_na321Code,
  &code_na322Code,
  &code_na323Code,
  &code_na324Code,
  &code_na325Code,
  &code_na326Code,
  &code_na327Code,
  &code_na328Code,
  &code_na329Code,
  &code_na330Code,
  &code_na331Code,
  &code_na332Code,
  &code_na333Code,
  &code_na334Code,
  &code_na335Code,
  &code_na336Code,
  &code_na337Code,
  &code_na338Code,
  &code_na339Code,
  &code_na340Code,
  &code_na341Code,
  &code_na342Code,
  &code_na343Code,
  &code_na344Code,
  &code_na345Code,
  &code_na346Code,
  &code_na347Code,
  &code_na348Code,
  &code_na349Code,
  &code_na350Code,
  &code_na351Code,
  &code_na352Code,
  &code_na353Code,
  &code_na354Code,
  &code_na355Code,
  &code_na356Code,
  &code_na357Code,
  &code_na358Code,
  &code_na359Code,
  &code_na360Code,
  &code_na361Code,
  &code_na362Code,
  &code_na363Code,
  &code_na364Code,
  &code_na365Code,
  &code_na366Code,
  &code_na367Code,
  &code_na368Code,
  &code_na369Code,
  &code_na370Code,
  &code_na371Code,
  &code_na372Code,
  &code_na373Code,
  &code_na374Code,
  &code_na375Code,
  &code_na376Code,
  &code_na377Code,
  &code_na378Code,
  &code_na379Code,
  &code_na380Code,
  &code_na381Code,
  &code_na382Code,
  &code_na383Code,
  &code_na384Code,
  &code_na385Code,
  &code_na386Code,
  &code_na387Code,
  &code_na388Code,
  &code_na389Code,
  &code_na390Code,
  &code_na391Code,
  &code_na392Code,
  &code_na393Code,
  &code_na394Code,
  &code_na395Code,
  &code_na396Code,
  &code_na397Code,
  &code_na398Code,
  &code_na399Code,
  &code_na400Code,
  &code_na401Code,
  &code_na402Code,
  &code_na403Code,
  &code_na404Code,
  &code_na405Code,
  &code_na406Code,
  &code_na407Code,
  &code_na408Code,
  &code_na409Code,
  &code_na410Code,
  &code_na411Code,
  &code_na412Code,
  &code_na413Code,
  &code_na414Code,
  &code_na415Code,
  &code_na416Code,
  &code_na417Code,
  &code_na418Code,
  &code_na419Code,
  &code_na420Code,
  &code_na421Code,
  &code_na422Code,
  &code_na423Code,
  &code_na424Code,
  &code_na425Code,
  &code_na426Code,
  &code_na427Code,
  &code_na428Code,
  &code_na429Code,
  &code_na430Code,
  &code_na431Code,
  &code_na432Code,
  &code_na433Code,
  &code_na434Code,
  &code_na435Code,
  &code_na436Code,
  &code_na437Code,
  &code_na438Code,
  &code_na439Code,
  &code_na440Code,
  &code_na441Code,
  &code_na442Code,
  &code_na443Code,
  &code_na444Code,
  &code_na445Code,
  &code_na446Code,
  &code_na447Code,
  &code_na448Code,
  &code_na449Code,
  &code_na450Code,
  &code_na451Code,
  &code_na452Code,
  &code_na453Code,
  &code_na454Code,
  &code_na455Code,
  &code_na456Code,
  &code_na457Code,
  &code_na458Code,
  &code_na459Code,
  &code_na460Code,
  &code_na461Code,
  &code_na462Code,
  &code_na463Code,
  &code_na464Code,
  &code_na465Code,
  &code_na466Code,
  &code_na467Code,
  &code_na468Code,
  &code_na469Code,
  &code_na470Code,
  &code_na471Code,
  &code_na472Code,
  &code_na473Code,
  &code_na474Code,
  &code_na475Code,
  &code_na476Code,
  &code_na477Code,
  &code_na478Code,
  &code_na479Code,
  &code_na480Code,
  &code_na481Code,
  &code_na482Code,
  &code_na483Code,
  &code_na484Code,
  &code_na485Code,
  &code_na486Code,
  &code_na487Code,
  &code_na488Code,
  &code_na489Code,
  &code_na490Code,
  &code_na491Code,
  &code_na492Code,
  &code_na493Code,
  &code_na494Code,
  &code_na495Code,
  &code_na496Code,
  &code_na497Code,
  &code_na498Code,
  &code_na499Code,
  &code_na500Code,
  &code_na501Code,
  &code_na502Code,
  &code_na503Code,
  &code_na504Code,
};

const char* const NAirFormats[] = {
  "raw", "raw", "raw", "raw", "parsed:NECext", "raw", "parsed:NECext", "parsed:NECext", "raw", "raw",
  "raw", "raw", "raw", "raw", "parsed:NECext", "parsed:NECext", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "parsed:NECext", "raw", "raw",
  "raw", "raw", "raw", "parsed:NECext", "parsed:SIRC20", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NECext", "parsed:NEC",
  "parsed:NEC", "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "raw", "raw", "parsed:Kaseikyo",
  "raw", "raw", "raw", "raw", "parsed:Kaseikyo", "raw", "parsed:Samsung32", "parsed:Kaseikyo", "raw", "parsed:Kaseikyo",
  "raw", "raw", "parsed:Kaseikyo", "parsed:RC5", "parsed:NECext", "parsed:RC6", "parsed:RC6", "parsed:RC5", "parsed:RC6", "parsed:RC6",
  "parsed:RC6", "parsed:RC5", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:NECext", "raw",
  "raw", "raw", "parsed:NECext", "parsed:NEC", "parsed:NEC", "raw", "parsed:NEC", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "raw", "raw", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "raw", "parsed:NECext", "raw", "raw", "raw", "parsed:NEC",
  "raw", "parsed:NEC", "raw", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC",
  "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC",
  "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:NECext", "parsed:RCA", "parsed:RCA", "parsed:NECext",
  "raw", "parsed:NECext", "parsed:NECext", "parsed:NEC", "parsed:NECext", "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:RC5", "parsed:NECext", "parsed:NEC", "raw", "raw", "parsed:NEC", "parsed:NEC", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
};

const char* naFormatForIndex(uint16_t index) {
  if (index < 278) {
    return "TV-B-Gone:raw";
  }
  const uint16_t irIndex = index - 278;
  if (irIndex < sizeof(NAirFormats) / sizeof(NAirFormats[0])) {
    return NAirFormats[irIndex];
  }
  return "raw:unknown source";
}

const uint16_t NAshuffle[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
  25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
  50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
  75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
  125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174,
  175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
  247, 363, 412, 248, 288, 302, 217, 323, 360, 368, 299, 479, 423, 444, 246, 358, 200, 277, 211, 432, 204, 322, 387, 494, 270,
  443, 407, 233, 232, 313, 417, 466, 351, 501, 344, 491, 287, 254, 359, 388, 264, 251, 380, 333, 476, 503, 372, 430, 453, 461,
  213, 267, 353, 336, 498, 390, 205, 484, 230, 452, 354, 440, 327, 214, 416, 237, 263, 446, 404, 273, 215, 298, 486, 391, 474,
  330, 375, 221, 456, 304, 499, 431, 212, 283, 231, 373, 439, 339, 305, 389, 295, 475, 296, 310, 377, 470, 382, 413, 458, 271,
  405, 370, 278, 348, 289, 393, 457, 362, 477, 318, 261, 276, 361, 414, 415, 308, 347, 317, 462, 402, 504, 253, 297, 209, 399,
  369, 445, 367, 240, 218, 433, 357, 260, 257, 398, 312, 216, 460, 340, 265, 472, 282, 489, 485, 316, 448, 269, 438, 335, 495,
  409, 427, 314, 467, 419, 290, 201, 331, 284, 396, 449, 366, 306, 293, 309, 493, 279, 355, 411, 450, 403, 274, 258, 242, 329,
  356, 239, 447, 374, 481, 385, 350, 437, 346, 395, 490, 220, 266, 307, 425, 300, 325, 286, 497, 319, 483, 222, 291, 400, 249,
  408, 223, 334, 208, 255, 383, 210, 471, 338, 392, 219, 482, 238, 206, 454, 281, 332, 422, 397, 364, 365, 203, 463, 303, 311,
  285, 465, 349, 324, 275, 451, 268, 394, 381, 468, 401, 321, 256, 245, 243, 464, 496, 428, 224, 294, 236, 492, 207, 379, 345,
  342, 420, 442, 500, 280, 241, 473, 259, 418, 328, 426, 435, 250, 459, 244, 469, 371, 228, 424, 341, 225, 421, 378, 292, 352,
  229, 262, 320, 406, 478, 235, 301, 234, 272, 441, 343, 384, 227, 429, 480, 226, 410, 252, 326, 376, 487, 386, 455, 202, 315,
  502, 434, 436, 337, 488,
};

uint16_t naShuffledIndex(uint16_t position) {
  if (position < 130) {
    return position;
  }
  if (position < 278) {
    return 130 + ((73 * (position - 130) + 17) % 148);
  }
  return 278 + ((101 * (position - 278) + 29) % 227);
}



uint16_t num_NAcodes = NUM_ELEM(NApowerCodes);

// BEGIN GENERATED IR CODES >= 506
enum class ExtraIrKind : uint8_t { Raw, NEC, NECext, Samsung, Sony, RC5, RC6, Panasonic, Pioneer, RCA };
struct ExtraIrCode {
  const char *label;
  ExtraIrKind kind;
  uint32_t address;
  uint32_t command;
  uint16_t frequency;
  uint16_t bits;
  uint16_t length;
  const uint32_t *raw;
  bool repeatTwice;
};

const uint32_t irExtraRaw001[] = {
  671, 3423, 492, 1537, 488, 482, 457, 487, 463, 1566, 459, 1570,
  466, 1563, 462, 482, 457, 1572, 464, 480, 459, 486, 464, 480,
  459, 485, 465, 480, 459, 1570, 466, 478, 461, 483, 467, 478,
  597, 1580, 466, 1562, 463, 1566, 459, 1570, 466, 1563, 462, 1567,
  458, 1571, 465, 479, 460, 484, 466, 479, 460, 484, 466, 479,
  460, 1568, 457, 1572, 464, 1556, 459, 486, 464, 481, 458, 486,
  464, 480, 459, 485, 465, 480, 459, 485, 465, 480, 459, 485,
  465, 479, 460, 485, 465, 479, 460, 484, 466, 479, 460, 484,
  466, 478, 461, 483, 467, 477, 462, 482, 457, 487, 463, 481,
  458, 486, 464, 481, 458, 486, 464, 481, 458, 486, 464, 1565,
  460, 484, 466, 479, 460, 1568, 457, 1572, 464, 1548, 644, 3432,
  462,
};

const uint32_t irExtraRaw002[] = {
  4455, 4310, 587, 1553, 587, 481, 588, 1552, 587, 1553, 587, 482,
  587, 483, 586, 1553, 585, 483, 586, 483, 587, 1553, 586, 483,
  586, 483, 585, 1553, 586, 1553, 586, 483, 586, 1553, 586, 1553,
  586, 483, 586, 483, 585, 1553, 586, 1553, 587, 1552, 586, 1553,
  585, 1554, 585, 483, 586, 1552, 588, 1552, 585, 483, 586, 483,
  586, 483, 586, 483, 585, 484, 585, 484, 585, 483, 586, 483,
  586, 483, 585, 484, 586, 483, 586, 483, 586, 483, 586, 1553,
  585, 1553, 585, 1554, 585, 1553, 585, 1554, 585, 1553, 586, 1553,
  585, 1554, 584, 5128, 4426, 4312, 584, 1554, 585, 484, 585, 1553,
  585, 1554, 585, 483, 586, 483, 585, 1554, 584, 484, 585, 484,
  584, 1553, 584, 485, 584, 484, 585, 1554, 584, 1555, 583, 485,
  584, 1552, 586, 1553, 585, 484, 585, 483, 585, 1553, 583, 1554,
  585, 1553, 584, 1554, 583, 1554, 584, 485, 584, 1554, 584, 1554,
  583, 484, 585, 484, 585, 484, 584, 484, 584, 485, 584, 484,
  585, 484, 584, 485, 583, 485, 583, 484, 585, 484, 585, 484,
  584, 485, 583, 1555, 584, 1554, 584, 1553, 584, 1553, 585, 1553,
  584, 1553, 585, 1553, 584, 1555, 583,
};

const uint32_t irExtraRaw003[] = {
  4453, 4313, 586, 1554, 585, 483, 586, 1554, 587, 1552, 587, 483,
  587, 484, 586, 1552, 587, 482, 588, 483, 586, 1553, 586, 483,
  587, 483, 586, 1554, 586, 1553, 585, 484, 587, 1553, 586, 484,
  587, 1553, 586, 1554, 586, 1553, 586, 1554, 586, 483, 586, 1553,
  586, 1553, 586, 1555, 585, 483, 586, 482, 588, 483, 585, 484,
  585, 1554, 586, 483, 587, 484, 585, 1553, 587, 1554, 584, 1554,
  585, 484, 586, 484, 586, 483, 586, 483, 586, 484, 586, 482,
  588, 483, 584, 484, 586, 1553, 585, 1555, 584, 1555, 586, 1553,
  586, 1554, 585, 5129, 4428, 4312, 585, 1553, 586, 483, 586, 1555,
  584, 1553, 586, 484, 583, 486, 584, 1555, 585, 484, 585, 483,
  586, 1554, 585, 483, 586, 484, 585, 1554, 585, 1554, 585, 484,
  585, 1554, 585, 484, 584, 1554, 585, 1554, 584, 1554, 585, 1554,
  586, 483, 585, 1554, 585, 1555, 584, 1553, 584, 484, 586, 483,
  586, 483, 585, 484, 586, 1554, 583, 484, 586, 483, 585, 1553,
  585, 1553, 585, 1553, 585, 484, 584, 485, 585, 485, 584, 484,
  585, 484, 585, 485, 584, 484, 585, 483, 586, 1554, 585, 1553,
  585, 1554, 584, 1553, 585, 1553, 585,
};

const uint32_t irExtraRaw004[] = {
  6239, 515, 2191, 4487, 590, 562, 536, 589, 540, 559, 560, 1665,
  563, 563, 566, 560, 538, 587, 532, 567, 562, 1663, 565, 561,
  558, 567, 542, 1658, 590, 561, 537, 1662, 586, 1665, 563, 1663,
  565, 586, 533, 566, 563, 1663, 565, 1661, 618, 507, 561, 565,
  564, 561, 538, 588, 541, 1658, 560, 592, 537, 563, 566, 559,
  540, 586, 533, 567, 562, 563, 535, 590, 539, 561, 558, 568,
  541, 1657, 591, 1662, 566, 1659, 559, 1667, 591, 1660, 558, 1668,
  560, 591, 538, 561, 568, 558, 540, 585, 534, 565, 564, 562,
  536, 1688, 560, 1665, 563, 1663, 565, 1661, 587, 1664, 564, 1661,
  567, 584, 535, 565, 564, 561, 538, 588, 541, 559, 560, 565,
  534, 592, 537, 562, 567, 559, 539, 1685, 563, 563, 536, 1663,
  585, 1667, 561, 537, 592, 1660, 568, 558, 561,
};

const uint32_t irExtraRaw005[] = {
  8971, 4489, 568, 584, 535, 564, 565, 561, 537, 588, 541, 558,
  561, 565, 534, 592, 537, 562, 567, 1659, 559, 566, 563, 563,
  536, 1664, 584, 567, 542, 584, 535, 1664, 564, 587, 542, 558,
  561, 564, 535, 591, 538, 562, 567, 558, 541, 585, 534, 566,
  563, 562, 537, 589, 540, 559, 560, 566, 533, 593, 536, 563,
  566, 560, 539, 587, 532, 567, 562, 564, 535, 591, 538, 1661,
  567, 1658, 590, 1662, 566, 1659, 559, 1667, 592, 1660, 558, 567,
  562, 563, 536, 590, 539, 561, 558, 567, 542, 584, 535, 1664,
  564, 1662, 586, 1665, 563, 1662, 566, 1659, 589, 1663, 565, 560,
  559, 566, 533, 593, 536, 564, 565, 560, 538, 587, 542, 557,
  562, 564, 535, 591, 538, 1661, 567, 585, 534, 1666, 562, 1663,
  585, 566, 533, 1667, 592, 560, 538,
};

const uint32_t irExtraRaw006[] = {
  3089, 3684, 1991, 910, 1011, 1854, 983, 847, 1992, 911, 982, 965,
  956, 874, 984, 938, 982, 939, 973, 1866, 1889, 948, 973, 950,
  972, 950, 972, 859, 971, 950, 972, 950, 972, 954, 968, 887,
  943, 979, 943, 979, 943, 979, 943, 887, 944, 979, 943, 979,
  943, 979, 943, 887, 943, 979, 943, 950, 972, 979, 943, 1803,
  1952, 977, 3051, 3724, 1951, 978, 943, 1894, 943, 888, 1951, 978,
  943, 979, 943, 888, 942, 980, 942, 979, 943, 1895, 1859, 978,
  943, 979, 943, 979, 943, 888, 943, 979, 943, 979, 943, 980,
  942, 888, 943, 980, 942, 980, 942, 980, 942, 888, 942, 980,
  942, 980, 942, 980, 942, 888, 943, 979, 943, 980, 942, 980,
  942, 1804, 1950, 978, 3050, 3725, 1950, 978, 942, 1896, 941, 889,
  1950, 979, 941, 980, 942, 888, 942, 980, 942, 980, 942, 1896,
  1858, 979, 942, 980, 942, 980, 942, 889, 941, 980, 942, 981,
  941, 980, 942, 889, 942, 980, 942, 981, 941, 981, 941, 889,
  941, 981, 941, 981, 941, 981, 941, 889, 941, 981, 941, 981,
  941, 981, 941, 1805, 1949, 980, 3964,
};

const uint32_t irExtraRaw007[] = {
  3034, 3976, 1907, 1980, 1914, 2004, 1880, 1006, 941, 1032, 915, 999,
  937, 1008, 939, 1982, 933, 1008, 1907, 2008, 939, 978, 1916, 998,
  970, 980, 936, 976, 971, 1034, 913, 1000, 936, 1984, 942, 997,
  1939, 975, 941, 1003, 944, 1004, 943, 999, 937, 1037, 941, 971,
  965, 984, 942, 999, 969, 1919, 975, 1025, 3890, 3957, 1936, 1982,
  1912, 1940, 1944, 1038, 909, 1033, 914, 996, 940, 1009, 938, 1948,
  967, 1009, 1917, 1970, 945, 994, 1942, 979, 937, 1034, 913, 1003,
  944, 1000, 936, 1012, 935, 1981, 934, 1008, 1907, 1036, 932, 982,
  944, 1036, 911, 1027, 910, 1004, 964, 984, 942, 1033, 914, 999,
  937, 1976, 939, 1008, 3917, 3982, 1932, 1922, 1941, 1945, 1970, 981,
  945, 997, 940, 1008, 939, 1004, 943, 1979, 936, 998, 1917, 1943,
  972, 1002, 1913, 1032, 904, 1013, 944, 1000, 936, 1041, 906, 1001,
  967, 1923, 972, 1003, 1912, 1030, 906, 1009, 969, 975, 941, 1004,
  943, 1002, 945, 996, 940, 975, 972, 1005, 942, 1944, 971, 968,
  4915,
};

const uint32_t irExtraRaw008[] = {
  3031, 3980, 1912, 1945, 1969, 1950, 1912, 973, 994, 981, 965, 951,
  975, 1027, 909, 1950, 975, 965, 971, 974, 1941, 1006, 940, 977,
  969, 1003, 964, 951, 975, 1000, 936, 1006, 940, 973, 973, 1974,
  941, 973, 1942, 1006, 941, 974, 993, 950, 975, 999, 937, 1036,
  910, 975, 992, 952, 974, 998, 938, 1950, 975, 967, 3947, 3987,
  1916, 2002, 1881, 1975, 1939, 947, 999, 943, 972, 971, 996, 948,
  967, 1949, 997, 949, 976, 997, 1907, 980, 966, 1006, 941, 975,
  971, 1001, 945, 999, 968, 945, 970, 976, 970, 1974, 972, 942,
  1942, 975, 992, 952, 994, 949, 977, 970, 997, 948, 967, 979,
  967, 1005, 942, 999, 968, 1923, 971, 1000, 3914, 3958, 1965, 1919,
  1995, 1893, 1969, 984, 962, 954, 972, 996, 971, 973, 942, 1949,
  976, 992, 965, 947, 1947, 1002, 965, 950, 976, 1001, 945, 997,
  939, 1007, 939, 1006, 940, 998, 969, 1915, 1000, 944, 2002, 946,
  969, 944, 992, 956, 1001, 943, 972, 1000, 967, 949, 966, 977,
  969, 1001, 966, 1926, 968, 1003, 4889,
};

const uint32_t irExtraRaw009[] = {
  1281, 401, 1275, 431, 406, 1248, 1276, 431, 1244, 409, 439, 1242,
  433, 1247, 439, 1242, 433, 1248, 438, 1243, 443, 1239, 1285, 7120,
  1280, 407, 1279, 406, 442, 1239, 1285, 400, 1275, 434, 414, 1241,
  434, 1247, 439, 1243, 443, 1239, 436, 1246, 440, 1242, 1282, 8228,
  1282, 405, 1281, 404, 433, 1248, 1286, 399, 1276, 406, 442, 1240,
  435, 1245, 441, 1241, 434, 1247, 439, 1243, 443, 1239, 1285, 7121,
  1279, 407, 1279, 432, 416, 1239, 1285, 400, 1275, 434, 414, 1241,
  434, 1246, 440, 1242, 444, 1238, 437, 1245, 441, 1241, 1283, 8225,
  1285, 402, 1284, 401, 436, 1245, 1279, 406, 1280, 403, 434, 1246,
  440, 1241, 434, 1246, 440, 1242, 444, 1237, 438, 1244, 1280, 7124,
  1286, 399, 1276, 408, 440, 1241, 1283, 401, 1274, 434, 414, 1240,
  435, 1245, 441, 1241, 434, 1246, 440, 1242, 444, 1237, 1287, 8220,
  1279, 408, 1278, 407, 441, 1240, 1284, 401, 1274, 409, 439, 1242,
  433, 1247, 439, 1242, 444, 1238, 437, 1244, 442, 1240, 1284, 7121,
  1278, 408, 1278, 433, 415, 1240, 1284, 399, 1276, 406, 442, 1239,
  436, 1244, 442, 1239, 436, 1244, 442, 1239, 436, 1245, 1279, 8227,
  1283, 403, 1283, 400, 437, 1244, 1280, 403, 1283, 399, 438, 1242,
  433, 1247, 439, 1242, 433, 1247, 439, 1242, 444, 1238, 1275, 7127,
  1283, 402, 1284, 426, 412, 1243, 1281, 402, 1274, 408, 440, 1240,
  435, 1245, 441, 1239, 436, 1245, 441, 1240, 435, 1245, 1279, 8226,
  1284, 402, 1284, 399, 438, 1242, 1282, 400, 1275, 407, 441, 1239,
  436, 1243, 443, 1237, 438, 1242, 444, 1237, 438, 1242, 1282, 7120,
  1280, 405, 1281, 428, 409, 1244, 1280, 403, 1272, 409, 439, 1241,
  435, 1245, 441, 1239, 436, 1244, 442, 1239, 436, 1244, 1280, 8225,
  1285, 400, 1275, 408, 440, 1241, 1283, 399, 1276, 406, 432, 1248,
  438, 1242, 433, 1247, 439, 1242, 444, 1237, 438, 1242, 1282, 7120,
  1280, 406, 1280, 403, 434, 1246, 1278, 405, 1281, 400, 437, 1243,
  432, 1247, 439, 1241, 434, 1247, 439, 1242, 444, 1237, 1276, 8228,
  1282, 405, 1281, 402, 435, 1244, 1280, 404, 1282, 400, 437, 1241,
  434, 1246, 440, 1241, 434, 1246, 440, 1242, 433, 1247, 1277, 7126,
  1284, 403, 1283, 400, 437, 1241, 1283, 402, 1273, 409, 439, 1239,
  436, 1244, 442, 1239, 436, 1244, 442, 1239, 436, 1245, 1279, 8227,
  1283, 403, 1283, 401, 436, 1242, 1282, 403, 1283, 399, 438, 1241,
  434, 1246, 440, 1240, 435, 1246, 440, 1241, 434, 1246, 1278, 7126,
  1284, 402, 1284, 399, 438, 1241, 1283, 401, 1306, 376, 440, 1239,
  436, 1244, 442, 1238, 437, 1244, 442, 1239, 436, 1245, 1279, 8225,
  1285, 402, 1305, 379, 437, 1242, 1313, 371, 1304, 378, 438, 1240,
  435, 1245, 441, 1240, 435, 1245, 441, 1240, 435, 1246, 1278, 7125,
  1285, 401, 1306, 378, 470, 1209, 1304, 380, 1306, 377, 460, 1218,
  436, 1244, 442, 1238, 437, 1244, 442, 1239, 436, 1245, 1310, 8195,
  1315, 371, 1304, 379, 469, 1211, 1313, 371, 1304, 378, 470, 1209,
  435, 1245, 441, 1240, 435, 1245, 441, 1240, 435, 1245, 1310, 7092,
  1308, 378, 1308, 375, 462, 1216, 1308, 376, 1299, 382, 466, 1213,
  462, 1218, 436, 1244, 442, 1238, 437, 1244, 442, 1239, 1306,
};

const uint32_t irExtraRaw012[] = {
  3455, 1584, 486, 347, 483, 348, 482, 347, 482, 348, 480, 350,
  430, 401, 429, 1229, 432, 401, 429, 400, 430, 400, 430, 399,
  431, 399, 431, 398, 432, 398, 432, 399, 431, 399, 456, 375,
  455, 377, 453, 1207, 453, 378, 452, 1209, 452, 379, 451, 379,
  451, 379, 451, 379, 451, 379, 451, 379, 452, 379, 451, 379,
  451, 379, 451, 403, 427, 1233, 427, 1234, 427, 380, 450, 1234,
  426, 1234, 427, 403, 427, 1233, 427, 403, 427, 1234, 427, 403,
  427, 1234, 426, 404, 426, 403, 427, 403, 427, 403, 427, 403,
  427, 1234, 427, 403, 427, 403, 427, 403, 427, 403, 427, 403,
  427, 1234, 427, 403, 427, 403, 427, 403, 427, 403, 427, 403,
  427, 1234, 427, 403, 427, 1234, 426, 1234, 427, 1234, 426, 1234,
  427, 1234, 427, 403, 427, 403, 427, 403, 427, 1234, 427, 404,
  426, 403, 427, 403, 427, 403, 427, 403, 427, 403, 427, 403,
  428, 403, 427, 403, 427, 403, 427, 403, 427, 403, 427, 403,
  427, 403, 427, 1234, 427, 1234, 427, 404, 426, 404, 426, 404,
  426, 404, 426, 1234, 426, 404, 427, 404, 426, 404, 426, 1234,
  426, 404, 426, 404, 426, 1234, 427, 404, 426, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 1235, 426, 1235, 426, 1235,
  426, 404, 426, 1235, 425, 405, 426, 404, 426, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 404, 426, 404, 426, 404,
  427, 404, 426, 404, 426, 404, 426, 404, 427, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 404, 426, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 404, 426, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 404, 426, 404, 426, 404,
  426, 404, 426, 404, 426, 404, 426, 1235, 426, 1235, 426, 1235,
  426, 404, 426, 1235, 426, 404, 426,
};

const uint32_t irExtraRaw014[] = {
  4482, 4413, 596, 1596, 594, 527, 562, 1602, 588, 1603, 587, 535,
  565, 530, 570, 1595, 595, 526, 563, 532, 568, 1597, 593, 528,
  561, 534, 566, 1599, 591, 1599, 591, 531, 569, 1596, 594, 1597,
  593, 528, 561, 1603, 587, 1604, 596, 1595, 595, 1596, 594, 1597,
  593, 1598, 592, 529, 560, 1604, 596, 525, 564, 531, 569, 526,
  563, 532, 568, 527, 562, 533, 567, 1598, 592, 1599, 591, 530,
  570, 1595, 595, 526, 563, 532, 568, 527, 562, 506, 594, 528,
  561, 507, 593, 1598, 592, 529, 571, 1595, 595, 1596, 594, 1597,
  593, 1598, 592, 5251, 4505, 4417, 592, 1599, 591, 530, 570, 1595,
  595, 1596, 594, 527, 562, 533, 567, 1598, 592, 529, 561, 535,
  565, 1600, 590, 531, 569, 526, 563, 1602, 588, 1603, 587, 534,
  566, 1599, 591, 1600, 590, 531, 569, 1596, 594, 1597, 593, 1598,
  592, 1599, 591, 1600, 590, 1601, 589, 532, 568, 1597, 593, 529,
  561, 534, 566, 503, 597, 499, 590, 504, 596, 500, 589, 1601,
  589, 1602, 588, 533, 567, 1599, 591, 530, 570, 499, 591, 504,
  596, 526, 563, 505, 595, 501, 589, 1602, 588, 533, 567, 1598,
  592, 1599, 591, 1600, 590, 1601, 589,
};

const uint32_t irExtraRaw015[] = {
  4481, 4414, 595, 1596, 594, 527, 562, 1602, 588, 1604, 586, 535,
  565, 530, 570, 1594, 596, 526, 563, 532, 568, 1596, 594, 528,
  561, 534, 566, 1598, 592, 1600, 590, 531, 569, 1596, 594, 527,
  562, 1603, 587, 1604, 586, 1605, 648, 1543, 594, 527, 562, 1603,
  587, 1604, 586, 1605, 595, 525, 564, 531, 569, 526, 563, 532,
  568, 1596, 594, 528, 561, 534, 566, 1598, 592, 1600, 590, 1601,
  589, 532, 568, 527, 562, 533, 567, 528, 561, 534, 566, 529,
  560, 535, 565, 530, 570, 1594, 596, 1596, 594, 1597, 593, 1598,
  592, 1599, 591, 5252, 4503, 4418, 590, 1601, 589, 532, 568, 1597,
  593, 1598, 592, 529, 560, 535, 565, 1600, 590, 531, 569, 526,
  563, 1602, 588, 533, 567, 529, 560, 1604, 596, 1595, 595, 526,
  563, 1602, 588, 533, 567, 1598, 592, 1599, 591, 1600, 590, 1601,
  589, 532, 568, 1598, 592, 1599, 591, 1600, 590, 531, 569, 527,
  562, 532, 568, 528, 561, 1603, 587, 534, 566, 530, 559, 1605,
  595, 1596, 594, 1597, 593, 528, 561, 534, 566, 529, 560, 535,
  565, 530, 570, 525, 564, 531, 569, 527, 562, 1602, 588, 1603,
  587, 1604, 596, 1595, 595, 1596, 594,
};

const uint32_t irExtraRaw016[] = {
  4467, 4296, 626, 1511, 627, 469, 626, 1512, 626, 1538, 652, 442,
  625, 469, 601, 1538, 600, 495, 599, 469, 599, 1565, 598, 471,
  597, 498, 596, 1542, 596, 1569, 595, 474, 595, 1570, 594, 474,
  595, 1570, 594, 1544, 594, 1570, 594, 1570, 594, 475, 594, 1570,
  594, 1544, 594, 1570, 594, 475, 594, 501, 594, 475, 594, 500,
  595, 1544, 594, 501, 594, 475, 594, 1570, 594, 1544, 594, 1570,
  594, 475, 594, 501, 594, 475, 594, 501, 594, 475, 594, 501,
  594, 475, 594, 475, 620, 1544, 594, 1570, 594, 1544, 594, 1570,
  594, 1545, 594, 5144, 4435, 4328, 593, 1545, 593, 501, 594, 1545,
  593, 1571, 593, 475, 594, 501, 594, 1545, 593, 501, 593, 475,
  594, 1571, 593, 475, 594, 501, 594, 1545, 593, 1571, 593, 475,
  594, 1571, 593, 476, 619, 1545, 593, 1571, 593, 1545, 593, 1571,
  593, 476, 593, 1571, 593, 1545, 593, 1571, 594, 502, 593, 476,
  593, 476, 593, 502, 593, 1545, 593, 502, 593, 476, 593, 1572,
  592, 1572, 592, 1546, 592, 502, 593, 476, 593, 476, 593, 502,
  593, 477, 592, 503, 592, 477, 592, 503, 592, 1546, 592, 1572,
  592, 1546, 592, 1572, 592, 1572, 592,
};

const uint32_t irExtraRaw017[] = {
  4455, 4310, 587, 1553, 587, 481, 588, 1552, 587, 1553, 587, 482,
  587, 483, 586, 1553, 585, 483, 586, 483, 587, 1553, 586, 483,
  586, 483, 585, 1553, 586, 1553, 586, 483, 586, 1553, 586, 1553,
  586, 483, 586, 483, 585, 1553, 586, 1553, 587, 1552, 586, 1553,
  585, 1554, 585, 483, 586, 1552, 588, 1552, 585, 483, 586, 483,
  586, 483, 586, 483, 585, 484, 585, 484, 585, 483, 586, 483,
  586, 483, 585, 484, 586, 483, 586, 483, 586, 483, 586, 1553,
  585, 1553, 585, 1554, 585, 1553, 585, 1554, 585, 1553, 586, 1553,
  585, 1554, 584, 5128, 4426, 4312, 584, 1554, 585, 484, 585, 1553,
  585, 1554, 585, 483, 586, 483, 585, 1554, 584, 484, 585, 484,
  584, 1553, 584, 485, 584, 484, 585, 1554, 584, 1555, 583, 485,
  584, 1552, 586, 1553, 585, 484, 585, 483, 585, 1553, 583, 1554,
  585, 1553, 584, 1554, 583, 1554, 584, 485, 584, 1554, 584, 1554,
  583, 484, 585, 484, 585, 484, 584, 484, 584, 485, 584, 484,
  585, 484, 584, 485, 583, 485, 583, 484, 585, 484, 585, 484,
  584, 485, 583, 1555, 584, 1554, 584, 1553, 584, 1553, 585, 1553,
  584, 1553, 585, 1553, 584, 1555, 583,
};

const uint32_t irExtraRaw018[] = {
  4453, 4313, 586, 1554, 585, 483, 586, 1554, 587, 1552, 587, 483,
  587, 484, 586, 1552, 587, 482, 588, 483, 586, 1553, 586, 483,
  587, 483, 586, 1554, 586, 1553, 585, 484, 587, 1553, 586, 484,
  587, 1553, 586, 1554, 586, 1553, 586, 1554, 586, 483, 586, 1553,
  586, 1553, 586, 1555, 585, 483, 586, 482, 588, 483, 585, 484,
  585, 1554, 586, 483, 587, 484, 585, 1553, 587, 1554, 584, 1554,
  585, 484, 586, 484, 586, 483, 586, 483, 586, 484, 586, 482,
  588, 483, 584, 484, 586, 1553, 585, 1555, 584, 1555, 586, 1553,
  586, 1554, 585, 5129, 4428, 4312, 585, 1553, 586, 483, 586, 1555,
  584, 1553, 586, 484, 583, 486, 584, 1555, 585, 484, 585, 483,
  586, 1554, 585, 483, 586, 484, 585, 1554, 585, 1554, 585, 484,
  585, 1554, 585, 484, 584, 1554, 585, 1554, 584, 1554, 585, 1554,
  586, 483, 585, 1554, 585, 1555, 584, 1553, 584, 484, 586, 483,
  586, 483, 585, 484, 586, 1554, 583, 484, 586, 483, 585, 1553,
  585, 1553, 585, 1553, 585, 484, 584, 485, 585, 485, 584, 484,
  585, 484, 585, 485, 584, 484, 585, 483, 586, 1554, 585, 1553,
  585, 1554, 584, 1553, 585, 1553, 585,
};

const uint32_t irExtraRaw019[] = {
  3120, 1593, 488, 1180, 489, 1177, 492, 342, 492, 342, 492, 367,
  467, 1174, 485, 349, 485, 349, 485, 1181, 488, 1179, 490, 343,
  491, 1177, 492, 341, 493, 366, 458, 1183, 486, 1181, 488, 346,
  488, 1179, 490, 1177, 492, 342, 492, 341, 493, 1174, 485, 349,
  485, 347, 487, 1180, 489, 345, 489, 344, 490, 370, 464, 368,
  466, 341, 493, 341, 483, 376, 458, 375, 459, 348, 486, 374,
  460, 372, 462, 345, 489, 370, 464, 369, 465, 368, 466, 341,
  493, 367, 457, 348, 486, 374, 460, 348, 486, 1179, 490, 343,
  491, 343, 491, 1176, 493, 1174, 485, 349, 485, 349, 485, 374,
  460, 373, 461, 373, 461, 346, 488, 371, 463, 371, 463, 369,
  465, 1175, 484, 350, 484, 350, 484, 348, 486, 374, 460, 346,
  488, 372, 462, 345, 489, 371, 463, 370, 464, 368, 466, 340,
  484, 376, 458, 376, 458, 375, 459, 348, 486, 347, 487, 345,
  489, 370, 464, 370, 464, 369, 465, 342, 492, 368, 466, 367,
  457, 375, 459, 348, 486, 374, 460, 347, 487, 372, 462, 345,
  489, 371, 463, 343, 491, 368, 466, 341, 493, 367, 457, 376,
  458, 375, 459, 1181, 488, 346, 488, 345, 489, 1178, 491, 342,
  492, 342, 492, 1175, 494, 1173, 486, 1182, 487, 346, 488, 346,
  488, 1179, 490, 343, 491, 342, 492, 368, 466, 367, 457,
};

const uint32_t irExtraRaw020[] = {
  1305, 435, 1280, 432, 415, 1255, 1307, 432, 1272, 439, 418, 1252,
  442, 1255, 1307, 431, 416, 1255, 439, 1258, 447, 1251, 443, 8174,
  1302, 437, 1278, 433, 414, 1255, 1307, 432, 1273, 438, 419, 1250,
  444, 1254, 1298, 440, 417, 1253, 441, 1256, 438, 1259, 445, 8170,
  1306, 433, 1271, 439, 418, 1251, 1301, 438, 1277, 434, 413, 1256,
  449, 1249, 1303, 435, 412, 1258, 446, 1251, 443, 1254, 440, 8176,
  1300, 438, 1277, 434, 413, 1283, 1279, 433, 1271, 440, 417, 1278,
  416, 1255, 1307, 431, 416, 1253, 441, 1257, 447, 1250, 444, 8171,
  1305, 433, 1272, 439, 418, 1278, 1274, 438, 1277, 433, 414, 1282,
  412, 1259, 1303, 434, 413, 1256, 448, 1249, 445, 1252, 442, 8173,
  1303, 435, 1270, 440, 417, 1279, 1273, 438, 1277, 433, 414, 1282,
  412, 1258, 1304, 433, 414, 1282, 412, 1258, 446, 1250, 444, 8171,
  1305, 433, 1272, 438, 419, 1276, 1276, 435, 1270, 441, 416, 1252,
  442, 1255, 1297, 440, 417, 1279, 415, 1255, 439, 1257, 447, 8168,
  1297, 439, 1276, 434, 413, 1256, 1306, 431, 1273, 436, 411, 1258,
  446, 1250, 1302, 409, 438, 1284, 421, 1249, 445, 1252, 442,
};

const uint32_t irExtraRaw021[] = {
  6133, 7359, 575, 561, 550, 560, 577, 532, 576, 559, 550, 534,
  602, 507, 549, 536, 573, 536, 573, 564, 546, 539, 571, 538,
  545, 540, 570, 538, 570, 566, 545, 539, 571, 589, 545, 590,
  521, 540, 570, 562, 521, 563, 547, 562, 545, 592, 521, 563,
  548, 588, 522, 615, 521, 563, 547, 589, 521, 589, 548, 589,
  547, 562, 521, 589, 548, 588, 548, 589, 521, 563, 547, 563,
  546, 590, 521, 589, 547, 562, 546, 590, 521, 589, 547, 589,
  547, 563, 521, 563, 548, 589, 521, 589, 548, 588, 549, 589,
  545, 539, 548, 589, 548, 563, 521, 562, 549, 589, 521, 563,
  548, 563, 547, 590, 521, 589, 548, 589, 548, 563, 521, 589,
  547, 1667, 521, 1641, 521, 563, 547, 589, 548, 589, 521, 589,
  548, 562, 548, 590, 520, 589, 548, 589, 548, 589, 521, 590,
  547, 588, 548, 1667, 520, 1668, 545, 1642, 547, 563, 520, 563,
  547, 1667, 520, 589, 547, 589, 547, 1641, 546, 563, 547, 1641,
  546, 563, 546, 538, 546, 1668, 544, 539, 547, 1668, 520, 590,
  546, 590, 546, 1668, 520, 564, 546, 590, 520, 1668, 547, 1642,
  546, 1668, 542, 7378, 545,
};

const uint32_t irExtraRaw022[] = {
  6060, 7357, 592, 1633, 593, 1633, 593, 1633, 593, 1633, 593, 1633,
  593, 1633, 592, 1634, 592, 1634, 592, 515, 591, 515, 591, 515,
  591, 516, 590, 517, 590, 516, 590, 517, 590, 517, 589, 1636,
  590, 1636, 590, 1636, 590, 1636, 590, 1636, 590, 1636, 590, 1636,
  590, 1636, 590, 517, 590, 517, 590, 517, 590, 517, 590, 517,
  590, 517, 589, 517, 590, 517, 590, 1636, 590, 1637, 589, 1637,
  589, 1637, 589, 1636, 615, 1612, 589, 1637, 589, 1636, 590, 517,
  590, 517, 589, 517, 590, 517, 590, 517, 590, 517, 589, 517,
  590, 517, 590, 1637, 589, 1637, 589, 1637, 589, 517, 589, 517,
  589, 517, 590, 1637, 589, 1637, 589, 517, 590, 517, 590, 517,
  589, 1637, 589, 1637, 589, 1637, 590, 517, 589, 517, 589, 517,
  589, 518, 589, 517, 589, 1637, 589, 1637, 589, 517, 590, 1637,
  589, 1637, 589, 1637, 589, 1637, 589, 1637, 590, 517, 589, 517,
  589, 1637, 589, 517, 589, 517, 590, 517, 589, 1638, 589, 517,
  590, 1637, 589, 518, 589, 1637, 589, 518, 588, 518, 589, 1637,
  589, 518, 588, 1637, 589, 518, 588, 1637, 589, 518, 589, 1637,
  589, 1637, 589, 7359, 589,
};

const uint32_t irExtraRaw023[] = {
  4386, 4346, 653, 1484, 653, 414, 580, 1558, 653, 414, 654, 414,
  654, 415, 653, 415, 653, 1484, 653, 1484, 653, 414, 654, 415,
  579, 488, 580, 488, 580, 488, 653, 1485, 578, 488, 580, 488,
  580, 1558, 652, 1483, 580, 489, 579, 1558, 579, 1556, 581, 1559,
  578, 488, 580, 1557, 580, 1557, 580, 1558, 579, 1558, 579, 1557,
  580, 1557, 580, 1556, 581, 1560, 577, 1559, 578, 1559, 578, 1558,
  579, 1557, 580, 1560, 577, 1558, 579, 1557, 580, 1558, 579, 490,
  578, 1558, 578, 1559, 578, 489, 578, 491, 577, 489, 579, 1559,
  577, 1559, 578, 5131, 4382, 4346, 577, 490, 578, 1557, 579, 489,
  578, 1558, 578, 1558, 578, 1558, 578, 1558, 578, 490, 577, 489,
  578, 1556, 580, 1558, 578, 1558, 578, 1558, 578, 1558, 578, 488,
  579, 1557, 579, 1559, 577, 489, 579, 490, 577, 1587, 549, 490,
  578, 488, 579, 489, 578, 1557, 579, 489, 578, 490, 578, 488,
  579, 489, 578, 489, 578, 489, 578, 490, 577, 488, 579, 489,
  578, 489, 578, 489, 578, 489, 578, 489, 578, 489, 578, 490,
  577, 488, 579, 1559, 577, 488, 579, 488, 579, 1558, 578, 1559,
  577, 1559, 577, 489, 578, 489, 578,
};

const uint32_t irExtraRaw024[] = {
  4381, 4345, 579, 1558, 579, 488, 580, 1559, 578, 488, 580, 489,
  579, 488, 580, 489, 579, 1558, 579, 489, 579, 488, 580, 488,
  580, 489, 579, 488, 580, 489, 579, 1557, 579, 488, 580, 488,
  580, 1559, 577, 1557, 580, 488, 580, 1557, 579, 1557, 580, 1557,
  580, 488, 580, 1558, 579, 1558, 579, 1558, 579, 1557, 580, 1558,
  579, 1559, 578, 1557, 580, 1557, 580, 1556, 580, 1558, 579, 1557,
  579, 1559, 578, 1557, 579, 1560, 577, 1561, 549, 1584, 579, 1557,
  553, 1584, 552, 1584, 552, 515, 553, 516, 551, 516, 551, 1585,
  551, 1583, 553, 5156, 4384, 4343, 552, 515, 552, 1584, 552, 515,
  552, 1584, 552, 1584, 552, 1584, 552, 1585, 551, 515, 553, 1585,
  551, 1583, 553, 1584, 552, 1583, 553, 1584, 552, 1583, 553, 516,
  551, 1584, 552, 1585, 551, 515, 552, 517, 550, 1583, 553, 515,
  552, 515, 552, 516, 551, 1584, 552, 515, 552, 516, 551, 516,
  551, 515, 552, 515, 552, 515, 552, 516, 551, 516, 551, 515,
  552, 515, 553, 515, 552, 515, 552, 515, 552, 516, 551, 515,
  552, 516, 551, 515, 552, 515, 552, 516, 551, 1583, 553, 1584,
  552, 1585, 551, 515, 552, 515, 552,
};

const uint32_t irExtraRaw026[] = {
  9823, 9795, 9821, 9799, 4615, 2493, 385, 343, 389, 924, 386, 931,
  389, 348, 384, 929, 381, 355, 387, 345, 387, 357, 386, 343,
  379, 934, 386, 350, 382, 350, 382, 354, 388, 929, 381, 355,
  387, 357, 386, 343, 379, 357, 386, 350, 382, 928, 382, 931,
  379, 938, 382, 355, 388, 356, 387, 919, 381, 355, 387, 349,
  383, 927, 383, 930, 380, 356, 386, 346, 386, 358, 384, 344,
  388, 348, 384, 352, 380, 352, 380, 933, 387, 348, 384, 351,
  381, 363, 379, 349, 383, 353, 379, 357, 386, 347, 385, 927,
  383, 354, 388, 344, 388, 356, 386, 919, 381, 355, 388, 349,
  383, 350, 382, 353, 379, 938, 382, 354, 389, 356, 386, 919,
  381, 355, 387, 930, 380, 934, 386, 349, 383, 934, 386, 350,
  382, 358, 385, 20350, 4620,
};

const uint32_t irExtraRaw027[] = {
  5055, 2191, 335, 1799, 360, 752, 338, 714, 365, 716, 364, 1800,
  359, 723, 367, 715, 365, 718, 361, 720, 359, 1805, 365, 747,
  332, 1802, 357, 1806, 364, 719, 360, 1803, 367, 1798, 361, 1803,
  367, 1797, 362, 1802, 368, 744, 335, 1799, 360, 721, 369, 714,
  365, 716, 363, 719, 360, 721, 369, 713, 366, 1798, 361, 1802,
  368, 715, 364, 717, 362, 720, 359, 723, 367, 715, 364, 1799,
  360, 722, 368, 714, 365, 717, 363, 719, 361, 722, 368, 714,
  365, 716, 363, 719, 360, 721, 369, 713, 366, 716, 363, 718,
  361, 721, 359, 723, 367, 1797, 362, 1802, 368, 1796, 363, 1801,
  358, 754, 336, 716, 363, 719, 361, 29583, 5057, 2160, 366, 1798,
  361, 750, 329, 723, 367, 715, 364, 1800, 359, 753, 337, 715,
  364, 717, 363, 720, 359, 1804, 366, 747, 332, 1801, 358, 1806,
  364, 718, 361, 1803, 356, 1798, 1802, 368, 1797, 362, 1802, 368,
  714, 365, 1799, 360, 722, 368, 714, 365, 717, 362, 719, 360,
  722, 368, 714, 365, 1798, 361, 1803, 367, 715, 364, 718, 362,
  721, 359, 723, 367, 715, 364, 718, 361, 720, 359, 723, 367,
  715, 364, 717, 362, 720, 360, 1804, 366, 1799, 360, 721, 369,
  714, 365, 1798, 361, 1803, 367, 1798, 361, 720, 359, 723, 367,
  715, 364, 718, 361, 720, 360, 723, 367, 715, 364, 717, 362,
  720, 359, 722, 368, 714, 365, 717, 362, 719, 360, 722, 368,
  1796, 363, 719, 360, 721, 369, 714, 365, 716, 363, 719, 361,
  721, 369, 713, 366, 716, 363, 718, 361, 721, 358, 723, 367,
  716, 363, 718, 362, 720, 359, 723, 367, 715, 364, 718, 361,
  720, 359, 723, 367, 715, 364, 1799, 360, 1804, 366, 1799, 360,
  721, 369, 714, 365, 716, 363, 1801, 358, 754, 336, 1798, 361,
  720, 360, 1805, 365, 748, 331, 720, 359, 723, 367, 715, 364,
  717, 363, 720, 360, 722, 368, 714, 365, 717, 362, 720, 359,
  722, 368, 714, 365, 717, 363, 719, 361, 722, 368, 714, 365,
  1798, 361, 751, 339, 713, 366, 716, 363, 1801, 359, 1805, 365,
  1800, 359, 1805, 365, 1800, 359, 1805, 365, 1799, 360,
};

const uint32_t irExtraRaw028[] = {
  5050, 2165, 361, 1803, 367, 716, 363, 718, 361, 721, 358, 1806,
  364, 718, 362, 720, 359, 723, 367, 715, 364, 1800, 359, 722,
  368, 1797, 362, 1802, 368, 714, 365, 1799, 360, 1803, 367, 1798,
  361, 1803, 367, 1797, 362, 720, 359, 1805, 365, 717, 363, 719,
  360, 722, 368, 714, 365, 717, 362, 719, 360, 1804, 366, 1798,
  361, 721, 358, 723, 367, 715, 364, 718, 361, 720, 359, 1805,
  365, 717, 362, 720, 359, 722, 368, 714, 365, 717, 362, 719,
  361, 722, 368, 714, 365, 716, 363, 719, 360, 721, 358, 724,
  366, 716, 363, 718, 361, 1803, 367, 1797, 362, 1802, 368, 1797,
  362, 719, 360, 722, 368, 714, 365, 29579, 5061, 2156, 360, 1804,
  366, 717, 362, 719, 360, 722, 357, 1806, 364, 719, 360, 721,
  358, 724, 366, 716, 363, 1801, 358, 723, 367, 1798, 361, 1802,
  368, 715, 364, 1800, 359, 1804, 366, 1799, 360, 1804, 366, 1798,
  361, 721, 359, 1806, 364, 718, 362, 721, 359, 723, 367, 715,
  364, 718, 362, 720, 359, 1805, 365, 1799, 360, 722, 368, 714,
  365, 717, 362, 719, 361, 721, 358, 724, 366, 716, 363, 719,
  361, 721, 358, 724, 366, 716, 363, 1801, 358, 1806, 364, 718,
  361, 721, 358, 1805, 365, 1800, 359, 1805, 365, 717, 362, 720,
  359, 722, 368, 714, 365, 717, 362, 719, 360, 722, 368, 714,
  365, 717, 362, 1802, 368, 714, 365, 717, 362, 719, 361, 722,
  368, 1796, 363, 719, 360, 721, 358, 724, 366, 716, 363, 719,
  360, 721, 358, 724, 366, 716, 363, 718, 362, 721, 359, 723,
  367, 715, 364, 718, 361, 720, 360, 723, 367, 715, 364, 718,
  362, 720, 359, 722, 368, 715, 364, 1799, 360, 1805, 365, 1799,
  360, 722, 368, 714, 365, 716, 363, 1801, 358, 724, 366, 1799,
  360, 721, 358, 1806, 364, 718, 361, 721, 358, 723, 367, 716,
  363, 718, 362, 721, 359, 723, 367, 715, 364, 718, 362, 720,
  359, 723, 367, 715, 364, 718, 362, 720, 359, 723, 367, 715,
  364, 1800, 359, 722, 368, 714, 365, 1799, 360, 1804, 366, 1799,
  360, 1804, 366, 1799, 360, 1804, 366, 1798, 361, 1803, 367,
};

const uint32_t irExtraRaw029[] = {
  3447, 1724, 428, 1295, 429, 433, 429, 433, 428, 433, 429, 1295,
  429, 433, 429, 433, 429, 434, 428, 434, 428, 1294, 430, 433,
  429, 1295, 429, 1295, 429, 432, 429, 1296, 428, 1295, 429, 1295,
  429, 1295, 429, 1294, 429, 432, 430, 433, 429, 1294, 430, 432,
  430, 432, 430, 434, 428, 432, 430, 432, 430, 432, 429, 1296,
  428, 1294, 430, 1295, 429, 1295, 429, 434, 427, 433, 429, 433,
  428, 435, 427, 433, 429, 432, 429, 432, 430, 434, 428, 433,
  429, 433, 429, 433, 429, 433, 429, 433, 428, 433, 429, 432,
  430, 432, 429, 432, 430, 433, 429, 433, 429, 434, 428, 434,
  427, 432, 430, 434, 428, 432, 429, 434, 428, 1295, 429, 433,
  429, 432, 430, 433, 428, 433, 429, 432, 430, 434, 428, 29636,
  3449, 1724, 428, 1295, 429, 433, 429, 433, 429, 434, 428, 1295,
  429, 433, 429, 432, 430, 433, 428, 433, 429, 1295, 429, 435,
  426, 1296, 428, 1296, 428, 435, 427, 1295, 429, 1295, 429, 1296,
  427, 1296, 428, 1295, 429, 434, 428, 434, 427, 1296, 428, 433,
  428, 435, 427, 434, 428, 435, 426, 434, 428, 433, 429, 434,
  428, 433, 429, 433, 429, 434, 428, 433, 429, 434, 428, 434,
  428, 434, 427, 434, 428, 434, 428, 434, 427, 434, 428, 435,
  427, 434, 428, 433, 428, 434, 428, 433, 429, 434, 427, 434,
  428, 435, 427, 434, 427, 436, 426, 1296, 427, 1296, 428, 435,
  427, 1296, 428, 434, 428, 435, 427, 434, 428, 433, 428, 434,
  428, 434, 427, 434, 428, 435, 426, 435, 427, 434, 505, 357,
  505, 357, 505, 357, 505, 355, 506, 1218, 506, 1220, 504, 356,
  506, 357, 505, 356, 505, 356, 506, 355, 507, 356, 506, 356,
  506, 356, 505, 355, 507, 355, 506, 357, 505, 357, 505, 356,
  506, 356, 505, 357, 505, 356, 506, 356, 505, 356, 505, 356,
  506, 356, 506, 357, 505, 356, 506, 356, 505, 355, 507, 356,
  506, 356, 505, 356, 505, 356, 506, 356, 505, 356, 506, 356,
  505, 357, 505, 355, 507, 357, 505, 356, 505, 357, 427, 435,
  427, 435, 427, 435, 427, 434, 428, 434, 428, 434, 427, 434,
  428, 435, 427, 436, 426, 433, 429, 434, 428, 435, 427, 434,
  427, 436, 425, 435, 427, 434, 428, 434, 427, 435, 426, 434,
  428, 435, 426, 1297, 427, 1298, 426, 434, 427, 434, 428, 434,
  428, 435, 427, 435, 426, 435, 427, 434, 427, 434, 428, 434,
  428, 434, 428, 435, 427, 434, 428, 434, 428, 434, 428, 434,
  427, 433, 429, 433, 429, 1296, 428, 1296, 428, 1296, 428, 435,
  427, 1296, 428, 434, 428, 435, 427,
};

const uint32_t irExtraRaw030[] = {
  442, 426, 442, 428, 443, 425, 443, 429, 442, 425, 443, 24982,
  3516, 1700, 443, 1296, 443, 426, 442, 428, 442, 426, 442, 1300,
  441, 426, 442, 428, 443, 426, 442, 425, 443, 1299, 442, 426,
  442, 1297, 442, 1297, 442, 429, 442, 1297, 442, 1297, 442, 1296,
  442, 1296, 443, 1300, 441, 426, 442, 429, 442, 1297, 441, 426,
  442, 428, 443, 425, 443, 429, 442, 425, 443, 429, 442, 426,
  442, 429, 442, 426, 442, 427, 441, 428, 443, 427, 441, 428,
  443, 425, 443, 429, 442, 426, 442, 429, 442, 427, 441, 429,
  442, 425, 443, 429, 442, 425, 443, 428, 443, 425, 443, 427,
  444, 425, 442, 428, 443, 1296, 443, 428, 443, 425, 443, 1297,
  442, 1297, 441, 429, 442, 426, 442, 429, 442, 425, 443, 428,
  443, 426, 442, 428, 443, 428, 440, 430, 441, 425, 443, 428,
  443, 427, 441, 428, 443, 426, 442, 1298, 440, 1297, 442, 429,
  442, 427, 441, 429, 442, 426, 442, 429, 441, 425, 443, 429,
  442, 425, 443, 429, 442, 426, 442, 428, 442, 426, 442, 429,
  442, 426, 442, 429, 441, 427, 441, 430, 441, 426, 441, 429,
  442, 426, 442, 428, 443, 426, 442, 430, 441, 427, 441, 430,
  441, 428, 440, 429, 442, 425, 443, 429, 442, 426, 442, 430,
  441, 426, 442, 429, 442, 427, 441, 426, 442, 428, 443, 426,
  442, 429, 442, 426, 442, 428, 443, 426, 442, 430, 440, 429,
  442, 426, 442, 429, 442, 425, 443, 429, 442, 426, 442, 428,
  443, 426, 442, 1297, 442, 429, 442, 1297, 442, 425, 443, 428,
  443, 426, 442, 1297, 442, 1297, 442, 429, 442, 426, 442, 429,
  442, 425, 443, 429, 441, 425, 443, 1300, 441, 427, 441, 425,
  443, 430, 441, 425, 443, 430, 441, 426, 442, 428, 443, 426,
  442, 429, 442, 1297, 442, 426, 442, 428, 442, 1297, 442, 1298,
  440, 1297, 442, 1299, 442, 426, 442,
};

const uint32_t irExtraRaw031[] = {
  445, 455, 421, 449, 416, 453, 422, 447, 418, 451, 424, 25400,
  3494, 1753, 416, 1322, 419, 450, 415, 456, 420, 449, 416, 1325,
  416, 451, 425, 444, 421, 448, 417, 453, 423, 1318, 423, 444,
  421, 1320, 421, 1316, 414, 457, 419, 1320, 421, 1318, 423, 1314,
  417, 1322, 419, 1320, 421, 449, 416, 453, 422, 1317, 424, 445,
  420, 450, 415, 456, 419, 447, 418, 451, 414, 456, 420, 449,
  416, 452, 424, 448, 417, 453, 422, 445, 420, 450, 415, 456,
  419, 448, 417, 452, 423, 447, 418, 449, 416, 453, 423, 448,
  417, 453, 423, 446, 419, 449, 416, 453, 423, 447, 418, 1321,
  420, 451, 414, 454, 422, 449, 416, 1322, 419, 1319, 422, 449,
  416, 1322, 419, 451, 424, 445, 420, 449, 416, 455, 421, 445,
  420, 449, 416, 455, 420, 448, 417, 452, 424, 446, 419, 1321,
  420, 1317, 424, 1315, 416, 1324, 417, 1322, 419, 1320, 421, 1320,
  421, 446, 419, 1319, 422, 1319, 422, 1318, 423, 1313, 417, 453,
  423, 445, 420, 450, 415, 454, 421, 449, 416, 454, 422, 446,
  419, 449, 416, 456, 420, 448, 417, 453, 423, 444, 421, 450,
  415, 454, 422, 447, 418, 451, 424, 445, 420, 450, 415, 455,
  420, 447, 418, 452, 424, 447, 418, 451, 424, 445, 420, 448,
  417, 453, 423, 446, 419, 451, 424, 444, 421, 448, 417, 452,
  423, 446, 419, 451, 424, 445, 420, 448, 417, 451, 414, 456,
  420, 452, 424, 443, 422, 449, 416, 451, 424, 448, 417, 449,
  416, 455, 420, 1318, 423, 446, 419, 1319, 422, 448, 417, 451,
  424, 447, 418, 1320, 421, 1316, 415, 455, 421, 451, 414, 455,
  421, 449, 416, 451, 424, 446, 419, 1319, 422, 448, 417, 454,
  422, 446, 419, 451, 414, 1325, 416, 452, 423, 447, 418, 451,
  424, 447, 418, 1318, 423, 446, 419, 449, 416, 1327, 424, 1312,
  419, 449, 416, 455, 421, 449, 416,
};

const uint32_t irExtraRaw032[] = {
  5041, 2133, 360, 1770, 356, 693, 364, 685, 362, 689, 358, 1772,
  364, 686, 361, 689, 358, 692, 365, 684, 363, 1768, 358, 692,
  365, 1767, 359, 1771, 355, 694, 363, 1769, 357, 1773, 363, 1768,
  358, 1772, 364, 1767, 359, 689, 358, 692, 365, 1765, 361, 689,
  358, 692, 365, 685, 362, 688, 359, 691, 366, 684, 363, 1767,
  359, 1773, 363, 1768, 358, 1772, 364, 1767, 359, 689, 358, 1774,
  362, 1769, 357, 691, 366, 684, 363, 687, 360, 690, 357, 693,
  364, 685, 362, 689, 358, 691, 366, 684, 363, 687, 360, 690,
  357, 693, 364, 1766, 360, 1773, 363, 1767, 359, 1771, 355, 694,
  363, 687, 360, 690, 357, 693, 364, 29443, 5038, 2134, 359, 1774,
  362, 686, 361, 689, 358, 692, 365, 1765, 361, 689, 358, 692,
  365, 685, 362, 688, 359, 1771, 365, 685, 362, 1769, 357, 1775,
  361, 687, 360, 1772, 364, 1767, 359, 1771, 355, 1776, 360, 1770,
  356, 693, 364, 686, 361, 1799, 327, 693, 364, 686, 361, 689,
  358, 692, 365, 685, 362, 688, 359, 691, 356, 694, 363, 686,
  361, 689, 358, 1773, 363, 1769, 357, 691, 366, 684, 363, 1798,
  328, 692, 365, 1767, 359, 1771, 355, 694, 363, 686, 361, 689,
  358, 692, 365, 1765, 361, 1772, 364, 684, 363, 687, 360, 1801,
  335, 684, 363, 687, 360, 690, 357, 693, 364, 686, 361, 1769,
  357, 694, 363, 686, 361, 689, 358, 692, 365, 685, 362, 688,
  359, 691, 356, 694, 363, 687, 360, 690, 357, 693, 365, 685,
  362, 688, 359, 691, 367, 684, 363, 687, 360, 690, 357, 693,
  365, 685, 362, 688, 359, 1772, 364, 1768, 358, 690, 357, 693,
  364, 686, 361, 689, 358, 692, 365, 1765, 361, 689, 358, 692,
  365, 685, 362, 688, 359, 691, 356, 694, 363, 687, 360, 689,
  358, 1773, 363, 687, 360, 690, 357, 693, 364, 685, 362, 688,
  359, 1772, 364, 686, 361, 1769, 357, 1776, 360, 1770, 356, 1775,
  361, 687, 360,
};

const uint32_t irExtraRaw033[] = {
  190, 26844, 503, 368, 475, 395, 475, 395, 475, 367, 476, 395,
  475, 25347, 3527, 1695, 451, 1290, 451, 420, 476, 394, 476, 394,
  475, 1264, 475, 370, 471, 399, 470, 400, 470, 400, 443, 1298,
  443, 400, 470, 1270, 471, 1270, 471, 400, 470, 1270, 471, 1271,
  470, 1270, 471, 1270, 471, 1271, 470, 400, 470, 373, 470, 1271,
  470, 400, 470, 400, 470, 400, 443, 400, 470, 400, 470, 400,
  443, 400, 470, 400, 470, 400, 470, 374, 469, 1271, 470, 400,
  470, 1271, 470, 400, 470, 401, 442, 401, 469, 1272, 469, 1272,
  469, 401, 469, 401, 469, 374, 469, 401, 469, 401, 469, 401,
  442, 401, 469, 401, 469, 401, 469, 374, 469, 401, 469, 401,
  469, 374, 469, 401, 469, 401, 469, 401, 442, 1300, 441, 1299,
  442, 1300, 441, 402, 468, 1272, 469, 402, 468, 1272, 469, 1273,
  468, 34903, 3522, 1703, 471, 1270, 471, 400, 470, 373, 470, 400,
  470, 1270, 471, 400, 470, 400, 443, 400, 470, 400, 470, 1270,
  471, 400, 443, 1298, 443, 1297, 444, 400, 470, 1270, 471, 1270,
  471, 1270, 471, 1270, 471, 1270, 471, 400, 470, 400, 470, 1270,
  471, 373, 470, 400, 470, 400, 470, 400, 443, 400, 470, 400,
  470, 400, 470, 373, 470, 400, 470, 400, 470, 400, 443, 1298,
  443, 400, 470, 400, 470, 400, 443, 400, 470, 1271, 470, 400,
  470, 1271, 470, 1271, 470, 400, 470, 1271, 470, 1271, 470, 1271,
  470, 373, 470, 400, 470, 1271, 470, 1271, 470, 400, 470, 1271,
  470, 1271, 470, 400, 443, 400, 470, 400, 470, 400, 470, 1271,
  470, 373, 470, 1271, 470, 401, 469, 1271, 470, 400, 470, 1271,
  470, 34903, 3522, 1702, 471, 1269, 472, 373, 470, 399, 471, 399,
  471, 1270, 471, 399, 444, 399, 471, 399, 471, 399, 471, 1270,
  471, 372, 471, 1270, 471, 1270, 471, 399, 471, 1270, 471, 1270,
  471, 1270, 471, 1270, 471, 1270, 471, 399, 471, 399, 444, 1297,
  444, 399, 471, 399, 471, 399, 471, 372, 471, 399, 471, 399,
  471, 373, 470, 399, 471, 399, 471, 399, 444, 400, 470, 399,
  471, 399, 471, 373, 470, 400, 470, 400, 470, 399, 444, 400,
  470, 1270, 471, 400, 470, 400, 470, 1270, 471, 1271, 470, 1271,
  470, 372, 471, 400, 470, 400, 470, 400, 443, 1298, 443, 400,
  470, 1271, 470, 1271, 470, 400, 470, 400, 443, 401, 469, 400,
  470, 401, 469, 373, 470, 401, 469, 401, 469, 401, 442, 401,
  469, 401, 469, 401, 469, 375, 468, 402, 468, 401, 469, 1273,
  468, 1296, 445, 426, 416, 426, 445, 426, 444, 426, 417, 426,
  444, 426, 444, 426, 444, 399, 444, 426, 444, 426, 444, 426,
  417, 426, 444, 426, 444, 426, 444, 399, 444, 426, 444, 426,
  444, 426, 417, 1324, 417, 1325, 416, 426, 444, 426, 444, 427,
  416, 427, 444, 426, 444, 426, 444, 399, 444, 427, 443, 427,
  443, 426, 417, 1325, 416, 1325, 416, 427, 443, 427, 443, 426,
  444, 399, 444, 427, 443, 427, 444, 427, 416, 427, 444, 427,
  443, 427, 443, 400, 443, 427, 443, 427, 443, 400, 443, 427,
  443, 427, 443, 427, 416, 1325, 416, 427, 443, 427, 443, 427,
  443, 400, 443, 427, 443, 1298, 443, 1298, 443, 427, 443, 427,
  416, 427, 443, 427, 443, 427, 443, 400, 443, 427, 443, 1298,
  443, 427, 443, 400, 443, 428, 442, 427, 443, 427, 416, 428,
  443, 427, 443, 427, 443, 400, 443, 1298, 443, 1298, 443, 428,
  442, 428, 442, 428, 415, 428, 442, 1299, 442,
};

const uint32_t irExtraRaw034[] = {
  454, 414, 452, 413, 453, 413, 453, 413, 453, 412, 454, 25103,
  3488, 1708, 454, 1278, 454, 413, 453, 413, 453, 413, 453, 1278,
  454, 413, 453, 413, 453, 412, 453, 413, 453, 1278, 479, 388,
  478, 1254, 478, 1255, 477, 389, 476, 1257, 475, 1283, 449, 1283,
  449, 1284, 448, 1284, 448, 417, 449, 417, 449, 1284, 448, 417,
  449, 417, 449, 417, 449, 417, 449, 418, 448, 417, 449, 418,
  448, 417, 449, 418, 448, 418, 448, 1284, 448, 418, 448, 1284,
  448, 418, 448, 418, 448, 418, 448, 1284, 448, 1284, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 1284, 448, 418, 448, 418,
  447, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 1284, 448, 1284, 448, 1285,
  447, 418, 448, 418, 448, 1285, 447, 1285, 447, 1285, 447, 35478,
  3510, 1713, 449, 1284, 448, 418, 448, 418, 448, 417, 449, 1284,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 1284, 448, 418,
  448, 1284, 448, 1284, 448, 417, 449, 1284, 448, 1284, 448, 1284,
  448, 1284, 448, 1284, 448, 418, 448, 418, 448, 1284, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 447, 418, 448, 418, 448, 418, 448, 1284, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 1285, 447, 418, 448, 418,
  447, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 447, 418, 448, 418, 448, 419, 447, 419, 447, 1285,
  447, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 1285,
  447, 419, 447, 418, 448, 1285, 447, 1285, 447, 418, 448, 35479,
  3509, 1713, 449, 1284, 448, 417, 449, 417, 449, 417, 449, 1284,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 1284, 448, 418,
  448, 1284, 448, 1284, 448, 418, 448, 1284, 448, 1284, 448, 1284,
  448, 1284, 448, 1284, 448, 418, 448, 418, 448, 1284, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 448, 418, 448, 418, 447, 418, 448, 418, 448, 1285,
  447, 418, 448, 418, 448, 1285, 447, 418, 448, 418, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 1285, 447, 418, 448, 418,
  448, 1285, 447, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 448, 418, 448, 418, 448, 418, 448, 418, 448, 418,
  448, 418, 448, 419, 447, 418, 448, 418, 448, 1285, 447, 419,
  447, 1285, 447, 418, 448, 418, 447, 419, 447, 419, 447, 419,
  447, 419, 447, 419, 447, 419, 447, 419, 447, 419, 447, 419,
  447, 419, 447, 419, 447, 419, 447, 419, 447, 419, 447, 419,
  447, 1285, 447, 1286, 446, 419, 447, 419, 447, 419, 447, 419,
  447, 419, 447, 419, 447, 419, 447, 420, 446, 419, 446, 420,
  446, 1286, 446, 1286, 446, 420, 446, 420, 446, 419, 446, 420,
  446, 420, 446, 420, 446, 420, 446, 420, 446, 420, 446, 420,
  446, 420, 446, 420, 446, 420, 446, 420, 446, 420, 446, 420,
  446, 420, 446, 1287, 445, 420, 446, 420, 446, 420, 446, 420,
  446, 421, 445, 1287, 445, 1287, 445, 421, 445, 421, 445, 421,
  445, 421, 445, 421, 445, 421, 445, 421, 445, 1288, 444, 421,
  445, 421, 445, 421, 445, 422, 444, 421, 445, 422, 444, 421,
  445, 422, 444, 422, 444, 1288, 444, 1288, 444, 422, 444, 422,
  444, 422, 444, 422, 444, 1289, 443,
};

const uint32_t irExtraRaw035[] = {
  484, 388, 457, 415, 458, 389, 484, 387, 458, 389, 484, 25430,
  3545, 1717, 430, 1314, 431, 415, 457, 415, 457, 415, 486, 1258,
  487, 360, 484, 387, 458, 414, 458, 414, 431, 1313, 432, 414,
  484, 1261, 484, 1261, 484, 389, 483, 1262, 482, 1264, 481, 1265,
  480, 1292, 453, 1292, 453, 420, 452, 393, 452, 1293, 452, 420,
  452, 420, 452, 420, 425, 420, 452, 420, 452, 420, 425, 421,
  451, 421, 451, 421, 451, 394, 451, 1295, 449, 422, 451, 1296,
  449, 423, 450, 423, 422, 424, 449, 1296, 449, 1297, 448, 424,
  448, 424, 449, 395, 450, 423, 449, 423, 450, 423, 422, 423,
  450, 423, 449, 422, 423, 422, 451, 422, 450, 422, 451, 395,
  450, 422, 450, 422, 450, 422, 423, 1323, 422, 1323, 423, 1323,
  423, 422, 451, 1296, 449, 423, 450, 1296, 449, 1296, 449, 34986,
  3536, 1727, 451, 1294, 451, 421, 451, 394, 451, 421, 452, 1294,
  451, 421, 451, 394, 451, 421, 452, 421, 451, 1294, 451, 421,
  424, 1321, 424, 1322, 423, 421, 452, 1294, 451, 1294, 451, 1294,
  451, 1294, 451, 1294, 451, 421, 451, 421, 451, 1294, 451, 394,
  451, 421, 451, 421, 451, 421, 424, 421, 451, 421, 451, 421,
  451, 394, 451, 421, 451, 421, 451, 394, 451, 1294, 451, 422,
  450, 422, 450, 422, 423, 422, 450, 1295, 450, 422, 450, 422,
  450, 395, 450, 422, 450, 422, 450, 422, 423, 422, 450, 422,
  451, 422, 450, 395, 450, 422, 450, 422, 450, 422, 423, 1323,
  422, 423, 450, 422, 450, 423, 422, 423, 449, 423, 449, 1296,
  449, 422, 450, 396, 449, 1296, 449, 1296, 449, 424, 448, 35010,
  3511, 1726, 451, 1294, 451, 421, 451, 421, 425, 420, 452, 1293,
  452, 421, 452, 420, 452, 393, 452, 420, 452, 1293, 452, 421,
  452, 1293, 451, 1294, 451, 394, 452, 1294, 451, 1294, 451, 1294,
  451, 1294, 451, 1294, 452, 421, 451, 421, 452, 1294, 451, 421,
  425, 421, 452, 421, 451, 420, 452, 393, 452, 420, 452, 420,
  453, 420, 425, 421, 452, 420, 452, 421, 452, 393, 452, 421,
  451, 421, 451, 393, 452, 421, 452, 420, 452, 421, 424, 1321,
  424, 421, 452, 421, 451, 1294, 451, 421, 451, 394, 452, 421,
  451, 421, 452, 421, 424, 421, 451, 1294, 451, 421, 452, 421,
  451, 1294, 451, 393, 452, 421, 452, 420, 452, 393, 452, 421,
  452, 420, 452, 421, 424, 421, 451, 421, 451, 421, 452, 393,
  452, 421, 451, 421, 451, 421, 424, 421, 452, 1294, 451, 421,
  452, 1294, 451, 421, 452, 393, 452, 421, 452, 421, 451, 421,
  424, 421, 452, 421, 451, 421, 424, 421, 452, 421, 451, 421,
  451, 394, 451, 421, 452, 421, 452, 421, 424, 421, 451, 422,
  451, 1294, 451, 1295, 451, 421, 452, 394, 451, 422, 451, 421,
  451, 421, 424, 421, 452, 421, 451, 421, 424, 421, 451, 422,
  451, 1294, 451, 1294, 451, 421, 452, 394, 451, 421, 451, 421,
  451, 421, 424, 421, 452, 421, 451, 421, 451, 394, 451, 421,
  451, 421, 451, 421, 424, 421, 451, 421, 451, 421, 424, 421,
  451, 421, 451, 1294, 451, 421, 451, 394, 451, 421, 451, 421,
  451, 421, 424, 1322, 423, 1322, 423, 422, 451, 421, 452, 421,
  451, 394, 451, 421, 451, 421, 452, 421, 424, 1322, 423, 422,
  451, 421, 451, 421, 451, 394, 451, 421, 451, 421, 451, 394,
  451, 421, 451, 421, 451, 1294, 451, 1294, 451, 421, 424, 421,
  451, 421, 452, 421, 451, 1294, 451,
};

const uint32_t irExtraRaw036[] = {
  4402, 4442, 527, 1629, 529, 549, 529, 1628, 530, 550, 529, 548,
  531, 549, 530, 550, 529, 1630, 528, 549, 530, 549, 529, 549,
  530, 1630, 527, 1629, 529, 1630, 528, 548, 530, 550, 529, 547,
  531, 1628, 530, 1629, 529, 1628, 530, 1628, 529, 1628, 530, 1628,
  530, 549, 530, 1628, 530, 1628, 530, 1627, 531, 1628, 530, 1627,
  531, 1631, 527, 1629, 529, 1628, 530, 1627, 531, 1628, 530, 1628,
  530, 1629, 529, 1627, 531, 1627, 531, 1628, 529, 1627, 531, 1627,
  531, 1629, 529, 1627, 530, 549, 529, 549, 530, 549, 530, 1628,
  529, 1627, 530, 5234, 4401, 4440, 530, 550, 528, 1628, 529, 549,
  530, 1628, 529, 1629, 528, 1626, 531, 1628, 529, 550, 529, 1628,
  530, 1627, 531, 1629, 529, 549, 529, 548, 530, 549, 530, 1628,
  529, 1628, 530, 1627, 530, 547, 532, 547, 532, 547, 531, 548,
  531, 548, 530, 548, 531, 1626, 531, 549, 530, 547, 531, 547,
  531, 548, 530, 548, 530, 549, 530, 548, 531, 546, 532, 578,
  500, 547, 532, 548, 531, 548, 531, 548, 530, 548, 531, 548,
  530, 548, 531, 547, 531, 547, 532, 547, 531, 1627, 531, 1627,
  530, 1626, 532, 547, 531, 547, 532,
};

const uint32_t irExtraRaw043[] = {
  8983, 4539, 485, 1798, 486, 1802, 483, 709, 485, 707, 487, 706,
  487, 709, 486, 1800, 484, 1799, 485, 1801, 483, 1800, 484, 1800,
  485, 712, 482, 710, 484, 708, 486, 1802, 483, 709, 485, 711,
  482, 1801, 483, 1799, 485, 710, 484, 710, 483, 1800, 484, 1799,
  485, 1799, 486, 1800, 485, 708, 485, 1826, 458, 710, 482, 711,
  483, 1799, 483, 707, 487, 709, 485, 710, 484, 736, 457, 710,
  484, 709, 485, 708, 485, 1799, 485, 708, 484, 709, 484, 708,
  486, 710, 484, 709, 485, 707, 487, 712, 482, 708, 484, 709,
  485, 709, 484, 709, 485, 709, 485, 709, 485, 710, 484, 711,
  482, 1801, 483, 707, 485, 711, 482, 709, 485, 710, 483, 710,
  483, 710, 484, 709, 485, 707, 485, 709, 485, 711, 482, 709,
  485, 709, 485, 710, 484, 708, 486, 708, 484, 709, 485, 709,
  485, 710, 483, 736, 458, 709, 485, 709, 485, 709, 483, 710,
  485, 1798, 485, 711, 483, 709, 484, 710, 484, 708, 486, 736,
  458, 709, 485, 708, 484, 709, 485, 708, 485, 706, 487, 1800,
  484, 707, 486, 1801, 482, 709, 485, 709, 485, 711, 483, 709,
  485, 735, 458, 735, 458, 1800, 484, 709, 484, 1801, 482, 1799,
  484, 1798, 485, 1799, 485, 708, 486,
};

const uint32_t irExtraRaw044[] = {
  8983, 4538, 485, 1800, 484, 1801, 484, 709, 485, 708, 484, 736,
  458, 708, 486, 1801, 485, 1800, 484, 1799, 485, 1801, 483, 1800,
  484, 710, 484, 709, 485, 709, 484, 1802, 482, 710, 484, 735,
  458, 1798, 485, 1800, 484, 710, 507, 685, 509, 1775, 508, 1777,
  506, 1776, 508, 686, 508, 1775, 508, 1777, 507, 687, 507, 685,
  509, 1777, 507, 684, 510, 684, 510, 684, 510, 686, 508, 684,
  508, 685, 509, 685, 508, 1776, 508, 687, 507, 685, 509, 688,
  506, 685, 508, 685, 509, 685, 507, 712, 482, 686, 508, 686,
  508, 686, 507, 684, 510, 686, 507, 683, 509, 685, 509, 711,
  482, 1775, 508, 686, 508, 687, 507, 686, 484, 708, 486, 709,
  485, 708, 484, 709, 485, 708, 486, 709, 485, 708, 486, 708,
  486, 709, 484, 709, 483, 708, 486, 708, 486, 710, 484, 710,
  484, 711, 483, 736, 458, 709, 483, 710, 484, 711, 483, 710,
  484, 710, 484, 709, 485, 709, 509, 682, 510, 683, 511, 684,
  510, 684, 510, 710, 483, 684, 509, 710, 483, 683, 509, 1775,
  508, 685, 509, 1774, 509, 684, 509, 684, 509, 684, 485, 708,
  485, 707, 485, 1799, 485, 1799, 484, 708, 485, 1798, 485, 1800,
  483, 708, 486, 1798, 485, 708, 485,
};

const uint32_t irExtraRaw045[] = {
  3094, 3056, 3095, 4432, 577, 1651, 570, 535, 575, 1652, 569, 536,
  574, 530, 570, 1657, 575, 1652, 569, 536, 574, 1652, 569, 536,
  574, 1652, 569, 1657, 575, 530, 570, 535, 575, 1651, 570, 535,
  575, 1650, 571, 1655, 576, 1650, 571, 534, 576, 529, 571, 534,
  576, 528, 572, 533, 577, 527, 573, 532, 568, 536, 574, 530,
  570, 534, 576, 528, 572, 532, 578, 526, 574, 531, 569, 1655,
  577, 529, 571, 533, 577, 528, 572, 533, 577, 527, 573, 531,
  569, 1656, 576, 529, 571, 1655, 577, 528, 572, 532, 578, 526,
  574, 531, 569, 536, 574, 529, 571, 534, 576, 528, 572, 532,
  568, 536, 574, 530, 570, 534, 576, 528, 572, 532, 578, 526,
  574, 1651, 570, 534, 576, 528, 572, 533, 577, 527, 573, 532,
  568, 536, 574, 530, 570, 534, 576, 528, 572, 532, 568, 536,
  574, 530, 570, 534, 576, 528, 572, 532, 568, 536, 574, 530,
  570, 534, 576, 528, 572, 532, 568, 536, 574, 530, 570, 534,
  576, 528, 572, 532, 568, 536, 574, 530, 570, 534, 576, 528,
  572, 532, 568, 536, 574, 530, 570, 534, 576, 528, 572, 532,
  568, 536, 574, 529, 571, 534, 576, 527, 573, 531, 569, 536,
  574, 529, 571, 1653, 578, 526, 574, 1652, 569, 536, 574, 529,
  571, 1655, 576, 1649, 572, 1653, 579, 1647, 574, 531, 569, 1657,
  574,
};

const uint32_t irExtraRaw046[] = {
  3086, 3063, 3089, 4438, 571, 1657, 575, 529, 571, 1656, 576, 529,
  571, 534, 576, 1650, 571, 1655, 577, 527, 573, 1654, 578, 526,
  574, 1653, 569, 1657, 575, 530, 570, 536, 574, 530, 570, 534,
  576, 1648, 573, 1653, 569, 1658, 574, 530, 570, 535, 575, 530,
  570, 534, 576, 527, 573, 531, 569, 535, 575, 529, 571, 533,
  577, 526, 574, 530, 570, 534, 576, 528, 572, 532, 568, 536,
  574, 529, 571, 533, 578, 526, 574, 530, 570, 534, 576, 528,
  572, 1652, 569, 534, 577, 1649, 573, 532, 579, 526, 574, 530,
  570, 534, 576, 527, 573, 531, 569, 535, 575, 528, 572, 532,
  568, 536, 574, 529, 571, 533, 577, 526, 574, 530, 570, 534,
  577, 1647, 574, 530, 570, 535, 575, 529, 571, 532, 568, 536,
  575, 529, 571, 533, 577, 526, 574, 530, 570, 533, 577, 527,
  573, 530, 570, 534, 576, 527, 573, 531, 569, 535, 575, 528,
  572, 532, 568, 535, 575, 529, 571, 532, 568, 536, 574, 529,
  571, 533, 577, 526, 574, 530, 570, 533, 577, 527, 573, 530,
  570, 534, 576, 527, 573, 531, 569, 534, 576, 527, 573, 531,
  569, 535, 575, 528, 572, 531, 569, 535, 575, 528, 572, 532,
  568, 535, 576, 1648, 573, 531, 569, 1655, 577, 1648, 573, 1651,
  570, 1654, 578, 1647, 574, 1651, 570, 533, 577, 1648, 573, 1651,
  571,
};

const uint32_t irExtraRaw047[] = {
  3110, 1566, 525, 1084, 497, 356, 471, 1085, 497, 356, 472, 356,
  471, 1085, 497, 356, 470, 357, 474, 1084, 498, 356, 471, 356,
  471, 356, 471, 356, 471, 356, 496, 357, 470, 357, 473, 1061,
  520, 357, 470, 1063, 519, 357, 470, 1064, 518, 1064, 518, 357,
  470, 357, 471,
};

const uint32_t irExtraRaw051[] = {
  4391, 4402, 552, 1599, 553, 524, 552, 1600, 552, 1599, 553, 525,
  551, 524, 552, 1600, 552, 524, 552, 526, 550, 1600, 552, 524,
  552, 524, 552, 1601, 551, 1602, 550, 522, 554, 1603, 549, 524,
  552, 1600, 552, 1600, 552, 1599, 553, 1601, 551, 523, 553, 1600,
  552, 1601, 551, 1600, 552, 524, 552, 526, 550, 527, 549, 525,
  551, 1601, 551, 524, 552, 523, 553, 1600, 552, 1599, 553, 1601,
  551, 524, 552, 525, 551, 523, 553, 524, 552, 523, 553, 524,
  552, 523, 553, 524, 552, 1600, 552, 1603, 549, 1601, 551, 1600,
  552, 1600, 552, 5198, 4390, 4402, 552, 1599, 553, 524, 552, 1600,
  552, 1600, 552, 524, 552, 524, 552, 1601, 551, 525, 551, 523,
  553, 1600, 552, 525, 551, 524, 552, 1600, 552, 1600, 552, 526,
  550, 1601, 551, 525, 551, 1600, 552, 1601, 551, 1604, 548, 1601,
  551, 524, 552, 1602, 550, 1600, 552, 1600, 552, 523, 553, 524,
  552, 524, 552, 525, 551, 1599, 553, 523, 553, 524, 552, 1601,
  551, 1600, 552, 1600, 552, 525, 551, 524, 552, 523, 553, 523,
  553, 524, 552, 524, 552, 524, 552, 524, 552, 1600, 552, 1600,
  552, 1603, 549, 1599, 553, 1601, 551,
};

const uint32_t irExtraRaw052[] = {
  3405, 1710, 463, 388, 463, 389, 463, 388, 463, 387, 464, 387,
  465, 389, 462, 1225, 463, 387, 464, 387, 464, 388, 464, 387,
  465, 388, 463, 388, 464, 388, 463, 388, 463, 388, 464, 388,
  464, 389, 462, 1224, 464, 387, 464, 1224, 464, 388, 463, 388,
  464, 388, 463, 389, 462, 388, 464, 388, 463, 388, 464, 388,
  463, 389, 463, 387, 464, 1225, 463, 1226, 462, 1224, 464, 387,
  464, 387, 464, 388, 464, 386, 465, 1225, 463, 387, 464, 389,
  463, 1224, 464, 1224, 464, 388, 463, 388, 464, 387, 465, 1225,
  462, 1225, 463, 388, 463, 388, 464, 387, 465, 1226, 462, 388,
  463, 1223, 465, 387, 464, 387, 465, 1223, 465, 1224, 464, 388,
  463, 1224, 464, 389, 462, 1224, 464, 1224, 463, 1224, 464, 1225,
  462, 1225, 462, 387, 464, 387, 464, 388, 464, 1224, 464, 387,
  464, 388, 464, 388, 464, 388, 463, 388, 463, 389, 463, 387,
  464, 387, 465, 387, 465, 388, 463, 388, 463, 388, 463, 387,
  465, 1225, 463, 387, 464, 1223, 465, 1224, 464, 387, 464, 386,
  465, 388, 464, 387, 464, 387, 464, 387, 465, 386, 466, 387,
  464, 388, 464, 386, 466, 387, 464, 388, 464, 388, 463, 387,
  464, 387, 464, 387, 464, 387, 464, 1225, 463, 1224, 464, 1225,
  462, 388, 463, 387, 464, 388, 464, 386, 465, 388, 463, 387,
  465, 387, 464, 388, 464, 387, 465, 388, 463, 388, 463, 389,
  463, 388, 463, 388, 463, 388, 464, 388, 464, 387, 464, 387,
  464, 387, 465, 387, 465, 387, 465, 1224, 463, 1224, 464, 1225,
  463, 1224, 463, 1224, 464, 388, 463, 1224, 464, 393, 439,
};

const uint32_t irExtraRaw053[] = {
  3405, 1710, 463, 387, 464, 388, 464, 387, 464, 388, 464, 389,
  462, 386, 465, 1224, 464, 388, 463, 388, 463, 389, 463, 387,
  464, 388, 464, 387, 465, 387, 464, 389, 462, 389, 463, 388,
  464, 388, 463, 1226, 462, 388, 463, 1225, 463, 388, 463, 387,
  464, 389, 462, 389, 462, 388, 463, 387, 464, 387, 464, 389,
  463, 388, 463, 388, 464, 1226, 462, 1224, 464, 1225, 462, 387,
  464, 388, 464, 388, 463, 388, 463, 1226, 462, 387, 464, 1225,
  463, 388, 463, 1225, 463, 388, 463, 389, 463, 387, 464, 1226,
  462, 1224, 464, 388, 463, 388, 463, 387, 465, 1224, 464, 388,
  463, 1224, 463, 388, 464, 387, 464, 1224, 464, 1226, 461, 387,
  464, 1224, 464, 388, 463, 1225, 463, 1224, 464, 1224, 463, 1224,
  464, 1223, 464, 388, 464, 387, 464, 387, 464, 387, 464, 389,
  463, 389, 462, 388, 464, 388, 463, 388, 463, 387, 464, 387,
  465, 387, 464, 388, 463, 387, 464, 388, 463, 388, 464, 388,
  463, 1225, 463, 388, 463, 1225, 463, 1224, 463, 388, 463, 388,
  463, 388, 464, 388, 463, 387, 464, 388, 464, 389, 462, 389,
  463, 387, 464, 388, 464, 388, 464, 388, 463, 388, 464, 387,
  464, 387, 465, 388, 463, 387, 464, 1225, 463, 1225, 463, 1225,
  462, 387, 464, 389, 462, 388, 463, 387, 465, 389, 462, 388,
  463, 388, 464, 389, 463, 388, 463, 388, 464, 387, 464, 389,
  462, 389, 463, 387, 464, 388, 463, 388, 463, 388, 464, 389,
  462, 389, 463, 389, 462, 389, 463, 389, 462, 388, 463, 1224,
  464, 1225, 463, 1224, 464, 389, 462, 1224, 464, 394, 437,
};

const uint32_t irExtraRaw054[] = {
  272, 76189, 1130, 2004, 1129, 2008, 2141, 2008, 1127, 966, 1125, 967,
  2138, 992, 1094, 999, 2101, 1004, 1085,
};

const uint32_t irExtraRaw055[] = {
  5618, 5586, 563, 557, 564, 554, 567, 553, 568, 552, 569, 550,
  571, 548, 563, 1675, 568, 1674, 569, 549, 562, 556, 565, 1674,
  569, 1670, 563, 1679, 564, 1676, 567, 552, 569, 555, 566, 1669,
  564, 554, 567, 1672, 571, 1668, 565, 556, 565, 554, 567, 1672,
  571, 551, 570, 1665, 568, 1672, 571, 1668, 565, 1673, 570, 550,
  571, 547, 564, 1675, 568, 557, 564, 1671, 562, 555, 566, 1672,
  571, 576, 535, 557, 564, 1675, 568, 552, 569, 580, 541, 548,
  563, 555, 566, 553, 568, 551, 570, 1668, 565, 1675, 568, 1671,
  562, 1681, 562, 1673, 570, 550, 561, 1677, 566, 1701, 542, 551,
  570, 1668, 565, 555, 566, 1674, 569,
};

const uint32_t irExtraRaw056[] = {
  5624, 5582, 567, 553, 568, 550, 571, 550, 561, 557, 564, 584,
  537, 554, 567, 1672, 571, 1671, 562, 554, 567, 553, 568, 1696,
  537, 1676, 567, 1673, 570, 1668, 565, 554, 567, 556, 565, 1671,
  562, 557, 564, 1676, 567, 1671, 562, 584, 537, 555, 566, 1673,
  570, 552, 569, 1666, 567, 1671, 562, 1676, 567, 1671, 572, 548,
  563, 556, 565, 1672, 571, 554, 567, 547, 564, 556, 565, 1674,
  569, 549, 562, 558, 563, 1676, 567, 551, 570, 554, 568, 548,
  563, 557, 564, 555, 566, 554, 567, 1672, 571, 1667, 566, 1674,
  569, 1673, 570, 545, 566, 554, 567, 1671, 572, 1667, 566, 554,
  567, 1672, 561, 557, 564, 1677, 566,
};

const uint32_t irExtraRaw057[] = {
  3232, 1451, 581, 1008, 580, 1007, 581, 326, 494, 326, 494, 326,
  494, 1009, 579, 325, 495, 326, 494, 1034, 579, 1010, 578, 325,
  494, 1012, 576, 326, 494, 326, 494, 1013, 575, 1013, 576, 326,
  494, 1013, 575, 1013, 575, 326, 494, 326, 494, 1013, 575, 326,
  494, 326, 494, 326, 494, 1013, 575, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 1013,
  575, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 1013, 575, 1014, 574, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 1014,
  574, 1014, 574, 326, 494, 326, 494, 326, 494, 326, 494, 1014,
  574, 1014, 574, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 1015, 573, 326, 494, 1015, 573, 1015, 573, 1015, 573, 70108,
  3201, 1510, 574, 1014, 574, 1015, 574, 326, 494, 326, 494, 326,
  494, 1014, 574, 326, 494, 326, 494, 1014, 574, 1014, 574, 326,
  494, 1014, 574, 326, 494, 326, 494, 1014, 574, 1015, 573, 326,
  495, 1015, 573, 1015, 573, 326, 494, 326, 494, 1015, 573, 326,
  494, 326, 494, 1015, 573, 326, 494, 326, 494, 326, 494, 327,
  493, 326, 494, 326, 494, 326, 494, 325, 495, 326, 494, 325,
  495, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 1015, 573, 326,
  494, 326, 494, 1015, 573, 1015, 573, 326, 494, 326, 494, 326,
  494, 326, 494, 1015, 573, 326, 494, 1016, 572, 1016, 572, 1016,
  572, 1016, 572, 326, 494, 326, 494, 326, 494, 326, 494, 1016,
  572, 326, 494, 1016, 572, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 494, 326,
  494, 326, 494, 326, 494, 326, 494, 326, 494, 326, 495, 326,
  494, 327, 493, 326, 494, 1018, 570, 326, 494, 326, 494, 1018,
  570, 1017, 571, 326, 495, 326, 494, 326, 493, 326, 496,
};

const uint32_t irExtraRaw058[] = {
  3238, 9644, 597, 1462, 573, 469, 547, 469, 547, 469, 547, 1486,
  547, 469, 547, 469, 547, 470, 571, 445, 598, 445, 571, 446,
  570, 447, 569, 447, 570, 1465, 567, 1467, 567, 449, 568, 449,
  568, 449, 569, 447, 569, 1491, 544, 473, 569, 1491, 569, 447,
  570, 447, 570, 1465, 568, 448, 569, 1465, 569, 1465, 595,
};

const uint32_t irExtraRaw059[] = {
  3267, 9589, 679, 1380, 626, 416, 546, 470, 546, 469, 547, 1512,
  547, 469, 571, 445, 571, 445, 572, 1462, 569, 1490, 570, 447,
  544, 473, 566, 450, 567, 450, 568, 449, 594, 448, 568, 448,
  568, 448, 568, 448, 569, 448, 569, 448, 567, 1468, 566, 450,
  567, 1493, 568, 449, 567, 449, 568, 448, 568, 1466, 567,
};

const uint32_t irExtraRaw062[] = {
  9464, 4442, 637, 583, 601, 584, 601, 584, 601, 584, 600, 582,
  603, 580, 604, 580, 630, 555, 629, 1637, 627, 1665, 598, 1668,
  571, 1696, 569, 1696, 594, 1672, 594, 1672, 592, 1674, 593, 1673,
  593, 591, 594, 1673, 593, 1672, 593, 591, 591, 593, 569, 616,
  568, 616, 593, 593, 591, 1674, 593, 592, 593, 593, 592, 1675,
  592, 1675, 592, 1700, 568, 1700, 568, 39559, 9409, 2272, 567, 96244,
  9461, 2246, 594,
};

const uint32_t irExtraRaw063[] = {
  3302, 1644, 408, 419, 410, 416, 413, 1233, 405, 423, 406, 1239,
  409, 419, 410, 417, 412, 415, 414, 1232, 406, 1241, 407, 419,
  410, 417, 412, 416, 413, 1233, 405, 1241, 407, 394, 435, 419,
  410, 417, 412, 416, 413, 387, 432, 422, 407, 420, 409, 418,
  411, 416, 413, 415, 404, 423, 406, 421, 408, 420, 409, 1237,
  411, 416, 413, 413, 406, 422, 407, 420, 409, 418, 411, 417,
  412, 415, 414, 1232, 406, 421, 408, 420, 409, 418, 411, 416,
  413, 1232, 406, 1240, 408, 1238, 410, 1236, 412, 1234, 414, 1232,
  406, 1240, 408, 1238, 410, 417, 412, 416, 413, 1233, 405, 422,
  407, 421, 408, 419, 410, 417, 412, 414, 404, 397, 432, 421,
  408, 420, 409, 1237, 411, 1234, 414, 387, 432, 422, 407, 1239,
  409, 418, 411, 416, 413, 414, 405, 423, 406, 1240, 408, 1237,
  411, 417, 412, 415, 414, 414, 405, 422, 407, 421, 408, 418,
  411, 416, 413, 414, 405, 423, 406, 421, 408, 419, 410, 417,
  412, 416, 413, 414, 405, 422, 407, 421, 408, 419, 410, 416,
  413, 414, 405, 423, 406, 421, 408, 419, 410, 417, 412, 416,
  413, 414, 404, 423, 406, 421, 408, 419, 410, 417, 412, 414,
  405, 423, 406, 421, 408, 419, 410, 417, 412, 416, 413, 414,
  404, 423, 406, 421, 408, 419, 410, 417, 412, 416, 413, 413,
  406, 422, 407, 420, 409, 418, 411, 416, 413, 1233, 405, 422,
  407, 421, 408, 1237, 411, 1235, 413, 1206, 432, 1240, 408, 420,
  409, 418, 411, 1235, 413, 415, 414,
};

const uint32_t irExtraRaw064[] = {
  3302, 1618, 435, 393, 436, 391, 438, 1207, 431, 396, 433, 1213,
  435, 392, 437, 391, 438, 388, 441, 1206, 432, 1214, 434, 392,
  437, 389, 440, 388, 431, 1215, 433, 1213, 435, 392, 437, 390,
  439, 388, 431, 396, 433, 395, 434, 392, 437, 390, 439, 388,
  431, 396, 433, 394, 435, 392, 437, 390, 439, 388, 441, 1205,
  433, 395, 434, 392, 437, 389, 440, 388, 431, 396, 433, 394,
  435, 392, 437, 1209, 439, 388, 431, 397, 432, 394, 435, 393,
  436, 1210, 438, 387, 432, 396, 433, 394, 435, 392, 437, 390,
  439, 388, 431, 1215, 433, 394, 435, 1211, 437, 1208, 440, 1205,
  433, 1213, 435, 1211, 437, 1209, 439,
};

const uint32_t irExtraRaw065[] = {
  3306, 1624, 406, 411, 413, 404, 410, 1224, 414, 403, 411, 1223,
  405, 412, 412, 405, 409, 408, 406, 1228, 410, 1224, 414, 402,
  412, 406, 408, 409, 405, 1229, 409, 1224, 414, 403, 411, 407,
  407, 410, 414, 402, 412, 406, 408, 409, 405, 412, 412, 404,
  410, 408, 406, 411, 413, 403, 411, 406, 408, 409, 405, 1230,
  408, 408, 406, 411, 413, 404, 410, 407, 407, 410, 414, 403,
  411, 406, 408, 1226, 412, 405, 409, 408, 406, 411, 413, 404,
  410, 1224, 414, 403, 411, 406, 408, 409, 405, 412, 412, 405,
  409, 408, 406, 1228, 410, 407, 407, 1227, 411, 1222, 406, 1229,
  409, 1198, 440, 1220, 408, 1227, 411,
};

const uint32_t irExtraRaw066[] = {
  8997, 4543, 627, 1660, 627, 1659, 627, 582, 627, 1660, 627, 1659,
  628, 1659, 628, 1684, 629, 555, 628, 1659, 628, 554, 629, 581,
  628, 1659, 628, 555, 628, 582, 627, 555, 628, 554, 628, 581,
  628, 554, 628, 554, 629, 581, 628, 554, 628, 1659, 628, 581,
  628, 554, 629, 554, 628, 581, 628, 554, 629, 554, 629, 1659,
  628, 581, 628, 1658, 629, 554, 629, 581, 628, 1659, 628, 554,
  629, 20037, 628, 555, 628, 581, 628, 554, 629, 554, 629, 1659,
  628, 581, 628, 555, 628, 554, 629, 580, 629, 554, 629, 556,
  627, 580, 629, 553, 630, 556, 626, 1690, 623, 554, 629, 554,
  629, 582, 627, 555, 628, 554, 628, 581, 628, 556, 627, 556,
  627, 581, 628, 555, 628, 555, 628, 580, 629, 554, 629, 1660,
  627, 1659, 628, 580, 629, 555, 628, 40020, 8996, 4518, 626, 1686,
  627, 1659, 628, 556, 627, 1658, 629, 1687, 626, 1660, 627, 1661,
  626, 555, 627, 1685, 628, 555, 628, 556, 627, 1686, 627, 555,
  627, 555, 627, 583, 652, 529, 654, 530, 653, 555, 654, 530,
  653, 530, 653, 555, 654, 1633, 654, 529, 654, 555, 628, 556,
  653, 529, 654, 555, 628, 556, 653, 1633, 654, 1633, 654, 1660,
  653, 528, 655, 530, 653, 1634, 652, 555, 654, 19985, 653, 556,
  653, 529, 653, 529, 653, 555, 654, 529, 653, 529, 654, 556,
  653, 530, 653, 529, 653, 557, 652, 529, 654, 529, 654, 556,
  653, 530, 652, 530, 653, 556, 653, 529, 654, 530, 653, 557,
  652, 528, 654, 530, 653, 555, 654, 1634, 653, 1634, 653, 529,
  654, 556, 653, 529, 654, 530, 653, 556, 653, 1634, 653, 529,
  654, 1661, 652,
};

const uint32_t irExtraRaw067[] = {
  8995, 4545, 627, 1658, 629, 1660, 627, 581, 628, 554, 629, 1660,
  627, 1659, 628, 1685, 628, 555, 628, 1659, 628, 581, 628, 554,
  629, 1660, 627, 554, 629, 581, 628, 555, 628, 554, 629, 581,
  628, 555, 628, 555, 628, 581, 628, 555, 628, 1660, 627, 581,
  628, 554, 629, 555, 627, 581, 628, 554, 628, 556, 627, 1686,
  627, 555, 627, 1660, 627, 557, 626, 581, 628, 1658, 629, 555,
  628, 20037, 627, 555, 628, 581, 628, 555, 628, 556, 627, 1687,
  626, 556, 627, 555, 628, 582, 627, 556, 627, 556, 626, 582,
  627, 555, 628, 557, 626, 581, 628, 1659, 628, 555, 628, 555,
  628, 581, 628, 554, 628, 556, 627, 584, 625, 556, 626, 556,
  627, 582, 627, 557, 625, 555, 627, 582, 627, 555, 627, 1661,
  625, 1686, 627, 556, 653, 1632, 655, 39992, 8996, 4518, 650, 1660,
  653, 1635, 627, 556, 627, 583, 625, 1660, 628, 1661, 626, 1660,
  627, 581, 628, 1658, 629, 557, 625, 557, 626, 1686, 627, 556,
  627, 555, 628, 582, 627, 556, 627, 556, 627, 582, 627, 555,
  628, 557, 626, 582, 627, 1661, 626, 557, 626, 583, 626, 556,
  627, 556, 627, 581, 628, 556, 627, 1661, 626, 1660, 627, 1687,
  626, 555, 628, 556, 627, 1688, 625, 557, 626, 20012, 626, 581,
  628, 556, 627, 556, 626, 583, 626, 556, 626, 556, 627, 583,
  626, 556, 627, 557, 626, 582, 627, 555, 628, 556, 627, 582,
  627, 556, 627, 556, 627, 583, 626, 556, 626, 556, 627, 584,
  625, 556, 627, 556, 627, 581, 628, 1661, 626, 1661, 626, 582,
  627, 556, 627, 555, 628, 583, 626, 557, 625, 1660, 627, 557,
  626, 583, 626,
};

const uint32_t irExtraRaw068[] = {
  9081, 4414, 685, 1618, 682, 509, 680, 536, 654, 537, 653, 537,
  654, 537, 653, 1675, 627, 564, 626, 1676, 653, 1649, 653, 1649,
  653, 537, 653, 538, 653, 537, 653, 537, 654, 537, 653, 537,
  654, 537, 653, 537, 653, 538, 653, 538, 653, 537, 653, 538,
  653, 538, 653, 537, 653, 537, 654, 538, 652, 538, 653, 1649,
  653, 538, 652, 1676, 626, 538, 652, 538, 653, 1676, 653, 538,
  652,
};

const uint32_t irExtraRaw069[] = {
  9018, 4484, 651, 553, 653, 555, 650, 1657, 650, 554, 652, 554,
  652, 1656, 652, 1656, 651, 553, 653, 1656, 651, 1656, 652, 1657,
  651, 554, 652, 553, 653, 554, 652, 553, 652, 557, 650, 554,
  652, 554, 652, 554, 652, 554, 652, 554, 652, 1655, 652, 555,
  651, 555, 652, 555, 651, 553, 652, 556, 650, 554, 652, 1656,
  652, 553, 653, 1655, 653, 552, 654, 555, 651, 1656, 652, 555,
  651, 19990, 652, 1657, 650, 1658, 650, 553, 652, 1655, 652, 554,
  652, 554, 652, 554, 652, 554, 652, 554, 652, 555, 651, 554,
  652, 553, 654, 556, 650, 553, 653, 1655, 652, 554, 652, 554,
  652, 554, 652, 555, 651, 556, 651, 554, 651, 553, 653, 555,
  651, 554, 652, 554, 651, 554, 652, 554, 652, 556, 651, 1655,
  652, 553, 652, 554, 651, 1656, 652,
};

const uint32_t irExtraRaw070[] = {
  9018, 4485, 650, 554, 652, 554, 652, 1657, 651, 1656, 652, 554,
  652, 1655, 652, 1655, 652, 555, 651, 1655, 653, 1655, 652, 1654,
  653, 556, 650, 555, 651, 555, 651, 555, 651, 554, 652, 554,
  652, 554, 652, 553, 653, 554, 652, 554, 652, 1656, 652, 1656,
  652, 555, 651, 554, 652, 553, 653, 553, 653, 553, 653, 1656,
  651, 554, 652, 1656, 652, 554, 652, 552, 653, 1656, 651, 554,
  652, 19989, 651, 1653, 654, 1659, 649, 554, 653, 1654, 653, 554,
  651, 554, 652, 554, 652, 555, 651, 553, 653, 555, 651, 554,
  652, 553, 653, 554, 652, 555, 651, 1655, 652, 555, 651, 554,
  651, 552, 654, 554, 652, 554, 652, 552, 654, 554, 652, 553,
  653, 554, 652, 553, 652, 554, 652, 553, 653, 552, 652, 1657,
  651, 554, 652, 554, 652, 554, 678,
};

const uint32_t irExtraRaw071[] = {
  9075, 4405, 725, 1580, 728, 478, 728, 480, 726, 481, 725, 478,
  728, 479, 728, 479, 727, 478, 728, 478, 727, 1583, 724, 479,
  727, 1581, 727, 480, 727, 480, 726, 478, 727, 480, 726, 479,
  727, 481, 725, 479, 728, 478, 728, 478, 728, 478, 727, 479,
  727, 480, 726, 477, 729, 478, 728, 478, 728, 480, 726, 1581,
  726, 480, 726, 1580, 727, 479, 727, 478, 727, 1582, 725, 480,
  726, 19911, 650, 1657, 650, 1657, 650, 556, 650, 558, 647, 556,
  650, 556, 649, 557, 649, 555, 650, 556, 649, 555, 651, 556,
  650, 556, 650, 558, 649, 555, 651, 1658, 650, 555, 650, 555,
  650, 556, 650, 555, 651, 556, 650, 557, 649, 556, 650, 557,
  649, 553, 653, 555, 651, 554, 651, 583, 649, 555, 651, 1657,
  650, 555, 651, 556, 650, 1656, 651,
};

const uint32_t irExtraRaw072[] = {
  8995, 4487, 650, 1660, 648, 554, 652, 556, 650, 1658, 650, 554,
  652, 555, 650, 555, 651, 554, 652, 555, 651, 1657, 651, 555,
  651, 1658, 649, 557, 648, 555, 651, 556, 649, 555, 652, 556,
  650, 555, 651, 556, 650, 556, 650, 559, 647, 558, 648, 1658,
  649, 555, 651, 556, 649, 556, 650, 556, 650, 558, 647, 1659,
  648, 555, 650, 1661, 646, 556, 649, 559, 647, 1658, 649, 556,
  650, 19990, 651, 1658, 649, 1658, 649, 555, 651, 556, 650, 556,
  649, 557, 649, 556, 650, 555, 651, 556, 650, 556, 650, 556,
  651, 557, 649, 556, 650, 555, 651, 1658, 649, 557, 649, 555,
  651, 558, 648, 556, 651, 556, 650, 555, 651, 556, 650, 555,
  650, 555, 651, 555, 651, 557, 649, 555, 650, 556, 650, 1657,
  650, 555, 651, 555, 651, 554, 652,
};

const uint32_t irExtraRaw073[] = {
  8523, 4238, 543, 1597, 536, 1578, 544, 1595, 538, 571, 511, 1576,
  546, 563, 519, 1594, 518, 1596, 537, 4245, 515, 1598, 545, 1594,
  539, 544, 517, 1596, 547, 563, 488, 568, 514, 570, 512, 571,
  593, 19276, 8526, 4262, 540, 1600, 512, 1601, 542, 1598, 535, 548,
  513, 1600, 543, 567, 514, 1598, 514, 1601, 542, 4214, 546, 1594,
  539, 1575, 537, 572, 520, 1619, 514, 543, 518, 565, 516, 567,
  515, 542, 622, 19299, 8524, 4239, 542, 1598, 545, 1595, 517, 1598,
  545, 564, 518, 1596, 516, 567, 515, 1625, 518, 1570, 542, 4239,
  542, 1572, 540, 1600, 543, 565, 485, 1602, 541, 568, 513, 544,
  517, 566, 516, 568, 596,
};

const uint32_t irExtraRaw075[] = {
  3027, 3093, 3029, 4469, 541, 1675, 542, 557, 542, 1675, 542, 557,
  543, 557, 542, 1675, 542, 1675, 542, 557, 542, 1674, 543, 557,
  542, 556, 543, 556, 543, 1673, 544, 557, 542, 1674, 542, 557,
  542, 556, 543, 557, 542, 557, 542, 558, 541, 557, 543, 557,
  542, 557, 542, 557, 543, 555, 544, 557, 542, 557, 542, 557,
  542, 556, 543, 558, 541, 557, 542, 556, 544, 558, 541, 1674,
  542, 558, 541, 557, 542, 556, 543, 557, 542, 557, 542, 555,
  544, 557, 543, 557, 542, 1674, 542, 556, 543, 557, 542, 557,
  542, 557, 542, 558, 541, 557, 542, 557, 542, 556, 543, 556,
  543, 556, 543, 556, 543, 556, 543, 557, 542, 1674, 542, 557,
  542, 556, 543, 558, 541, 557, 542, 557, 542, 559, 541, 559,
  540, 557, 542, 556, 543, 558, 542, 557, 542, 556, 543, 557,
  542, 558, 541, 558, 541, 556, 543, 558, 541, 557, 542, 557,
  542, 557, 542, 556, 543, 557, 542, 557, 542, 558, 541, 557,
  542, 557, 542, 558, 541, 557, 542, 557, 542, 558, 541, 558,
  541, 557, 542, 556, 543, 557, 542, 557, 542, 556, 543, 558,
  541, 558, 541, 557, 542, 559, 540, 556, 543, 557, 542, 557,
  542, 556, 543, 1676, 540, 558, 541, 1673, 543, 557, 542, 556,
  543, 557, 542, 1675, 541, 557, 542, 1675, 541, 558, 541, 1674,
  542,
};

const uint32_t irExtraRaw076[] = {
  3026, 3097, 3026, 4471, 542, 1676, 541, 557, 542, 1675, 542, 559,
  540, 556, 543, 1676, 541, 1675, 542, 558, 541, 1675, 542, 556,
  543, 557, 542, 558, 541, 557, 542, 557, 542, 557, 542, 558,
  542, 557, 542, 557, 542, 557, 542, 559, 540, 557, 542, 557,
  542, 557, 542, 557, 542, 558, 541, 557, 542, 558, 541, 558,
  541, 557, 542, 557, 542, 557, 542, 557, 542, 556, 543, 557,
  542, 557, 542, 557, 542, 556, 543, 557, 542, 558, 541, 557,
  542, 557, 542, 557, 542, 1674, 542, 557, 542, 556, 543, 557,
  542, 557, 542, 558, 542, 557, 542, 557, 542, 557, 542, 556,
  543, 557, 542, 557, 542, 557, 542, 557, 542, 1674, 542, 557,
  542, 556, 543, 557, 542, 556, 543, 557, 542, 556, 543, 557,
  542, 557, 542, 558, 541, 557, 542, 556, 543, 557, 542, 557,
  542, 556, 543, 557, 542, 557, 542, 557, 542, 559, 540, 555,
  544, 557, 542, 557, 542, 558, 541, 556, 543, 558, 541, 557,
  542, 557, 542, 557, 542, 558, 541, 557, 542, 558, 541, 557,
  542, 557, 542, 556, 543, 556, 543, 558, 541, 556, 543, 556,
  543, 558, 541, 557, 543, 557, 542, 557, 542, 558, 541, 557,
  542, 556, 543, 1673, 543, 557, 542, 1674, 542, 1675, 541, 1674,
  542, 557, 542, 557, 542, 1673, 543, 556, 543, 1675, 541, 1674,
  542,
};

const uint32_t irExtraRaw078[] = {
  8714, 4338, 579, 538, 551, 540, 549, 542, 557, 1613, 555, 1615,
  553, 538, 551, 540, 549, 1619, 549, 1620, 558, 1612, 556, 1614,
  554, 1617, 551, 540, 559, 1611, 557, 1612, 556, 531, 558, 1613,
  555, 536, 553, 538, 551, 1620, 558, 1612, 556, 535, 554, 537,
  552, 535, 554, 537, 552, 1618, 550, 1620, 558, 533, 556, 536,
  553, 1617, 551, 1617, 551, 1608, 549,
};

const uint32_t irExtraRaw079[] = {
  8990, 4555, 587, 1668, 588, 1672, 588, 551, 586, 553, 588, 555,
  589, 559, 588, 564, 587, 1678, 589, 542, 588, 1672, 587, 1676,
  587, 553, 587, 555, 588, 561, 586, 564, 587, 553, 587, 543,
  587, 545, 588, 1675, 588, 552, 589, 557, 587, 559, 589, 564,
  587, 552, 588, 544, 586, 1672, 588, 549, 588, 555, 586, 557,
  587, 559, 589, 563, 588, 553, 587, 544, 586, 545, 589, 549,
  588, 553, 588, 556, 588, 561, 586, 564, 587, 554, 587, 543,
  587, 546, 588, 550, 587, 553, 588, 557, 587, 560, 588, 564,
  587, 536, 587, 7995, 587, 543, 587, 546, 587, 550, 587, 554,
  613, 530, 614, 534, 613, 538, 613, 1655, 612, 517, 613, 521,
  612, 524, 613, 528, 613, 532, 612, 535, 612, 539, 612, 529,
  612, 517, 613, 520, 614, 524, 613, 528, 612, 532, 612, 535,
  612, 537, 613, 527, 613, 517, 613, 520, 613, 524, 613, 528,
  612, 532, 612, 535, 613, 538, 613, 528, 613, 517, 613, 521,
  613, 524, 613, 527, 614, 532, 612, 534, 613, 537, 614, 527,
  613, 517, 613, 520, 613, 524, 613, 527, 613, 531, 613, 533,
  614, 538, 612, 527, 613, 517, 613, 520, 614, 524, 613, 527,
  613, 530, 614, 534, 614, 538, 613, 526, 614, 515, 614, 1647,
  612, 1652, 611, 528, 612, 532, 612, 532, 615, 537, 614, 1635,
  587, 7996, 613, 516, 614, 521, 613, 523, 614, 527, 613, 530,
  614, 534, 613, 538, 613, 527, 613, 1643, 614, 520, 613, 524,
  613, 528, 612, 531, 612, 534, 613, 537, 613, 527, 614, 518,
  612, 520, 613, 523, 614, 527, 613, 531, 613, 533, 614, 538,
  613, 526, 614, 516, 614, 519, 614, 523, 614, 527, 613, 530,
  614, 533, 614, 537, 614, 526, 614, 517, 613, 519, 614, 524,
  613, 1653, 613, 530, 614, 534, 613, 537, 614, 526, 614, 516,
  614, 520, 613, 523, 614, 526, 614, 530, 614, 534, 613, 537,
  614, 527, 613, 1642, 614, 520, 613, 523, 614, 1652, 615, 529,
  614, 534, 613, 537, 613, 510, 612,
};

const uint32_t irExtraRaw080[] = {
  8987, 4554, 587, 1668, 587, 1672, 587, 548, 588, 552, 588, 556,
  588, 559, 588, 563, 588, 1677, 589, 543, 586, 1669, 589, 1675,
  587, 553, 587, 556, 587, 559, 588, 562, 589, 552, 588, 1668,
  587, 1670, 589, 547, 589, 1678, 588, 554, 589, 559, 588, 561,
  590, 552, 588, 541, 588, 1671, 589, 550, 586, 1678, 589, 555,
  589, 1684, 589, 1689, 587, 552, 588, 541, 589, 546, 587, 548,
  588, 551, 589, 556, 587, 560, 587, 562, 589, 552, 588, 541,
  588, 546, 587, 549, 588, 551, 589, 556, 587, 558, 589, 563,
  587, 535, 587, 7990, 589, 541, 588, 544, 589, 549, 588, 551,
  589, 554, 589, 558, 589, 562, 589, 1678, 588, 540, 589, 544,
  589, 549, 587, 552, 588, 554, 589, 558, 588, 563, 588, 552,
  588, 541, 589, 544, 589, 549, 587, 552, 588, 557, 587, 558,
  589, 564, 586, 551, 589, 541, 588, 545, 588, 547, 589, 551,
  589, 555, 588, 560, 587, 562, 588, 551, 589, 542, 588, 544,
  589, 550, 587, 552, 588, 555, 588, 559, 588, 563, 587, 552,
  588, 540, 590, 544, 589, 548, 589, 552, 588, 555, 588, 559,
  588, 563, 587, 552, 588, 542, 587, 544, 589, 548, 588, 551,
  589, 556, 588, 559, 588, 562, 588, 552, 588, 1668, 588, 544,
  589, 548, 588, 552, 588, 556, 587, 1685, 588, 1687, 589, 1659,
  589, 7991, 587, 542, 587, 545, 588, 549, 588, 552, 588, 554,
  590, 559, 588, 563, 587, 552, 588, 1667, 588, 1670, 588, 549,
  587, 552, 587, 555, 588, 559, 588, 561, 589, 552, 587, 542,
  587, 545, 588, 551, 585, 551, 589, 554, 589, 558, 589, 562,
  588, 551, 589, 541, 588, 543, 590, 548, 588, 552, 588, 556,
  588, 560, 587, 563, 588, 551, 589, 541, 588, 545, 588, 547,
  589, 1678, 587, 555, 588, 558, 588, 563, 587, 551, 589, 540,
  589, 545, 588, 549, 587, 552, 588, 555, 588, 558, 589, 563,
  587, 551, 589, 1667, 587, 1671, 587, 549, 587, 1677, 588, 555,
  588, 559, 588, 563, 587, 534, 587,
};

const uint32_t irExtraRaw081[] = {
  8990, 4555, 587, 1668, 588, 1672, 588, 551, 586, 553, 588, 555,
  589, 559, 588, 564, 587, 1678, 589, 542, 588, 1672, 587, 1676,
  587, 553, 587, 555, 588, 561, 586, 564, 587, 553, 587, 543,
  587, 545, 588, 1675, 588, 552, 589, 557, 587, 559, 589, 564,
  587, 552, 588, 544, 586, 1672, 588, 549, 588, 555, 586, 557,
  587, 559, 589, 563, 588, 553, 587, 544, 586, 545, 589, 549,
  588, 553, 588, 556, 588, 561, 586, 564, 587, 554, 587, 543,
  587, 546, 588, 550, 587, 553, 588, 557, 587, 560, 588, 564,
  587, 536, 587, 7995, 587, 543, 587, 546, 587, 550, 587, 554,
  613, 530, 614, 534, 613, 538, 613, 1655, 612, 517, 613, 521,
  612, 524, 613, 528, 613, 532, 612, 535, 612, 539, 612, 529,
  612, 517, 613, 520, 614, 524, 613, 528, 612, 532, 612, 535,
  612, 537, 613, 527, 613, 517, 613, 520, 613, 524, 613, 528,
  612, 532, 612, 535, 613, 538, 613, 528, 613, 517, 613, 521,
  613, 524, 613, 527, 614, 532, 612, 534, 613, 537, 614, 527,
  613, 517, 613, 520, 613, 524, 613, 527, 613, 531, 613, 533,
  614, 538, 612, 527, 613, 517, 613, 520, 614, 524, 613, 527,
  613, 530, 614, 534, 614, 538, 613, 526, 614, 515, 614, 1647,
  612, 1652, 611, 528, 612, 532, 612, 532, 615, 537, 614, 1635,
  587, 7996, 613, 516, 614, 521, 613, 523, 614, 527, 613, 530,
  614, 534, 613, 538, 613, 527, 613, 1643, 614, 520, 613, 524,
  613, 528, 612, 531, 612, 534, 613, 537, 613, 527, 614, 518,
  612, 520, 613, 523, 614, 527, 613, 531, 613, 533, 614, 538,
  613, 526, 614, 516, 614, 519, 614, 523, 614, 527, 613, 530,
  614, 533, 614, 537, 614, 526, 614, 517, 613, 519, 614, 524,
  613, 1653, 613, 530, 614, 534, 613, 537, 614, 526, 614, 516,
  614, 520, 613, 523, 614, 526, 614, 530, 614, 534, 613, 537,
  614, 527, 613, 1642, 614, 520, 613, 523, 614, 1652, 615, 529,
  614, 534, 613, 537, 613, 510, 612,
};

const uint32_t irExtraRaw082[] = {
  8987, 4554, 587, 1668, 587, 1672, 587, 548, 588, 552, 588, 556,
  588, 559, 588, 563, 588, 1677, 589, 543, 586, 1669, 589, 1675,
  587, 553, 587, 556, 587, 559, 588, 562, 589, 552, 588, 1668,
  587, 1670, 589, 547, 589, 1678, 588, 554, 589, 559, 588, 561,
  590, 552, 588, 541, 588, 1671, 589, 550, 586, 1678, 589, 555,
  589, 1684, 589, 1689, 587, 552, 588, 541, 589, 546, 587, 548,
  588, 551, 589, 556, 587, 560, 587, 562, 589, 552, 588, 541,
  588, 546, 587, 549, 588, 551, 589, 556, 587, 558, 589, 563,
  587, 535, 587, 7990, 589, 541, 588, 544, 589, 549, 588, 551,
  589, 554, 589, 558, 589, 562, 589, 1678, 588, 540, 589, 544,
  589, 549, 587, 552, 588, 554, 589, 558, 588, 563, 588, 552,
  588, 541, 589, 544, 589, 549, 587, 552, 588, 557, 587, 558,
  589, 564, 586, 551, 589, 541, 588, 545, 588, 547, 589, 551,
  589, 555, 588, 560, 587, 562, 588, 551, 589, 542, 588, 544,
  589, 550, 587, 552, 588, 555, 588, 559, 588, 563, 587, 552,
  588, 540, 590, 544, 589, 548, 589, 552, 588, 555, 588, 559,
  588, 563, 587, 552, 588, 542, 587, 544, 589, 548, 588, 551,
  589, 556, 588, 559, 588, 562, 588, 552, 588, 1668, 588, 544,
  589, 548, 588, 552, 588, 556, 587, 1685, 588, 1687, 589, 1659,
  589, 7991, 587, 542, 587, 545, 588, 549, 588, 552, 588, 554,
  590, 559, 588, 563, 587, 552, 588, 1667, 588, 1670, 588, 549,
  587, 552, 587, 555, 588, 559, 588, 561, 589, 552, 587, 542,
  587, 545, 588, 551, 585, 551, 589, 554, 589, 558, 589, 562,
  588, 551, 589, 541, 588, 543, 590, 548, 588, 552, 588, 556,
  588, 560, 587, 563, 588, 551, 589, 541, 588, 545, 588, 547,
  589, 1678, 587, 555, 588, 558, 588, 563, 587, 551, 589, 540,
  589, 545, 588, 549, 587, 552, 588, 555, 588, 558, 589, 563,
  587, 551, 589, 1667, 587, 1671, 587, 549, 587, 1677, 588, 555,
  588, 559, 588, 563, 587, 534, 587,
};

const uint32_t irExtraRaw083[] = {
  9115, 4510, 641, 1653, 641, 1632, 614, 531, 611, 539, 608, 543,
  608, 546, 608, 550, 608, 1673, 608, 529, 608, 1666, 608, 1670,
  607, 540, 607, 544, 607, 570, 584, 574, 584, 564, 584, 553,
  584, 557, 584, 1694, 584, 563, 584, 567, 584, 1704, 584, 1708,
  583, 564, 583, 1686, 584, 557, 584, 560, 584, 564, 583, 1701,
  583, 1704, 584, 1708, 584, 564, 584, 553, 583, 557, 583, 561,
  583, 564, 583, 567, 584, 571, 584, 574, 584, 564, 583, 553,
  584, 557, 583, 561, 583, 564, 584, 568, 583, 572, 583, 575,
  583, 546, 583, 8052, 583, 554, 583, 557, 583, 561, 583, 565,
  583, 568, 583, 572, 582, 575, 583, 1699, 582, 1688, 583, 558,
  583, 561, 583, 565, 582, 1702, 583, 1706, 582, 575, 583, 565,
  583, 555, 582, 558, 582, 562, 582, 565, 582, 569, 582, 572,
  582, 576, 582, 566, 582, 555, 582, 558, 582, 562, 581, 565,
  582, 569, 581, 573, 581, 576, 581, 566, 581, 555, 582, 559,
  581, 562, 582, 566, 581, 570, 581, 573, 581, 577, 581, 566,
  581, 556, 581, 560, 581, 563, 581, 567, 580, 570, 581, 574,
  580, 578, 580, 1701, 580, 1690, 581, 560, 580, 564, 580, 1701,
  580, 1704, 580, 575, 580, 579, 579, 568, 579, 1691, 579, 561,
  580, 1698, 579, 1702, 578, 1705, 579, 1709, 579, 580, 578, 575,
  554, 8080, 554, 582, 555, 586, 554, 589, 555, 593, 554, 596,
  555, 600, 554, 604, 554, 593, 555, 1717, 554, 586, 554, 590,
  554, 593, 554, 597, 554, 601, 554, 604, 554, 593, 555, 583,
  554, 586, 554, 590, 554, 594, 554, 597, 554, 601, 553, 604,
  554, 594, 553, 584, 553, 587, 554, 591, 553, 594, 554, 598,
  553, 602, 553, 605, 553, 595, 553, 584, 553, 588, 552, 592,
  552, 1729, 553, 599, 552, 602, 553, 606, 552, 595, 552, 585,
  552, 588, 552, 592, 552, 620, 527, 599, 552, 628, 526, 631,
  527, 621, 526, 1744, 526, 614, 526, 618, 526, 1754, 526, 624,
  527, 628, 526, 631, 527, 604, 526,
};

const uint32_t irExtraRaw084[] = {
  8963, 4401, 561, 543, 558, 545, 566, 537, 564, 540, 561, 542,
  559, 1652, 561, 1650, 563, 540, 561, 543, 558, 545, 567, 537,
  564, 1647, 566, 1645, 558, 1654, 559, 544, 567, 536, 565, 1646,
  567, 1644, 559, 545, 567, 537, 564, 1647, 566, 537, 564, 540,
  561, 542, 559, 545, 567, 537, 564, 539, 562, 541, 560, 544,
  567, 536, 565, 538, 563, 541, 560, 543, 558, 545, 567, 538,
  563, 540, 561, 542, 559, 545, 567, 537, 564, 539, 562, 542,
  559, 544, 568, 536, 565, 539, 562, 541, 560, 543, 569, 536,
  565, 538, 563, 541, 560, 543, 558, 545, 566, 538, 563, 540,
  561, 542, 559, 545, 566, 537, 564, 539, 562, 542, 559, 544,
  567, 536, 565, 539, 562, 541, 560, 544, 568, 536, 565, 538,
  563, 541, 560, 543, 558, 545, 567, 538, 563, 540, 561, 543,
  558, 545, 567, 537, 564, 540, 561, 542, 559, 544, 568, 536,
  565, 539, 562, 541, 560, 570, 542, 536, 565, 538, 563, 541,
  560, 543, 558, 546, 565, 538, 563, 540, 561, 543, 558, 571,
  541, 537, 564, 540, 561, 542, 559, 545, 567, 537, 564, 539,
  562, 542, 559, 544, 568, 536, 565, 539, 562, 541, 560, 544,
  568, 536, 565, 538, 563, 541, 560, 543, 569, 535, 566, 538,
  563, 541, 560, 543, 569, 535, 566, 538, 563, 541, 560, 543,
  569, 536, 565, 538, 563, 541, 560, 544, 567, 536, 565, 539,
  562, 542, 559, 544, 567, 537, 564, 539, 562, 542, 559, 544,
  568, 537, 564, 539, 562, 542, 559, 544, 568, 537, 564, 539,
  562, 542, 559, 545, 567, 537, 564, 540, 561, 542, 559, 545,
  566, 537, 564, 540, 561, 543, 558, 545, 567, 538, 563, 541,
  560, 543, 569, 536, 565, 538, 563, 541, 560, 544, 568, 536,
  565, 539, 562, 542, 559, 544, 568, 1645, 558, 546, 566, 1646,
  567, 537, 564, 540, 561, 1651, 562, 541, 560, 544, 568, 563,
  538, 539, 562, 541, 560, 544, 567, 536, 565, 539, 562, 541,
  560, 544, 567, 537, 564, 539, 562, 542, 559, 544, 568, 537,
  564, 540, 561, 542, 559, 545, 566, 1645, 558, 546, 566, 1646,
  567, 537, 564, 540, 561, 1651, 562, 541, 560, 544, 588,
};

const uint32_t irExtraRaw085[] = {
  3378, 1603, 466, 1170, 466, 408, 465, 406, 468, 407, 467, 407,
  467, 408, 466, 407, 467, 412, 466, 407, 467, 408, 465, 406,
  468, 406, 468, 1170, 466, 407, 467, 406, 468, 413, 465, 410,
  464, 407, 466, 409, 465, 407, 467, 406, 468, 409, 464, 408,
  466, 411, 467, 407, 466, 405, 469, 407, 467, 406, 467, 408,
  466, 406, 468, 1170, 466, 412, 466, 1169, 466, 1171, 465, 1171,
  465, 1170, 489, 1146, 466, 1172, 488, 383, 467, 1177, 487, 1149,
  487, 1145, 466, 1172, 487, 1147, 465, 1169, 466, 1174, 486, 1147,
  465, 1174, 466, 409, 465, 409, 465, 409, 464, 409, 464, 408,
  465, 409, 465, 409, 464, 415, 463, 409, 464, 409, 465, 1170,
  466, 1171, 465, 409, 465, 410, 463, 1172, 463, 1177, 463, 1172,
  464, 1199, 436, 413, 461, 410, 464, 1172, 463, 1172, 464, 411,
  463, 415, 463, 411, 463, 1173, 463, 411, 462, 410, 464, 1174,
  461, 409, 465, 411, 463, 1176, 464, 1173, 463, 410, 464, 1172,
  464, 1172, 464, 437, 436, 1174, 462, 1173, 462, 415, 463, 1174,
  462, 1173, 463, 411, 463, 413, 461, 1172, 464, 411, 462, 410,
  463, 415, 463, 409, 465, 411, 463, 1172, 464, 1172, 464, 409,
  465, 1173, 463, 1174, 462, 1176, 464, 409, 465, 409, 465, 1171,
  465, 1170, 466, 1173, 463, 408, 466, 1172, 464, 412, 465, 1171,
  465, 1172, 464, 407, 467, 408, 465, 408, 466, 1171, 465, 408,
  466, 1175, 465, 408, 465, 407, 466, 408, 466, 409, 465, 408,
  465, 408, 466, 407, 467, 412, 466, 1170, 466, 1173, 463, 1170,
  466, 1170, 466, 1170, 466, 1170, 466, 1171, 465, 1174, 466, 408,
  465, 407, 467, 409, 465, 408, 465, 409, 464, 408, 466, 408,
  466, 414, 464, 1171, 465, 1170, 466, 1171, 465, 1170, 466, 1172,
  464, 1171, 465, 1170, 466, 1176, 464, 409, 465, 410, 463, 408,
  466, 411, 463, 409, 464, 409, 465, 408, 466, 413, 464, 1170,
  466, 1172, 464, 1171, 465, 1170, 466, 1171, 465, 1172, 464, 1170,
  466, 1178, 462, 408, 465, 410, 464, 409, 465, 408, 466, 409,
  465, 409, 465, 409, 465, 413, 465, 1171, 465, 1172, 464, 1172,
  464, 1173, 463, 1171, 465, 1172, 464, 1171, 465, 1176, 464, 407,
  467, 409, 465, 409, 465, 410, 463, 409, 465, 409, 465, 411,
  463, 413, 464, 1173, 463, 1174, 462, 1172, 464, 1172, 464, 1171,
  465, 1171, 465, 1172, 464, 1175, 465, 410, 464, 1172, 464, 1174,
  462, 409, 465, 1172, 464, 410, 463, 1170, 466, 414, 463, 1172,
  464, 410, 464, 409, 465, 1172, 464, 411, 462, 1172, 464, 409,
  465, 1175, 465, 1172, 464, 410, 463, 410, 464, 410, 464, 409,
  464, 1173, 463, 1173, 463, 1176, 464, 410, 464, 1173, 463, 1171,
  465, 1171, 465, 1172, 464, 409, 464, 410, 464, 414, 464, 410,
  464, 410, 464, 410, 464, 409, 465, 410, 463, 410, 464, 411,
  463, 414, 464, 1173, 463, 1172, 464, 1173, 463, 1172, 464, 1172,
  464, 1173, 463, 1172, 464, 1177, 463, 410, 464, 410, 463, 410,
  463, 411, 463, 410, 464, 411, 463, 409, 464, 414, 464, 1173,
  463, 1173, 462, 1174, 462, 1173, 463, 1173, 463, 1173, 463, 1174,
  462, 1177, 463, 411, 463, 412, 462, 410, 463, 411, 463, 411,
  462, 412, 462, 410, 463, 414, 464, 1173, 463, 1174, 462, 1173,
  463, 1172, 464, 1174, 462, 1173, 463, 1173, 463, 1178, 462, 1173,
  463, 1174, 462, 411, 462, 411, 463, 411, 462, 410, 464, 411,
  463, 415, 463, 411, 463, 412, 462, 1174, 462, 1173, 463, 1174,
  462, 1175, 461, 1173, 463, 1178, 461,
};

const uint32_t irExtraRaw086[] = {
  530, 374, 30128, 50095, 3452, 1625, 471, 1229, 471, 459, 471, 459,
  471, 459, 444, 459, 471, 459, 470, 459, 471, 459, 471, 459,
  471, 459, 444, 460, 470, 459, 471, 1230, 470, 459, 470, 460,
  443, 460, 470, 460, 469, 460, 470, 460, 470, 460, 443, 1231,
  470, 1230, 470, 460, 470, 460, 470, 460, 443, 487, 443, 460,
  469, 460, 470, 461, 468, 461, 469, 1232, 442, 461, 469, 1232,
  468, 1232, 442, 1232, 468, 1232, 468, 1232, 468, 1232, 441, 461,
  469, 1232, 468, 1232, 442, 488, 442, 461, 469, 462, 468, 463,
  466, 463, 467, 485, 418, 488, 442, 485, 444, 1234, 467, 1256,
  418, 1256, 444, 1256, 444, 1256, 444, 1256, 418, 1256, 444, 1256,
  444, 485, 444, 486, 417, 486, 444, 1256, 444, 485, 444, 485,
  444, 486, 417, 486, 444, 1257, 443, 486, 444, 485, 444, 1257,
  417, 486, 444, 486, 443, 486, 444, 1257, 417, 1257, 443, 486,
  444, 486, 444, 486, 443, 486, 417, 513, 416, 487, 443, 487,
  442, 486, 444, 1257, 416, 1257, 443, 487, 442, 486, 444, 486,
  443, 487, 416, 513, 416, 487, 443, 486, 443, 487, 443, 487,
  442, 487, 416, 514, 415, 1258, 442, 487, 442, 487, 443, 487,
  416, 514, 416, 488, 442, 487, 443, 488, 442, 488, 442, 1258,
  415, 1258, 442, 488, 442, 488, 441, 488, 442, 488, 415, 488,
  441, 488, 442, 488, 442, 1259, 441, 1259, 415, 489, 440, 489,
  441, 488, 442, 489, 440, 488, 415, 1259, 441, 1260, 440, 1260,
  414, 516, 414, 489, 439, 491, 440, 489, 440, 490, 439, 490,
  414, 516, 413, 490, 438, 491, 438, 492, 438, 491, 415, 539,
  389, 517, 413, 514, 391, 516, 414, 539, 414, 516, 390, 539,
  388, 542, 363, 540, 390, 1311, 389, 540, 389, 540, 363, 567,
  363, 540, 390, 540, 389, 540, 390, 540, 390, 540, 363, 567,
  363, 541, 389, 540, 390, 540, 389, 540, 390, 541, 362, 567,
  363, 541, 389, 541, 389, 541, 389, 541, 389, 541, 362, 568,
  361, 541, 389, 541, 389, 542, 388, 541, 389, 541, 362, 542,
  388, 542, 387, 542, 388, 542, 388, 543, 387, 567, 335, 567,
  363, 567, 363, 567, 363, 567, 363, 567, 336, 594, 335, 568,
  362, 567, 362, 568, 361, 568, 362, 567, 336, 595, 335, 568,
  362, 568, 361, 568, 362, 1338, 362, 1339, 334, 569, 361, 569,
  360, 569, 361, 569, 360, 569, 334, 570, 360, 570, 360, 595,
  334, 595, 334, 1366, 307, 1366, 334, 595, 335, 595, 335, 595,
  335, 596, 306, 623, 307, 596, 334, 596, 333, 597, 333, 622,
  307, 597, 306, 597, 333, 623, 306, 623, 306, 624, 306, 624,
  306, 624, 278, 1395, 305, 1395, 305, 650, 279, 651, 360,
};

const uint32_t irExtraRaw087[] = {
  479, 397, 30131, 50087, 3427, 1674, 447, 1253, 447, 483, 446, 483,
  446, 483, 420, 483, 447, 483, 447, 483, 447, 483, 447, 483,
  420, 510, 419, 483, 447, 483, 446, 1254, 446, 483, 420, 510,
  419, 484, 446, 483, 447, 484, 445, 483, 446, 484, 419, 1255,
  445, 1254, 446, 484, 445, 484, 445, 484, 419, 484, 446, 484,
  446, 484, 445, 484, 446, 484, 445, 1255, 418, 484, 446, 1255,
  445, 1255, 418, 1255, 445, 1255, 445, 1254, 446, 1255, 419, 484,
  446, 1255, 445, 1255, 418, 511, 418, 485, 445, 484, 445, 484,
  446, 484, 445, 485, 418, 511, 418, 484, 446, 1255, 445, 1255,
  418, 1255, 445, 1255, 444, 1256, 444, 1256, 417, 1256, 445, 1255,
  443, 487, 418, 511, 419, 485, 444, 1255, 445, 485, 445, 485,
  420, 509, 418, 485, 445, 1255, 445, 485, 444, 485, 445, 1256,
  417, 512, 418, 485, 444, 485, 445, 1256, 417, 1256, 444, 485,
  444, 485, 420, 509, 444, 486, 418, 511, 418, 485, 445, 485,
  444, 1256, 444, 486, 418, 512, 417, 485, 420, 509, 445, 485,
  445, 485, 445, 485, 417, 1256, 444, 486, 444, 485, 445, 1256,
  417, 1256, 443, 486, 444, 485, 444, 486, 444, 485, 444, 485,
  418, 485, 444, 485, 444, 485, 444, 486, 443, 486, 417, 1257,
  420, 509, 420, 510, 444, 485, 444, 486, 444, 485, 418, 485,
  445, 485, 443, 487, 444, 1256, 444, 1256, 417, 485, 442, 487,
  420, 510, 444, 485, 444, 486, 417, 1256, 420, 1280, 443, 1257,
  417, 512, 393, 510, 444, 486, 442, 487, 443, 486, 419, 510,
  417, 513, 419, 484, 419, 510, 444, 486, 419, 510, 419, 510,
  393, 537, 415, 488, 420, 510, 418, 510, 419, 510, 419, 510,
  392, 537, 392, 511, 445, 484, 419, 511, 418, 511, 418, 511,
  392, 538, 391, 511, 419, 511, 419, 511, 418, 511, 418, 511,
  391, 511, 419, 512, 418, 511, 418, 511, 419, 511, 418, 512,
  391, 512, 418, 512, 417, 512, 417, 512, 418, 512, 417, 512,
  391, 512, 418, 512, 417, 512, 417, 512, 417, 512, 391, 539,
  390, 513, 416, 513, 417, 512, 417, 513, 417, 537, 366, 564,
  365, 514, 416, 537, 392, 537, 392, 538, 392, 538, 365, 564,
  365, 538, 392, 538, 392, 538, 391, 538, 391, 538, 365, 564,
  365, 538, 392, 538, 391, 1309, 391, 1308, 365, 538, 391, 538,
  392, 538, 391, 538, 392, 538, 365, 565, 364, 538, 392, 538,
  391, 539, 391, 1309, 364, 1309, 391, 538, 391, 539, 391, 538,
  391, 538, 391, 539, 364, 538, 392, 539, 390, 539, 391, 539,
  390, 539, 364, 565, 364, 539, 391, 539, 390, 1309, 391, 539,
  390, 1309, 364, 539, 391, 539, 390, 539, 391, 539, 498,
};

const uint32_t irExtraRaw092[] = {
  4421, 4375, 565, 1616, 560, 560, 533, 1626, 560, 1621, 565, 554,
  539, 556, 537, 1617, 559, 564, 539, 557, 536, 1622, 564, 556,
  537, 558, 535, 1619, 567, 1614, 562, 558, 535, 1625, 561, 561,
  542, 1613, 563, 1618, 620, 1560, 564, 1616, 560, 560, 533, 1625,
  561, 1622, 564, 1622, 564, 555, 538, 556, 537, 558, 535, 559,
  534, 1619, 567, 553, 540, 557, 536, 1623, 563, 1618, 558, 1622,
  564, 556, 537, 557, 536, 558, 535, 559, 534, 562, 541, 554,
  539, 555, 538, 556, 537, 1621, 565, 1616, 560, 1620, 566, 1614,
  562, 1619, 557, 5232, 4422, 4363, 567, 1614, 562, 557, 536, 1648,
  538, 1616, 560, 560, 533, 561, 532, 1622, 564, 558, 535, 561,
  532, 1626, 560, 560, 533, 561, 532, 1622, 564, 1616, 560, 560,
  533, 1653, 533, 563, 540, 1639, 537, 1618, 568, 1613, 563, 1617,
  559, 561, 532, 1652, 534, 1623, 563, 1622, 564, 556, 537, 557,
  536, 558, 535, 559, 534, 1645, 541, 553, 540, 556, 537, 1622,
  564, 1617, 559, 1621, 565, 554, 539, 555, 538, 556, 537, 557,
  536, 560, 533, 563, 540, 553, 540, 554, 539, 1645, 541, 1612,
  564, 1617, 559, 1622, 564, 1618, 558,
};

const uint32_t irExtraRaw093[] = {
  9159, 4545, 562, 1674, 562, 1675, 561, 596, 560, 595, 535, 621,
  535, 621, 535, 623, 533, 1676, 560, 597, 535, 1702, 534, 1703,
  533, 622, 535, 622, 535, 622, 509, 648, 508, 597, 560, 596,
  560, 596, 558, 1679, 534, 623, 534, 622, 535, 622, 534, 622,
  509, 597, 560, 597, 560, 1678, 558, 598, 558, 599, 532, 1728,
  508, 649, 508, 1729, 507, 597, 560, 597, 558, 598, 534, 623,
  534, 623, 533, 623, 531, 625, 508, 649, 507, 597, 560, 597,
  534, 623, 534, 623, 534, 623, 534, 623, 508, 649, 508, 649,
  508, 571, 508, 8132, 558, 1703, 533, 1703, 534, 623, 534, 623,
  533, 623, 508, 625, 532, 649, 508, 1677, 560, 597, 558, 599,
  533, 1703, 534, 623, 533, 1703, 533, 1705, 532, 625, 532, 597,
  534, 623, 534, 623, 533, 599, 558, 599, 532, 625, 532, 624,
  532, 624, 533, 574, 557, 599, 558, 599, 558, 598, 557, 599,
  533, 624, 532, 624, 533, 624, 531, 575, 558, 599, 558, 598,
  558, 1703, 534, 1703, 533, 624, 507, 649, 508, 649, 507, 598,
  559, 598, 533, 624, 532, 624, 533, 624, 532, 624, 507, 650,
  507, 650, 507, 1678, 559, 1678, 559, 598, 557, 599, 533, 1705,
  532, 1729, 507, 625, 532, 626, 531, 598, 556, 601, 533, 624,
  533, 1704, 532, 624, 532, 1704, 533, 1704, 533, 1705, 531, 573,
  506, 8133, 558, 598, 558, 598, 533, 624, 532, 624, 533, 624,
  532, 624, 507, 650, 507, 599, 558, 1678, 558, 599, 557, 599,
  532, 624, 533, 624, 533, 624, 530, 627, 506, 599, 505, 575,
  557, 599, 557, 599, 558, 599, 532, 625, 532, 625, 531, 625,
  531, 574, 505, 599, 558, 599, 532, 625, 531, 625, 532, 624,
  532, 625, 506, 651, 506, 599, 480, 600, 557, 599, 558, 599,
  557, 600, 532, 625, 532, 625, 532, 626, 505, 600, 505, 600,
  531, 625, 532, 625, 531, 625, 532, 624, 506, 650, 507, 650,
  507, 600, 479, 1681, 556, 600, 557, 600, 556, 600, 531, 626,
  530, 650, 507, 626, 530, 574, 506,
};

const uint32_t irExtraRaw096[] = {
  9225, 4577, 564, 579, 567, 579, 567, 579, 567, 578, 568, 579,
  568, 577, 570, 579, 568, 578, 569, 580, 567, 576, 569, 1709,
  567, 1708, 567, 1707, 568, 1708, 567, 1707, 568, 1708, 569, 578,
  568, 576, 569, 1709, 569, 578, 569, 578, 569, 579, 568, 576,
  569, 1707, 568, 1706, 569, 1707, 571, 574, 571, 1707, 570, 1707,
  569, 1706, 570, 1709, 569, 563, 570, 41744, 9232, 2278, 570, 96325,
  9221, 2278, 567, 96323, 9224, 2277, 568, 96330, 9238, 2276, 570, 96329,
  9229, 2277, 569,
};

const uint32_t irExtraRaw099[] = {
  8445, 4206, 542, 1566, 541, 539, 519, 534, 514, 541, 517, 1564,
  543, 537, 521, 533, 515, 539, 519, 534, 514, 540, 518, 536,
  512, 542, 516, 537, 521, 532, 516, 538, 520, 534, 514, 1568,
  539, 541, 517, 536, 522, 1560, 547, 533, 515, 1567, 540, 540,
  518, 536, 512, 1570, 547, 1561, 546, 534, 514, 1568, 539,
};

const uint32_t irExtraRaw100[] = {
  8455, 4196, 542, 1566, 541, 539, 519, 535, 513, 541, 517, 1565,
  541, 538, 520, 534, 514, 540, 518, 1563, 544, 1565, 542, 538,
  520, 533, 515, 539, 519, 535, 513, 541, 517, 536, 522, 532,
  516, 538, 520, 533, 515, 539, 519, 535, 513, 1569, 538, 542,
  516, 1566, 541, 539, 519, 534, 514, 540, 518, 1564, 542,
};

const uint32_t irExtraRaw102[] = {
  9011, 4559, 628, 1635, 626, 1638, 627, 512, 627, 516, 627, 519,
  627, 523, 627, 527, 626, 1645, 626, 505, 627, 1639, 626, 1641,
  626, 516, 626, 520, 626, 523, 627, 527, 626, 515, 628, 1634,
  628, 508, 628, 512, 627, 517, 626, 519, 627, 523, 627, 526,
  627, 514, 628, 505, 627, 1637, 627, 513, 626, 515, 627, 1649,
  626, 1651, 627, 1655, 627, 1645, 626, 506, 626, 508, 627, 513,
  626, 517, 626, 520, 626, 524, 626, 527, 626, 517, 626, 506,
  626, 509, 627, 512, 627, 516, 683, 464, 626, 523, 627, 527,
  626, 499, 627, 7979, 625, 506, 626, 510, 626, 513, 626, 517,
  626, 521, 682, 468, 682, 1601, 625, 1647, 682, 451, 683, 455,
  682, 457, 683, 460, 683, 464, 683, 467, 683, 472, 682, 461,
  682, 450, 682, 453, 683, 457, 683, 460, 683, 463, 683, 467,
  682, 470, 683, 460, 682, 449, 683, 453, 683, 456, 683, 460,
  682, 463, 683, 468, 682, 470, 684, 459, 684, 450, 682, 453,
  683, 457, 682, 460, 683, 463, 684, 466, 684, 471, 682, 459,
  684, 449, 683, 454, 681, 456, 683, 460, 683, 463, 683, 468,
  682, 471, 683, 460, 683, 450, 682, 453, 682, 457, 682, 460,
  682, 465, 681, 467, 683, 471, 683, 460, 683, 1580, 682, 1584,
  682, 457, 682, 460, 683, 1595, 677, 1602, 677, 476, 683, 443,
  683, 7924, 682, 450, 677, 460, 676, 462, 678, 465, 677, 469,
  677, 474, 676, 477, 677, 467, 677, 1586, 676, 459, 677, 1592,
  677, 465, 678, 470, 677, 1604, 676, 477, 677, 467, 677, 456,
  677, 459, 676, 463, 676, 466, 677, 470, 676, 474, 675, 478,
  675, 467, 676, 456, 676, 459, 676, 462, 676, 467, 676, 471,
  676, 474, 675, 477, 676, 468, 675, 457, 675, 460, 676, 463,
  676, 1597, 675, 1599, 676, 1603, 675, 477, 676, 468, 675, 457,
  676, 460, 675, 463, 676, 467, 675, 471, 675, 474, 676, 477,
  676, 468, 675, 1586, 675, 460, 675, 1593, 676, 1597, 675, 1602,
  675, 475, 675, 478, 676, 450, 574,
};

const uint32_t irExtraRaw104[] = {
  8971, 4413, 598, 1634, 595, 1641, 599, 526, 599, 529, 596, 533,
  592, 541, 594, 541, 594, 1646, 594, 525, 600, 1633, 596, 1645,
  595, 533, 592, 540, 595, 538, 597, 539, 596, 528, 597, 1629,
  600, 520, 594, 526, 599, 526, 599, 530, 595, 537, 598, 538,
  597, 530, 595, 523, 591, 1639, 601, 524, 601, 527, 598, 1643,
  597, 537, 598, 539, 596, 531, 594, 522, 592, 528, 597, 527,
  598, 530, 595, 536, 599, 534, 591, 546, 600, 526, 599, 517,
  597, 521, 593, 528, 597, 528, 597, 532, 593, 541, 594, 544,
  591, 519, 595, 7883, 598, 520, 594, 525, 600, 524, 590, 535,
  600, 529, 596, 539, 596, 1651, 599, 1639, 601, 515, 599, 522,
  592, 531, 594, 532, 593, 538, 597, 536, 599, 538, 597, 528,
  597, 518, 596, 525, 600, 523, 591, 534, 591, 537, 598, 533,
  592, 546, 600, 527, 598, 518, 596, 523, 591, 531, 594, 531,
  594, 536, 599, 534, 591, 545, 601, 526, 599, 517, 597, 521,
  593, 529, 596, 530, 595, 536, 599, 532, 593, 542, 593, 532,
  593, 522, 592, 526, 599, 522, 592, 535, 600, 532, 593, 540,
  595, 541, 594, 533, 592, 524, 601, 519, 595, 528, 597, 529,
  596, 535, 600, 534, 601, 537, 598, 527, 598, 1627, 592, 1637,
  592, 531, 594, 533, 592, 1652, 598, 537, 598, 1652, 598, 1623,
  596, 7882, 599, 519, 595, 525, 600, 522, 592, 534, 591, 538,
  597, 535, 590, 547, 599, 528, 597, 518, 596, 1634, 595, 1639,
  601, 525, 600, 530, 595, 539, 596, 541, 594, 532, 593, 523,
  591, 529, 596, 527, 598, 528, 597, 533, 592, 541, 594, 542,
  593, 532, 593, 525, 600, 522, 592, 531, 594, 533, 592, 538,
  597, 535, 600, 537, 598, 527, 598, 518, 596, 522, 592, 530,
  595, 1646, 594, 1652, 598, 1650, 600, 538, 597, 530, 595, 521,
  593, 527, 598, 526, 599, 529, 596, 534, 591, 543, 592, 546,
  600, 527, 598, 519, 595, 1636, 593, 1640, 600, 1639, 601, 1644,
  596, 1651, 599, 539, 596, 514, 590,
};

const uint32_t irExtraRaw105[] = {
  3196, 9607, 615, 1444, 589, 428, 588, 428, 588, 430, 613, 1444,
  589, 428, 588, 428, 587, 430, 588, 1446, 614, 1445, 589, 429,
  588, 429, 588, 429, 584, 434, 611, 406, 582, 483, 561, 455,
  561, 456, 560, 456, 558, 460, 557, 459, 558, 1503, 559, 457,
  533, 1527, 559, 457, 559, 457, 586, 457, 560, 1475, 584,
};

const uint32_t irExtraRaw106[] = {
  289, 132361, 3225, 9604, 589, 1471, 590, 427, 589, 427, 590, 427,
  563, 1497, 589, 427, 590, 426, 590, 427, 589, 428, 563, 453,
  563, 453, 589, 428, 589, 428, 589, 428, 586, 454, 591, 429,
  587, 453, 563, 1471, 588, 1472, 562, 455, 561, 455, 562, 1473,
  587, 455, 561, 456, 586, 1473, 561, 456, 560, 1473, 587, 456,
  561,
};

const uint32_t irExtraRaw107[] = {
  8838, 3941, 624, 1427, 514, 500, 515, 497, 541, 473, 540, 1487,
  540, 474, 539, 474, 538, 476, 512, 1538, 514, 1516, 544, 466,
  514, 497, 514, 501, 514, 499, 514, 500, 513, 499, 513, 501,
  487, 525, 514, 499, 512, 502, 487, 526, 512, 1517, 542, 470,
  487, 1539, 513, 499, 512, 503, 513, 499, 512, 1513, 512,
};

const uint32_t irExtraRaw108[] = {
  3126, 1586, 542, 1123, 544, 1124, 543, 346, 540, 344, 542, 344,
  541, 1124, 543, 345, 541, 343, 541, 1124, 543, 1125, 542, 346,
  540, 1124, 542, 346, 540, 346, 516, 1149, 518, 1150, 517, 369,
  516, 1151, 517, 1148, 518, 369, 517, 370, 516, 1148, 518, 369,
  516, 369, 541, 1125, 543, 342, 542, 344, 542, 345, 541, 346,
  540, 371, 515, 371, 515, 371, 514, 370, 514, 371, 515, 371,
  515, 371, 515, 371, 515, 371, 515, 370, 515, 371, 514, 371,
  515, 372, 515, 1151, 515, 371, 515, 372, 515, 1151, 515, 372,
  514, 372, 515, 1153, 514, 1153, 515, 371, 515, 372, 514, 370,
  514, 372, 514, 372, 514, 372, 514, 1153, 514, 1153, 514, 1131,
  538, 1127, 539, 347, 539, 346, 540, 346, 540, 345, 540, 1128,
  540, 347, 540, 1126, 540, 346, 540, 345, 541, 345, 541, 345,
  541, 345, 541, 345, 541, 343, 541, 345, 541, 345, 541, 345,
  541, 345, 541, 345, 541, 344, 541, 343, 541, 344, 542, 344,
  542, 345, 541, 345, 541, 344, 542, 343, 541, 344, 542, 345,
  541, 344, 542, 345, 541, 345, 541, 345, 541, 344, 540, 345,
  541, 345, 541, 345, 541, 345, 541, 345, 541, 345, 541, 343,
  541, 345, 541, 345, 541, 345, 541, 345, 541, 345, 541, 345,
  541, 344, 541, 1127, 541, 344, 541, 1127, 541, 345, 541,
};

const uint32_t irExtraRaw109[] = {
  3160, 1550, 576, 1092, 576, 1091, 577, 329, 555, 338, 573, 329,
  558, 1065, 601, 329, 557, 329, 556, 1065, 601, 1066, 575, 338,
  547, 1093, 574, 339, 546, 339, 546, 1095, 573, 1095, 572, 339,
  546, 1096, 572, 1097, 571, 341, 544, 341, 544, 1124, 544, 342,
  543, 342, 543, 1125, 542, 344, 542, 344, 541, 344, 542, 344,
  542, 343, 541, 344, 542, 344, 542, 344, 542, 344, 542, 344,
  542, 344, 542, 343, 541, 344, 542, 344, 542, 344, 542, 344,
  542, 344, 542, 344, 542, 343, 541, 345, 542, 1126, 542, 343,
  541, 345, 541, 1126, 542, 1126, 542, 344, 542, 344, 542, 344,
  542, 343, 541, 344, 542, 345, 541, 1126, 541, 1126, 541, 1127,
  542, 1127, 541, 343, 542, 345, 541, 344, 542, 345, 542, 1125,
  541, 345, 542, 1127, 541, 343, 542, 345, 541, 345, 541, 345,
  541, 345, 541, 345, 541, 345, 541, 343, 541, 345, 541, 345,
  541, 345, 541, 345, 541, 345, 541, 345, 541, 344, 541, 345,
  541, 345, 541, 345, 541, 345, 541, 345, 541, 345, 541, 344,
  540, 345, 541, 345, 541, 345, 541, 345, 541, 345, 541, 344,
  541, 345, 541, 345, 541, 345, 541, 346, 540, 345, 541, 344,
  540, 345, 541, 346, 540, 345, 541, 345, 541, 345, 540, 1128,
  541, 1126, 541, 345, 541, 346, 541, 1126, 541, 345, 541,
};

const uint32_t irExtraRaw110[] = {
  3151, 2992, 3125, 4400, 619, 507, 618, 490, 617, 524, 592, 524,
  592, 1625, 617, 1607, 617, 1617, 642, 520, 591, 1634, 589, 1644,
  588, 1637, 586, 1647, 585, 532, 584, 534, 583, 533, 583, 1650,
  583, 533, 583, 1643, 608, 524, 583, 533, 583, 1659, 583, 524,
  584, 1650, 583, 1659, 583, 524, 584, 533, 583, 533, 583, 533,
  584, 1641, 583, 1650, 583, 1650, 583, 1650, 583, 533, 583, 542,
  583, 525, 583, 533, 583, 1651, 582, 1651, 582, 1651, 582, 1660,
  582, 1642, 583, 534, 582, 1660, 582, 533, 583, 534, 582, 1651,
  583, 534, 582, 1651, 582, 534, 583, 1659, 583, 525, 583, 1651,
  582, 1660, 582, 525, 582, 1651, 582, 534, 583, 40184, 3092, 3039,
  3117, 4436, 583, 533, 584, 542, 583, 524, 584, 533, 583, 1650,
  583, 1650, 583, 1650, 583, 533, 583, 1650, 583, 1650, 584, 1659,
  583, 1641, 583, 533, 583, 533, 583, 533, 583, 1650, 583, 533,
  583, 1659, 583, 525, 582, 533, 583, 1651, 583, 533, 583, 1651,
  582, 1651, 582, 534, 582, 534, 582, 534, 583, 534, 582, 1660,
  582, 1642, 582, 1660, 582, 1642, 582, 534, 582, 534, 583, 543,
  582, 534, 583, 1642, 582, 1660, 582, 1642, 582, 1651, 582, 1651,
  582, 534, 583, 1651, 582, 534, 582, 525, 583, 1651, 582, 534,
  583, 1668, 583, 526, 581, 1652, 581, 534, 583, 1651, 582, 1652,
  581, 535, 581, 1652, 581, 535, 582,
};

const uint32_t irExtraRaw111[] = {
  3150, 2991, 3125, 4400, 619, 503, 617, 520, 591, 525, 591, 525,
  591, 1621, 616, 1613, 615, 1619, 640, 517, 589, 1640, 588, 1645,
  587, 1643, 585, 1649, 584, 533, 583, 533, 583, 533, 583, 1650,
  583, 533, 583, 533, 583, 533, 583, 533, 583, 1650, 583, 1646,
  583, 1650, 583, 1655, 583, 533, 583, 533, 584, 1654, 584, 1646,
  583, 1650, 583, 1650, 583, 533, 584, 533, 583, 533, 583, 538,
  583, 529, 583, 533, 583, 1651, 582, 1651, 582, 1651, 582, 1655,
  583, 1646, 583, 534, 582, 1655, 583, 1651, 582, 534, 582, 1655,
  583, 530, 582, 534, 582, 534, 582, 1655, 583, 529, 583, 1651,
  582, 1655, 582, 530, 582, 1651, 582, 534, 582, 40182, 3091, 3040,
  3116, 4436, 583, 533, 583, 538, 583, 529, 583, 533, 583, 1650,
  583, 1651, 583, 1650, 583, 533, 583, 1650, 583, 1650, 583, 1655,
  583, 1646, 583, 533, 583, 534, 583, 533, 583, 1651, 582, 533,
  583, 534, 582, 534, 582, 533, 583, 1651, 582, 1655, 583, 1646,
  583, 1651, 583, 534, 582, 534, 582, 1651, 582, 1656, 581, 1647,
  582, 1656, 582, 530, 582, 534, 582, 534, 583, 534, 582, 539,
  582, 534, 582, 1647, 582, 1656, 582, 1647, 582, 1651, 582, 1652,
  581, 535, 581, 1652, 581, 1647, 582, 535, 582, 1652, 581, 535,
  581, 535, 581, 535, 581, 1652, 581, 535, 581, 1652, 581, 1652,
  581, 535, 581, 1653, 580, 535, 581,
};

const uint32_t irExtraRaw112[] = {
  6172, 7369, 602, 1569, 602, 1569, 602, 1569, 601, 1570, 573, 1598,
  574, 1598, 573, 1597, 574, 1598, 574, 526, 573, 526, 573, 527,
  572, 528, 571, 529, 570, 529, 570, 530, 569, 530, 568, 1603,
  569, 1603, 569, 1603, 569, 1603, 569, 1603, 568, 1603, 568, 1603,
  569, 1604, 568, 531, 568, 531, 568, 531, 568, 532, 567, 531,
  568, 555, 544, 532, 567, 555, 543, 1627, 544, 1628, 543, 1628,
  543, 1628, 543, 1628, 544, 1628, 543, 1628, 544, 1629, 543, 556,
  543, 556, 543, 556, 543, 556, 543, 556, 543, 556, 543, 556,
  543, 555, 543, 1627, 544, 1628, 543, 1629, 543, 556, 543, 555,
  543, 1628, 543, 1628, 543, 1629, 543, 556, 543, 556, 544, 555,
  544, 1628, 544, 1629, 543, 556, 543, 556, 543, 556, 543, 556,
  543, 556, 543, 555, 543, 1628, 543, 1629, 543, 555, 543, 1628,
  543, 1628, 543, 1628, 543, 1628, 543, 1629, 543, 557, 542, 556,
  543, 1629, 543, 556, 543, 556, 543, 555, 543, 1630, 542, 556,
  542, 1629, 543, 557, 543, 1630, 543, 557, 543, 1630, 543, 1631,
  542, 557, 542, 1631, 542, 557, 543, 1630, 543, 557, 542, 1630,
  543, 558, 542, 7398, 543,
};

const uint32_t irExtraRaw113[] = {
  4444, 4409, 550, 1604, 550, 527, 550, 1605, 549, 527, 549, 528,
  549, 528, 549, 528, 549, 1606, 548, 529, 548, 529, 548, 529,
  548, 1606, 548, 1607, 547, 529, 548, 1606, 548, 1606, 548, 529,
  548, 1607, 547, 1606, 548, 1607, 548, 1606, 548, 529, 548, 529,
  548, 529, 548, 1607, 548, 1607, 548, 1606, 548, 1607, 548, 1606,
  548, 1607, 547, 1607, 548, 1606, 548, 1607, 548, 1606, 548, 1607,
  548, 1606, 548, 1606, 549, 1607, 547, 1607, 547, 1606, 548, 1606,
  548, 1607, 548, 1607, 548, 529, 548, 529, 548, 529, 547, 529,
  548, 1606, 548, 5206, 4418, 4412, 547, 529, 548, 1606, 548, 529,
  548, 1607, 547, 1607, 548, 1606, 548, 1606, 549, 529, 573, 1582,
  547, 1607, 547, 1607, 547, 529, 548, 529, 548, 1607, 547, 529,
  548, 529, 547, 1607, 548, 529, 548, 529, 548, 529, 548, 530,
  547, 1607, 547, 1607, 548, 1606, 548, 529, 548, 530, 547, 529,
  548, 530, 547, 530, 547, 530, 547, 529, 571, 506, 547, 530,
  547, 529, 548, 530, 547, 529, 548, 530, 547, 530, 547, 530,
  547, 530, 547, 530, 547, 530, 547, 530, 547, 1607, 547, 1607,
  547, 1607, 547, 1608, 547, 530, 547,
};

const uint32_t irExtraRaw115[] = {
  1286, 428, 1251, 408, 442, 1241, 1289, 399, 1280, 431, 408, 1247,
  1283, 431, 408, 1248, 442, 1242, 437, 1246, 443, 1240, 439, 8135,
  1279, 434, 1256, 430, 409, 1246, 1284, 430, 1260, 426, 413, 1242,
  1287, 426, 413, 1243, 436, 1247, 443, 1241, 438, 1245, 445, 8130,
  1284, 428, 1262, 424, 415, 1240, 1279, 435, 1255, 430, 409, 1247,
  1283, 430, 409, 1247, 443, 1241, 438, 1245, 434, 1249, 441, 8133,
  1281, 432, 1258, 428, 411, 1244, 1286, 428, 1251, 407, 443, 1240,
  1279, 434, 416, 1240, 439, 1244, 435, 1249, 441, 1243, 436, 8137,
  1287, 400, 1279, 433, 417, 1239, 1280, 433, 1257, 430, 409, 1246,
  1284, 429, 410, 1246, 444, 1240, 439, 1245, 445, 1239, 440, 8133,
  1281, 405, 1285, 428, 411, 1245, 1285, 429, 1261, 425, 414, 1241,
  1289, 425, 414, 1242, 437, 1246, 444, 1240, 439, 1245, 434, 8139,
  1285, 428, 1251, 435, 415, 1240, 1279, 434, 1256, 430, 409, 1246,
  1283, 430, 409, 1247, 443, 1241, 438, 1245, 445, 1239, 440, 8133,
  1281, 432, 1258, 428, 411, 1244, 1286, 428, 1251, 407, 443, 1240,
  1279, 434, 416, 1240, 439, 1244, 435, 1249, 441, 1243, 436, 8137,
  1287, 426, 1253, 432, 407, 1248, 1281, 432, 1258, 401, 438, 1244,
  1285, 427, 412, 1244, 435, 1248, 442, 1242, 437, 1247, 442, 8131,
  1283, 403, 1287, 426, 413, 1242, 1287, 426, 1253, 433, 417, 1239,
  1280, 432, 418, 1238, 441, 1243, 436, 1247, 442, 1241, 438, 8136,
  1288, 398, 1281, 404, 435, 1248, 1281, 404, 1286, 400, 439, 1244,
  1285, 400, 439, 1244, 435, 1249, 441, 1243, 436, 1247, 442, 8131,
  1283, 404, 1285, 400, 439, 1243, 1286, 401, 1278, 407, 443, 1240,
  1289, 397, 442, 1240, 439, 1245, 434, 1249, 441, 1243, 436, 8138,
  1286, 401, 1278, 407, 443, 1240, 1279, 407, 1283, 403, 436, 1246,
  1283, 403, 436, 1246, 444, 1240, 439, 1245, 434, 1249, 441, 8134,
  1280, 406, 1284, 402, 437, 1246, 1283, 402, 1288, 398, 441, 1242,
  1288, 399, 440, 1242, 437, 1247, 443, 1241, 438, 1245, 434, 8140,
  1284, 402, 1288, 398, 441, 1242, 1287, 425, 1254, 432, 407, 1249,
  1281, 432, 407, 1249, 441, 1243, 436, 1247, 443, 1241, 438, 8136,
  1288, 425, 1254, 405, 434, 1248, 1281, 406, 1284, 401, 438, 1245,
  1285, 402, 437, 1246, 433, 1250, 440, 1244, 435, 1248, 442,
};

const uint32_t irExtraRaw117[] = {
  4459, 4369, 593, 1562, 590, 487, 599, 1555, 597, 481, 595, 482,
  594, 483, 593, 485, 591, 1563, 599, 1555, 596, 481, 595, 482,
  594, 484, 592, 485, 591, 486, 590, 1565, 597, 479, 596, 481,
  594, 1559, 593, 1562, 590, 1565, 597, 1557, 595, 482, 594, 484,
  592, 485, 591, 1564, 598, 1556, 596, 1559, 593, 1561, 591, 1564,
  598, 1556, 596, 1558, 594, 1561, 591, 1564, 598, 1556, 595, 1559,
  593, 1561, 591, 1564, 598, 1556, 596, 1559, 593, 1561, 591, 486,
  590, 1565, 597, 1557, 595, 1559, 593, 1562, 590, 488, 598, 478,
  598, 479, 597, 5158, 4453, 4375, 597, 480, 595, 1558, 594, 484,
  592, 1563, 589, 1565, 597, 1558, 594, 1560, 592, 485, 591, 487,
  589, 1565, 597, 1557, 594, 1560, 592, 1562, 590, 1565, 597, 479,
  596, 1558, 594, 1561, 591, 486, 590, 488, 598, 478, 598, 480,
  596, 1558, 594, 1561, 591, 1563, 599, 478, 598, 479, 596, 481,
  595, 482, 594, 484, 592, 485, 591, 486, 600, 478, 598, 479,
  597, 480, 595, 481, 595, 483, 593, 484, 592, 485, 591, 487,
  589, 488, 598, 1555, 596, 481, 594, 483, 593, 484, 592, 485,
  591, 1564, 598, 1556, 596, 1559, 593,
};

const uint32_t irExtraRaw120[] = {
  4532, 4226, 685, 1459, 685, 388, 683, 1458, 686, 414, 657, 414,
  657, 415, 656, 415, 656, 1487, 656, 415, 603, 469, 602, 469,
  602, 469, 602, 1541, 602, 469, 602, 469, 602, 469, 602, 469,
  602, 1541, 602, 468, 603, 468, 603, 468, 603, 1540, 603, 1541,
  602, 470, 601, 1543, 600, 1544, 600, 1545, 599, 1546, 598, 1547,
  597, 1570, 574, 1570, 574, 1570, 574, 1570, 574, 1570, 574, 1570,
  574, 1570, 574, 1570, 574, 1570, 574, 1570, 573, 1570, 574, 1570,
  574, 1570, 574, 498, 573, 1570, 573, 498, 573, 498, 573, 498,
  573, 498, 573, 5130, 4444, 4312, 598, 473, 598, 1546, 597, 473,
  598, 1545, 598, 1545, 599, 1545, 622, 1521, 623, 448, 623, 1520,
  623, 1519, 624, 1520, 599, 1544, 624, 448, 598, 1545, 623, 1520,
  624, 1520, 624, 1520, 622, 448, 599, 1544, 624, 1520, 623, 1520,
  623, 447, 624, 447, 624, 1519, 624, 447, 624, 447, 624, 447,
  624, 447, 624, 447, 624, 448, 623, 448, 623, 447, 624, 447,
  624, 447, 624, 448, 623, 447, 624, 447, 624, 447, 624, 447,
  624, 447, 624, 448, 623, 448, 623, 1520, 623, 448, 623, 1520,
  623, 1520, 623, 1520, 623, 1520, 623,
};

const uint32_t irExtraRaw121[] = {
  3495, 1645, 511, 1225, 488, 1202, 511, 382, 487, 383, 486, 383,
  486, 1225, 487, 383, 486, 383, 486, 1225, 487, 1225, 488, 383,
  486, 1225, 488, 383, 486, 383, 486, 1225, 516, 1196, 516, 355,
  515, 1196, 543, 1168, 517, 353, 516, 354, 514, 1196, 515, 355,
  513, 356, 512, 1200, 511, 359, 510, 360, 509, 384, 485, 384,
  485, 385, 484, 385, 484, 385, 484, 385, 484, 385, 484, 385,
  484, 385, 484, 385, 484, 385, 484, 385, 484, 385, 484, 385,
  484, 385, 484, 1228, 484, 385, 484, 385, 484, 1228, 484, 385,
  484, 385, 484, 385, 484, 385, 484, 385, 484, 1228, 484, 385,
  484, 385, 484, 385, 484, 385, 484, 1228, 484, 1228, 484, 1228,
  484, 385, 484, 385, 484, 385, 484, 385, 484, 385, 484, 385,
  484, 1228, 484, 385, 484, 385, 484, 1228, 484, 385, 484, 385,
  484, 385, 484, 385, 484, 385, 484, 385, 484, 385, 484, 385,
  484, 385, 484, 385, 484, 385, 484, 385, 484, 386, 483, 386,
  483, 386, 483, 386, 483, 386, 483, 386, 483, 386, 483, 386,
  483, 386, 483, 386, 483, 386, 483, 386, 483, 386, 483, 386,
  483, 386, 483, 386, 483, 386, 483, 1230, 483, 386, 483, 386,
  483, 386, 483, 386, 483, 386, 483, 386, 483, 1230, 483, 1229,
  483, 1230, 482, 1230, 483, 386, 483, 1229, 483, 386, 483,
};

const uint32_t irExtraRaw122[] = {
  3520, 1642, 515, 1199, 514, 1199, 514, 383, 486, 383, 486, 383,
  486, 1199, 514, 383, 486, 383, 486, 1199, 513, 1199, 514, 382,
  487, 1199, 513, 383, 486, 383, 486, 1226, 486, 1226, 486, 383,
  486, 1226, 486, 1226, 486, 383, 486, 383, 486, 1226, 486, 384,
  510, 359, 510, 1202, 510, 360, 509, 360, 509, 360, 509, 361,
  508, 361, 508, 361, 508, 361, 508, 361, 508, 361, 508, 361,
  508, 361, 508, 361, 508, 361, 508, 361, 508, 361, 508, 361,
  508, 361, 508, 361, 508, 361, 508, 361, 508, 1204, 508, 361,
  508, 361, 508, 361, 508, 361, 508, 361, 508, 1205, 508, 361,
  508, 361, 508, 361, 508, 361, 508, 1205, 507, 1205, 508, 1205,
  507, 361, 508, 362, 507, 362, 507, 361, 508, 362, 507, 361,
  508, 1205, 507, 362, 507, 362, 507, 1205, 508, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 361, 508, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 362, 507, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 362, 507, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 362, 507, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 1205, 507, 362, 507, 362,
  507, 362, 507, 362, 507, 362, 507, 362, 507, 1205, 507, 362,
  507, 1206, 506, 1206, 506, 362, 507, 1206, 507, 362, 507,
};

const uint32_t irExtraRaw123[] = {
  3480, 1701, 468, 1248, 467, 1250, 465, 407, 460, 411, 467, 405,
  462, 1255, 460, 412, 466, 405, 462, 1255, 460, 1257, 468, 404,
  463, 1253, 462, 410, 468, 404, 463, 1253, 462, 1255, 470, 402,
  465, 1252, 463, 1254, 461, 411, 467, 405, 462, 1254, 461, 411,
  467, 405, 462, 1254, 461, 411, 467, 405, 462, 409, 469, 403,
  464, 407, 460, 411, 467, 405, 462, 409, 469, 403, 464, 407,
  461, 411, 467, 405, 462, 409, 469, 403, 464, 407, 460, 411,
  467, 404, 463, 1254, 461, 410, 468, 404, 463, 1254, 461, 410,
  468, 404, 463, 408, 460, 412, 466, 406, 462, 1255, 460, 412,
  466, 406, 461, 410, 468, 404, 463, 1253, 462, 1255, 470, 1247,
  468, 404, 463, 409, 469, 402, 465, 406, 461, 411, 467, 1250,
  465, 407, 460, 1256, 469, 1248, 467, 1250, 465, 1252, 463, 410,
  468, 403, 464, 408, 460, 412, 466, 406, 461, 410, 468, 404,
  463, 408, 460, 412, 466, 406, 461, 410, 468, 404, 463, 408,
  459, 412, 466, 405, 462, 409, 469, 403, 464, 407, 460, 411,
  467, 405, 462, 409, 469, 403, 464, 407, 460, 411, 467, 405,
  462, 409, 469, 402, 465, 407, 460, 411, 467, 404, 463, 1253,
  462, 1255, 470, 402, 465, 406, 461, 1256, 469, 402, 465, 1252,
  463, 408, 470, 1248, 467, 1250, 465, 407, 460, 1256, 469,
};

const uint32_t irExtraRaw124[] = {
  3218, 1528, 453, 354, 439, 1134, 453, 366, 427, 354, 439, 1133,
  454, 354, 439, 1158, 429, 365, 428, 365, 428, 1159, 428, 1159,
  428, 1159, 428, 365, 428, 1158, 429, 365, 428, 1158, 429, 1158,
  429, 1158, 429, 365, 458, 354, 495, 353, 385, 354, 465, 1102,
  486, 1100, 487, 353, 438, 1102, 459, 1128, 459, 354, 439, 354,
  439, 1128, 458, 354, 439, 353, 440, 1129, 457, 353, 440, 354,
  439, 1132, 455, 1132, 455, 354, 439, 1132, 455, 1133, 454, 1133,
  454, 1133, 454, 354, 439, 1133, 454, 1133, 454, 1133, 454, 1133,
  454, 354, 439, 354, 439, 354, 439, 1133, 454, 353, 440, 354,
  439, 354, 439, 354, 439, 1134, 453, 1133, 454, 1133, 454, 1134,
  453, 354, 439, 353, 440, 1134, 453, 1134, 453, 353, 440, 354,
  439, 354, 439, 354, 439, 1134, 453, 1134, 453, 353, 440, 354,
  439, 1134, 453, 353, 440, 1134, 453, 1135, 452, 354, 440, 354,
  439, 354, 439, 354, 439, 1136, 451, 1135, 452, 354, 440, 354,
  439, 1135, 452, 1135, 452, 1136, 451, 1136, 451, 353, 440,
};

const uint32_t irExtraRaw125[] = {
  3195, 1551, 429, 365, 428, 1158, 429, 365, 429, 365, 428, 1158,
  429, 365, 428, 1158, 429, 366, 428, 365, 428, 1159, 428, 1158,
  429, 1159, 428, 364, 429, 1158, 429, 366, 428, 1158, 429, 1158,
  429, 1158, 429, 365, 428, 365, 428, 365, 429, 365, 428, 1158,
  429, 1158, 429, 365, 428, 1158, 429, 1158, 458, 354, 440, 353,
  441, 1128, 459, 353, 494, 353, 386, 1128, 486, 353, 441, 353,
  440, 1101, 459, 1128, 459, 353, 440, 1128, 459, 1127, 460, 1128,
  459, 1128, 459, 353, 440, 1129, 457, 1129, 458, 1130, 457, 1131,
  456, 353, 440, 354, 439, 354, 439, 1132, 455, 354, 439, 353,
  440, 354, 439, 354, 439, 1132, 455, 1132, 455, 1132, 455, 1132,
  455, 354, 440, 354, 439, 1133, 454, 1133, 454, 354, 439, 353,
  440, 354, 439, 353, 440, 1133, 454, 1133, 454, 353, 440, 353,
  440, 1133, 454, 353, 440, 1133, 454, 1133, 454, 1133, 454, 353,
  440, 353, 440, 353, 440, 1133, 454, 1133, 454, 353, 440, 353,
  440, 354, 439, 1133, 454, 1133, 454, 1133, 454, 354, 439,
};

const uint32_t irExtraRaw126[] = {
  3202, 1591, 383, 411, 383, 1206, 382, 413, 381, 413, 381, 1207,
  381, 412, 382, 1207, 381, 414, 380, 413, 381, 1209, 379, 1209,
  389, 1199, 389, 406, 387, 1200, 388, 406, 388, 1201, 387, 1201,
  387, 1202, 386, 409, 385, 409, 385, 411, 383, 409, 385, 1204,
  384, 1205, 383, 411, 383, 1206, 382, 413, 381, 1206, 382, 1208,
  380, 414, 380, 414, 380, 415, 389, 1198, 379, 416, 388, 1201,
  387, 405, 389, 406, 388, 1201, 387, 1202, 386, 1202, 386, 408,
  386, 1204, 384, 1206, 382, 410, 384, 1205, 383, 1207, 381, 1206,
  382, 1207, 381, 1207, 381, 415, 389, 403, 380, 1208, 380, 415,
  389, 405, 389, 405, 389, 406, 388, 1200, 388, 1201, 387, 1203,
  385, 407, 386, 1202, 386, 1205, 383, 1203, 385, 1204, 384, 412,
  382, 412, 382, 412, 382, 1206, 382, 413, 381, 413, 381, 414,
  380, 413, 381, 1208, 380, 1208, 380, 415, 389, 1199, 389, 1200,
  388, 1200, 388, 1201, 387, 1202, 386, 410, 384, 408, 386, 1202,
  386, 409, 385, 410, 384, 411, 383, 410, 384, 411, 383, 1206,
  382, 1206, 382, 1206, 382, 1208, 380, 1210, 388, 403, 380, 1210,
  388, 1200, 388, 405, 389, 406, 388, 406, 388, 406, 388, 407,
  387, 1203, 385, 408, 386, 409, 385, 1203, 385, 1203, 385, 410,
  384, 1205, 383, 1207, 381, 411, 383, 1206, 382, 1206, 382, 413,
  381, 414, 380, 1210, 388, 404, 379, 415, 379, 1209, 389, 405,
  389, 406, 388, 1201, 387, 1201, 387, 1201, 387, 1202, 386, 1204,
  384, 1203, 385, 1204, 384, 1205, 383, 412, 382, 412, 382, 413,
  381, 412, 382, 412, 382, 414, 380, 414, 380, 413, 381, 414,
  380, 1209, 389, 1199, 389, 1199, 389, 1200, 388, 1201, 387, 1201,
  387, 408, 386, 1201, 387, 408, 385, 409, 385, 410, 384, 410,
  384, 410, 384, 411, 383, 1205, 383,
};

const uint32_t irExtraRaw127[] = {
  3199, 1594, 380, 414, 380, 1208, 379, 415, 389, 405, 389, 1201,
  386, 407, 386, 1202, 385, 409, 384, 408, 385, 1203, 384, 1203,
  384, 1204, 383, 410, 383, 1206, 381, 412, 382, 1208, 379, 1207,
  380, 1209, 389, 404, 390, 406, 387, 405, 389, 406, 387, 1201,
  386, 1202, 385, 408, 385, 1204, 383, 409, 384, 1204, 383, 1205,
  382, 412, 382, 411, 382, 413, 380, 1206, 382, 414, 380, 1208,
  379, 414, 379, 416, 388, 1201, 386, 1201, 386, 1201, 386, 408,
  385, 1202, 385, 1204, 383, 1204, 383, 1206, 381, 1205, 382, 1207,
  380, 1207, 380, 1208, 390, 405, 388, 405, 389, 406, 387, 406,
  387, 406, 387, 407, 386, 408, 385, 1202, 385, 1204, 383, 1203,
  384, 411, 382, 1205, 382, 1205, 382, 1207, 380, 1207, 381, 414,
  390, 404, 379, 414, 380, 1210, 388, 406, 387, 408, 385, 406,
  387, 408, 385, 1202, 385, 1203, 384, 409, 384, 1205, 382, 1205,
  382, 1206, 381, 1206, 381, 1208, 379, 415, 389, 404, 389, 1199,
  388, 407, 386, 406, 387, 407, 386, 408, 385, 409, 384, 1202,
  385, 1204, 383, 1204, 383, 1204, 383, 1205, 382, 412, 381, 1208,
  379, 1208, 379, 415, 389, 404, 390, 406, 387, 406, 387, 407,
  386, 1200, 387, 409, 384, 408, 385, 1202, 385, 1205, 383, 410,
  383, 1205, 382, 1205, 382, 412, 381, 1207, 380, 1207, 380, 415,
  389, 404, 379, 1209, 389, 406, 387, 405, 388, 1200, 387, 408,
  385, 408, 385, 1202, 385, 1204, 383, 1204, 383, 1204, 383, 1208,
  379, 1207, 380, 1207, 380, 1208, 379, 416, 388, 405, 388, 407,
  386, 407, 386, 407, 386, 407, 386, 407, 386, 408, 385, 408,
  385, 1204, 383, 1204, 383, 1205, 382, 1205, 382, 1207, 380, 1208,
  379, 414, 379, 1210, 388, 406, 387, 406, 387, 406, 387, 407,
  386, 407, 386, 409, 384, 1203, 384,
};

const uint32_t irExtraRaw128[] = {
  3472, 1691, 441, 1285, 464, 1265, 443, 451, 408, 459, 410, 456,
  434, 1266, 462, 404, 434, 431, 459, 1271, 437, 1317, 432, 410,
  459, 1293, 435, 407, 431, 436, 433, 1321, 428, 1273, 435, 432,
  458, 1270, 438, 1314, 414, 426, 433, 432, 458, 1296, 412, 427,
  463, 408, 441, 1312, 406, 432, 437, 432, 437, 456, 434, 411,
  438, 425, 465, 404, 434, 433, 457, 414, 455, 414, 455, 414,
  434, 430, 460, 410, 439, 423, 436, 432, 458, 411, 438, 425,
  434, 459, 410, 430, 439, 428, 462, 405, 433, 1317, 411, 427,
  463, 430, 408, 432, 468, 439, 441, 406, 432, 1318, 431, 1268,
  440, 425, 454, 416, 463, 404, 434, 1291, 437, 1284, 455, 443,
  437, 1265, 432, 434, 456, 413, 435, 436, 433, 432, 437, 456,
  434, 1296, 432, 1266, 462, 409, 460, 1265, 463, 1309, 409, 429,
  461, 410, 439, 1287, 441, 1284, 434, 433, 436, 429, 440, 424,
  435, 1317, 411, 1312, 406, 459, 431, 414, 435, 1286, 463, 1265,
  463, 408, 441, 1280, 459, 1269, 439, 1311, 407, 434, 435, 460,
  430, 413, 435, 434, 435, 427, 463, 411, 438, 427, 442, 423,
  436, 431, 438, 428, 441, 450, 409, 434, 435, 456, 434, 413,
  456, 411, 437, 428, 431, 460, 409, 433, 436, 431, 438, 429,
  440, 427, 442, 422, 437, 426, 433, 445, 435, 457, 412, 432,
  437, 428, 441, 452, 407, 436, 464, 403, 456, 413, 466, 407,
  441, 428, 441, 428, 462, 411, 437, 426, 464, 405, 433, 434,
  435, 429, 440, 427, 442, 425, 434, 429, 440, 426, 433, 434,
  435, 432, 437, 434, 456, 416, 432, 432, 458, 409, 440, 1288,
  440, 1283, 435, 1288, 441, 429, 440, 453, 406, 1295, 433, 1290,
  439, 426, 443, 17056, 3607, 1696, 457, 1271, 437, 1291, 438, 429,
  461, 411, 469, 407, 462, 1292, 405, 461, 408, 433, 436, 1287,
  462, 1265, 432, 435, 434, 1289, 460, 411, 458, 409, 439, 1286,
  463, 1267, 441, 426, 433, 1319, 409, 1314, 414, 455, 414, 453,
  406, 1295, 433, 431, 459, 435, 434, 1269, 460, 410, 459, 410,
  439, 452, 438, 405, 433, 430, 439, 427, 463, 407, 441, 421,
  438, 429, 440, 426, 433, 435, 455, 412, 436, 428, 462, 409,
  460, 409, 440, 425, 434, 460, 409, 457, 412, 431, 438, 427,
  432, 1293, 435, 429, 440, 425, 434, 429, 440, 426, 433, 430,
  439, 1284, 434, 1315, 413, 425, 465, 405, 433, 434, 435, 1286,
  463, 1264, 464, 407, 462, 1266, 442, 425, 465, 405, 464, 409,
  440, 425, 434, 458, 432, 1271, 457, 1270, 438, 429, 461, 1298,
  410, 1318, 410, 454, 436, 410, 438, 1282, 457, 1271, 437, 430,
  439, 430, 439, 430, 460, 1270, 438, 1288, 440, 426, 433, 463,
  437, 1266, 442, 1282, 457, 415, 433, 1290, 439, 1282, 436, 1290,
  438, 452, 407, 430, 439, 428, 441, 421, 438, 429, 440, 427,
  463, 406, 442, 421, 459, 410, 459, 408, 461, 408, 440, 426,
  433, 456, 413, 430, 470, 408, 440, 450, 430, 422, 457, 414,
  434, 431, 438, 428, 441, 424, 455, 413, 435, 432, 437, 430,
  439, 425, 465, 407, 441, 449, 410, 431, 459, 408, 461, 417,
  463, 409, 439, 425, 434, 433, 436, 431, 438, 427, 463, 406,
  463, 410, 439, 431, 438, 424, 435, 432, 437, 452, 438, 405,
  433, 460, 409, 454, 436, 409, 439, 427, 442, 449, 431, 417,
  442, 429, 440, 1281, 437, 1286, 432, 1291, 458, 413, 435, 432,
  468, 1277, 431, 1295, 464, 402, 457,
};

const uint32_t irExtraRaw129[] = {
  3439, 1755, 439, 1262, 435, 1286, 432, 438, 441, 423, 456, 418,
  441, 1282, 436, 433, 436, 431, 438, 1285, 433, 1314, 435, 408,
  461, 1293, 435, 408, 440, 426, 433, 1289, 460, 1296, 412, 455,
  414, 1312, 406, 1319, 409, 429, 440, 429, 461, 1267, 441, 426,
  464, 406, 442, 1281, 437, 430, 439, 427, 432, 436, 464, 405,
  433, 432, 437, 458, 411, 456, 434, 422, 437, 428, 462, 412,
  436, 428, 441, 422, 457, 411, 437, 456, 413, 454, 405, 436,
  433, 434, 435, 427, 432, 435, 465, 404, 434, 435, 434, 431,
  459, 413, 435, 429, 440, 422, 437, 433, 457, 1270, 438, 1288,
  461, 410, 438, 426, 464, 404, 434, 1293, 435, 1315, 413, 423,
  436, 1287, 462, 407, 431, 434, 435, 435, 434, 433, 467, 415,
  433, 1318, 410, 1286, 463, 409, 439, 1284, 455, 1301, 438, 410,
  438, 426, 464, 1262, 456, 1269, 439, 429, 461, 410, 469, 407,
  462, 1268, 440, 1285, 433, 461, 408, 456, 413, 1284, 465, 1261,
  457, 414, 455, 1271, 468, 1277, 431, 1321, 438, 405, 433, 460,
  409, 430, 439, 426, 464, 407, 462, 407, 441, 450, 409, 434,
  435, 430, 439, 452, 438, 431, 438, 405, 464, 405, 464, 405,
  464, 409, 460, 409, 439, 430, 439, 427, 442, 423, 436, 460,
  430, 415, 433, 431, 438, 425, 434, 444, 435, 456, 413, 432,
  437, 427, 442, 425, 434, 436, 464, 429, 430, 439, 430, 417,
  442, 428, 441, 428, 462, 411, 437, 452, 438, 405, 433, 434,
  435, 456, 413, 427, 442, 425, 434, 455, 414, 427, 432, 435,
  434, 433, 436, 427, 463, 406, 432, 437, 442, 449, 430, 1268,
  460, 1265, 463, 1262, 466, 405, 464, 406, 442, 422, 437, 1289,
  439, 428, 441, 17052, 3577, 1746, 407, 1321, 407, 1294, 434, 460,
  409, 431, 459, 439, 409, 1288, 440, 429, 440, 431, 438, 1309,
  430, 1272, 456, 415, 464, 1289, 408, 433, 457, 412, 436, 1289,
  439, 1284, 465, 404, 434, 1292, 436, 1289, 439, 428, 441, 450,
  409, 1315, 413, 427, 442, 451, 408, 1294, 434, 432, 437, 430,
  439, 428, 462, 406, 432, 432, 458, 414, 455, 414, 434, 430,
  439, 428, 441, 426, 433, 436, 433, 432, 437, 454, 405, 438,
  441, 428, 431, 434, 456, 418, 441, 448, 431, 411, 437, 429,
  440, 425, 434, 433, 436, 458, 411, 425, 434, 433, 436, 457,
  412, 1287, 462, 1263, 455, 419, 461, 408, 440, 430, 439, 1310,
  429, 1272, 435, 460, 409, 1288, 440, 429, 461, 408, 441, 425,
  465, 405, 464, 407, 441, 1286, 432, 1291, 437, 432, 437, 1315,
  413, 1314, 414, 450, 440, 406, 442, 1283, 456, 1270, 458, 413,
  456, 413, 456, 413, 435, 1297, 431, 1294, 465, 404, 434, 433,
  436, 1314, 414, 1285, 433, 433, 436, 1288, 440, 1285, 464, 1264,
  433, 433, 436, 453, 416, 425, 434, 460, 409, 434, 435, 432,
  437, 454, 415, 423, 436, 431, 459, 424, 435, 430, 460, 413,
  435, 430, 439, 423, 456, 413, 435, 431, 438, 455, 414, 427,
  432, 435, 434, 455, 414, 426, 464, 406, 432, 437, 442, 422,
  457, 414, 434, 431, 438, 424, 435, 435, 455, 414, 455, 416,
  432, 433, 436, 457, 412, 426, 464, 410, 438, 453, 437, 412,
  436, 437, 463, 409, 439, 425, 434, 455, 414, 426, 433, 437,
  432, 433, 436, 433, 436, 457, 433, 412, 436, 453, 437, 406,
  432, 435, 465, 1266, 462, 1263, 434, 1318, 410, 426, 464, 410,
  438, 426, 433, 1293, 435, 434, 435,
};

const uint32_t irExtraRaw130[] = {
  1299, 412, 1270, 412, 426, 1225, 1299, 412, 1244, 438, 399, 1279,
  400, 1254, 451, 1253, 426, 1253, 426, 1253, 426, 1254, 1268, 7130,
  1266, 416, 1266, 416, 421, 1258, 1267, 416, 1267, 416, 422, 1258,
  421, 1258, 422, 1258, 421, 1259, 421, 1258, 422, 1258, 1266, 7132,
  1266, 417, 1266, 417, 421, 1259, 1266, 417, 1266, 417, 421, 1259,
  421, 1259, 421, 1259, 421, 1259, 421, 1259, 421, 1259, 1266, 7133,
  1265, 417, 1266, 417, 421, 1259, 1266, 418, 1266, 417, 422, 1259,
  421, 1260, 420, 1259, 421, 1259, 421, 1259, 420, 1259, 1266, 7133,
  1265, 418, 1266, 418, 421, 1260, 1265, 418, 1266, 418, 421, 1260,
  420, 1260, 420, 1260, 420, 1260, 420, 1260, 420, 1260, 1266, 7135,
  1265, 418, 1266, 419, 420, 1260, 1266, 419, 1266, 419, 420, 1261,
  420, 1261, 420, 1261, 420, 1261, 420, 1261, 420, 1261, 1265, 7137,
  1264, 420, 1265, 420, 419, 1262, 1266, 420, 1265, 420, 420, 1262,
  420, 1262, 419, 1262, 420, 1262, 419, 1262, 419, 1262, 1265, 7139,
  1264, 421, 1265, 421, 419, 1263, 1265, 421, 1265, 421, 418, 1264,
  418, 1264, 418, 1263, 419, 1264, 417, 1264, 418, 1264, 1264, 7142,
  1263, 423, 1263, 422, 418, 1288, 1241, 446, 1240, 446, 394, 1288,
  394, 1289, 393, 1288, 394, 1288, 394, 1288, 394, 1288, 1241, 7168,
  1240, 446, 1241, 446, 394, 1289, 1241, 447, 1241, 447, 394, 1289,
  394, 1289, 394, 1289, 394, 1289, 394, 1289, 394, 1289, 1241, 7171,
  1239, 447, 1240, 447, 393, 1290, 1240, 447, 1241, 447, 393, 1290,
  393, 1290, 393, 1290, 393, 1290, 393, 1290, 393, 1290, 1241, 7174,
  1239, 447, 1241, 448, 392, 1291, 1240, 448, 1241, 448, 393, 1291,
  393, 1292, 392, 1292, 392, 1291, 393, 1292, 392, 1291, 1240, 7177,
  1239, 449, 1240, 449, 392, 1292, 1240, 449, 1240, 449, 392, 1293,
  392, 1293, 392, 1292, 392, 1293, 391, 1293, 392, 1293, 1239, 7179,
  1239, 450, 1239, 450, 391, 1294, 1239, 450, 1240, 451, 391, 1294,
  391, 1294, 391, 1295, 390, 1294, 391, 1295, 390, 1294, 1239, 7184,
  1237, 452, 1238, 475, 367, 1319, 1215, 476, 1215, 476, 366, 1320,
  366, 1320, 366, 1320, 365, 1320, 365, 1320, 366, 1320, 1215, 7211,
  1213, 476, 1190, 501, 366, 1321, 1215, 477, 1214, 477, 365, 1322,
  364, 1321, 365, 1322, 364, 1321, 365, 1321, 365, 1322, 1213, 7214,
  1213, 478, 1213, 478, 364, 1322, 1189, 503, 1189, 503, 364, 1323,
  339, 1348, 338, 1348, 364, 1323, 363, 1324, 362, 1323, 1213, 7218,
  1187, 528, 1164, 529, 313, 1374, 1163, 529, 1164, 529, 313, 1375,
  313, 1375, 312, 1375, 312, 1374, 313, 1374, 313, 1375, 1163, 7271,
  1162, 530, 1163, 530, 312, 1376, 1163, 531, 1162, 530, 312, 1377,
  311, 1378, 310, 1402, 285, 1378, 310, 1402, 285, 1403, 1136, 7300,
  1136, 557, 1136, 557, 285, 1404, 1136, 558, 1136, 559, 283, 1404,
  285, 1431, 257, 1405, 284, 1431, 257, 1431, 257, 1431, 1109, 7330,
  1108, 585, 1109, 586, 256, 1432, 1109, 586, 1109, 638, 177, 1486,
  222, 1468, 221, 1468, 221, 1468, 221, 1467, 221, 1495, 1055, 7413,
  1028, 666, 1029, 2500, 885,
};

const uint32_t irExtraRaw131[] = {
  4385, 4401, 488, 1633, 514, 553, 519, 1626, 519, 552, 518, 581,
  517, 555, 491, 579, 493, 1626, 517, 1654, 490, 581, 491, 555,
  516, 555, 517, 581, 489, 582, 491, 1652, 491, 555, 517, 581,
  476, 1643, 518, 580, 490, 582, 488, 582, 493, 1653, 490, 1628,
  517, 1655, 488, 1682, 463, 1655, 489, 1628, 516, 1653, 490, 1655,
  491, 1652, 491, 1655, 491, 1680, 436, 1683, 490, 1653, 491, 1654,
  491, 1653, 492, 1655, 487, 1655, 488, 1656, 491, 1679, 464, 581,
  490, 1655, 487, 582, 491, 1683, 462, 1655, 489, 610, 436, 1707,
  463, 583, 490, 5289, 4282, 4424, 491, 582, 490, 1654, 489, 610,
  462, 1654, 488, 1709, 358, 1734, 489, 1654, 486, 586, 489, 555,
  516, 1629, 515, 1654, 489, 1682, 461, 1709, 461, 1656, 464, 606,
  465, 1653, 491, 1680, 462, 609, 462, 1707, 462, 1628, 487, 1684,
  463, 608, 461, 582, 489, 664, 278, 715, 488, 556, 486, 638,
  489, 554, 492, 609, 462, 553, 518, 607, 462, 610, 437, 660,
  438, 581, 488, 607, 466, 607, 463, 635, 437, 609, 460, 611,
  460, 638, 437, 1706, 434, 636, 435, 1684, 461, 609, 461, 560,
  511, 1708, 435, 611, 459, 1684, 461,
};

const uint32_t irExtraRaw132[] = {
  4371, 4390, 527, 1618, 527, 545, 526, 1618, 527, 520, 552, 545,
  527, 545, 527, 521, 551, 1593, 552, 545, 527, 545, 527, 545,
  527, 546, 526, 545, 527, 545, 526, 1618, 527, 545, 527, 545,
  527, 1618, 527, 545, 527, 545, 527, 520, 552, 1618, 527, 1593,
  551, 1618, 527, 1618, 527, 1618, 527, 1618, 526, 1618, 526, 1594,
  579, 1591, 527, 1618, 526, 1619, 527, 1618, 526, 1593, 552, 1618,
  527, 1618, 527, 1593, 552, 1618, 527, 1618, 527, 1618, 527, 1618,
  527, 1618, 527, 545, 527, 1618, 527, 1618, 527, 545, 527, 1619,
  554, 518, 527, 5203, 4373, 4391, 526, 545, 527, 1618, 527, 545,
  527, 1593, 552, 1618, 527, 1595, 550, 1618, 528, 544, 528, 1618,
  527, 1618, 526, 1594, 552, 1617, 528, 1619, 526, 1618, 527, 545,
  527, 1618, 527, 1619, 527, 519, 553, 1618, 527, 1618, 527, 1618,
  527, 522, 550, 545, 527, 546, 526, 545, 555, 517, 528, 545,
  527, 545, 528, 544, 527, 521, 551, 522, 550, 545, 527, 545,
  526, 521, 552, 521, 551, 545, 527, 544, 528, 545, 527, 545,
  527, 545, 527, 545, 527, 545, 528, 1618, 527, 545, 527, 545,
  527, 1619, 527, 545, 527, 1619, 526,
};

const uint32_t irExtraRaw134[] = {
  9035, 4453, 696, 1601, 695, 507, 693, 508, 692, 1607, 689, 514,
  687, 515, 687, 515, 686, 515, 687, 516, 686, 1610, 687, 538,
  664, 538, 664, 538, 663, 539, 663, 539, 663, 539, 663, 539,
  663, 539, 663, 539, 663, 539, 663, 539, 663, 1634, 663, 539,
  663, 539, 662, 539, 663, 539, 663, 539, 663, 539, 663, 1635,
  662, 539, 663, 1635, 662, 539, 663, 539, 663, 1635, 662, 539,
  663, 19937, 688, 514, 687, 514, 688, 514, 687, 514, 688, 514,
  688, 514, 688, 515, 687, 514, 688, 515, 686, 515, 687, 515,
  687, 515, 687, 516, 686, 1611, 686, 516, 686, 539, 663, 515,
  687, 539, 663, 539, 663, 539, 663, 539, 662, 539, 663, 539,
  663, 539, 663, 539, 663, 539, 663, 539, 663, 540, 662, 1635,
  662, 1635, 662, 1635, 662, 540, 662,
};

const uint32_t irExtraRaw135[] = {
  9034, 4455, 670, 1627, 695, 507, 693, 508, 692, 510, 690, 514,
  688, 514, 688, 514, 688, 514, 687, 514, 688, 1609, 688, 514,
  688, 514, 688, 514, 688, 514, 688, 515, 687, 515, 687, 514,
  688, 515, 687, 515, 687, 515, 687, 515, 686, 1611, 686, 515,
  687, 515, 687, 516, 686, 517, 685, 517, 685, 516, 686, 1612,
  685, 540, 662, 1635, 662, 540, 662, 540, 662, 1635, 662, 540,
  662, 19937, 688, 514, 688, 514, 688, 514, 688, 514, 688, 514,
  688, 514, 688, 514, 688, 514, 687, 515, 687, 515, 687, 515,
  687, 515, 687, 515, 686, 1611, 686, 515, 687, 516, 686, 516,
  686, 539, 662, 517, 685, 516, 686, 539, 663, 539, 663, 540,
  662, 540, 662, 540, 662, 540, 661, 540, 662, 540, 662, 1635,
  662, 1635, 662, 1636, 661, 1635, 662,
};

const uint32_t irExtraRaw136[] = {
  3489, 1725, 493, 375, 493, 1167, 569, 375, 491, 373, 492, 372,
  493, 374, 492, 373, 493, 372, 493, 373, 442, 423, 492, 375,
  493, 372, 492, 378, 490, 1245, 443, 423, 493, 374, 491, 375,
  490, 374, 442, 424, 492, 374, 491, 379, 440, 1293, 492, 1245,
  443, 1294, 442, 423, 491, 379, 441, 1296, 491, 375, 441, 423,
  442, 423, 442, 425, 441, 423, 442, 425, 440, 424, 441, 425,
  441, 424, 441, 421, 444, 424, 441, 425, 441, 423, 442, 423,
  442, 423, 442, 453, 413, 424, 442, 451, 414, 424, 441, 426,
  440, 424, 441, 424, 441, 424, 441, 425, 441, 424, 441, 424,
  441, 424, 441, 426, 440, 425, 440, 427, 442, 1322, 413, 1296,
  442, 424, 441, 423, 442, 424, 441, 424, 442, 427, 441, 9994,
  3463, 1755, 440, 428, 441, 1296, 441, 426, 440, 425, 440, 426,
  439, 425, 440, 426, 440, 423, 442, 425, 440, 425, 440, 372,
  494, 425, 440, 428, 440, 1297, 440, 426, 440, 425, 440, 426,
  439, 426, 439, 427, 439, 425, 440, 429, 439, 1297, 439, 1297,
  439, 1297, 440, 426, 439, 429, 440, 1299, 439, 426, 439, 426,
  439, 428, 437, 427, 439, 426, 439, 426, 439, 427, 438, 427,
  439, 427, 438, 427, 438, 427, 438, 429, 437, 427, 414, 451,
  414, 451, 414, 418, 447, 1323, 414, 452, 413, 455, 414, 1325,
  413, 452, 413, 452, 413, 452, 413, 453, 413, 452, 413, 456,
  413, 1324, 413, 453, 413, 452, 413, 453, 412, 452, 413, 454,
  412, 453, 412, 453, 412, 453, 412, 452, 413, 1324, 412, 1323,
  412, 1324, 412, 1324, 412, 1325, 412, 456, 413, 1324, 412, 404,
  461, 1325, 412, 453, 412, 453, 412, 454, 412, 453, 412, 453,
  412, 454, 411, 455, 411, 453, 412, 453, 412, 453, 412, 454,
  412, 453, 412, 453, 412, 453, 412, 454, 413, 453, 412, 457,
  412, 1323, 413, 1324, 413, 1324, 412, 453, 412, 453, 412, 454,
  413, 453, 412, 453, 412, 453, 412, 454, 412, 452, 413, 456,
  412, 1323, 413, 1324, 413, 1323, 414, 453, 412, 452, 413, 453,
  413, 452, 413, 452, 413, 452, 413, 453, 413, 450, 415, 452,
  413, 452, 413, 453, 413, 452, 413, 451, 439, 427, 438, 428,
  439, 430, 439, 1298, 439, 426, 439, 428, 438, 426, 439, 428,
  437, 426, 439, 427, 438, 1298, 439, 427, 438, 426, 439, 427,
  439, 426, 439, 426, 439, 425, 440, 427, 440, 426, 439, 426,
  439, 426, 439, 425, 441, 426, 439, 425, 440, 425, 440, 427,
  439, 426, 439, 425, 440, 429, 439, 1297, 440, 1297, 440, 425,
  440, 425, 440, 426, 441, 427, 440,
};

const uint32_t irExtraRaw137[] = {
  3496, 1721, 467, 399, 466, 1264, 466, 398, 467, 429, 436, 398,
  467, 429, 436, 429, 436, 398, 467, 399, 466, 397, 495, 428,
  437, 398, 467, 398, 467, 1295, 435, 429, 436, 429, 436, 429,
  436, 399, 466, 429, 436, 400, 465, 429, 436, 1265, 465, 1264,
  466, 1264, 466, 399, 493, 398, 467, 1295, 435, 429, 436, 399,
  466, 398, 467, 399, 466, 398, 467, 399, 466, 397, 468, 399,
  466, 398, 467, 429, 436, 398, 467, 399, 466, 398, 494, 429,
  436, 398, 467, 400, 465, 399, 466, 398, 467, 429, 436, 429,
  436, 400, 465, 399, 466, 398, 467, 399, 466, 399, 466, 399,
  466, 429, 463, 397, 468, 399, 466, 399, 466, 1264, 466, 1265,
  465, 399, 466, 399, 466, 399, 466, 398, 467, 429, 436, 9976,
  3494, 1725, 436, 399, 466, 1267, 490, 399, 466, 429, 436, 429,
  436, 399, 466, 398, 467, 399, 466, 398, 467, 399, 466, 398,
  467, 428, 437, 398, 467, 1264, 466, 429, 436, 398, 494, 428,
  437, 429, 436, 399, 466, 428, 437, 399, 466, 1262, 468, 1294,
  436, 1264, 467, 428, 437, 398, 467, 1262, 468, 399, 466, 398,
  467, 429, 436, 399, 466, 398, 494, 400, 465, 399, 466, 398,
  467, 399, 466, 400, 465, 398, 467, 399, 466, 399, 466, 1264,
  466, 399, 466, 1294, 436, 1264, 467, 398, 467, 1265, 465, 399,
  493, 399, 466, 399, 466, 1265, 465, 1266, 464, 399, 466, 1295,
  435, 1265, 465, 399, 466, 401, 464, 399, 466, 399, 466, 398,
  467, 399, 466, 399, 466, 399, 493, 399, 466, 1264, 466, 1265,
  465, 1264, 466, 399, 466, 400, 465, 401, 464, 399, 466, 1266,
  464, 399, 466, 399, 466, 399, 466, 399, 466, 399, 466, 398,
  467, 400, 492, 399, 466, 429, 436, 401, 464, 400, 465, 398,
  467, 400, 465, 399, 466, 399, 466, 399, 466, 400, 465, 429,
  436, 1265, 465, 1294, 436, 1264, 467, 400, 492, 400, 465, 400,
  465, 399, 466, 400, 465, 400, 465, 399, 466, 400, 465, 400,
  465, 1267, 463, 1265, 465, 1265, 465, 399, 466, 400, 465, 399,
  466, 398, 494, 399, 466, 399, 466, 399, 520, 346, 465, 399,
  520, 347, 464, 400, 465, 400, 465, 429, 490, 345, 520, 346,
  520, 345, 466, 1265, 519, 345, 493, 399, 519, 1241, 436, 399,
  466, 399, 520, 346, 465, 1265, 465, 399, 520, 345, 466, 400,
  519, 345, 519, 346, 520, 346, 519, 344, 467, 400, 519, 345,
  493, 398, 467, 399, 520, 345, 466, 400, 465, 398, 521, 344,
  467, 429, 490, 1212, 465, 1265, 519, 346, 519, 345, 520, 375,
  436, 1265, 465, 400, 519, 1210, 493,
};

const uint32_t irExtraRaw138[] = {
  3472, 1744, 416, 457, 415, 1306, 418, 463, 419, 466, 416, 473,
  419, 474, 418, 478, 414, 457, 415, 458, 414, 463, 419, 462,
  420, 465, 417, 472, 420, 1316, 418, 479, 413, 458, 414, 459,
  413, 464, 418, 463, 419, 466, 416, 473, 419, 1318, 416, 1324,
  420, 1295, 418, 454, 418, 459, 413, 1312, 422, 463, 419, 470,
  422, 471, 421, 475, 417, 454, 418, 455, 417, 460, 422, 459,
  413, 472, 420, 469, 413, 480, 412, 485, 417, 453, 419, 454,
  418, 459, 413, 468, 414, 471, 421, 468, 414, 479, 413, 484,
  418, 452, 420, 453, 419, 458, 414, 468, 414, 471, 421, 467,
  415, 478, 414, 483, 419, 451, 421, 453, 419, 1301, 412, 1312,
  422, 463, 419, 470, 422, 471, 421, 476, 416, 433, 418, 10535,
  3469, 1746, 414, 459, 413, 1308, 415, 465, 417, 468, 414, 475,
  417, 476, 416, 481, 421, 449, 413, 461, 421, 455, 417, 465,
  417, 467, 415, 474, 418, 1319, 415, 482, 420, 450, 422, 451,
  421, 457, 415, 466, 416, 469, 413, 476, 416, 1320, 414, 1327,
  417, 1297, 416, 457, 415, 462, 420, 1305, 419, 466, 416, 473,
  419, 474, 418, 478, 414, 457, 415, 458, 414, 463, 419, 462,
  420, 465, 417, 472, 420, 473, 419, 477, 415, 456, 416, 1301,
  412, 464, 418, 463, 419, 1310, 413, 1319, 415, 1321, 413, 485,
  417, 453, 419, 454, 418, 459, 413, 1312, 422, 1307, 416, 472,
  420, 1317, 416, 480, 412, 459, 413, 460, 412, 465, 417, 464,
  418, 467, 415, 474, 418, 475, 417, 479, 413, 1302, 422, 1295,
  418, 1302, 421, 1303, 421, 1308, 415, 473, 419, 1318, 416, 481,
  421, 1293, 420, 1296, 417, 460, 412, 1313, 421, 1307, 416, 473,
  419, 473, 419, 478, 414, 457, 415, 458, 414, 463, 419, 462,
  420, 465, 417, 472, 420, 473, 419, 477, 415, 456, 416, 457,
  415, 1306, 418, 1307, 416, 1312, 422, 467, 415, 478, 414, 483,
  419, 451, 421, 452, 420, 457, 415, 467, 415, 469, 413, 476,
  416, 1321, 413, 1328, 416, 1298, 415, 458, 414, 463, 419, 462,
  420, 465, 417, 472, 420, 472, 420, 477, 415, 456, 416, 457,
  415, 462, 420, 461, 421, 464, 418, 470, 422, 471, 421, 476,
  416, 454, 418, 1299, 414, 463, 419, 461, 421, 464, 418, 471,
  421, 472, 420, 477, 415, 1299, 414, 459, 413, 464, 418, 463,
  419, 466, 416, 473, 419, 473, 419, 478, 414, 457, 415, 458,
  414, 463, 419, 462, 420, 465, 417, 472, 420, 473, 419, 477,
  415, 456, 416, 457, 415, 1306, 417, 1307, 416, 468, 414, 1319,
  415, 478, 414, 483, 419, 430, 421,
};

const uint32_t irExtraRaw139[] = {
  3473, 1716, 444, 455, 417, 1304, 420, 461, 421, 464, 418, 471,
  421, 471, 421, 476, 416, 455, 417, 456, 416, 461, 421, 460,
  412, 473, 419, 469, 413, 1324, 420, 477, 415, 455, 417, 457,
  415, 462, 420, 461, 421, 463, 419, 470, 422, 1315, 419, 1321,
  413, 1302, 422, 451, 421, 456, 416, 1309, 414, 470, 422, 467,
  415, 478, 414, 482, 420, 451, 421, 452, 420, 457, 415, 466,
  416, 469, 413, 476, 416, 477, 415, 481, 421, 450, 412, 461,
  421, 456, 416, 465, 417, 468, 414, 474, 418, 475, 417, 480,
  412, 458, 414, 459, 413, 464, 418, 463, 419, 466, 416, 473,
  419, 474, 418, 478, 414, 457, 415, 458, 414, 1307, 417, 1308,
  416, 469, 413, 476, 416, 477, 415, 481, 421, 428, 413, 10540,
  3465, 1751, 419, 454, 418, 1302, 422, 459, 413, 472, 420, 469,
  413, 480, 412, 485, 417, 453, 419, 454, 418, 459, 413, 468,
  414, 471, 421, 468, 414, 1322, 422, 475, 417, 454, 418, 455,
  417, 460, 412, 469, 413, 472, 420, 468, 414, 1323, 421, 1320,
  414, 1300, 413, 460, 412, 465, 417, 1307, 417, 468, 414, 475,
  417, 476, 416, 481, 421, 449, 413, 460, 422, 455, 417, 464,
  418, 467, 415, 474, 418, 474, 418, 479, 413, 458, 414, 459,
  413, 464, 418, 463, 419, 1309, 415, 1318, 416, 1321, 413, 484,
  418, 452, 420, 453, 419, 458, 414, 1311, 413, 1316, 418, 471,
  421, 1315, 419, 478, 414, 457, 415, 458, 414, 463, 419, 462,
  420, 465, 417, 472, 420, 472, 420, 477, 415, 1299, 414, 1302,
  422, 1299, 414, 1310, 414, 1315, 419, 470, 422, 1315, 419, 478,
  414, 1300, 413, 1303, 421, 456, 416, 1309, 415, 1314, 420, 469,
  413, 480, 412, 485, 417, 453, 419, 454, 418, 459, 413, 468,
  414, 471, 421, 468, 414, 479, 413, 484, 418, 452, 420, 453,
  419, 1302, 422, 1303, 421, 1307, 417, 473, 419, 473, 419, 478,
  414, 457, 415, 458, 414, 463, 419, 462, 420, 465, 417, 471,
  421, 1316, 418, 1322, 422, 1293, 420, 452, 420, 457, 415, 466,
  416, 469, 413, 476, 416, 477, 415, 482, 420, 450, 422, 451,
  421, 456, 416, 465, 417, 468, 414, 475, 417, 476, 416, 480,
  412, 459, 413, 1304, 420, 457, 415, 466, 416, 469, 413, 476,
  416, 477, 415, 481, 421, 1293, 420, 453, 419, 458, 414, 467,
  415, 470, 412, 477, 415, 477, 415, 482, 420, 450, 422, 451,
  421, 456, 416, 465, 417, 468, 414, 475, 417, 476, 416, 481,
  421, 449, 413, 1304, 420, 457, 415, 1310, 414, 471, 421, 1311,
  413, 481, 421, 475, 417, 432, 419,
};

const uint32_t irExtraRaw140[] = {
  3545, 3410, 937, 803, 936, 2542, 937, 803, 936, 832, 907, 832,
  933, 2545, 933, 2546, 931, 809, 928, 813, 925, 2580, 899, 839,
  900, 840, 900, 839, 900, 2580, 899, 2580, 899, 840, 899, 840,
  900, 2580, 899, 840, 900, 840, 900, 839, 900, 840, 899, 840,
  900, 840, 899, 840, 900, 2580, 899, 840, 899, 840, 899, 840,
  900, 840, 900, 840, 899, 840, 3511, 3449, 898, 841, 898, 2581,
  898, 840, 900, 840, 899, 841, 898, 2581, 898, 2581, 899, 840,
  899, 841, 898, 2581, 898, 841, 898, 841, 898, 841, 898, 2581,
  898, 2581, 898, 841, 898, 841, 898, 2581, 899, 841, 898, 841,
  898, 841, 899, 841, 898, 841, 898, 842, 898, 841, 898, 2581,
  898, 841, 898, 842, 897, 842, 897, 842, 897, 842, 898, 842,
  3509, 3450, 897, 13896, 3509, 3451, 896, 842, 897, 843, 897, 843,
  896, 843, 896, 2583, 896, 843, 897, 843, 896, 2583, 896, 844,
  895, 844, 895, 868, 871, 869, 871, 2609, 870, 869, 871, 869,
  870, 2609, 870, 869, 871, 2609, 870, 2609, 870, 869, 871, 2609,
  870, 2609, 870, 869, 870, 869, 870, 869, 870, 2609, 870, 2609,
  870, 869, 871, 2609, 870, 2610, 869, 870, 869, 870, 3482, 3478,
  869, 870, 869, 870, 869, 870, 870, 870, 869, 2610, 869, 870,
  869, 870, 870, 2610, 869, 871, 869, 871, 869, 871, 868, 871,
  869, 2611, 868, 871, 868, 871, 869, 2611, 868, 872, 867, 2611,
  869, 2611, 868, 871, 868, 2612, 867, 2612, 868, 872, 867, 897,
  842, 897, 843, 2637, 843, 2637, 842, 897, 843, 2637, 843, 2637,
  842, 898, 842, 898, 3454, 3506, 841,
};

const uint32_t irExtraRaw141[] = {
  4427, 4332, 595, 1555, 595, 481, 594, 1556, 594, 507, 567, 507,
  567, 507, 567, 506, 569, 1582, 568, 506, 568, 507, 567, 507,
  591, 485, 590, 485, 590, 485, 590, 1562, 588, 487, 588, 487,
  588, 1562, 589, 1562, 588, 487, 588, 1562, 589, 487, 588, 487,
  588, 487, 588, 1562, 589, 1562, 589, 1562, 589, 1562, 588, 1562,
  588, 1562, 588, 1562, 589, 1562, 588, 1562, 588, 1562, 589, 1562,
  588, 1562, 588, 1562, 588, 1562, 589, 1562, 588, 1562, 588, 1562,
  588, 1562, 588, 1562, 588, 487, 588, 486, 589, 1562, 588, 486,
  589, 486, 589, 5156, 4447, 4340, 588, 487, 588, 1562, 588, 486,
  589, 1562, 588, 1562, 588, 1562, 588, 1562, 588, 486, 589, 1562,
  588, 1562, 588, 1562, 588, 1562, 588, 1562, 588, 1562, 588, 486,
  589, 1562, 588, 1562, 588, 486, 589, 486, 589, 1562, 588, 486,
  589, 1562, 588, 1562, 588, 1562, 588, 486, 589, 486, 589, 486,
  589, 486, 589, 486, 589, 487, 588, 487, 588, 487, 588, 487,
  588, 487, 588, 487, 588, 487, 588, 486, 589, 487, 588, 487,
  588, 487, 588, 487, 588, 487, 588, 487, 588, 1563, 587, 1562,
  588, 487, 588, 1562, 588, 1563, 587,
};

const uint32_t irExtraRaw142[] = {
  4425, 4333, 594, 1583, 567, 483, 592, 1583, 567, 508, 567, 507,
  567, 508, 567, 507, 568, 1582, 568, 1582, 568, 507, 567, 507,
  567, 508, 591, 485, 590, 486, 589, 1562, 588, 487, 588, 487,
  588, 1563, 588, 1562, 588, 487, 588, 1563, 587, 487, 588, 487,
  588, 487, 588, 1563, 588, 1563, 587, 1563, 588, 1563, 587, 1563,
  587, 1563, 587, 1563, 587, 1563, 587, 1563, 588, 1563, 588, 1563,
  587, 1563, 587, 1563, 587, 1563, 588, 1563, 588, 1563, 587, 488,
  587, 1563, 587, 1563, 588, 488, 587, 488, 587, 1563, 587, 487,
  588, 488, 587, 5157, 4447, 4340, 588, 487, 588, 1563, 587, 488,
  587, 1563, 588, 1563, 587, 1563, 587, 1563, 587, 487, 588, 487,
  588, 1563, 588, 1563, 587, 1563, 587, 1563, 587, 1563, 587, 487,
  588, 1563, 587, 1563, 587, 488, 587, 488, 587, 1563, 587, 488,
  587, 1564, 586, 1563, 587, 1563, 587, 488, 587, 488, 587, 488,
  587, 488, 587, 488, 587, 488, 587, 488, 587, 488, 587, 489,
  586, 489, 586, 489, 586, 489, 586, 489, 586, 489, 586, 489,
  586, 489, 586, 1565, 585, 513, 562, 513, 562, 1565, 585, 1589,
  561, 490, 585, 1588, 562, 1588, 562,
};

const uint32_t irExtraRaw145[] = {
  9026, 4518, 591, 1706, 564, 1709, 561, 581, 564, 579, 566, 579,
  566, 580, 565, 1686, 595, 1708, 562, 1709, 561, 1711, 569, 1705,
  565, 578, 567, 1683, 587, 1690, 591, 1687, 593, 577, 568, 573,
  562, 579, 566, 577, 568, 575, 560, 584, 561, 1689, 591, 1686,
  594, 1682, 588, 579, 566, 576, 569, 574, 561, 582, 563, 581,
  564, 582, 563, 558, 587, 583, 562, 579, 566, 575, 560, 583,
  562, 581, 564, 580, 565, 1686, 594, 1683, 587, 583, 562, 579,
  566, 576, 569, 574, 561, 582, 563, 581, 564, 582, 563, 558,
  587, 582, 563, 578, 567, 575, 560, 582, 563, 580, 565, 579,
  566, 1684, 586, 561, 594, 575, 560, 581, 564, 578, 567, 576,
  559, 584, 561, 583, 562, 558, 587, 560, 585, 584, 561, 580,
  565, 577, 568, 574, 561, 582, 563, 581, 564, 556, 589, 558,
  587, 582, 563, 578, 567, 575, 560, 582, 563, 580, 565, 579,
  566, 1684, 586, 561, 594, 576, 559, 582, 563, 578, 567, 576,
  559, 584, 561, 583, 562, 558, 587, 560, 595, 574, 561, 1711,
  559, 582, 563, 1711, 559, 584, 561, 583, 562, 557, 588, 559,
  586, 584, 561, 1711, 559, 1713, 567, 1705, 565, 1710, 560, 1689,
  591, 1686, 594, 552, 593, 1706, 564,
};

const uint32_t irExtraRaw146[] = {
  9026, 4519, 590, 1654, 616, 1657, 623, 574, 561, 582, 563, 582,
  563, 583, 562, 1688, 592, 1656, 675, 1627, 593, 1650, 620, 1654,
  677, 521, 563, 1660, 620, 1656, 614, 1664, 616, 581, 564, 578,
  567, 575, 560, 582, 563, 581, 564, 579, 566, 1684, 596, 1655,
  615, 1661, 619, 577, 568, 574, 561, 581, 564, 580, 565, 579,
  566, 580, 565, 582, 563, 581, 564, 577, 568, 574, 561, 582,
  563, 580, 565, 579, 566, 1657, 613, 1664, 616, 582, 563, 578,
  567, 575, 560, 583, 562, 581, 564, 580, 565, 582, 563, 584,
  561, 582, 563, 578, 567, 575, 560, 583, 562, 581, 564, 580,
  565, 1659, 621, 579, 566, 578, 567, 574, 561, 581, 564, 579,
  566, 577, 568, 576, 569, 577, 568, 579, 566, 578, 567, 574,
  561, 580, 565, 578, 567, 576, 569, 575, 560, 587, 568, 579,
  566, 577, 568, 573, 562, 580, 565, 578, 567, 576, 569, 575,
  560, 586, 569, 552, 593, 577, 568, 573, 562, 580, 565, 577,
  568, 576, 559, 585, 560, 586, 569, 552, 593, 576, 569, 1703,
  567, 575, 560, 1713, 567, 577, 568, 576, 569, 577, 568, 553,
  592, 578, 567, 1704, 566, 1707, 563, 1656, 614, 1662, 618, 1659,
  621, 577, 568, 553, 592, 1706, 564,
};

const uint32_t irExtraRaw147[] = {
  4412, 4413, 548, 1606, 548, 530, 601, 1552, 602, 1552, 601, 475,
  601, 475, 548, 1606, 548, 528, 548, 528, 548, 1605, 548, 528,
  548, 529, 547, 1607, 546, 1608, 546, 531, 545, 1610, 544, 534,
  542, 1635, 519, 1635, 519, 1635, 519, 1635, 518, 558, 519, 1635,
  542, 1612, 518, 1636, 518, 558, 519, 558, 519, 558, 519, 558,
  542, 1612, 518, 558, 519, 558, 519, 1636, 517, 1636, 518, 1636,
  518, 558, 519, 558, 518, 558, 542, 535, 518, 559, 518, 559,
  541, 535, 518, 559, 518, 1635, 518, 1635, 518, 1636, 518, 1635,
  519, 1636, 518, 5235, 4384, 4443, 517, 1636, 541, 535, 518, 1636,
  518, 1636, 518, 559, 518, 559, 518, 1635, 518, 559, 518, 559,
  517, 1636, 518, 559, 518, 558, 518, 1636, 541, 1612, 518, 559,
  518, 1636, 517, 559, 518, 1636, 518, 1636, 518, 1636, 518, 1636,
  517, 559, 518, 1636, 518, 1636, 518, 1636, 541, 535, 518, 559,
  518, 559, 541, 536, 517, 1636, 518, 559, 518, 559, 518, 1636,
  517, 1636, 518, 1636, 518, 559, 517, 559, 517, 559, 517, 559,
  517, 559, 518, 559, 518, 559, 517, 559, 518, 1636, 518, 1636,
  518, 1636, 517, 1636, 517, 1636, 517,
};

const uint32_t irExtraRaw148[] = {
  270, 18152, 3021, 8955, 523, 499, 495, 1497, 492, 504, 500, 468,
  526, 496, 498, 498, 496, 499, 495, 501, 493, 502, 492, 1499,
  500, 496, 498, 524, 470, 1521, 498, 497, 497, 499, 495, 1496,
  492, 1499, 500, 1491, 497, 1494, 494, 1497, 502, 494, 500, 495,
  499, 497, 497, 498, 496, 500, 494, 528, 466, 530, 464, 531,
  473, 522, 493, 503, 491, 504, 500, 495, 499, 497, 497, 498,
  496, 500, 494, 501, 493, 503, 491, 504, 500, 495, 499, 496,
  498, 498, 496, 499, 495, 501, 493, 529, 465, 531, 473, 522,
  472, 523, 492, 504, 490, 505, 499, 496, 498, 498, 496, 499,
  495, 1496, 492, 1499, 500, 1492, 496, 1494, 525, 2947, 2999, 8953,
  525, 1519, 469, 499, 516, 507, 497, 498, 496, 500, 494, 501,
  493, 503, 491, 504, 500, 495, 499, 1492, 496, 499, 495, 501,
  493, 1498, 501, 495, 499, 1492, 496, 1522, 466, 1524, 496, 1496,
  492, 1499, 500, 1492, 496, 499, 495, 500, 494, 502, 492, 504,
  500, 495, 499, 496, 498, 498, 496, 499, 495, 500, 494, 502,
  492, 530, 474, 521, 473, 523, 523, 472, 522, 474, 489, 506,
  498, 497, 497, 499, 495, 500, 494, 502, 492, 503, 501, 494,
  500, 496, 498, 497, 497, 499, 495, 500, 494, 502, 492, 503,
  501, 521, 473, 523, 471, 524, 522, 474, 520, 475, 498, 497,
  497, 499, 495, 500, 494, 2978, 2999, 8952, 525, 1492, 496, 499,
  495, 501, 493, 503, 491, 504, 500, 495, 499, 497, 497, 525,
  469, 526, 468, 1524, 516, 479, 494, 501, 493, 503, 491, 504,
  500, 495, 499, 497, 497, 1494, 494, 1497, 492, 1500, 499, 1492,
  496, 499, 495, 1497, 491, 531, 473, 1518, 522, 1469, 499, 496,
  498, 498, 496, 500, 494, 1497, 491, 1500, 499, 1492, 496, 499,
  495, 501, 493, 502, 492, 504, 500, 495, 499, 523, 471, 525,
  469, 526, 520, 1472, 516, 1475, 493, 502, 492, 504, 500, 495,
  499, 1492, 496, 499, 495, 501, 493, 502, 492, 504, 500, 495,
  499, 496, 498, 498, 496, 1522, 466, 1525, 525, 1466, 491, 1500,
  499,
};

const uint32_t irExtraRaw149[] = {
  619, 17787, 3032, 8883, 558, 461, 532, 1453, 534, 459, 535, 458,
  535, 458, 534, 459, 533, 458, 535, 457, 535, 457, 535, 1449,
  536, 457, 535, 458, 534, 1452, 559, 434, 558, 461, 530, 1456,
  528, 1483, 503, 1483, 503, 1482, 504, 1482, 504, 489, 504, 489,
  504, 489, 504, 489, 504, 465, 528, 464, 528, 464, 528, 464,
  529, 516, 476, 516, 500, 492, 502, 491, 502, 490, 503, 490,
  503, 489, 504, 489, 503, 489, 504, 489, 503, 489, 503, 489,
  504, 489, 504, 489, 503, 489, 504, 465, 528, 465, 528, 465,
  527, 516, 476, 516, 501, 492, 501, 491, 502, 491, 502, 490,
  503, 1483, 503, 1483, 503, 1482, 503, 1483, 503, 2986, 2976, 8940,
  503, 1459, 527, 490, 503, 489, 503, 516, 476, 517, 500, 492,
  501, 491, 502, 490, 503, 490, 503, 1483, 503, 490, 502, 490,
  503, 1483, 503, 490, 503, 1483, 503, 1483, 503, 1483, 503, 1510,
  475, 1510, 501, 1485, 501, 491, 502, 490, 503, 490, 503, 490,
  502, 490, 503, 490, 503, 490, 503, 490, 503, 490, 502, 490,
  503, 490, 503, 490, 502, 490, 502, 517, 475, 517, 500, 492,
  501, 492, 501, 492, 501, 491, 502, 491, 502, 490, 503, 490,
  502, 490, 503, 490, 503, 490, 502, 490, 503, 490, 503, 490,
  502, 490, 502, 490, 503, 490, 502, 490, 503, 517, 500, 493,
  500, 492, 501, 492, 502, 2959, 3003, 8941, 502, 1484, 502, 491,
  501, 491, 502, 491, 501, 491, 501, 491, 502, 490, 503, 490,
  502, 490, 503, 1484, 502, 517, 475, 518, 499, 493, 500, 1486,
  500, 1485, 501, 1484, 502, 491, 502, 1484, 502, 1484, 502, 1484,
  502, 1484, 502, 1484, 501, 491, 502, 1511, 500, 1486, 500, 492,
  501, 492, 501, 491, 502, 1484, 502, 1484, 502, 1484, 502, 491,
  502, 491, 501, 491, 502, 491, 501, 491, 502, 1484, 502, 518,
  474, 519, 499, 1487, 499, 1486, 500, 492, 501, 492, 501, 492,
  500, 1485, 501, 492, 501, 492, 501, 491, 501, 491, 502, 491,
  501, 491, 502, 491, 501, 1512, 473, 1512, 499, 1487, 500, 1486,
  500,
};

const uint32_t irExtraRaw150[] = {
  645, 17766, 3059, 8884, 533, 461, 557, 1427, 560, 435, 584, 433,
  534, 458, 534, 458, 534, 458, 588, 404, 587, 405, 586, 1399,
  586, 407, 584, 408, 558, 1429, 555, 1457, 502, 491, 525, 1460,
  528, 1458, 554, 1431, 554, 1431, 555, 1431, 554, 438, 555, 438,
  554, 439, 553, 440, 553, 464, 528, 464, 528, 464, 529, 465,
  528, 465, 526, 467, 526, 467, 527, 465, 553, 439, 554, 439,
  554, 438, 554, 439, 554, 439, 553, 439, 554, 439, 553, 439,
  553, 439, 554, 440, 552, 464, 528, 464, 528, 465, 528, 466,
  527, 466, 501, 492, 525, 468, 526, 466, 527, 466, 553, 439,
  554, 439, 553, 440, 552, 1433, 553, 1433, 553, 2936, 3024, 8893,
  552, 1458, 527, 465, 528, 465, 527, 467, 526, 467, 500, 493,
  524, 468, 526, 467, 526, 467, 552, 1434, 552, 441, 552, 441,
  552, 1435, 550, 465, 528, 1458, 527, 1458, 528, 1459, 527, 1485,
  501, 1485, 500, 1486, 501, 491, 527, 466, 528, 465, 528, 465,
  527, 465, 528, 465, 527, 465, 528, 465, 528, 465, 527, 465,
  528, 465, 527, 466, 527, 466, 527, 492, 500, 492, 501, 492,
  500, 493, 500, 493, 500, 492, 526, 466, 527, 465, 527, 465,
  527, 465, 527, 466, 527, 466, 527, 466, 527, 465, 527, 466,
  526, 466, 527, 466, 526, 467, 526, 493, 499, 493, 474, 518,
  499, 494, 500, 493, 526, 2936, 3025, 8918, 526, 1459, 527, 466,
  527, 466, 527, 466, 526, 466, 527, 466, 526, 467, 526, 467,
  525, 467, 526, 1460, 525, 493, 499, 493, 498, 495, 498, 495,
  499, 493, 500, 493, 525, 1460, 527, 1460, 525, 1460, 526, 1460,
  525, 1460, 526, 1460, 526, 468, 525, 1487, 499, 1487, 497, 495,
  498, 495, 499, 493, 500, 1486, 525, 1460, 525, 1460, 525, 467,
  525, 467, 526, 467, 525, 467, 526, 468, 524, 1462, 524, 468,
  524, 494, 498, 1488, 497, 1488, 499, 494, 499, 493, 525, 468,
  525, 1461, 524, 468, 525, 468, 524, 468, 525, 468, 525, 468,
  524, 468, 525, 469, 524, 494, 498, 494, 499, 1488, 473, 1514,
  524,
};

const uint32_t irExtraRaw151[] = {
  608, 17795, 3020, 8937, 519, 502, 495, 1493, 492, 475, 522, 472,
  525, 469, 518, 476, 521, 472, 525, 469, 518, 476, 521, 1493,
  492, 503, 494, 499, 498, 1490, 495, 500, 517, 503, 494, 1493,
  492, 1497, 498, 1463, 521, 1467, 517, 1470, 525, 470, 517, 503,
  494, 500, 497, 497, 490, 504, 493, 501, 496, 497, 490, 504,
  493, 528, 469, 498, 519, 474, 513, 481, 516, 505, 492, 501,
  496, 498, 499, 468, 519, 502, 495, 499, 498, 468, 519, 502,
  495, 499, 498, 496, 491, 503, 494, 499, 498, 496, 491, 530,
  467, 500, 497, 496, 521, 500, 487, 480, 517, 503, 494, 473,
  524, 1464, 521, 1467, 517, 1471, 524, 1491, 493, 2972, 2993, 8939,
  517, 1523, 472, 495, 492, 502, 495, 499, 518, 502, 495, 499,
  488, 506, 491, 503, 494, 472, 525, 1490, 495, 472, 525, 496,
  491, 1470, 525, 496, 491, 1497, 498, 1517, 467, 1494, 490, 1497,
  518, 1470, 514, 1474, 521, 473, 524, 470, 517, 503, 494, 473,
  524, 470, 517, 504, 493, 474, 523, 497, 490, 504, 493, 501,
  496, 498, 489, 504, 493, 528, 469, 525, 462, 504, 513, 508,
  489, 478, 519, 501, 496, 498, 499, 468, 519, 475, 522, 498,
  499, 495, 492, 475, 522, 471, 526, 495, 492, 502, 495, 499,
  498, 495, 492, 502, 495, 526, 471, 522, 465, 529, 468, 499,
  518, 475, 522, 499, 498, 2967, 2998, 8933, 523, 1464, 520, 474,
  523, 470, 517, 477, 520, 474, 523, 497, 490, 504, 493, 501,
  496, 498, 489, 1499, 496, 525, 493, 474, 513, 1502, 493, 474,
  523, 1465, 519, 1468, 516, 478, 519, 1468, 517, 1499, 496, 1492,
  493, 1522, 462, 1499, 496, 1492, 493, 1495, 520, 1468, 516, 478,
  519, 474, 523, 471, 516, 1472, 523, 1465, 519, 1469, 526, 495,
  492, 502, 495, 498, 499, 495, 492, 529, 468, 499, 498, 495,
  492, 529, 488, 1473, 522, 1466, 518, 475, 522, 472, 525, 1463,
  522, 1466, 518, 502, 495, 499, 498, 496, 491, 503, 494, 499,
  498, 496, 491, 503, 494, 1494, 521, 1493, 492, 1470, 525, 1463,
  521,
};

const uint32_t irExtraRaw152[] = {
  606, 17832, 2994, 8936, 520, 501, 496, 1491, 494, 501, 496, 498,
  489, 532, 465, 529, 488, 505, 492, 502, 495, 499, 488, 1499,
  496, 499, 498, 495, 492, 1496, 499, 1463, 522, 499, 498, 1463,
  522, 1467, 517, 1469, 526, 1491, 493, 1495, 520, 500, 487, 507,
  490, 504, 493, 500, 497, 497, 490, 504, 493, 501, 496, 498,
  489, 505, 492, 501, 496, 498, 499, 495, 492, 502, 495, 499,
  498, 522, 465, 529, 468, 526, 492, 502, 495, 499, 488, 506,
  491, 503, 494, 499, 498, 496, 491, 503, 494, 500, 497, 497,
  490, 504, 493, 500, 497, 497, 490, 504, 493, 500, 497, 497,
  490, 531, 466, 528, 469, 1518, 487, 1475, 520, 2947, 3018, 8939,
  517, 1471, 524, 496, 491, 503, 494, 500, 497, 497, 490, 504,
  493, 500, 497, 497, 490, 504, 493, 1521, 464, 530, 467, 527,
  491, 1471, 514, 507, 490, 1471, 524, 1465, 519, 1468, 517, 1472,
  523, 1465, 520, 1468, 517, 477, 520, 501, 496, 497, 490, 531,
  466, 528, 469, 525, 493, 501, 496, 498, 489, 505, 492, 502,
  495, 498, 499, 495, 492, 502, 495, 499, 498, 495, 492, 502,
  495, 499, 498, 496, 491, 502, 495, 499, 498, 496, 491, 529,
  468, 526, 471, 523, 495, 499, 488, 506, 491, 503, 494, 499,
  498, 496, 491, 503, 494, 500, 497, 496, 491, 503, 494, 500,
  497, 497, 490, 503, 494, 2973, 2992, 8939, 517, 1469, 526, 522,
  465, 529, 488, 506, 491, 503, 494, 499, 488, 506, 491, 503,
  494, 500, 497, 1490, 495, 499, 498, 496, 491, 1497, 498, 1464,
  520, 1468, 517, 1470, 525, 524, 463, 1498, 517, 1471, 524, 1465,
  520, 1468, 517, 1471, 524, 1465, 520, 1468, 517, 1472, 523, 497,
  490, 504, 493, 501, 496, 1491, 494, 1496, 519, 1469, 516, 504,
  493, 501, 496, 498, 489, 505, 492, 501, 496, 498, 499, 495,
  492, 502, 495, 1492, 493, 1469, 526, 495, 492, 529, 468, 1492,
  513, 1476, 519, 502, 495, 498, 489, 505, 492, 502, 495, 499,
  498, 496, 491, 503, 494, 499, 498, 496, 491, 1497, 498, 1464,
  541,
};

const uint32_t irExtraRaw154[] = {
  9084, 4414, 708, 1592, 708, 494, 709, 493, 737, 1573, 742, 1567,
  739, 1563, 739, 1565, 737, 491, 711, 467, 735, 469, 737, 494,
  711, 493, 713, 494, 709, 497, 708, 497, 709, 498, 707, 498,
  708, 524, 708, 498, 707, 497, 709, 498, 708, 1602, 710, 1596,
  707, 496, 708, 499, 707, 498, 709, 496, 710, 497, 708, 1596,
  708, 499, 709, 1601, 707, 496, 707, 499, 709, 1601, 710, 499,
  708, 19964, 708, 1595, 707, 496, 706, 496, 707, 496, 707, 496,
  707, 495, 707, 496, 708, 499, 709, 1600, 709, 496, 707, 497,
  710, 497, 707, 500, 707, 1602, 709, 499, 706, 498, 710, 497,
  708, 497, 708, 499, 707, 498, 709, 499, 706, 498, 707, 498,
  707, 497, 709, 499, 708, 498, 708, 498, 708, 498, 707, 1603,
  710, 498, 707, 1604, 708, 499, 709,
};

const uint32_t irExtraRaw155[] = {
  9111, 4374, 765, 1548, 712, 496, 713, 497, 713, 496, 710, 1598,
  711, 1602, 712, 1602, 712, 496, 712, 497, 712, 498, 710, 495,
  709, 501, 729, 496, 711, 496, 707, 498, 707, 498, 707, 498,
  708, 498, 707, 499, 707, 499, 707, 498, 707, 1600, 706, 499,
  708, 497, 709, 498, 706, 500, 706, 499, 707, 499, 707, 1597,
  705, 499, 710, 1596, 705, 497, 707, 500, 708, 1601, 708, 500,
  709, 19935, 707, 1604, 706, 498, 707, 500, 709, 500, 708, 499,
  709, 500, 710, 500, 709, 500, 708, 1600, 708, 500, 709, 500,
  710, 498, 705, 499, 708, 1597, 704, 498, 709, 500, 707, 498,
  709, 498, 705, 499, 709, 498, 709, 498, 708, 498, 708, 499,
  707, 499, 707, 498, 707, 498, 708, 499, 707, 498, 708, 1600,
  706, 497, 707, 1597, 705, 1600, 709,
};

const uint32_t irExtraRaw156[] = {
  3829, 1892, 465, 455, 509, 1427, 437, 466, 487, 1423, 431, 473,
  490, 1418, 436, 483, 459, 1421, 433, 486, 488, 1420, 434, 443,
  510, 1425, 429, 1436, 439, 481, 483, 1407, 437, 483, 491, 1392,
  462, 1429, 457, 1397, 489, 1421, 433, 462, 459, 504, 459, 1394,
  491, 1416, 438, 455, 488, 469, 463, 482, 460, 485, 458, 1422,
  432, 487, 456, 489, 464, 440, 513, 1421, 433, 1432, 432, 487,
  487, 1403, 430, 489, 464, 455, 487, 1410, 486, 1405, 459, 1421,
  433, 487, 456, 490, 432, 499, 464, 1463, 412, 455, 488, 469,
  463, 482, 460, 470, 483, 1409, 435, 484, 458, 461, 481, 1442,
  433, 460, 483, 1415, 460, 470, 462, 483, 459, 470, 462, 483,
  459, 486, 436, 501, 431, 499, 464, 465, 457, 488, 465, 1426,
  459, 1395, 490, 1417, 437, 1427, 437, 481, 461, 483, 438, 492,
  461, 484, 437, 492, 461, 484, 437, 492, 461, 485, 437, 493,
  460, 485, 437, 492, 461, 1430, 435, 484, 458, 485, 458, 472,
  460, 485, 457, 472, 460, 485, 457, 472, 460, 485, 458, 472,
  460, 485, 458, 472, 460, 486, 457, 473, 490, 1418, 436, 1435,
  461, 1404, 460, 1419, 435, 485, 457, 487, 435, 495, 458, 1433,
  432, 487, 487, 1421, 433, 471, 482,
};

const uint32_t irExtraRaw157[] = {
  3821, 1901, 456, 507, 456, 1424, 430, 490, 484, 1425, 429, 475,
  488, 1420, 434, 471, 482, 1427, 437, 467, 486, 1420, 434, 486,
  457, 1416, 459, 1432, 432, 487, 456, 1436, 439, 480, 483, 1425,
  439, 1425, 460, 1420, 455, 1419, 435, 485, 457, 472, 491, 1417,
  458, 1407, 437, 483, 459, 487, 456, 474, 458, 487, 466, 1432,
  432, 471, 461, 485, 457, 472, 491, 1415, 460, 1378, 466, 480,
  483, 1424, 430, 474, 458, 487, 466, 1424, 461, 1419, 456, 1426,
  438, 465, 457, 489, 464, 466, 456, 489, 464, 1426, 438, 481,
  461, 484, 437, 493, 460, 1429, 435, 482, 460, 485, 458, 1440,
  435, 484, 458, 1438, 437, 467, 465, 480, 462, 467, 465, 481,
  461, 468, 464, 481, 461, 469, 463, 481, 461, 468, 485, 1424,
  430, 1434, 462, 1418, 457, 1425, 439, 465, 457, 489, 464, 465,
  457, 489, 464, 466, 456, 490, 463, 467, 465, 480, 463, 467,
  465, 480, 463, 467, 486, 1422, 432, 471, 461, 485, 457, 472,
  460, 485, 457, 472, 460, 485, 457, 472, 460, 486, 456, 488,
  434, 497, 456, 473, 459, 486, 456, 488, 465, 1414, 461, 1393,
  482, 1423, 462, 1419, 435, 469, 463, 482, 460, 469, 463, 482,
  460, 1436, 439, 1425, 439, 480, 483,
};

const uint32_t irExtraRaw158[] = {
  3826, 1855, 504, 434, 506, 1381, 507, 433, 507, 1383, 505, 433,
  507, 1381, 507, 433, 507, 1382, 506, 433, 507, 1383, 505, 435,
  505, 1381, 507, 1383, 505, 433, 507, 1382, 506, 433, 507, 1382,
  506, 1382, 506, 1381, 507, 1383, 505, 433, 507, 433, 507, 1382,
  506, 1382, 506, 433, 507, 434, 506, 434, 505, 434, 506, 1383,
  505, 434, 506, 435, 505, 433, 507, 1381, 507, 434, 506, 433,
  507, 435, 505, 437, 503, 434, 505, 434, 506, 436, 504, 1381,
  507, 436, 504, 435, 505, 433, 507, 1385, 503, 434, 506, 436,
  504, 434, 506, 435, 505, 433, 507, 1383, 505, 437, 503, 1381,
  507, 1384, 504, 434, 506, 434, 506, 434, 506, 436, 504, 434,
  506, 435, 505, 433, 507, 434, 506, 433, 507, 433, 507, 434,
  506, 434, 505, 434, 506, 1382, 506, 435, 505, 434, 506, 433,
  507, 435, 505, 434, 506, 434, 506, 433, 507, 434, 506, 433,
  507, 433, 507, 434, 506, 1383, 505, 434, 506, 435, 505, 433,
  507, 438, 502, 434, 506, 435, 505, 435, 505, 435, 505, 436,
  504, 433, 507, 1383, 505, 433, 507, 1382, 506, 1382, 506, 1383,
  505, 1384, 504, 1382, 506, 434, 506, 435, 505, 436, 504, 1383,
  505, 435, 505, 435, 505, 434, 506,
};

const uint32_t irExtraRaw159[] = {
  3827, 1854, 505, 433, 507, 1382, 506, 434, 506, 1383, 505, 434,
  506, 1410, 478, 433, 507, 1381, 507, 433, 507, 1383, 505, 435,
  505, 1382, 505, 1383, 505, 435, 505, 1382, 506, 435, 505, 1383,
  505, 1382, 506, 1384, 504, 1381, 507, 434, 506, 434, 506, 1382,
  506, 1382, 506, 432, 508, 434, 506, 436, 504, 433, 507, 1382,
  506, 435, 505, 434, 506, 436, 504, 1381, 507, 1383, 505, 434,
  506, 1382, 506, 1381, 507, 434, 506, 1381, 507, 1381, 507, 1383,
  505, 435, 505, 434, 506, 435, 505, 433, 507, 1383, 505, 435,
  505, 435, 505, 434, 506, 1381, 507, 433, 507, 435, 505, 434,
  506, 1382, 506, 433, 507, 434, 506, 433, 507, 438, 502, 434,
  506, 433, 507, 434, 506, 434, 506, 432, 508, 435, 505, 434,
  506, 433, 507, 433, 507, 1387, 501, 435, 505, 436, 504, 433,
  507, 433, 507, 435, 505, 433, 507, 434, 506, 434, 506, 435,
  505, 435, 505, 432, 508, 1410, 478, 461, 479, 432, 508, 435,
  505, 434, 506, 433, 507, 436, 504, 434, 506, 434, 506, 433,
  507, 435, 505, 1383, 505, 435, 505, 1381, 507, 1381, 507, 1382,
  506, 1382, 506, 1381, 507, 435, 505, 433, 507, 433, 507, 461,
  478, 1383, 505, 433, 507, 434, 506,
};

const uint32_t irExtraRaw160[] = {
  3197, 1545, 581, 1033, 553, 1006, 606, 338, 463, 342, 485, 339,
  488, 1033, 553, 342, 485, 342, 485, 1034, 551, 1035, 550, 342,
  485, 1037, 548, 342, 485, 340, 487, 1040, 546, 1040, 546, 340,
  487, 1040, 546, 1040, 546, 340, 487, 340, 488, 1040, 546, 340,
  487, 340, 488, 1040, 546, 340, 487, 340, 487, 340, 487, 342,
  485, 340, 487, 340, 487, 340, 487, 342, 485, 342, 485, 342,
  485, 340, 487, 342, 485, 340, 487, 340, 487, 342, 485, 342,
  485, 342, 485, 342, 485, 340, 488, 342, 485, 1041, 545, 340,
  487, 340, 487, 1041, 545, 1041, 545, 340, 488, 340, 487, 340,
  487, 340, 487, 340, 488, 342, 485, 342, 485, 340, 487, 340,
  488, 1041, 545, 340, 487, 340, 487, 342, 486, 342, 485, 340,
  487, 340, 487, 340, 487, 340, 487, 342, 485, 341, 486, 1041,
  545, 340, 487, 340, 487, 340, 487, 340, 487, 340, 488, 342,
  485, 340, 487, 342, 485, 342, 485, 340, 487, 342, 485, 340,
  487, 340, 488, 342, 485, 343, 484, 340, 488, 340, 487, 340,
  487, 340, 487, 340, 487, 342, 485, 340, 487, 340, 487, 341,
  486, 342, 485, 340, 488, 342, 485, 342, 485, 342, 485, 340,
  487, 340, 487, 340, 488, 1042, 544, 340, 487, 340, 487, 340,
  487, 340, 487, 340, 487, 340, 487, 340, 488, 342, 485,
};

const uint32_t irExtraRaw161[] = {
  9048, 4430, 705, 501, 705, 501, 704, 1603, 729, 1579, 728, 479,
  726, 480, 726, 505, 701, 506, 701, 505, 700, 505, 701, 505,
  701, 1606, 701, 505, 701, 505, 701, 506, 700, 505, 701, 505,
  701, 506, 700, 506, 700, 505, 701, 506, 700, 1607, 701, 1607,
  701, 505, 701, 505, 701, 505, 700, 506, 700, 506, 700, 1608,
  700, 505, 701, 1607, 700, 505, 701, 506, 701, 1607, 700, 505,
  700, 19917, 724, 505, 701, 1607, 700, 505, 701, 505, 700, 1607,
  700, 506, 700, 1607, 701, 505, 700, 506, 700, 1607, 701, 506,
  700, 506, 700, 506, 700, 506, 700, 1607, 700, 505, 701, 505,
  701, 506, 700, 505, 702, 506, 700, 505, 700, 506, 700, 506,
  700, 505, 701, 505, 700, 506, 700, 506, 700, 505, 701, 1608,
  700, 1607, 700, 1608, 700, 506, 700, 39927, 9074, 4408, 726, 481,
  725, 505, 700, 1606, 700, 1607, 701, 505, 701, 505, 701, 505,
  700, 506, 700, 506, 700, 505, 701, 505, 701, 1607, 700, 506,
  700, 505, 701, 506, 701, 505, 701, 505, 701, 505, 701, 505,
  701, 505, 701, 505, 700, 1607, 701, 1607, 701, 505, 701, 505,
  701, 505, 701, 505, 701, 505, 701, 1608, 700, 1607, 701, 1607,
  700, 506, 700, 506, 700, 1607, 700, 506, 701, 19938, 700, 505,
  701, 505, 700, 505, 701, 505, 700, 505, 701, 505, 701, 505,
  701, 506, 700, 506, 700, 505, 701, 506, 700, 505, 701, 505,
  701, 505, 700, 506, 699, 506, 700, 505, 700, 505, 700, 506,
  700, 506, 700, 506, 699, 504, 701, 506, 700, 505, 701, 506,
  700, 505, 701, 505, 701, 506, 700, 506, 699, 1607, 700, 1607,
  700, 1608, 700,
};

const uint32_t irExtraRaw162[] = {
  9048, 4430, 705, 500, 706, 1602, 705, 1602, 729, 476, 730, 1579,
  728, 478, 728, 1580, 727, 480, 726, 480, 726, 480, 726, 480,
  726, 1606, 702, 505, 701, 481, 725, 481, 724, 505, 701, 481,
  725, 504, 702, 505, 701, 504, 701, 505, 701, 1606, 702, 504,
  702, 504, 701, 504, 701, 504, 702, 505, 701, 505, 701, 1606,
  701, 504, 702, 1607, 701, 504, 701, 504, 701, 1607, 701, 505,
  701, 19915, 726, 1582, 726, 481, 725, 504, 701, 505, 701, 1606,
  701, 505, 701, 505, 701, 505, 701, 505, 700, 1606, 701, 505,
  701, 505, 701, 505, 701, 504, 702, 1606, 701, 505, 701, 504,
  701, 505, 701, 504, 702, 505, 701, 505, 701, 505, 701, 505,
  701, 505, 701, 505, 701, 505, 701, 505, 701, 505, 701, 1606,
  701, 505, 701, 1607, 700, 1606, 701, 39924, 9075, 4406, 728, 478,
  728, 1581, 727, 1581, 726, 481, 725, 1582, 725, 480, 725, 1606,
  701, 504, 702, 481, 725, 505, 701, 505, 701, 1606, 701, 504,
  702, 505, 701, 505, 701, 505, 701, 505, 701, 505, 701, 505,
  701, 505, 701, 505, 701, 1606, 701, 505, 701, 505, 701, 505,
  701, 505, 701, 505, 701, 505, 701, 1606, 701, 1607, 701, 1607,
  701, 505, 701, 505, 701, 1607, 701, 506, 701, 19913, 726, 480,
  726, 480, 726, 480, 726, 480, 726, 479, 727, 479, 727, 480,
  725, 479, 727, 479, 726, 480, 726, 480, 726, 480, 726, 480,
  726, 480, 726, 480, 726, 504, 701, 480, 726, 480, 725, 505,
  702, 481, 725, 1606, 701, 505, 701, 481, 725, 481, 725, 505,
  700, 505, 701, 504, 701, 505, 701, 1607, 701, 504, 701, 505,
  700, 1607, 701,
};

const uint32_t irExtraRaw163[] = {
  6149, 7347, 601, 535, 573, 560, 602, 505, 602, 480, 597, 509,
  600, 534, 599, 487, 593, 541, 591, 568, 569, 539, 568, 490,
  594, 539, 570, 513, 568, 540, 570, 566, 570, 540, 568, 543,
  594, 540, 569, 566, 543, 515, 594, 540, 569, 514, 567, 542,
  570, 514, 568, 543, 594, 540, 569, 490, 592, 542, 570, 514,
  568, 541, 570, 541, 542, 541, 569, 567, 570, 515, 567, 542,
  570, 515, 567, 542, 570, 568, 568, 516, 570, 568, 570, 542,
  568, 542, 570, 515, 569, 542, 570, 568, 568, 517, 569, 541,
  569, 517, 569, 568, 570, 515, 568, 570, 569, 569, 543, 542,
  569, 569, 569, 516, 569, 542, 570, 543, 568, 1640, 570, 516,
  568, 543, 570, 569, 543, 1613, 569, 516, 568, 1613, 570, 569,
  543, 570, 569, 542, 543, 543, 569, 543, 542, 544, 569, 516,
  569, 544, 570, 543, 570, 570, 570, 543, 543, 544, 569, 1615,
  569, 571, 569, 570, 568, 519, 569, 1615, 569, 544, 569, 1615,
  568, 572, 569, 571, 542, 1642, 569, 571, 568, 1617, 569, 1642,
  542, 1642, 569, 1589, 568, 545, 569, 1590, 569, 518, 568, 1617,
  569, 545, 568, 7372, 568,
};

const uint32_t irExtraRaw165[] = {
  9019, 4453, 576, 1665, 603, 1639, 602, 504, 602, 505, 601, 507,
  599, 508, 598, 1644, 573, 1669, 573, 1669, 572, 1670, 572, 1670,
  572, 1670, 572, 1670, 572, 1670, 572, 1670, 572, 535, 572, 535,
  572, 535, 572, 535, 572, 535, 572, 535, 572, 1670, 572, 1670,
  572, 1670, 571, 535, 572, 535, 572, 535, 572, 535, 572, 535,
  572, 535, 572, 535, 572, 535, 572, 535, 572, 535, 572, 535,
  572, 535, 572, 536, 571, 1670, 572, 535, 572, 1670, 572, 535,
  572, 535, 572, 536, 571, 536, 571, 536, 571, 536, 571, 535,
  572, 536, 571, 536, 571, 536, 571, 536, 571, 536, 571, 536,
  571, 1670, 572, 536, 571, 536, 571, 536, 571, 536, 571, 536,
  571, 536, 571, 536, 571, 536, 571, 536, 571, 536, 571, 536,
  571, 536, 571, 536, 571, 536, 571, 536, 571, 537, 570, 536,
  571, 537, 570, 536, 571, 537, 570, 536, 571, 537, 570, 537,
  570, 537, 570, 537, 570, 537, 570, 537, 570, 538, 569, 538,
  569, 538, 569, 561, 546, 562, 545, 562, 545, 562, 545, 1696,
  546, 562, 545, 1697, 545, 562, 545, 562, 545, 562, 545, 562,
  545, 562, 545, 1696, 546, 1697, 545, 1697, 545, 562, 545, 562,
  545, 1697, 545, 1697, 545, 1697, 545,
};

const uint32_t irExtraRaw167[] = {
  3087, 1607, 488, 1064, 517, 335, 492, 1087, 484, 315, 512, 340,
  487, 1091, 490, 336, 491, 338, 489, 1089, 492, 333, 494, 332,
  485, 341, 486, 340, 487, 338, 489, 336, 491, 339, 488, 1090,
  491, 334, 493, 1085, 486, 340, 487, 1091, 490, 1088, 493, 333,
  484, 343, 484, 44227, 178,
};

const uint32_t irExtraRaw168[] = {
  4414, 4312, 565, 1591, 565, 517, 565, 1596, 564, 1592, 565, 517,
  565, 517, 565, 1591, 566, 519, 565, 519, 565, 1595, 565, 517,
  565, 517, 565, 1592, 564, 1593, 563, 519, 563, 1599, 563, 521,
  563, 1594, 562, 1594, 563, 1594, 563, 1595, 562, 520, 562, 1598,
  563, 1597, 562, 1600, 562, 520, 562, 520, 562, 520, 562, 520,
  562, 1595, 562, 520, 562, 522, 562, 1601, 561, 1595, 562, 1595,
  562, 521, 561, 521, 561, 521, 561, 521, 561, 523, 561, 523,
  561, 521, 561, 521, 561, 1600, 561, 1596, 561, 1596, 561, 1596,
  561, 1597, 561, 5165, 4384, 4310, 560, 1596, 561, 521, 561, 1600,
  561, 1596, 561, 521, 561, 521, 561, 1595, 562, 523, 561, 523,
  561, 1600, 561, 521, 562, 521, 561, 1595, 562, 1595, 562, 520,
  562, 1601, 562, 523, 561, 1595, 562, 1595, 562, 1595, 562, 1595,
  562, 521, 561, 1599, 562, 1597, 562, 1601, 562, 521, 561, 521,
  561, 521, 561, 521, 561, 1595, 562, 521, 561, 522, 562, 1601,
  562, 1595, 562, 1595, 562, 521, 561, 521, 561, 521, 561, 521,
  561, 523, 561, 523, 561, 521, 561, 521, 561, 1599, 562, 1596,
  561, 1596, 561, 1595, 562, 1598, 562,
};

const uint32_t irExtraRaw169[] = {
  3121, 1585, 524, 1061, 524, 1036, 549, 346, 473, 346, 471, 346,
  499, 1036, 549, 346, 473, 346, 472, 1061, 524, 1061, 524, 346,
  472, 1064, 545, 347, 473, 346, 472, 1092, 493, 1092, 493, 346,
  473, 1092, 493, 1092, 493, 346, 498, 346, 473, 1067, 518, 346,
  473, 346, 497, 1068, 518, 346, 474, 346, 473, 346, 498, 346,
  474, 346, 473, 346, 497, 346, 475, 346, 473, 346, 499, 347,
  472, 346, 473, 346, 499, 346, 473, 346, 472, 353, 492, 346,
  473, 346, 498, 346, 474, 346, 473, 346, 473, 1093, 492, 346,
  499, 346, 473, 1094, 491, 1094, 491, 346, 473, 346, 499, 346,
  473, 346, 473, 346, 499, 346, 473, 346, 497, 346, 474, 346,
  473, 1094, 491, 346, 473, 346, 499, 346, 473, 346, 498, 347,
  473, 346, 473, 346, 498, 346, 474, 346, 473, 346, 497, 346,
  475, 346, 472, 347, 498, 346, 473, 346, 473, 347, 498, 346,
  473, 346, 473, 347, 498, 346, 473, 346, 498, 347, 474, 346,
  473, 346, 497, 346, 475, 346, 473, 346, 473, 354, 491, 346,
  473, 346, 499, 346, 473, 347, 472, 346, 498, 347, 472, 346,
  473, 353, 492, 347, 472, 346, 473, 347, 498, 353, 465, 346,
  473, 347, 498, 353, 465, 346, 499, 353, 466, 353, 466, 347,
  497, 354, 465, 354, 465, 347, 472, 1095, 490, 354, 491,
};

const uint32_t irExtraRaw171[] = {
  4384, 4380, 522, 1611, 551, 1609, 553, 1607, 555, 1605, 557, 523,
  547, 533, 548, 1612, 550, 530, 551, 529, 552, 528, 553, 527,
  554, 526, 555, 1605, 557, 1603, 549, 531, 550, 1610, 552, 528,
  553, 527, 554, 527, 554, 526, 555, 525, 556, 524, 546, 1613,
  549, 1611, 551, 1609, 553, 1607, 555, 1605, 557, 1603, 548, 1611,
  551, 1609, 553, 527, 554, 527, 554, 526, 555, 525, 556, 524,
  557, 523, 547, 533, 548, 532, 549, 531, 550, 1609, 553, 527,
  554, 1606, 556, 1604, 547, 533, 548, 532, 549, 531, 550, 530,
  551, 529, 552, 528, 553, 527, 554, 526, 555, 525, 556, 524,
  557, 523, 547, 532, 549, 1611, 551, 529, 552, 528, 553, 528,
  553, 527, 554, 526, 555, 525, 556, 524, 546, 533, 548, 532,
  549, 1611, 551, 1609, 553, 527, 554, 526, 555, 525, 556, 524,
  557, 523, 547, 7458, 4392, 4345, 556, 1604, 547, 1612, 550, 1611,
  551, 1609, 553, 527, 554, 526, 555, 1605, 557, 523, 547, 533,
  548, 532, 549, 531, 550, 530, 551, 1609, 553, 1607, 555, 525,
  556, 1604, 547, 532, 549, 532, 549, 531, 550, 530, 551, 529,
  552, 528, 553, 1607, 555, 1605, 557, 1603, 548, 1611, 551, 1610,
  552, 1608, 554, 1606, 556, 1604, 547, 533, 548, 532, 549, 532,
  549, 531, 550, 530, 551, 529, 552, 528, 553, 527, 554, 526,
  555, 1604, 547, 533, 548, 1612, 550, 1610, 552, 528, 553, 528,
  553, 527, 554, 526, 555, 525, 556, 524, 557, 523, 547, 533,
  548, 532, 549, 531, 550, 530, 551, 529, 552, 1607, 555, 525,
  556, 525, 556, 524, 557, 523, 547, 533, 548, 532, 549, 531,
  550, 530, 551, 529, 552, 1607, 555, 1605, 557, 523, 547, 533,
  548, 532, 549, 531, 550, 530, 551,
};

const uint32_t irExtraRaw172[] = {
  4387, 4349, 553, 1609, 553, 1607, 555, 1605, 546, 1613, 549, 531,
  550, 530, 551, 1610, 552, 527, 554, 526, 555, 526, 555, 525,
  556, 524, 557, 1602, 549, 1611, 551, 529, 552, 1608, 554, 526,
  555, 525, 556, 525, 556, 524, 546, 533, 548, 532, 549, 1611,
  551, 1608, 554, 1606, 556, 1604, 558, 1603, 548, 1611, 551, 1609,
  553, 1607, 555, 525, 556, 525, 556, 524, 557, 523, 547, 533,
  548, 533, 548, 532, 549, 531, 550, 530, 551, 1607, 555, 526,
  555, 1605, 557, 1603, 548, 531, 550, 531, 550, 530, 551, 529,
  552, 528, 553, 527, 554, 526, 555, 526, 555, 525, 556, 524,
  546, 1612, 550, 1610, 552, 1608, 554, 527, 554, 526, 555, 526,
  555, 525, 556, 524, 557, 523, 547, 533, 548, 532, 549, 531,
  550, 1609, 553, 1607, 555, 525, 556, 525, 556, 1603, 548, 1612,
  550, 530, 551, 7454, 4385, 4352, 549, 1611, 551, 1609, 553, 1608,
  554, 1606, 556, 525, 556, 524, 557, 1602, 549, 531, 550, 531,
  550, 530, 551, 530, 551, 529, 552, 1633, 529, 1604, 558, 523,
  558, 1601, 550, 531, 550, 530, 551, 530, 551, 529, 552, 528,
  553, 527, 554, 1604, 558, 1603, 548, 1611, 551, 1609, 553, 1608,
  554, 1606, 556, 1604, 558, 1602, 549, 532, 549, 531, 550, 530,
  551, 530, 551, 529, 552, 528, 553, 527, 554, 526, 555, 525,
  556, 1603, 548, 532, 549, 1610, 552, 1608, 554, 527, 554, 527,
  554, 526, 555, 525, 556, 524, 557, 523, 547, 533, 548, 532,
  549, 531, 550, 530, 551, 1608, 554, 1606, 556, 1604, 558, 523,
  547, 533, 548, 532, 549, 531, 550, 530, 551, 529, 552, 528,
  553, 527, 554, 526, 555, 1605, 557, 1602, 549, 531, 550, 531,
  550, 1609, 553, 1607, 555, 526, 555,
};

const uint32_t irExtraRaw173[] = {
  4381, 4450, 511, 1623, 545, 1618, 547, 1622, 546, 1619, 546, 570,
  512, 540, 545, 1619, 546, 539, 545, 536, 547, 536, 546, 536,
  546, 538, 544, 1625, 543, 1620, 545, 540, 545, 1654, 512, 536,
  546, 536, 546, 536, 546, 540, 543, 537, 545, 540, 545, 1618,
  547, 1620, 546, 1622, 546, 1620, 545, 1621, 547, 1618, 547, 1622,
  546, 1653, 511, 538, 544, 540, 544, 535, 547, 536, 546, 537,
  545, 539, 547, 535, 547, 538, 544, 538, 544, 1621, 545, 536,
  546, 1622, 546, 1619, 546, 1622, 546, 539, 543, 538, 544, 535,
  548, 540, 544, 1618, 547, 1621, 547, 536, 546, 535, 547, 536,
  546, 540, 545, 537, 545, 1654, 512, 536, 546, 538, 544, 538,
  544, 536, 546, 573, 512, 537, 546, 536, 546, 538, 546, 1618,
  547, 536, 546, 1624, 544, 1619, 546, 570, 512, 540, 545, 538,
  544, 536, 545, 6711, 4378, 4417, 544, 1623, 545, 1619, 546, 1656,
  512, 1620, 545, 535, 547, 538, 547, 1619, 546, 539, 545, 535,
  547, 535, 547, 538, 544, 537, 545, 1623, 545, 1619, 546, 540,
  545, 1621, 545, 536, 546, 537, 545, 536, 546, 570, 512, 537,
  545, 542, 544, 1619, 546, 1621, 545, 1622, 546, 1618, 547, 1622,
  546, 1619, 546, 1624, 544, 1621, 544, 536, 546, 538, 546, 538,
  544, 536, 546, 537, 545, 540, 545, 537, 546, 537, 545, 536,
  546, 1620, 546, 536, 546, 1622, 546, 1620, 545, 1622, 546, 536,
  546, 538, 544, 537, 545, 539, 545, 1619, 546, 1625, 543, 537,
  545, 538, 544, 536, 546, 538, 547, 538, 544, 1622, 544, 537,
  545, 537, 545, 535, 547, 538, 544, 542, 543, 538, 544, 537,
  545, 538, 546, 1619, 546, 537, 545, 1623, 545, 1620, 545, 538,
  544, 540, 545, 537, 545, 536, 545,
};

const uint32_t irExtraRaw174[] = {
  4414, 4350, 566, 1579, 568, 504, 569, 1576, 571, 501, 572, 500,
  563, 535, 538, 507, 566, 1579, 568, 1578, 569, 529, 544, 501,
  572, 500, 563, 509, 564, 507, 566, 532, 541, 1578, 569, 503,
  570, 1574, 563, 1583, 564, 508, 565, 1580, 567, 1579, 568, 1577,
  570, 529, 544, 1575, 572, 1573, 564, 1582, 565, 1581, 566, 1579,
  568, 1578, 569, 1576, 571, 1575, 572, 1573, 564, 1582, 565, 1581,
  566, 1579, 568, 1578, 569, 1577, 570, 1575, 572, 1574, 563, 509,
  564, 1582, 565, 1606, 541, 505, 568, 530, 543, 502, 572, 501,
  562, 1609, 538, 5170, 4410, 4354, 562, 536, 537, 1608, 539, 507,
  566, 1580, 567, 1578, 569, 1577, 570, 1575, 572, 527, 536, 510,
  563, 1582, 565, 1580, 567, 1579, 568, 1577, 570, 1576, 571, 1575,
  572, 526, 537, 1583, 564, 508, 565, 507, 566, 1579, 568, 504,
  569, 503, 570, 528, 545, 1574, 563, 510, 564, 508, 565, 507,
  566, 506, 567, 504, 569, 503, 570, 502, 571, 500, 563, 536,
  537, 508, 565, 507, 566, 505, 568, 530, 543, 503, 570, 501,
  572, 526, 537, 1582, 565, 507, 566, 506, 567, 1579, 568, 1577,
  570, 1576, 571, 1574, 573, 500, 563,
};

const uint32_t irExtraRaw175[] = {
  4393, 4432, 529, 1624, 530, 546, 531, 1625, 529, 547, 530, 547,
  529, 547, 529, 546, 531, 1623, 531, 547, 530, 547, 530, 548,
  529, 548, 529, 547, 530, 547, 530, 1626, 528, 547, 530, 547,
  529, 1626, 528, 1625, 529, 546, 531, 1625, 529, 1625, 529, 1624,
  530, 550, 527, 1624, 530, 1625, 529, 1625, 529, 1625, 529, 1624,
  530, 1624, 530, 1625, 529, 1624, 530, 1623, 531, 1624, 530, 1623,
  531, 1624, 530, 1624, 530, 1624, 529, 1623, 531, 1623, 531, 1624,
  530, 1625, 529, 1624, 530, 547, 529, 547, 530, 546, 530, 1625,
  528, 1624, 529, 5223, 4395, 4431, 529, 546, 531, 1624, 529, 546,
  530, 1625, 528, 1625, 529, 1623, 531, 1624, 530, 547, 529, 1624,
  529, 1625, 529, 1625, 528, 1625, 529, 1624, 530, 1623, 531, 547,
  530, 1623, 531, 1623, 530, 547, 529, 547, 530, 1624, 529, 546,
  530, 547, 530, 548, 528, 1625, 529, 547, 530, 546, 531, 546,
  530, 547, 530, 547, 530, 546, 531, 547, 530, 546, 530, 547,
  530, 547, 530, 545, 531, 547, 530, 547, 530, 546, 530, 547,
  530, 547, 529, 547, 529, 547, 530, 546, 531, 1623, 531, 1625,
  529, 1624, 530, 548, 528, 547, 530,
};

const uint32_t irExtraRaw176[] = {
  9072, 4445, 602, 1586, 603, 477, 601, 478, 600, 479, 599, 480,
  598, 481, 598, 482, 597, 482, 572, 1617, 597, 1593, 572, 1617,
  597, 483, 572, 507, 572, 507, 572, 507, 572, 507, 572, 507,
  597, 482, 597, 482, 572, 507, 597, 482, 572, 1618, 571, 507,
  572, 507, 572, 507, 572, 507, 572, 507, 572, 507, 572, 1618,
  571, 507, 572, 1618, 572, 507, 572, 507, 572, 1618, 572, 507,
  652, 20153, 572, 507, 597, 482, 572, 507, 572, 507, 597, 482,
  597, 482, 572, 507, 596, 483, 572, 507, 572, 507, 572, 507,
  572, 507, 572, 507, 572, 1618, 596, 483, 572, 507, 596, 483,
  595, 484, 572, 507, 597, 482, 595, 484, 597, 482, 597, 482,
  572, 507, 572, 507, 597, 482, 572, 507, 597, 482, 572, 507,
  597, 483, 571, 1618, 597, 482, 675, 40391, 9179, 4421, 599, 1590,
  599, 481, 597, 482, 597, 482, 597, 481, 598, 482, 597, 482,
  597, 482, 597, 1592, 597, 1592, 598, 1592, 597, 482, 597, 482,
  597, 482, 597, 482, 597, 482, 597, 482, 597, 482, 597, 482,
  597, 482, 572, 507, 597, 1593, 597, 482, 572, 507, 572, 507,
  572, 507, 572, 507, 572, 508, 571, 1618, 597, 1593, 596, 1593,
  572, 507, 572, 507, 572, 1618, 597, 482, 678, 20152, 597, 483,
  596, 482, 597, 482, 597, 482, 597, 482, 597, 482, 572, 507,
  597, 482, 597, 482, 597, 482, 572, 507, 597, 482, 597, 482,
  597, 482, 597, 482, 597, 482, 572, 507, 597, 482, 597, 482,
  572, 507, 597, 482, 572, 507, 572, 507, 572, 507, 572, 507,
  572, 507, 572, 507, 572, 507, 572, 507, 572, 1618, 596, 482,
  572, 507, 572,
};

const uint32_t irExtraRaw177[] = {
  1373, 348, 1310, 376, 463, 1190, 1318, 400, 1286, 401, 439, 1244,
  442, 1244, 1288, 400, 465, 1218, 468, 1218, 468, 1219, 467, 7970,
  1307, 404, 1281, 405, 435, 1252, 1281, 406, 1280, 406, 434, 1252,
  434, 1252, 1281, 406, 434, 1253, 434, 1252, 434, 1252, 434, 8000,
  1280, 406, 1281, 406, 434, 1252, 1281, 406, 1280, 406, 434, 1252,
  434, 1252, 1281, 406, 434, 1253, 433, 1253, 433, 1253, 434, 8000,
  1280, 406, 1280, 406, 434, 1253, 1280, 406, 1280, 406, 434, 1253,
  433, 1253, 1280, 406, 434, 1253, 433, 1253, 433, 1253, 433, 8001,
  1279, 406, 1280, 406, 434, 1253, 1280, 407, 1279, 407, 433, 1253,
  434, 1253, 1280, 407, 433, 1253, 433, 1253, 433, 1253, 433, 8001,
  1279, 407, 1279, 407, 433, 1253, 1280, 407, 1280, 407, 433, 1253,
  433, 1253, 1280, 407, 433, 1253, 433, 1253, 434, 1253, 433,
};

const uint32_t irExtraRaw178[] = {
  4329, 4399, 534, 1607, 511, 561, 534, 1607, 535, 535, 536, 537,
  533, 537, 533, 563, 507, 1606, 535, 1610, 507, 559, 535, 563,
  506, 536, 534, 563, 507, 535, 511, 557, 536, 1605, 535, 537,
  533, 1607, 533, 563, 507, 536, 534, 535, 535, 1605, 535, 1606,
  534, 564, 507, 1634, 506, 1605, 535, 1635, 506, 1634, 483, 1629,
  512, 1630, 534, 1607, 511, 1631, 533, 1635, 506, 1634, 506, 1608,
  533, 1606, 535, 1607, 511, 1630, 534, 1609, 532, 1608, 511, 557,
  513, 1658, 483, 560, 510, 1631, 510, 1631, 532, 565, 484, 562,
  508, 1631, 510, 5210, 4353, 4396, 510, 559, 511, 1631, 510, 561,
  509, 1628, 513, 1630, 511, 1658, 483, 1631, 511, 561, 509, 560,
  510, 1634, 508, 1631, 511, 1658, 484, 1631, 511, 1633, 509, 1658,
  484, 563, 508, 1658, 484, 559, 512, 1658, 484, 1633, 509, 1632,
  510, 559, 512, 559, 511, 1631, 511, 559, 512, 562, 508, 560,
  510, 561, 509, 558, 512, 559, 511, 559, 511, 560, 510, 560,
  510, 560, 510, 560, 510, 560, 510, 560, 510, 560, 510, 587,
  483, 587, 483, 1630, 511, 558, 512, 1631, 510, 559, 511, 562,
  508, 1658, 483, 1630, 512, 560, 510,
};

const uint32_t irExtraRaw179[] = {
  1347, 405, 1322, 422, 410, 1332, 1300, 448, 1289, 480, 383, 1303,
  445, 1298, 439, 1331, 417, 1299, 438, 1332, 416, 1302, 1320, 6834,
  1292, 456, 1292, 450, 413, 1304, 1328, 445, 1292, 452, 411, 1302,
  446, 1297, 440, 1303, 445, 1298, 439, 1303, 445, 1301, 1321, 6806,
  1320, 453, 1295, 422, 441, 1301, 1321, 454, 1294, 422, 441, 1301,
  436, 1305, 443, 1300, 448, 1295, 442, 1301, 447, 1298, 1324, 6802,
  1324, 451, 1297, 420, 443, 1299, 1323, 424, 1324, 419, 444, 1298,
  439, 1304, 444, 1298, 439, 1304, 444, 1299, 438, 1306, 1326, 6815,
  1321, 453, 1295, 421, 442, 1302, 1320, 426, 1322, 421, 442, 1301,
  436, 1306, 442, 1301, 447, 1296, 441, 1301, 447, 1299, 1323, 6802,
  1324, 424, 1324, 418, 445, 1300, 1322, 424, 1324, 419, 444, 1298,
  439, 1304, 444, 1299, 438, 1304, 444, 1299, 438, 1306, 1326, 6809,
  1328, 420, 1317, 424, 439, 1306, 1326, 419, 1318, 424, 439, 1304,
  444, 1299, 438, 1305, 443, 1299, 438, 1305, 443, 1302, 1320,
};

const uint32_t irExtraRaw180[] = {
  782, 708, 2923, 2885, 777, 2176, 748, 2232, 775, 2152, 782, 736,
  752, 2176, 779, 711, 777, 2179, 776, 2178, 746, 2181, 774, 744,
  754, 737, 771, 720, 778, 713, 775, 716, 782, 737, 751, 740,
  779, 712, 828, 717, 833, 657, 779, 713, 775, 2180, 775, 716,
  782, 2173, 772, 720, 778, 2177, 778, 713, 775, 2180, 775, 716,
  772, 2183, 751, 740, 748, 2180, 775, 715, 835,
};

const uint32_t irExtraRaw181[] = {
  781, 710, 2930, 2876, 775, 716, 781, 735, 752, 2175, 779, 711,
  776, 2177, 746, 745, 773, 2232, 753, 2173, 749, 768, 750, 2177,
  745, 745, 773, 743, 754, 737, 750, 741, 746, 744, 754, 737,
  771, 746, 751, 739, 748, 2178, 776, 742, 755, 2172, 771, 719,
  778, 2227, 747, 744, 754, 2200, 754, 737, 750, 2203, 751, 741,
  746, 2181, 773, 744, 753, 737, 750, 741, 746,
};

const uint32_t irExtraRaw182[] = {
  988, 606, 586, 2210, 587, 1472, 586, 882, 587, 2211, 586, 375,
  584, 2210, 587, 374, 584, 1472, 586, 374, 585, 376, 582, 375,
  583, 400, 559, 400, 558, 883, 587, 375, 584, 375, 583, 2210,
  587, 374, 584, 884, 586, 882, 587, 374, 584, 376, 583, 2211,
  586, 884, 585, 375, 584, 375, 583, 374, 584, 374, 584, 375,
  584, 1472, 585, 882, 587, 376, 583, 2211, 586, 884, 585, 2211,
  586, 375, 583, 375, 583, 400, 558, 884, 586, 374, 584, 375,
  583, 376, 583, 375, 583, 375, 583, 2211, 586, 2211, 585, 375,
  583, 883, 586,
};

const uint32_t irExtraRaw183[] = {
  8973, 4480, 655, 1652, 656, 550, 655, 550, 655, 551, 655, 550,
  656, 1653, 654, 550, 655, 550, 655, 550, 656, 1651, 656, 550,
  656, 549, 657, 551, 655, 551, 655, 551, 655, 551, 655, 550,
  656, 550, 656, 551, 655, 550, 656, 551, 655, 551, 655, 551,
  655, 550, 655, 550, 656, 552, 654, 551, 655, 551, 654, 1652,
  656, 550, 656, 1651, 656, 551, 654, 551, 655, 1651, 655, 550,
  656, 19983, 655, 1651, 656, 551, 655, 1652, 655, 551, 655, 550,
  655, 550, 656, 550, 656, 550, 655, 551, 655, 1653, 655, 549,
  656, 551, 655, 549, 657, 550, 656, 551, 654, 551, 654, 551,
  655, 550, 656, 552, 654, 551, 655, 550, 655, 550, 656, 551,
  655, 550, 656, 551, 655, 551, 655, 550, 656, 551, 655, 1652,
  655, 550, 656, 1652, 655, 1653, 654,
};

const uint32_t irExtraRaw184[] = {
  4436, 4388, 590, 1598, 590, 508, 564, 1628, 568, 1622, 590, 508,
  562, 536, 560, 1626, 564, 538, 562, 534, 562, 1628, 566, 534,
  560, 538, 562, 1622, 590, 1600, 590, 510, 560, 1632, 566, 534,
  566, 534, 562, 562, 536, 1624, 564, 1622, 590, 1598, 588, 1600,
  590, 1600, 566, 1630, 592, 1598, 566, 1622, 592, 506, 564, 536,
  560, 538, 562, 534, 560, 536, 562, 538, 562, 534, 562, 538,
  560, 536, 560, 1624, 564, 534, 564, 534, 562, 540, 558, 1628,
  562, 1626, 588, 1600, 562, 1626, 564, 536, 562, 1628, 588, 1600,
  564, 1626, 562, 5226, 4448, 4388, 566, 1624, 588, 510, 564, 1628,
  592, 1598, 590, 508, 564, 536, 560, 1624, 590, 512, 560, 540,
  560, 1628, 566, 534, 562, 562, 536, 1626, 562, 1626, 564, 536,
  562, 1632, 588, 512, 564, 534, 562, 540, 584, 1600, 588, 1598,
  588, 1602, 592, 1598, 590, 1600, 564, 1632, 562, 1626, 562, 1624,
  564, 538, 560, 536, 560, 562, 510, 586, 536, 564, 536, 538,
  562, 536, 558, 540, 560, 534, 562, 1624, 564, 536, 560, 562,
  536, 538, 560, 1626, 564, 1624, 566, 1624, 590, 1598, 590, 510,
  560, 1628, 588, 1602, 590, 1602, 562,
};

const uint32_t irExtraRaw185[] = {
  4468, 4382, 596, 1592, 596, 506, 566, 1624, 596, 1594, 592, 508,
  566, 558, 564, 1596, 594, 508, 566, 560, 564, 1598, 594, 508,
  590, 506, 566, 1620, 596, 1594, 596, 504, 568, 1624, 596, 506,
  566, 1622, 594, 1592, 596, 1594, 596, 1594, 594, 504, 568, 1622,
  594, 1596, 596, 1600, 594, 504, 592, 534, 538, 558, 538, 532,
  564, 1622, 594, 504, 566, 560, 540, 1626, 594, 1592, 596, 1594,
  594, 504, 592, 534, 538, 558, 540, 532, 566, 560, 540, 534,
  564, 558, 540, 558, 540, 1622, 598, 1592, 596, 1594, 596, 1594,
  596, 1594, 540, 5274, 4484, 4358, 596, 1592, 596, 504, 566, 1624,
  596, 1594, 596, 504, 566, 532, 590, 1596, 594, 508, 566, 560,
  538, 1624, 596, 504, 592, 508, 566, 1620, 594, 1594, 594, 504,
  590, 1602, 594, 508, 590, 1596, 594, 1594, 596, 1594, 594, 1594,
  596, 504, 566, 1626, 594, 1594, 596, 1602, 594, 504, 566, 558,
  538, 558, 538, 558, 540, 1620, 592, 506, 566, 560, 540, 1626,
  594, 1594, 598, 1594, 594, 504, 566, 532, 588, 510, 590, 534,
  538, 534, 590, 536, 538, 558, 564, 508, 564, 1624, 596, 1594,
  594, 1594, 596, 1592, 596, 1598, 540,
};

const uint32_t irExtraRaw229[] = {
  8900, 4470, 590, 1638, 588, 1640, 590, 538, 586, 540, 590, 538,
  588, 538, 588, 540, 590, 1638, 588, 1640, 590, 538, 588, 1640,
  590, 538, 588, 1640, 590, 538, 588, 1640, 590, 534, 590, 538,
  586, 540, 590, 538, 586, 540, 590, 1638, 588, 538, 588, 540,
  590, 1638, 586, 1642, 588, 1638, 592, 1638, 588, 1640, 590, 536,
  590, 1640, 590, 1638, 588, 538, 592, 40842, 8902, 4470, 590, 1638,
  588, 1640, 590, 538, 588, 540, 590, 538, 588, 538, 592, 536,
  590, 1638, 588, 1640, 590, 538, 588, 1640, 590, 538, 588, 1640,
  590, 538, 588, 1640, 590, 536, 588, 538, 588, 540, 590, 538,
  588, 540, 590, 1638, 588, 538, 592, 536, 590, 1638, 586, 1642,
  588, 1638, 592, 1638, 588, 1640, 590, 536, 590, 1640, 590, 1638,
  588, 538, 592, 40842, 8902, 4472, 588, 1640, 590, 1638, 588, 540,
  590, 538, 588, 538, 592, 536, 590, 538, 588, 1640, 590, 1638,
  588, 540, 590, 1638, 588, 540, 590, 1638, 588, 540, 590, 1638,
  588, 540, 590, 536, 590, 538, 588, 540, 590, 538, 588, 1640,
  590, 538, 588, 538, 592, 1636, 588, 1640, 590, 1638, 588, 1640,
  590, 1638, 588, 540, 590, 1638, 588, 1640, 590, 538, 588, 40846,
  8930, 4444, 586, 1640, 590, 1638, 588, 540, 590, 538, 588, 540,
  590, 536, 588, 538, 588, 1640, 590, 1640, 590, 536, 590, 1638,
  588, 540, 590, 1638, 588, 540, 590, 1638, 588, 540, 590, 538,
  588, 538, 588, 540, 590, 538, 588, 1640, 590, 538, 588, 538,
  592, 1636, 590, 1640, 590, 1638, 588, 1640, 590, 1638, 588, 540,
  588, 1638, 588, 1640, 590, 538, 586,
};

const uint32_t irExtraRaw230[] = {
  9037, 4359, 639, 1572, 639, 489, 638, 465, 639, 489, 638, 467,
  638, 468, 637, 469, 637, 1554, 636, 1554, 698, 1514, 675, 472,
  637, 489, 636, 490, 637, 468, 637, 468, 637, 467, 638, 469,
  636, 490, 636, 469, 637, 490, 636, 1534, 636, 1575, 636, 1576,
  634, 1574, 637, 1574, 637, 1574, 637, 1554, 675, 1536, 637, 489,
  637, 469, 635, 469, 637, 469, 636, 44209, 9146, 4304, 634, 1573,
  638, 1573, 638, 509, 639, 467, 638, 489, 637, 467, 639, 489,
  637, 1553, 638, 1574, 637, 510, 636, 1533, 636, 510, 637, 1554,
  637, 489, 637, 1553, 637, 489, 637, 468, 636, 470, 636, 490,
  637, 467, 637, 1554, 636, 510, 638, 467, 638, 1554, 636, 1552,
  638, 1553, 675, 1538, 635, 1574, 676, 451, 636, 1555, 635, 1576,
  636, 489, 637, 40971, 9087, 4321, 639, 1573, 637, 489, 637, 467,
  637, 490, 636, 468, 638, 488, 638, 489, 638, 1532, 637, 1575,
  635, 1577, 635, 509, 638, 468, 637, 468, 637, 467, 639, 467,
  636, 469, 636, 469, 636, 489, 637, 489, 637, 469, 636, 1555,
  635, 1575, 636, 1575, 635, 1576, 635, 1576, 636, 1574, 637, 1575,
  636, 1577, 633, 492, 635, 491, 635, 491, 636, 492, 632, 44212,
  9146, 4321, 639, 1574, 636, 1574, 638, 489, 636, 490, 636, 469,
  637, 468, 637, 468, 636, 1555, 636, 1575, 636, 490, 636, 1553,
  638, 490, 635, 1555, 636, 490, 635, 1556, 635, 489, 636, 470,
  634, 491, 636, 469, 636, 491, 635, 1556, 635, 511, 636, 468,
  638, 1533, 636, 1575, 636, 1575, 636, 1575, 635, 1575, 636, 491,
  635, 1556, 635, 1576, 636, 490, 636, 40925, 9137, 4304, 633, 1575,
  637, 509, 637, 470, 635, 469, 637, 490, 634, 471, 635, 491,
  636, 1534, 635, 1575, 637, 1574, 637, 490, 636, 489, 639, 467,
  637, 489, 638, 468, 637, 470, 635, 490, 636, 470, 635, 490,
  636, 469, 636, 1576, 636, 1553, 637, 1575, 636, 1577, 635, 1574,
  636, 1575, 636, 1554, 636, 1578, 634, 490, 635, 469, 636, 491,
  633, 493, 636,
};

const uint32_t irExtraRaw233[] = {
  2288, 611, 571, 587, 1153, 587, 572, 587, 572, 1167, 572, 1168,
  571, 587, 573, 587, 572, 587, 572, 589, 570, 587, 572, 587,
  572, 587, 572, 588, 571, 77346, 2287, 611, 571, 588, 1152, 588,
  571, 588, 571, 1168, 571, 1168, 571, 588, 571, 588, 571, 588,
  571, 589, 570, 587, 572, 588, 572, 587, 572, 587, 572,
};

const uint32_t irExtraRaw234[] = {
  2288, 611, 571, 589, 1150, 589, 571, 588, 571, 1168, 571, 587,
  1152, 1169, 571, 1168, 1151, 588, 571, 588, 572, 589, 570, 589,
  570, 588, 571, 589, 570, 75608, 2289, 610, 572, 589, 1150, 589,
  571, 588, 571, 1169, 570, 588, 1151, 1169, 570, 1169, 1150, 588,
  572, 588, 571, 589, 570, 589, 570, 588, 571, 587, 572, 75609,
  2287, 611, 571, 587, 1152, 589, 571, 587, 572, 1168, 571, 588,
  1151, 1169, 571, 1169, 1150, 590, 569, 588, 572, 588, 571, 589,
  570, 588, 571, 587, 572,
};

const uint32_t irExtraRaw242[] = {
  2278, 610, 546, 612, 1124, 610, 572, 612, 544, 1192, 544, 1190,
  546, 612, 544, 612, 544, 612, 544, 612, 544, 586, 572, 612,
  544, 612, 546, 614, 544,
};

const uint32_t irExtraRaw243[] = {
  9005, 4488, 602, 1656, 601, 527, 603, 529, 602, 529, 601, 528,
  602, 528, 602, 530, 601, 1657, 601, 1656, 602, 1656, 601, 528,
  602, 530, 601, 529, 601, 531, 600, 528, 603, 528, 602, 1656,
  602, 528, 602, 528, 602, 1655, 603, 1656, 601, 1657, 600, 1656,
  601, 1656, 602, 529, 601, 1654, 603, 1656, 601, 529, 601, 529,
  601, 529, 601, 529, 601, 529, 601, 44004, 9007, 4489, 602, 1656,
  602, 1656, 602, 527, 603, 529, 601, 528, 602, 529, 601, 528,
  602, 1656, 602, 1656, 602, 529, 601, 1655, 603, 529, 601, 1655,
  603, 528, 602, 1656, 602, 528, 602, 529, 601, 530, 600, 529,
  601, 530, 600, 1657, 601, 528, 602, 531, 599, 1655, 603, 1656,
  601, 1657, 600, 1656, 602, 1654, 603, 529, 601, 1656, 602, 1654,
  603, 527, 603, 40621, 9006, 4490, 600, 1655, 577, 553, 577, 554,
  576, 554, 576, 553, 577, 554, 576, 553, 577, 1681, 576, 1680,
  577, 1681, 576, 554, 576, 554, 577, 555, 575, 555, 575, 555,
  575, 554, 576, 1682, 576, 553, 577, 553, 577, 1680, 577, 1683,
  575, 1683, 574, 1682, 575, 1683, 575, 555, 575, 1681, 577, 1682,
  601, 529, 576, 554, 576, 554, 576, 553, 578, 554, 576, 44033,
  9008, 4487, 577, 1681, 576, 1680, 603, 527, 578, 553, 577, 554,
  602, 529, 602, 529, 576, 1681, 602, 1655, 577, 553, 577, 1682,
  576, 554, 576, 1683, 575, 555, 575, 1681, 576, 554, 576, 555,
  576, 554, 576, 554, 577, 555, 575, 1682, 602, 529, 601, 529,
  601, 1655, 603, 1655, 602, 1656, 601, 1655, 602, 1655, 602, 528,
  602, 1659, 599, 1655, 603, 526, 603, 40623, 9006, 4487, 577, 1683,
  574, 553, 577, 554, 576, 554, 576, 555, 575, 554, 576, 555,
  575, 1680, 578, 1681, 577, 1681, 576, 553, 577, 554, 576, 554,
  577, 555, 575, 554, 576, 556, 574, 1680, 578, 552, 578, 555,
  575, 1683, 574, 1680, 603, 1654, 603, 1655, 602, 1654, 603, 529,
  575, 1680, 603, 1655, 602, 527, 577, 554, 576, 555, 575, 553,
  577, 553, 577, 44023, 9008, 4487, 577, 1680, 578, 1711, 546, 553,
  577, 552, 579, 553, 577, 553, 577, 554, 577, 1680, 578, 1678,
  579, 552, 578, 1682, 576, 552, 578, 1681, 577, 554, 576, 1680,
  578, 554, 576, 553, 577, 553, 577, 553, 577, 553, 577, 1680,
  577, 554, 576, 553, 577, 1680, 577, 1680, 577, 1683, 574, 1679,
  578, 1680, 577, 552, 578, 1682, 575, 1679, 604, 528, 576, 40646,
  9006, 4489, 602, 1654, 603, 529, 601, 527, 603, 527, 603, 529,
  602, 558, 572, 529, 601, 1655, 602, 1655, 602, 1658, 599, 528,
  602, 528, 602, 528, 602, 528, 602, 529, 601, 528, 602, 1655,
  602, 529, 601, 528, 602, 1655, 603, 1655, 603, 1654, 603, 1656,
  601, 1657, 600, 530, 600, 1656, 601, 1656, 601, 529, 601, 529,
  602, 530, 600, 529, 601, 530, 600, 43999, 9005, 4489, 600, 1657,
  600, 1657, 600, 530, 600, 531, 599, 531, 599, 531, 600, 530,
  600, 1658, 599, 1656, 601, 530, 600, 1658, 599, 532, 598, 1658,
  600, 531, 599, 1657, 601, 530, 600, 531, 599, 531, 599, 531,
  599, 532, 598, 1658, 599, 532, 598, 531, 599, 1658, 599, 1658,
  599, 1659, 598, 1660, 597, 1659, 598, 532, 598, 1659, 598, 1659,
  598, 532, 597,
};

const uint32_t irExtraRaw244[] = {
  2383, 509, 648, 504, 1227, 504, 648, 528, 624, 1079, 677, 1054,
  651, 529, 624, 529, 624, 529, 623, 529, 623, 530, 621, 532,
  620, 534, 618, 536, 617, 77252, 2374, 536, 619, 535, 1196, 535,
  617, 536, 617, 1114, 617, 1114, 617, 536, 617, 536, 617, 536,
  617, 536, 617, 536, 617, 536, 617, 536, 617, 536, 617,
};

const uint32_t irExtraRaw252[] = {
  8811, 4222, 530, 1580, 531, 1579, 531, 507, 531, 507, 531, 507,
  531, 508, 531, 508, 530, 1582, 528, 1583, 527, 535, 503, 1608,
  502, 536, 501, 1609, 501, 537, 501, 1610, 500, 538, 500, 1611,
  499, 538, 500, 539, 500, 538, 500, 1611, 500, 539, 499, 538,
  500, 1611, 499, 539, 499, 1611, 499, 1611, 500, 1611, 499, 539,
  499, 1611, 500, 1611, 500, 539, 499, 35437, 8784, 4252, 500, 1611,
  500, 1612, 500, 539, 500, 539, 500, 539, 500, 539, 500, 539,
  500, 1611, 500, 1612, 499, 539, 500, 1612, 500, 539, 500, 1612,
  499, 539, 500, 1612, 500, 539, 500, 1612, 499, 539, 500, 539,
  500, 539, 499, 1612, 499, 540, 499, 539, 500, 1612, 499, 539,
  500, 1612, 499, 1613, 499, 1612, 499, 539, 500, 1612, 500, 1612,
  500, 539, 500,
};

const uint32_t irExtraRaw264[] = {
  9032, 4479, 597, 560, 572, 558, 564, 566, 566, 1666, 589, 1671,
  594, 562, 570, 560, 562, 568, 564, 1669, 596, 560, 562, 568,
  564, 1669, 596, 560, 562, 1671, 594, 1666, 588, 1671, 594, 562,
  570, 560, 562, 568, 564, 1669, 596, 560, 562, 568, 564, 566,
  566, 563, 569, 1664, 591, 1669, 596, 1664, 590, 565, 567, 1667,
  598, 1661, 593, 1666, 588, 1671, 594, 562, 570, 560, 562, 568,
  564, 565, 567, 563, 569, 560, 562, 568, 564, 565, 567, 1666,
  588, 1671, 594, 1665, 589, 1670, 595, 1665, 590, 1669, 596, 1664,
  590, 1668, 597, 13983, 9029, 2222, 599, 96237, 9030, 2221, 589, 96244,
  9034, 2217, 594, 96244, 9033, 2218, 592, 96249, 9038, 2213, 597, 96239,
  9037, 2214, 596, 96238, 9028, 2223, 598, 96221, 9032, 2215, 595,
};

const uint32_t irExtraRaw265[] = {
  9029, 4479, 597, 534, 588, 567, 565, 565, 567, 1666, 589, 1696,
  569, 561, 561, 568, 564, 565, 567, 1692, 562, 567, 565, 565,
  567, 1692, 563, 566, 566, 1694, 571, 1688, 566, 1692, 562, 541,
  591, 564, 568, 1665, 589, 566, 566, 1693, 561, 568, 564, 565,
  567, 562, 570, 1689, 565, 1694, 571, 532, 590, 1696, 569, 561,
  571, 1688, 566, 1693, 562, 1671, 594, 536, 596, 560, 562, 567,
  565, 565, 567, 562, 570, 560, 562, 567, 565, 565, 567, 1692,
  563, 1670, 595, 1691, 564, 1696, 569, 1690, 564, 1695, 570, 1690,
  564, 1694, 571, 13982, 9030, 2221, 590,
};

const uint32_t irExtraRaw266[] = {
  529, 7218, 126, 6585, 219, 703, 180, 5362, 427, 18618, 177,
};

const uint32_t irExtraRaw267[] = {
  9075, 4307, 677, 433, 675, 456, 651, 461, 651, 1579, 650, 1576,
  649, 459, 649, 460, 648, 465, 648, 1578, 647, 461, 622, 491,
  622, 1604, 647, 465, 647, 1583, 622, 1608, 647, 1579, 647, 461,
  647, 466, 622, 1604, 647, 465, 647, 1579, 647, 461, 645, 463,
  648, 465, 648, 1583, 646, 1580, 646, 466, 647, 1579, 622, 491,
  647, 1583, 622, 1608, 647, 1579, 647, 461, 647, 461, 622, 486,
  622, 486, 647, 461, 647, 462, 646, 462, 622, 491, 646, 1584,
  622, 1608, 647, 1584, 621, 1608, 647, 1583, 646, 1584, 647, 1584,
  646, 1592, 622, 14330, 9047, 2137, 621,
};

const uint32_t irExtraRaw268[] = {
  9096, 4436, 620, 505, 647, 478, 648, 501, 623, 1599, 647, 1624,
  623, 502, 623, 503, 621, 504, 619, 1628, 618, 507, 617, 507,
  617, 1630, 617, 508, 616, 1630, 617, 1630, 617, 1631, 616, 508,
  616, 508, 617, 508, 616, 1631, 616, 508, 617, 508, 617, 508,
  616, 508, 616, 1630, 616, 1630, 616, 1631, 616, 508, 616, 1630,
  617, 1630, 617, 1630, 617, 1631, 617, 509, 616, 508, 616, 509,
  616, 509, 616, 509, 616, 509, 615, 509, 616, 508, 617, 1631,
  616, 1631, 615, 1631, 616, 1631, 616, 1631, 616, 1631, 616, 1631,
  615, 1631, 616, 14435, 9093, 2186, 615, 96359, 9095, 2184, 617,
};

const uint32_t irExtraRaw269[] = {
  9093, 4441, 620, 507, 618, 530, 594, 531, 593, 1652, 595, 1653,
  620, 505, 620, 505, 619, 506, 617, 1630, 616, 508, 616, 508,
  616, 1632, 615, 509, 615, 1631, 616, 1632, 615, 1632, 615, 510,
  615, 509, 615, 1632, 615, 509, 615, 1632, 615, 510, 615, 510,
  614, 509, 615, 1632, 614, 1633, 614, 509, 615, 1633, 614, 509,
  615, 1632, 615, 1632, 614, 1633, 614, 510, 614, 510, 615, 510,
  615, 510, 614, 510, 614, 510, 615, 510, 615, 510, 614, 1632,
  615, 1632, 614, 1632, 615, 1632, 615, 1632, 615, 1632, 615, 1632,
  615, 1633, 614, 14439, 9088, 2192, 614, 96349, 9112, 2190, 616,
};

const uint32_t irExtraRaw270[] = {
  8110, 4059, 490, 536, 516, 485, 538, 1489, 509, 539, 489, 1537,
  488, 1537, 488, 1538, 488, 1513, 513, 4064, 487, 538, 488, 1538,
  488, 513, 462, 564, 488, 1539, 487, 513, 486, 1540, 462, 564,
  487, 18513, 8104, 4062, 511, 512, 488, 514, 511, 1513, 512, 513,
  487, 1539, 487, 1538, 487, 1539, 487, 1538, 487, 4064, 511, 513,
  487, 1539, 487, 513, 512, 513, 487, 1539, 487, 513, 512, 1514,
  512, 513, 487, 18537, 8076, 4087, 487, 513, 486, 539, 487, 1539,
  487, 513, 512, 1514, 486, 1540, 484, 1541, 461, 1564, 487, 4088,
  487, 513, 486, 1540, 461, 564, 487, 513, 486, 1540, 485, 540,
  487, 1539, 487, 513, 486, 18537, 8102, 4061, 487, 513, 512, 513,
  487, 1539, 486, 538, 487, 1514, 512, 1513, 512, 1514, 511, 1514,
  511, 4064, 486, 513, 512, 1514, 511, 513, 487, 538, 487, 1514,
  512, 513, 487, 1539, 487, 539, 486, 18511, 8102, 4061, 485, 539,
  487, 513, 512, 1514, 511, 513, 488, 1538, 487, 1538, 487, 1538,
  487, 1538, 487, 4063, 485, 539, 487, 1538, 487, 513, 511, 514,
  487, 1539, 487, 513, 512, 1514, 510, 514, 487, 18509, 8101, 4061,
  511, 513, 487, 538, 487, 1538, 487, 513, 461, 1564, 487, 1539,
  486, 1538, 487, 1538, 487, 4064, 511, 513, 487, 1539, 486, 538,
  487, 513, 461, 1565, 486, 538, 487, 1538, 487, 513, 486, 18534,
  8101, 4061, 486, 513, 512, 513, 487, 1538, 487, 513, 512, 1514,
  511, 1513, 512, 1514, 485, 1539, 461, 4114, 487, 513, 512, 1514,
  511, 514, 487, 513, 512, 1514, 511, 513, 487, 1539, 486, 514,
  511, 18511, 8101, 4061, 486, 538, 487, 513, 485, 1541, 461, 564,
  487, 1538, 487, 1538, 487, 1514, 511, 1513, 512, 4063, 486, 538,
  487, 1538, 487, 513, 461, 564, 487, 1539, 487, 513, 485, 1542,
  460, 564, 487, 18511, 8101, 4061, 512, 512, 488, 513, 512, 1514,
  511, 513, 487, 1538, 487, 1538, 487, 1539, 486, 1538, 487, 4064,
  511, 513, 487, 1538, 487, 513, 512, 513, 487, 1539, 486, 513,
  512, 1514, 511, 513, 487, 18511, 8099, 4087, 487, 513, 485, 540,
  487, 1538, 487, 513, 486, 1539, 486, 1540, 461, 1564, 487, 1538,
  487, 4088, 487, 513, 484, 1541, 461, 564, 487, 513, 486, 1540,
  484, 541, 487, 1539, 486, 513, 486,
};

const uint32_t irExtraRaw271[] = {
  8108, 4056, 490, 534, 491, 534, 492, 1534, 491, 510, 514, 1511,
  515, 1512, 487, 1537, 487, 1539, 463, 4113, 488, 513, 512, 1513,
  487, 1539, 485, 1540, 463, 563, 487, 513, 487, 1539, 485, 540,
  487, 17512, 8104, 4060, 462, 563, 487, 513, 462, 1563, 462, 563,
  487, 1538, 488, 1538, 487, 1514, 511, 1514, 511, 4063, 462, 563,
  487, 1538, 488, 1515, 511, 1514, 512, 512, 488, 538, 487, 1516,
  510, 512, 488, 17512, 8105, 4060, 512, 512, 488, 514, 512, 1514,
  512, 512, 488, 1538, 488, 1538, 487, 1538, 487, 1538, 487, 4063,
  513, 512, 488, 1538, 487, 1538, 487, 1538, 487, 513, 486, 538,
  488, 1538, 487, 513, 512, 17487, 8076, 4109, 488, 512, 462, 563,
  488, 1538, 487, 512, 487, 1539, 462, 1563, 462, 1563, 462, 1563,
  488, 4088, 487, 512, 462, 1563, 462, 1563, 462, 1563, 488, 537,
  488, 512, 463, 1564, 462, 563, 487, 17512, 8103, 4060, 487, 514,
  511, 512, 488, 1538, 487, 537, 488, 1514, 512, 1514, 511, 1513,
  512, 1513, 486, 4089, 487, 513, 512, 1513, 512, 1513, 513, 1513,
  486, 538, 488, 513, 512, 1513, 513, 512, 488, 17512, 8102, 4059,
  462, 563, 488, 512, 513, 1513, 486, 538, 489, 1538, 488, 1537,
  488, 1538, 487, 1538, 487, 4063, 461, 563, 488, 1538, 487, 1537,
  488, 1538, 487, 512, 462, 563, 488, 1538, 487, 512, 462, 17537,
  8102, 4061, 511, 512, 488, 537, 488, 1538, 488, 512, 462, 1563,
  488, 1537, 488, 1538, 487, 1537, 488, 4064, 511, 512, 488, 1537,
  488, 1538, 487, 1537, 488, 513, 512, 512, 488, 1538, 488, 514,
  511, 17510, 8103, 4060, 488, 512, 513, 512, 488, 1537, 488, 512,
  513, 1513, 512, 1513, 486, 1539, 462, 1563, 462, 4113, 488, 512,
  512, 1513, 486, 1540, 462, 1563, 462, 563, 488, 512, 486, 1540,
  462, 563, 488, 17510, 8103, 4060, 487, 537, 488, 512, 463, 1563,
  462, 563, 488, 1538, 488, 1537, 488, 1514, 511, 1513, 512, 4062,
  488, 537, 488, 1514, 512, 1514, 511, 1513, 513, 512, 488, 514,
  511, 1514, 512, 512, 488, 17513, 8103, 4060, 512, 512, 488, 513,
  512, 1513, 512, 512, 488, 1538, 487, 1538, 487, 1538, 487, 1538,
  487, 4063, 486, 538, 488, 1538, 487, 1538, 487, 1538, 487, 512,
  486, 539, 488, 1538, 487, 513, 486, 17513, 8075, 4109, 488, 512,
  462, 563, 488, 1538, 487, 512, 486, 1540, 462, 1563, 462, 1563,
  488, 1537, 488, 4088, 487, 512, 462, 1563, 463, 1563, 488, 1538,
  487, 513, 512, 512, 463, 1563, 488, 537, 488, 17510, 8101, 4059,
  487, 513, 512, 512, 488, 1538, 487, 514, 511, 1514, 511, 1513,
  512, 1513, 511, 1513, 486, 4089, 487, 514, 511, 1513, 512, 1513,
  486, 1538, 486, 539, 487, 513, 512, 1513, 486, 538, 488, 17509,
  8100, 4059, 461, 563, 488, 512, 487, 1538, 486, 540, 487, 1538,
  487, 1537, 488, 1537, 488, 1513, 512, 4062, 462, 563, 487, 1538,
  487, 1537, 488, 1514, 511, 512, 463, 563, 487, 1538, 487, 513,
  462, 17536, 8101, 4060, 511, 512, 488, 537, 488, 1514, 511, 512,
  462, 1563, 487, 1537, 488, 1537, 488, 1538, 487, 4064, 511, 512,
  488, 1538, 487, 1537, 488, 1538, 487, 513, 512, 512, 488, 1538,
  487, 513, 512, 17510, 8077, 4084, 488, 512, 487, 538, 488, 1538,
  487, 513, 512, 1513, 486, 1538, 486, 1540, 462, 1563, 462, 4113,
  487, 512, 487, 1539, 462, 1563, 462, 1563, 462, 563, 487, 513,
  462, 1563, 462, 563, 487, 17510, 8078, 4083, 462, 562, 463, 537,
  463, 1563, 462, 562, 463, 1563, 462, 1539, 486, 1539, 486, 1538,
  487, 4088, 462, 562, 463, 1540, 485, 1539, 486, 1539, 486, 538,
  462, 539, 486, 1539, 486, 537, 463, 17536, 8077, 4083, 487, 538,
  463, 538, 487, 1538, 488, 537, 463, 1563, 462, 1563, 462, 1563,
  462, 1563, 462, 4088, 486, 538, 463, 1563, 462, 1563, 462, 1563,
  462, 537, 463, 562, 463, 1563, 462, 538, 485, 17513, 8077, 4108,
  488, 512, 463, 562, 489, 1537, 488, 511, 463, 1562, 463, 1563,
  463, 1562, 488, 1537, 488, 4087, 488, 511, 463, 1562, 488, 1537,
  488, 1537, 488, 513, 512, 512, 488, 1537, 488, 513, 512, 17509,
  8104, 4057, 488, 512, 513, 511, 489, 1537, 488, 513, 512, 1512,
  513, 1512, 513, 1512, 487, 1538, 463, 4112, 489, 512, 513, 1512,
  513, 1512, 486, 1539, 462, 562, 489, 512, 513, 1512, 486, 539,
  488, 17507, 8103, 4056, 463, 562, 489, 511, 486, 1539, 463, 562,
  489, 1537, 488, 1537, 488, 1537, 488, 1513, 512, 4061, 463, 562,
  488, 1537, 463, 1562, 487, 1514, 512, 512, 488, 537, 487, 1538,
  463, 537, 463, 17535, 8103, 4058, 486, 537, 463, 538, 487, 1539,
  486, 537, 463, 1562, 463, 1562, 463, 1563, 462, 1563, 462, 4089,
  486, 537, 463, 1562, 463, 1562, 463, 1562, 463, 538, 487, 537,
  463, 1563, 462, 538, 487,
};

const uint32_t irExtraRaw284[] = {
  3455, 1751, 420, 446, 420, 1313, 420, 446, 420, 446, 420, 447,
  419, 446, 420, 446, 420, 446, 420, 447, 419, 447, 419, 447,
  419, 447, 419, 446, 420, 1312, 421, 447, 419, 446, 420, 447,
  419, 448, 418, 447, 419, 447, 419, 446, 420, 447, 419, 446,
  420, 1314, 418, 447, 419, 447, 419, 448, 418, 1313, 419, 447,
  419, 446, 420, 1313, 420, 446, 420, 446, 420, 446, 420, 447,
  419, 446, 420, 447, 419, 447, 419, 446, 420, 446, 420, 1313,
  420, 446, 420, 1312, 420, 1313, 420, 1314, 418, 1313, 420, 446,
  420, 447, 419, 1313, 420, 446, 420, 1313, 420, 446, 420, 1314,
  419, 1314, 419, 1313, 420, 1313, 420,
};

const uint32_t irExtraRaw285[] = {
  3522, 1701, 472, 426, 444, 1269, 472, 426, 444, 426, 443, 427,
  443, 427, 443, 426, 444, 427, 443, 426, 444, 427, 442, 428,
  441, 429, 440, 431, 438, 1304, 437, 433, 437, 433, 438, 433,
  437, 433, 437, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 1305, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 1305, 436, 435, 435, 435, 435, 435, 435, 435,
  435, 435, 435, 435, 435, 435, 435, 459, 411, 459, 411, 459,
  411, 1330, 411, 1330, 411, 1330, 411, 1330, 411, 1330, 411, 460,
  410, 459, 411, 459, 411, 1330, 411, 1330, 411, 460, 410, 1330,
  411, 1330, 411, 1331, 410, 1330, 411, 74392, 3516, 1736, 436, 433,
  437, 1304, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 434, 436, 433, 437, 434, 436, 434, 436, 434, 436, 434,
  436, 1305, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 435, 435, 1305, 436, 435, 435, 435, 435, 1306,
  435, 435, 435, 435, 435, 435, 435, 436, 434, 436, 434, 436,
  434, 435, 435, 436, 434, 436, 434, 436, 434, 1330, 411, 1331,
  410, 1330, 411, 1330, 411, 1330, 411, 459, 411, 460, 410, 460,
  410, 1331, 410, 1331, 410, 460, 410, 1331, 410, 1331, 410, 1331,
  410, 1331, 410, 74392, 3515, 1736, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 434, 436, 433, 437, 434, 436, 433, 437, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 1305, 436, 434, 436, 435, 436, 434,
  436, 1306, 435, 435, 435, 435, 435, 1306, 435, 435, 435, 435,
  435, 435, 435, 435, 435, 435, 435, 436, 434, 436, 434, 435,
  435, 436, 434, 435, 435, 1306, 435, 1330, 411, 1307, 434, 1331,
  410, 1308, 433, 436, 434, 436, 434, 460, 410, 1331, 410, 1331,
  410, 460, 410, 1331, 410, 1331, 410, 1331, 410, 1331, 410, 74392,
  3515, 1736, 437, 433, 437, 1304, 437, 434, 436, 433, 437, 434,
  436, 433, 437, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 1305, 436, 434, 436, 434, 436, 434,
  436, 435, 435, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 1306, 435, 435, 435, 435, 435, 435, 435, 1306, 435, 435,
  435, 436, 434, 1306, 435, 435, 435, 436, 434, 436, 434, 435,
  435, 436, 434, 436, 434, 460, 410, 460, 410, 460, 410, 460,
  410, 1331, 410, 1331, 410, 1331, 410, 1331, 410, 1331, 410, 460,
  410, 460, 410, 460, 410, 1331, 410, 1331, 410, 460, 410, 1331,
  410, 1331, 410, 1331, 410, 1331, 410, 74392, 3515, 1736, 437, 433,
  437, 1304, 437, 433, 437, 434, 436, 434, 436, 433, 437, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 1305, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 435, 435, 435, 435, 434, 436, 1306, 435, 434,
  436, 435, 435, 435, 435, 1306, 435, 436, 434, 435, 435, 1306,
  435, 435, 435, 436, 434, 436, 434, 436, 434, 436, 434, 460,
  410, 437, 433, 459, 411, 460, 410, 460, 410, 1331, 410, 1331,
  410, 1331, 410, 1331, 410, 1331, 410, 460, 410, 460, 410, 460,
  410, 1331, 410, 1331, 410, 460, 410, 1331, 410, 1331, 410, 1331,
  410, 1331, 410, 74393, 3514, 1736, 437, 434, 436, 1304, 437, 433,
  437, 434, 436, 433, 437, 434, 436, 433, 437, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 435, 435, 434, 436, 434,
  436, 435, 435, 434, 436, 1305, 436, 435, 435, 435, 435, 435,
  435, 1306, 435, 435, 435, 435, 435, 1306, 435, 435, 435, 436,
  434, 435, 435, 459, 411, 436, 434, 435, 435, 459, 411, 459,
  411, 459, 411, 459, 411, 1330, 411, 1306, 435, 1330, 411, 1330,
  411, 1331, 410, 460, 410, 460, 410, 460, 410, 1331, 410, 1331,
  410, 460, 410, 1331, 410, 1331, 410, 1331, 410, 1331, 410,
};

const uint32_t irExtraRaw286[] = {
  3523, 1701, 472, 426, 444, 1269, 472, 426, 444, 426, 442, 429,
  443, 427, 443, 426, 444, 426, 444, 426, 443, 427, 442, 429,
  440, 430, 439, 432, 438, 1304, 437, 433, 437, 432, 438, 432,
  438, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 1304, 437, 433, 437, 433, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 1304, 437, 433, 437, 434, 436, 433, 437, 434,
  436, 434, 436, 434, 436, 433, 437, 433, 437, 434, 436, 1304,
  437, 1305, 436, 1305, 436, 1305, 436, 1305, 436, 1305, 436, 434,
  436, 434, 436, 1305, 436, 1305, 436, 1305, 436, 434, 436, 1305,
  436, 1305, 436, 1306, 435, 1306, 435, 74393, 3515, 1736, 437, 433,
  437, 1304, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 434, 436, 433, 437, 434, 436, 434,
  436, 1304, 437, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 434, 436, 1305, 436, 434, 436, 434, 436, 1306,
  435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435,
  435, 435, 435, 436, 434, 435, 435, 1307, 434, 1331, 410, 1307,
  434, 1307, 434, 1330, 411, 1307, 434, 460, 410, 460, 410, 1331,
  410, 1331, 410, 1331, 410, 460, 410, 1331, 410, 1331, 410, 1331,
  410, 1331, 410, 74393, 3515, 1736, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 434, 436, 434, 436, 433, 437, 433, 437, 1304, 437, 434,
  436, 434, 436, 434, 437, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 1305, 436, 434, 436, 434, 436, 434,
  436, 1305, 436, 435, 435, 434, 436, 1305, 436, 434, 436, 435,
  435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435,
  435, 435, 435, 1307, 434, 1306, 435, 1307, 434, 1307, 434, 1307,
  434, 1331, 410, 460, 410, 460, 410, 1331, 410, 1331, 410, 1331,
  410, 460, 410, 1331, 410, 1331, 410, 1331, 410, 1331, 410, 74393,
  3515, 1736, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 434, 436, 433, 437, 1304, 437, 433, 437, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  437, 1305, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 434,
  436, 434, 436, 1306, 435, 435, 435, 435, 435, 435, 435, 435,
  435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 1307,
  434, 1330, 411, 1330, 411, 1330, 411, 1330, 411, 1330, 411, 460,
  410, 460, 410, 1331, 410, 1331, 410, 1331, 410, 460, 410, 1331,
  410, 1331, 410, 1331, 410, 1331, 410,
};

const uint32_t irExtraRaw287[] = {
  3523, 1701, 472, 425, 444, 1268, 473, 426, 444, 426, 443, 426,
  444, 426, 444, 426, 444, 426, 444, 425, 444, 426, 443, 427,
  442, 428, 441, 430, 439, 1303, 437, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 433,
  437, 1303, 438, 433, 437, 433, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 1304, 437, 432, 438, 433, 437, 433, 438, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 1304, 437, 1304, 437, 1304, 437, 1305, 436, 1304, 437, 434,
  436, 434, 436, 434, 436, 1305, 436, 1305, 436, 434, 436, 1305,
  436, 1305, 436, 1305, 436, 1305, 436, 74384, 3516, 1735, 438, 432,
  438, 1303, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 1303, 438, 432, 438, 433, 437, 433, 437, 433, 437, 433,
  437, 432, 438, 433, 437, 433, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 1304,
  437, 434, 436, 433, 437, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 437, 434, 436, 434, 436, 434, 436, 1305, 436, 1305,
  436, 1305, 436, 1306, 435, 1306, 435, 458, 412, 436, 434, 459,
  411, 1330, 411, 1330, 411, 459, 411, 1330, 411, 1330, 411, 1330,
  411, 1330, 411, 74384, 3516, 1735, 438, 432, 438, 1303, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 1303, 438, 432,
  438, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 433,
  437, 1304, 437, 433, 437, 433, 437, 1304, 437, 433, 437, 434,
  436, 433, 437, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 1305, 436, 1305, 436, 1305, 436, 1305,
  436, 1306, 435, 435, 435, 435, 435, 435, 435, 1329, 412, 1307,
  434, 435, 435, 1329, 411, 1330, 411, 1330, 411, 1330, 411, 74384,
  3516, 1735, 438, 432, 438, 1303, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 1303, 438, 432, 438, 433, 437, 433,
  437, 433, 437, 432, 438, 432, 438, 432, 438, 433, 437, 433,
  437, 1303, 438, 433, 437, 433, 437, 433, 437, 1303, 438, 433,
  437, 433, 437, 1304, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 434, 436, 434, 436, 434, 436, 434, 436, 433, 437, 434,
  436, 1305, 436, 1305, 436, 1305, 436, 1305, 436, 1305, 436, 434,
  436, 434, 436, 434, 436, 1306, 435, 1305, 436, 458, 412, 1306,
  435, 1330, 411, 1330, 411, 1330, 411, 74384, 3516, 1735, 438, 432,
  438, 1303, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 1303, 438, 432, 438, 433, 437, 433, 437, 433, 437, 432,
  438, 433, 437, 433, 437, 433, 437, 433, 437, 1303, 438, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 1304,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 434, 436, 1305, 436, 1305,
  436, 1305, 436, 1305, 436, 1305, 436, 434, 436, 434, 436, 435,
  435, 1306, 435, 1306, 435, 435, 435, 1307, 434, 1329, 412, 1330,
  411, 1329, 412, 74384, 3516, 1735, 438, 432, 438, 1303, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 433, 437, 432, 438, 432, 438, 1303, 438, 432,
  438, 433, 437, 432, 438, 433, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 433,
  437, 1304, 437, 433, 437, 434, 436, 1305, 436, 434, 436, 433,
  437, 434, 436, 434, 436, 434, 436, 434, 436, 434, 436, 434,
  436, 434, 436, 435, 435, 1305, 436, 1305, 436, 1306, 435, 1305,
  436, 1305, 436, 435, 435, 435, 435, 435, 435, 1329, 412, 1329,
  411, 459, 411, 1306, 435, 1330, 411, 1330, 411, 1330, 411,
};

const uint32_t irExtraRaw288[] = {
  3523, 1700, 473, 425, 445, 1267, 474, 426, 444, 426, 444, 426,
  444, 426, 445, 425, 445, 425, 445, 425, 445, 425, 444, 426,
  443, 427, 442, 429, 440, 1301, 439, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 433, 437, 433, 437, 432,
  438, 1303, 438, 432, 438, 432, 438, 433, 437, 1303, 438, 432,
  438, 433, 437, 1303, 438, 433, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 1304,
  437, 1304, 437, 1304, 437, 1304, 437, 1304, 437, 1305, 436, 433,
  437, 434, 436, 1305, 436, 1305, 436, 1304, 437, 434, 436, 1305,
  436, 1305, 436, 1305, 436, 1305, 436, 74384, 3516, 1734, 438, 432,
  438, 1303, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 1303, 438, 432, 438, 433, 437, 432, 438, 433, 437, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 1304, 437, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 433, 437, 1304,
  437, 433, 437, 433, 437, 433, 437, 434, 436, 434, 436, 434,
  436, 434, 436, 434, 436, 434, 436, 1329, 412, 1305, 436, 1329,
  412, 1305, 436, 1305, 436, 1329, 412, 458, 412, 458, 412, 1329,
  412, 1329, 412, 1329, 412, 459, 411, 1329, 412, 1329, 412, 1329,
  412, 1329, 412, 74385, 3515, 1734, 438, 432, 438, 1302, 439, 432,
  438, 432, 438, 432, 438, 432, 438, 432, 438, 432, 438, 432,
  438, 432, 438, 433, 437, 432, 438, 432, 438, 1304, 437, 433,
  437, 433, 437, 433, 437, 433, 437, 433, 437, 433, 437, 433,
  437, 433, 437, 433, 437, 1304, 437, 433, 437, 434, 436, 434,
  436, 1305, 436, 458, 412, 434, 436, 1305, 436, 433, 437, 458,
  412, 458, 412, 458, 412, 458, 412, 458, 412, 458, 412, 458,
  412, 458, 412, 1329, 412, 1329, 412, 1329, 412, 1329, 412, 1329,
  412, 1329, 412, 458, 412, 458, 412, 1329, 412, 1329, 412, 1329,
  412, 458, 412, 1329, 412, 1329, 412, 1329, 412, 1329, 412,
};

const uint32_t irExtraRaw294[] = {
  9024, 4506, 570, 582, 542, 582, 518, 606, 518, 606, 518, 606,
  518, 606, 518, 606, 518, 610, 518, 1698, 548, 1698, 546, 1700,
  546, 1700, 546, 1698, 546, 1700, 546, 1696, 548, 1702, 570, 1674,
  546, 610, 516, 1698, 546, 606, 542, 582, 542, 582, 544, 1674,
  546, 610, 520, 606, 542, 1674, 570, 582, 542, 1676, 546, 1698,
  570, 1674, 572, 582, 520, 1698, 546,
};

const uint32_t irExtraRaw300[] = {
  1221, 1171, 433, 566, 433, 881, 433, 2381, 433, 1486, 434, 565,
  434, 1486, 433, 1776, 433, 2380, 433, 565, 434, 2381, 433, 1170,
  434, 87358, 1220, 1171, 433, 566, 433, 883, 431, 2381, 433, 1486,
  433, 567, 432, 1487, 432, 1775, 434, 2381, 432, 566, 433, 2380,
  434, 1171, 433, 86252, 1221, 1172, 432, 565, 434, 880, 435, 2381,
  433, 1486, 433, 565, 434, 1487, 432, 1776, 433, 2380, 434, 566,
  433, 2379, 434, 1170, 434,
};

const uint32_t irExtraRaw301[] = {
  293, 1801, 296, 753, 295, 1801, 296, 1801, 296, 752, 296, 754,
  294, 1801, 296, 1800, 297, 752, 296, 1802, 295, 752, 296, 1801,
  296, 753, 295, 1800, 297, 752, 296, 42709, 296, 1800, 297, 753,
  295, 1800, 297, 1800, 297, 753, 295, 1802, 295, 753, 295, 753,
  295, 1801, 296, 753, 295, 1801, 296, 754, 294, 1802, 295, 753,
  295, 1801, 296, 42694, 295, 1800, 297, 752, 296, 1803, 294, 1803,
  294, 753, 295, 753, 295, 1801, 296, 1802, 295, 752, 296, 1802,
  295, 752, 296, 1801, 296, 753, 295, 1802, 295, 753, 295, 42709,
  295, 1802, 295, 753, 295, 1803, 294, 1801, 296, 753, 295, 1802,
  295, 752, 296, 752, 296, 1801, 296, 752, 296, 1803, 294, 754,
  294, 1803, 294, 754, 294, 1804, 293, 42694, 294, 1802, 294, 755,
  293, 1803, 294, 1804, 268, 779, 269, 779, 269, 1828, 269, 1828,
  269, 780, 268, 1829, 268, 778, 270, 1829, 323, 725, 268, 1829,
  268, 781, 324,
};

const uint32_t irExtraRaw302[] = {
  295, 1800, 297, 753, 295, 1800, 297, 1801, 296, 751, 297, 752,
  296, 1799, 298, 1800, 297, 749, 299, 1799, 298, 750, 298, 752,
  346, 1749, 349, 1747, 350, 698, 351, 42656, 351, 1747, 350, 697,
  351, 1746, 351, 1748, 349, 697, 351, 1746, 351, 698, 350, 699,
  349, 1748, 348, 699, 349, 1748, 348, 1747, 349, 699, 350, 699,
  348, 1748, 299, 42691, 295, 1802, 295, 754, 294, 1802, 295, 1802,
  295, 755, 293, 754, 294, 1803, 269, 1828, 269, 779, 269, 1827,
  270, 779, 269, 779, 269, 1827, 270, 1827, 270, 781, 267, 42736,
  269, 1828, 269, 780, 268, 1827, 270, 1828, 269, 780, 268, 1830,
  267, 780, 268, 778, 270, 1827, 270, 780, 268, 1828, 269, 1827,
  270, 780, 268, 778, 270, 1828, 269, 42721, 295, 1801, 296, 752,
  296, 1802, 295, 1804, 293, 752, 297, 752, 296, 1800, 297, 1800,
  297, 752, 296, 1801, 296, 752, 296, 751, 297, 1830, 267, 1800,
  297, 754, 294,
};

const uint32_t irExtraRaw307[] = {
  9014, 4332, 661, 1570, 661, 471, 660, 473, 658, 474, 657, 476,
  655, 498, 633, 498, 634, 502, 633, 499, 633, 1599, 632, 1599,
  632, 1599, 632, 1599, 632, 1599, 632, 1600, 631, 1603, 632, 500,
  632, 501, 631, 501, 631, 501, 631, 501, 631, 501, 631, 1601,
  631, 504, 631, 1601, 631, 1601, 631, 1601, 631, 1601, 631, 1601,
  630, 1601, 630, 501, 631, 1601, 631, 38177, 8983, 2149, 630,
};

const uint32_t irExtraRaw321[] = {
  926, 754, 928, 755, 925, 758, 873, 810, 1728, 806, 903, 1612,
  1725, 807, 872, 1643, 873, 810, 1728, 806, 873, 85940, 871, 811,
  902, 781, 927, 755, 901, 781, 1753, 779, 899, 1616, 1726, 806,
  873, 1642, 873, 810, 1726, 806, 899,
};

const uint32_t irExtraRaw341[] = {
  9292, 4518, 635, 522, 635, 522, 635, 523, 634, 523, 662, 494,
  664, 494, 663, 1625, 661, 519, 662, 1602, 660, 1626, 660, 1650,
  636, 1650, 636, 1651, 635, 1651, 635, 522, 634, 1653, 633, 524,
  633, 1655, 631, 526, 631, 527, 630, 1657, 630, 527, 630, 527,
  630, 527, 630, 1658, 630, 527, 630, 1658, 630, 1658, 630, 527,
  631, 1658, 629, 1658, 629, 1658, 629, 40773, 9295, 2239, 630, 98164,
  9297, 2241, 630,
};

const uint32_t irExtraRaw342[] = {
  9028, 4480, 593, 1667, 589, 541, 597, 532, 596, 534, 594, 562,
  566, 564, 564, 539, 589, 567, 571, 558, 570, 1663, 594, 1666,
  591, 1696, 571, 1662, 595, 1666, 591, 1669, 598, 1662, 595, 562,
  566, 563, 565, 539, 589, 567, 571, 1661, 596, 561, 567, 563,
  565, 564, 564, 1669, 598, 1662, 595, 1691, 566, 1668, 599, 558,
  570, 1663, 594, 1692, 565, 575, 1669,
};

const uint32_t irExtraRaw381[] = {
  337, 1695, 339, 664, 340, 664, 339, 665, 338, 664, 339, 693,
  310, 1695, 339, 1696, 338, 693, 310, 1697, 337, 666, 337, 693,
  310, 693, 310, 1723, 311, 692, 311, 44457, 309, 1723, 310, 692,
  311, 692, 311, 692, 311, 693, 310, 1723, 310, 694, 334, 669,
  334, 1700, 333, 672, 331, 1703, 330, 1727, 306, 1704, 330, 697,
  306, 1727, 306, 42378, 309, 1724, 333, 670, 333, 670, 333, 672,
  331, 673, 330, 673, 330, 1704, 329, 1704, 329, 674, 329, 1727,
  306, 698, 305, 698, 305, 698, 305, 1728, 305, 698, 305, 44436,
  309, 1724, 334, 670, 333, 671, 332, 672, 331, 697, 306, 1728,
  306, 674, 329, 697, 306, 1728, 306, 698, 306, 1728, 306, 1727,
  306, 1728, 305, 698, 305, 1727, 306, 42378, 309, 1724, 334, 669,
  334, 671, 332, 672, 330, 673, 330, 697, 306, 1703, 330, 1727,
  306, 697, 306, 1727, 306, 697, 306, 698, 305, 697, 306, 1728,
  305, 697, 306, 44431, 309, 1724, 334, 670, 333, 670, 333, 672,
  331, 696, 306, 1727, 306, 697, 306, 697, 306, 1727, 306, 697,
  306, 1727, 306, 1727, 306, 1727, 306, 697, 306, 1728, 305, 42373,
  309, 1724, 334, 670, 333, 670, 333, 671, 332, 697, 306, 697,
  306, 1727, 305, 1727, 306, 697, 306, 1728, 305, 697, 306, 697,
  306, 697, 306, 1727, 306, 697, 306, 44427, 309, 1724, 334, 669,
  334, 670, 333, 672, 331, 697, 306, 1728, 306, 697, 306, 697,
  306, 1727, 306, 697, 306, 1727, 306, 1727, 306, 1727, 306, 697,
  306, 1728, 305,
};

const uint32_t irExtraRaw388[] = {
  926, 751, 1760, 756, 922, 756, 921, 782, 897, 782, 897, 783,
  897, 784, 897, 784, 897, 1624, 897, 784, 1736, 787, 895, 85521,
  921, 780, 1734, 784, 896, 783, 894, 785, 895, 784, 895, 784,
  895, 785, 895, 784, 896, 1625, 895, 785, 1735, 787, 896, 85546,
  894, 783, 1732, 763, 917, 783, 896, 783, 896, 784, 895, 784,
  895, 785, 894, 785, 897, 1624, 897, 784, 1734, 786, 897,
};

const uint32_t irExtraRaw389[] = {
  970, 719, 972, 718, 1822, 718, 944, 747, 920, 771, 921, 799,
  893, 802, 893, 799, 893, 1644, 893, 799, 1767, 770, 918, 86138,
  893, 798, 894, 798, 1768, 772, 915, 778, 913, 779, 913, 804,
  888, 807, 888, 804, 888, 1627, 911, 805, 1737, 801, 888, 86143,
  893, 798, 918, 774, 1766, 775, 913, 780, 912, 780, 912, 779,
  913, 783, 912, 780, 912, 1625, 913, 780, 1763, 777, 912, 86141,
  892, 798, 918, 774, 1766, 776, 912, 780, 911, 780, 912, 780,
  912, 783, 912, 780, 912, 1626, 912, 780, 1762, 801, 888, 86137,
  892, 799, 917, 774, 1766, 775, 913, 780, 912, 780, 912, 779,
  913, 783, 912, 781, 911, 1650, 888, 805, 1738, 801, 887, 86148,
  892, 799, 918, 775, 1765, 800, 888, 804, 888, 804, 888, 804,
  888, 808, 888, 804, 888, 1651, 888, 805, 1738, 801, 888, 86133,
  944, 772, 919, 773, 1767, 774, 914, 778, 914, 778, 914, 778,
  914, 781, 915, 777, 915, 1624, 914, 778, 1766, 774, 914,
};

const uint32_t irExtraRaw390[] = {
  872, 800, 873, 797, 1723, 808, 875, 798, 875, 827, 873, 772,
  900, 799, 873, 799, 873, 1614, 873, 800, 1718, 816, 867, 86386,
  844, 828, 844, 828, 1744, 786, 845, 828, 845, 828, 845, 828,
  845, 828, 844, 828, 845, 1643, 844, 828, 1693, 838, 844,
};

const uint32_t irExtraRaw391[] = {
  568, 2595, 570, 485, 569, 485, 570, 485, 570, 485, 570, 486,
  569, 485, 570, 485, 570, 484, 571, 484, 571, 19818, 570, 2596,
  569, 1013, 1098, 1011, 570, 486, 569, 485, 570, 485, 570, 487,
  568, 484, 571, 485, 570, 116371, 620, 2545, 620, 962, 1149, 960,
  621, 434, 621, 434, 621, 434, 621, 435, 620, 436, 618, 435,
  620, 116332, 621, 2543, 621, 433, 622, 433, 622, 434, 621, 433,
  621, 434, 621, 435, 620, 432, 622, 432, 623, 433, 621,
};

const uint32_t irExtraRaw392[] = {
  604, 2557, 605, 452, 604, 451, 605, 451, 605, 454, 602, 452,
  604, 450, 606, 450, 606, 452, 604, 452, 604, 19746, 603, 2558,
  604, 976, 1132, 974, 604, 452, 604, 452, 604, 451, 605, 451,
  605, 451, 606, 451, 605, 116246, 602, 2559, 603, 453, 603, 454,
  602, 453, 603, 453, 604, 452, 604, 452, 604, 453, 603, 453,
  603, 453, 603,
};

const uint32_t irExtraRaw402[] = {
  9021, 4377, 655, 452, 654, 452, 654, 1567, 654, 453, 653, 453,
  653, 453, 652, 454, 651, 455, 651, 1568, 654, 1569, 653, 455,
  651, 1570, 652, 1570, 652, 1570, 652, 1571, 651, 1572, 649, 480,
  626, 481, 624, 482, 623, 1599, 623, 483, 623, 484, 622, 484,
  622, 484, 622, 1601, 621, 1601, 621, 1601, 621, 484, 622, 1601,
  621, 1601, 621, 1601, 621, 1601, 621, 39912, 8910, 2137, 622, 95435,
  8933, 2137, 622, 95434, 8934, 2137, 622, 95434, 8934, 2137, 622, 95434,
  8934, 2137, 622, 95434, 8933, 2137, 622, 95434, 8933, 2138, 621, 95436,
  8932, 2138, 621, 95435, 8933, 2138, 621, 95435, 8933, 2137, 622,
};

const uint32_t irExtraRaw403[] = {
  976, 723, 1776, 796, 925, 804, 897, 804, 897, 803, 897, 803,
  897, 803, 897, 803, 922, 1610, 919, 783, 1767, 807, 914, 86103,
  921, 778, 1769, 805, 916, 786, 914, 788, 913, 787, 914, 787,
  914, 788, 913, 811, 890, 1617, 914, 787, 1764, 832, 889, 86082,
  920, 778, 1768, 804, 916, 786, 914, 786, 914, 786, 914, 786,
  914, 786, 915, 786, 915, 1616, 915, 786, 1763, 809, 913,
};

const uint32_t irExtraRaw422[] = {
  8510, 4237, 528, 1592, 528, 1592, 528, 526, 529, 526, 529, 526,
  529, 526, 529, 526, 529, 527, 528, 1591, 529, 1591, 529, 1592,
  528, 527, 528, 1590, 530, 526, 529, 526, 529, 525, 528, 22533,
  529, 1590, 529, 1592, 528, 526, 529, 526, 529, 526, 529, 526,
  529, 526, 529, 526, 529, 1592, 528, 1591, 555, 1564, 556, 500,
  555, 1565, 554, 500, 529, 526, 529, 524, 529,
};

const uint32_t irExtraRaw474[] = {
  8073, 3997, 524, 502, 495, 505, 492, 1508, 498, 503, 494, 1505,
  501, 1500, 495, 1504, 491, 1510, 496, 3988, 522, 502, 495, 1505,
  501, 501, 496, 504, 493, 1507, 499, 502, 495, 1505, 501, 501,
  496, 18806, 8072, 3997, 524, 502, 495, 505, 492, 1507, 499, 502,
  495, 1505, 490, 1509, 497, 1504, 491, 1510, 496, 3988, 522, 502,
  495, 1505, 501, 500, 497, 503, 494, 1506, 500, 501, 496, 1504,
  491, 510, 498, 18806, 8072, 3998, 523, 503, 494, 506, 491, 1509,
  497, 504, 493, 1506, 499, 1501, 494, 1506, 500, 1502, 493, 3989,
  522, 504, 493, 1507, 499, 502, 495, 505, 492, 1508, 498, 503,
  494, 1506, 499, 502, 495, 18807, 8072, 3998, 523, 503, 494, 506,
  491, 1509, 497, 504, 493, 1506, 500, 1501, 494, 1506, 500, 1502,
  493, 3989, 521, 503, 494, 1506, 500, 502, 495, 505, 492, 1508,
  498, 503, 494, 1506, 500, 502, 495, 18807, 8072, 3998, 523, 502,
  495, 505, 492, 1508, 498, 503, 494, 1505, 501, 1500, 495, 1504,
  491, 1510, 496, 3988, 523, 502, 495, 1505, 501, 501, 496, 503,
  494, 1506, 500, 501, 496, 1504, 491, 510, 498,
};

const uint32_t irExtraRaw475[] = {
  8065, 4004, 517, 509, 499, 502, 495, 1505, 501, 500, 497, 1502,
  493, 1507, 498, 1476, 519, 1482, 523, 3984, 526, 499, 498, 1502,
  493, 1507, 498, 1477, 518, 507, 501, 500, 497, 1503, 492, 509,
  499, 17804, 8064, 4004, 516, 510, 498, 503, 494, 1505, 500, 501,
  496, 1503, 492, 1508, 497, 1503, 492, 1484, 521, 3986, 524, 501,
  496, 1503, 492, 1508, 497, 1503, 492, 509, 499, 502, 495, 1505,
  500, 502, 495, 17808, 8071, 3999, 522, 504, 493, 507, 501, 1500,
  495, 506, 491, 1508, 497, 1502, 493, 1507, 498, 1503, 492, 3991,
  519, 506, 491, 1508, 497, 1503, 492, 1508, 497, 504, 493, 507,
  501, 1499, 496, 506, 491, 17814, 8065, 4006, 525, 500, 497, 504,
  493, 1507, 498, 502, 495, 1504, 491, 1509, 496, 1504, 491, 1510,
  496, 3987, 523, 502, 495, 1504, 502, 1499, 496, 1504, 501, 500,
  497, 503, 494, 1506, 499, 502, 495, 17807, 8072, 3997, 524, 502,
  495, 505, 492, 1508, 497, 503, 494, 1505, 501, 1499, 496, 1479,
  516, 1485, 520, 3987, 523, 501, 496, 1504, 491, 1509, 496, 1479,
  516, 510, 498, 503, 494, 1505, 500, 502, 495, 17806, 8073, 3996,
  525, 501, 496, 505, 492, 1507, 498, 503, 494, 1505, 500, 1499,
  496, 1479, 516, 1485, 520, 3987, 523, 502, 495, 1504, 501, 1499,
  496, 1479, 516, 510, 498, 503, 494, 1506, 499, 502, 495,
};

const uint32_t irExtraRaw528[] = {
  182, 7827, 172, 2332, 177, 2328, 181, 2323, 176, 2330, 179, 1309,
  175, 1331, 174, 2331, 178, 1328, 177, 2328, 181, 1307, 177, 2327,
  182, 1325, 180, 1326, 179, 1309, 176, 1331, 174, 1332, 173, 2333,
  176, 2310, 178, 1328, 177, 2328, 181, 1325, 180, 2306, 182, 1325,
  180, 2325, 174, 8340, 183, 7825, 175, 2330, 179, 2326, 173, 2333,
  176, 2310, 178, 1328, 177, 1329, 176, 2329, 180, 1308, 176, 2329,
  180, 1326, 179, 2326, 173, 1334, 182, 1306, 179, 1328, 177, 1329,
  176, 1312, 183, 2322, 177, 2329, 180, 1326, 179, 2325, 174, 1315,
  180, 2326, 173, 1333, 183, 2323, 176, 8339, 183, 7824, 175, 2330,
  179, 2307, 181, 2324, 175, 2331, 178, 1328, 177, 1330, 175, 2311,
  177, 1329, 176, 2329, 180, 1326, 179, 2327, 182, 1305, 179, 1328,
  177, 1328, 177, 1311, 173, 1334, 182, 2323, 176, 2330, 179, 1326,
  571, 1916, 180, 1327, 178, 2325, 587, 920, 575, 1930, 579,
};

const uint32_t irExtraRaw532[] = {
  9047, 4385, 682, 474, 682, 1578, 708, 476, 679, 1581, 706, 477,
  679, 1582, 705, 1582, 705, 1582, 678, 1583, 679, 1607, 679, 1582,
  678, 478, 679, 478, 678, 477, 679, 1582, 705, 1582, 679, 1583,
  679, 1608, 704, 1582, 705, 478, 678, 1582, 705, 478, 678, 478,
  678, 478, 679, 477, 679, 478, 679, 478, 678, 1582, 705, 478,
  678, 1583, 704, 1582, 705, 1582, 679, 39574, 9073, 4387, 679, 478,
  678, 1583, 679, 503, 677, 1584, 705, 478, 678, 1582, 705, 1582,
  705, 1582, 705, 1582, 705, 1582, 705, 1582, 678, 479, 677, 479,
  678, 479, 677, 1583, 679, 1608, 704, 1582, 705, 1582, 705, 1582,
  705, 478, 678, 1583, 704, 478, 678, 478, 678, 1582, 680, 478,
  703, 453, 704, 453, 703, 1557, 703, 480, 676, 1584, 704, 1583,
  704, 478, 678,
};

const uint32_t irExtraRaw566[] = {
  4499, 4472, 566, 1662, 565, 1664, 563, 1665, 562, 565, 538, 564,
  539, 562, 541, 560, 543, 558, 545, 1683, 544, 1658, 569, 1686,
  541, 559, 544, 557, 536, 565, 538, 563, 540, 561, 542, 559,
  544, 1684, 543, 558, 545, 556, 537, 564, 539, 562, 541, 560,
  543, 558, 545, 1684, 543, 558, 545, 1683, 544, 1684, 543, 1660,
  567, 1688, 539, 1689, 538, 1664, 563, 565, 538, 563, 540, 561,
  542, 559, 544, 42973, 4495, 4472, 566, 1662, 565, 1663, 564, 1664,
  563, 564, 539, 562, 541, 560, 543, 558, 545, 556, 537, 1691,
  536, 1691, 536, 1666, 572, 555, 538, 564, 539, 561, 542, 559,
  544, 557, 536, 565, 538, 1689, 538, 563, 540, 560, 543, 558,
  545, 555, 538, 563, 540, 561, 542, 1686, 541, 559, 544, 1684,
  543, 1684, 543, 1658, 569, 1685, 542, 1686, 541, 1660, 567, 559,
  544, 557, 536, 565, 538, 563, 540, 42959, 4499, 4466, 562, 1666,
  572, 1656, 571, 1656, 571, 556, 537, 564, 539, 562, 541, 559,
  544, 556, 537, 1691, 536, 1690, 537, 1664, 563, 564, 539, 562,
  541, 560, 543, 557, 536, 565, 538, 563, 540, 1688, 539, 561,
  542, 559, 544, 556, 537, 564, 539, 562, 541, 560, 543, 1684,
  543, 558, 545, 1682, 545, 1683, 544, 1657, 570, 1684, 543, 1659,
  568, 1659, 568, 559, 544, 557, 536, 565, 538, 563, 540, 42955,
  4503, 4463, 565, 1663, 564, 1663, 564, 1664, 563, 563, 540, 561,
  542, 558, 545, 556, 537, 564, 539, 1688, 539, 1688, 539, 1662,
  565, 562, 541, 559, 544, 557, 536, 565, 538, 563, 540, 560,
  543, 1685, 542, 559, 544, 556, 537, 564, 539, 562, 541, 559,
  544, 557, 536, 1692, 535, 565, 538, 1690, 537, 1690, 537, 1664,
  563, 1691, 536, 1666, 572, 1656, 571, 556, 537, 564, 539, 562,
  541, 559, 544,
};

const uint32_t irExtraRaw567[] = {
  4567, 4475, 732, 1555, 703, 1608, 705, 1608, 705, 478, 676, 460,
  669, 507, 651, 506, 649, 508, 621, 1640, 672, 1616, 673, 1639,
  674, 508, 648, 508, 648, 508, 647, 485, 644, 511, 647, 508,
  648, 1639, 674, 508, 649, 508, 647, 485, 645, 511, 647, 508,
  648, 509, 647, 1639, 674, 509, 647, 1613, 673, 1641, 673, 1640,
  673, 1640, 672, 1617, 671, 1640, 673, 48544, 4566, 4505, 648, 1639,
  674, 1639, 674, 1639, 647, 510, 648, 508, 648, 509, 648, 508,
  648, 508, 648, 1639, 647, 1642, 673, 1639, 674, 508, 648, 509,
  648, 508, 647, 485, 645, 511, 647, 509, 647, 1640, 673, 509,
  647, 509, 646, 486, 643, 511, 647, 509, 647, 509, 647, 1640,
  673, 509, 647, 1615, 672, 1640, 673, 1640, 673,
};

const uint32_t irExtraRaw602[] = {
  264, 1848, 264, 792, 264, 792, 264, 792, 264, 792, 264, 792,
  264, 1848, 264, 1848, 264, 792, 264, 1848, 264, 792, 264, 792,
  264, 792, 264, 1848, 264, 792, 264, 43560, 264, 1848, 264, 792,
  264, 792, 264, 792, 264, 792, 264, 1848, 264, 792, 264, 792,
  264, 1848, 264, 792, 264, 1848, 264, 1848, 264, 1848, 264, 792,
  264, 1848, 264, 43560,
};

const uint32_t irExtraRaw604[] = {
  3381, 1656, 439, 401, 438, 1239, 439, 401, 438, 1240, 439, 401,
  438, 1239, 440, 401, 438, 1239, 440, 400, 439, 1238, 440, 401,
  438, 1239, 440, 1240, 438, 426, 438, 1240, 439, 400, 439, 1240,
  439, 1240, 438, 1240, 438, 1240, 438, 401, 438, 401, 438, 402,
  437, 1242, 436, 402, 437, 1242, 437, 402, 437, 403, 436, 1242,
  437, 402, 437, 403, 436, 403, 436, 403, 436, 1242, 437, 1242,
  437, 403, 436, 1242, 437, 403, 436, 403, 436, 403, 436, 1242,
  437, 403, 436, 403, 436, 403, 436, 1243, 436, 403, 436, 1242,
  437, 1242, 437,
};

const uint32_t irExtraRaw605[] = {
  278, 1811, 277, 788, 246, 794, 250, 764, 280, 786, 248, 792,
  252, 1813, 275, 1815, 273, 791, 253, 1812, 276, 789, 255, 785,
  249, 791, 253, 1812, 276, 789, 255, 45322, 280, 1809, 279, 786,
  248, 766, 278, 788, 246, 794, 250, 1815, 273, 792, 252, 788,
  246, 1819, 280, 785, 249, 1817, 271, 1819, 280, 1810, 278, 787,
  247, 1818, 281, 43217, 274, 1818, 270, 794, 250, 764, 280, 786,
  248, 792, 252, 788, 256, 1809, 279, 1811, 277, 788, 246, 1819,
  280, 785, 249, 766, 278, 762, 272, 1819, 280, 785, 248,
};

const uint32_t irExtraRaw606[] = {
  352, 1747, 353, 694, 354, 694, 353, 694, 354, 694, 354, 693,
  354, 1747, 354, 1745, 355, 693, 355, 1746, 354, 693, 355, 691,
  357, 691, 356, 1745, 355, 689, 356, 46388, 358, 1740, 359, 689,
  358, 688, 360, 689, 358, 689, 359, 1741, 358, 688, 359, 689,
  359, 1741, 358, 691, 356, 1743, 356, 1743, 356, 1742, 357, 690,
  357, 1741, 356, 44286, 261, 1839, 260, 786, 262, 786, 262, 785,
  263, 785, 263, 786, 262, 1838, 262, 1838, 262, 786, 262, 1839,
  261, 786, 262, 784, 264, 787, 261, 1837, 263, 783, 262, 46491,
  261, 1839, 261, 786, 262, 786, 262, 786, 261, 786, 262, 1839,
  261, 786, 262, 786, 262, 1839, 261, 786, 262, 1838, 262, 1838,
  262, 1838, 262, 786, 262, 1835, 262,
};

const uint32_t irExtraRaw608[] = {
  277, 1806, 274, 775, 281, 776, 279, 770, 275, 774, 281, 768,
  277, 1814, 277, 1806, 274, 775, 280, 1803, 277, 780, 276, 773,
  282, 766, 279, 1831, 249, 781, 274, 45962, 281, 1803, 277, 771,
  274, 783, 273, 802, 253, 770, 275, 1834, 257, 801, 255, 768,
  277, 1807, 273, 775, 280, 1811, 280, 1804, 276, 1806, 274, 774,
  282, 1811, 280, 43887, 275, 1809, 282, 767, 278, 779, 276, 799,
  256, 766, 279, 771, 274, 1843, 248, 1810, 281, 767, 278, 1806,
  274, 782, 274, 776, 279, 796, 249, 1807, 273, 784, 282, 45962,
  279, 1804, 276, 772, 273, 784, 282, 768, 277, 798, 247, 1836,
  255, 802, 253, 796, 249, 1808, 283, 766, 279, 1813, 278, 1805,
  275, 1808, 272, 776, 279, 1813, 278, 43890, 282, 1801, 279, 769,
  276, 781, 274, 775, 280, 769, 276, 773, 283, 1834, 257, 1801,
  279, 769, 276, 1808, 272, 784, 282, 767, 278, 772, 273, 1810,
  281, 776, 279,
};

const uint32_t irExtraRaw610[] = {
  195, 1833, 300, 766, 280, 760, 275, 790, 276, 737, 309, 731,
  304, 1801, 301, 1804, 309, 731, 304, 1801, 270, 795, 282, 758,
  277, 762, 273, 1832, 270, 769, 246, 45851, 326, 1780, 302, 739,
  307, 785, 282, 732, 303, 736, 310, 1795, 307, 732, 303, 763,
  303, 1775, 307, 733, 334, 1798, 273, 1832, 270, 1810, 251, 814,
  273, 1780, 281, 43762, 302, 1804, 309, 758, 277, 737, 330, 762,
  284, 730, 305, 734, 301, 1803, 310, 1796, 306, 733, 302, 1829,
  273, 767, 279, 734, 301, 791, 275, 1804, 278, 762, 253, 45870,
  307, 1798, 304, 763, 272, 767, 279, 787, 279, 760, 275, 1829,
  284, 730, 305, 734, 301, 1804, 309, 757, 278, 1827, 275, 1804,
  278, 1828, 274, 765, 270, 1835, 278, 43740, 303, 1776, 306, 787,
  279, 760, 275, 765, 281, 759, 307, 758, 277, 1775, 307, 1799,
  303, 736, 299, 1832, 281, 759, 276, 763, 304, 736, 299, 1832,
  281, 733, 302, 45820, 306, 1800, 302, 764, 282, 758, 277, 788,
  278, 762, 284, 1821, 281, 732, 303, 736, 310, 1796, 307, 733,
  302, 1829, 273, 1806, 276, 1830, 272, 767, 268, 1837, 245, 43772,
  302, 1778, 304, 789, 277, 762, 284, 756, 279, 786, 249, 765,
  301, 1777, 336, 1770, 301, 764, 282, 1824, 278, 761, 274, 765,
  301, 738, 308, 1824, 278, 761, 274,
};

const uint32_t irExtraRaw653[] = {
  3488, 3488, 872, 2616, 872, 872, 872, 872, 872, 2616, 872, 872,
  872, 2616, 872, 872, 872, 872, 872, 872, 872, 872, 872, 872,
  872, 2616, 872, 872, 872, 2616, 872, 2616, 872, 872, 872, 2616,
  872, 872, 872, 2616, 872, 2616, 872, 2616, 872, 2616, 872, 2616,
  872, 872, 872, 34008,
};

const uint32_t irExtraRaw673[] = {
  328, 605, 321, 283, 643, 290, 313, 589, 316, 287, 639, 596,
  642, 589, 316, 285, 318, 285, 641, 591, 637, 294, 309, 587,
  328,
};

const uint32_t irExtraRaw696[] = {
  9219, 4484, 662, 469, 661, 469, 661, 1627, 660, 471, 658, 474,
  656, 499, 631, 499, 631, 499, 631, 1657, 630, 1657, 631, 500,
  630, 1657, 631, 1657, 631, 1657, 630, 1657, 631, 1657, 631, 500,
  630, 500, 630, 500, 630, 1657, 630, 500, 631, 500, 630, 500,
  631, 500, 630, 1657, 630, 1658, 630, 1657, 631, 500, 630, 1657,
  631, 1658, 630, 1658, 630, 1658, 630, 40107, 9106, 2202, 631,
};

const uint32_t irExtraRaw703[] = {
  9219, 4484, 662, 469, 661, 469, 661, 1627, 660, 471, 658, 474,
  656, 499, 631, 499, 631, 499, 631, 1657, 630, 1657, 631, 500,
  630, 1657, 631, 1657, 631, 1657, 630, 1657, 631, 1657, 631, 500,
  630, 500, 630, 500, 630, 1657, 630, 500, 631, 500, 630, 500,
  631, 500, 630, 1657, 630, 1658, 630, 1657, 631, 500, 630, 1657,
  631, 1658, 630, 1658, 630, 1658, 630, 40107, 9106, 2202, 631,
};

const uint32_t irExtraRaw707[] = {
  9016, 4408, 603, 512, 602, 512, 629, 1599, 686, 428, 630, 483,
  630, 484, 629, 485, 628, 492, 627, 1604, 625, 1605, 624, 491,
  623, 1630, 599, 1631, 598, 1631, 598, 1631, 598, 1636, 599, 515,
  599, 515, 599, 515, 599, 1631, 599, 515, 599, 515, 599, 515,
  599, 521, 599, 1631, 599, 1631, 599, 1631, 598, 515, 599, 1631,
  598, 1631, 598, 1631, 598, 1632, 598, 39999, 9016, 2166, 626, 95735,
  9012, 2168, 625, 95735, 9013, 2167, 626,
};

const uint32_t irExtraRaw714[] = {
  611, 386, 612, 3984, 612, 4984, 612, 387, 611, 3985, 612, 387,
  611, 3986, 611, 4985, 611, 387, 611, 3986, 611, 4985, 611, 387,
  611, 3986, 610, 4987, 609, 4985, 611, 389, 609,
};

const uint32_t irExtraRaw715[] = {
  561, 442, 562, 4055, 591, 5032, 592, 413, 591, 4026, 593, 411,
  593, 4026, 593, 5030, 618, 387, 617, 4001, 592, 5032, 591, 440,
  564, 4028, 591, 5033, 590, 5034, 589, 440, 563,
};

const uint32_t irExtraRaw716[] = {
  528, 1870, 433, 380, 432, 386, 426, 392, 431, 780, 428, 390,
  433, 386, 426, 392, 431, 387, 425, 392, 431, 95569, 536, 1862,
  430, 382, 431, 389, 423, 421, 402, 783, 425, 394, 429, 389,
  434, 386, 426, 418, 405, 387, 425, 95574, 531, 1868, 424, 389,
  434, 386, 426, 392, 431, 781, 427, 392, 431, 388, 424, 395,
  428, 416, 407, 411, 402, 95573, 532, 1867, 425, 388, 424, 395,
  428, 391, 432, 779, 430, 390, 433, 412, 400, 418, 405, 389,
  423, 419, 404, 95571, 533, 1866, 426, 387, 425, 394, 429, 415,
  408, 804, 404, 390, 423, 421, 402, 392, 431, 388, 424, 419,
  404, 95571, 534, 1864, 428, 385, 427, 392, 431, 388, 424, 787,
  432, 388, 424, 395, 428, 392, 431, 388, 424, 394, 429,
};

const uint32_t irExtraRaw717[] = {
  2762, 793, 534, 358, 530, 358, 530, 794, 534, 794, 981, 379,
  533, 354, 532, 356, 530, 357, 505, 383, 505, 382, 506, 382,
  506, 383, 505, 383, 505, 384, 503, 385, 502, 386, 501, 388,
  499, 389, 498, 390, 497, 391, 943, 389, 495, 834, 495, 394,
  494, 122265, 2760, 796, 529, 384, 503, 385, 502, 825, 502, 826,
  947, 385, 498, 391, 496, 392, 496, 392, 496, 392, 496, 393,
  495, 393, 495, 393, 495, 393, 495, 393, 495, 393, 495, 393,
  495, 393, 495, 393, 495, 393, 495, 393, 942, 389, 495, 834,
  495, 394, 494,
};

const uint32_t irExtraRaw728[] = {
  3481, 1715, 457, 442, 428, 1284, 457, 442, 428, 443, 427, 443,
  427, 443, 427, 442, 428, 442, 428, 442, 453, 417, 453, 417,
  453, 417, 452, 418, 451, 1289, 451, 422, 448, 447, 422, 424,
  447, 447, 423, 448, 422, 424, 446, 448, 422, 448, 422, 448,
  422, 1319, 422, 448, 422, 448, 422, 448, 422, 448, 422, 448,
  423, 448, 422, 448, 422, 448, 422, 1319, 422, 448, 422, 1319,
  422, 1319, 422, 1319, 422, 1319, 422, 448, 422, 449, 421, 1319,
  422, 448, 422, 1320, 421, 1319, 422, 1320, 421, 1319, 422, 449,
  422, 1319, 422, 74732, 3475, 1750, 422, 448, 422, 1319, 422, 448,
  422, 448, 422, 448, 422, 448, 422, 448, 422, 448, 422, 448,
  422, 448, 422, 448, 422, 448, 422, 449, 422, 1319, 422, 449,
  421, 449, 421, 448, 422, 449, 421, 449, 421, 449, 421, 449,
  421, 449, 421, 449, 421, 1320, 421, 449, 421, 449, 421, 449,
  421, 449, 421, 449, 422, 449, 421, 449, 422, 449, 421, 1320,
  421, 449, 421, 1320, 421, 1320, 421, 1320, 421, 1320, 421, 449,
  421, 449, 421, 1320, 421, 449, 421, 1320, 421, 1320, 421, 1320,
  421, 1320, 421, 450, 420, 1321, 420, 74732, 3475, 1750, 422, 448,
  422, 1319, 422, 448, 422, 448, 423, 448, 422, 448, 422, 448,
  422, 448, 422, 448, 422, 448, 422, 448, 422, 448, 422, 448,
  422, 1319, 422, 448, 422, 448, 422, 448, 422, 448, 422, 448,
  422, 449, 421, 449, 421, 449, 421, 448, 422, 1320, 421, 449,
  421, 449, 421, 449, 422, 449, 421, 449, 421, 449, 422, 449,
  421, 449, 421, 1320, 421, 449, 421, 1320, 421, 1320, 421, 1320,
  421, 1320, 421, 449, 421, 449, 421, 1320, 421, 449, 421, 1320,
  421, 1320, 421, 1320, 421, 1320, 421, 449, 421, 1320, 421,
};

const uint32_t irExtraRaw732[] = {
  528, 1870, 433, 380, 432, 386, 426, 392, 431, 780, 428, 390,
  433, 386, 426, 392, 431, 387, 425, 392, 431, 95569, 536, 1862,
  430, 382, 431, 389, 423, 421, 402, 783, 425, 394, 429, 389,
  434, 386, 426, 418, 405, 387, 425, 95574, 531, 1868, 424, 389,
  434, 386, 426, 392, 431, 781, 427, 392, 431, 388, 424, 395,
  428, 416, 407, 411, 402, 95573, 532, 1867, 425, 388, 424, 395,
  428, 391, 432, 779, 430, 390, 433, 412, 400, 418, 405, 389,
  423, 419, 404, 95571, 533, 1866, 426, 387, 425, 394, 429, 415,
  408, 804, 404, 390, 423, 421, 402, 392, 431, 388, 424, 419,
  404, 95571, 534, 1864, 428, 385, 427, 392, 431, 388, 424, 787,
  432, 388, 424, 395, 428, 392, 431, 388, 424, 394, 429,
};

const ExtraIrCode extraIrCodes[] = {
  {"ACs/Admiral/Admiral_AC.ir:POWER", ExtraIrKind::NEC, 32UL, 2UL, 38000, 32, 0, nullptr, false},
  {"ACs/Airfel/AIRFEL_AFSW-12HAR1RCIO.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 133, irExtraRaw001, false},
  {"ACs/Airmax/Airmax.ir:Power_on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw002, false},
  {"ACs/Airmax/Airmax.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw003, false},
  {"ACs/Airmet/Airmet_ac.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 141, irExtraRaw004, false},
  {"ACs/Airmet/Airmet_ac.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw005, false},
  {"ACs/Airwell/Airwell.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 187, irExtraRaw006, false},
  {"ACs/Airwell/Airwell_AWSI-PNXA012-N11.ir:ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 169, irExtraRaw007, false},
  {"ACs/Airwell/Airwell_AWSI-PNXA012-N11.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 175, irExtraRaw008, false},
  {"ACs/Aldi/Easy_Home_Portable_Air_Cooler.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 527, irExtraRaw009, false},
  {"ACs/Amcor/Amcor_AC.ir:POWER", ExtraIrKind::NEC, 128UL, 156UL, 38000, 32, 0, nullptr, false},
  {"ACs/Arctic_King/Arctic_King_RG15B1.ir:Power", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Argo/Argo_ac.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 307, irExtraRaw012, false},
  {"ACs/Argo/Argo_zelos.ir:On", ExtraIrKind::NEC, 4UL, 4UL, 38000, 32, 0, nullptr, false},
  {"ACs/Ariston/Ariston_AC_A-MW09-IGX.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw014, false},
  {"ACs/Ariston/Ariston_AC_A-MW09-IGX.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw015, false},
  {"ACs/Ballu/Ballu_R05-BGE.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw016, false},
  {"ACs/Beko/Beko.ir:Power_on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw017, false},
  {"ACs/Beko/Beko.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw018, false},
  {"ACs/Black_and_Decker/Portable.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw019, false},
  {"ACs/Bonaire/Bonaire_DurangoAC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 191, irExtraRaw020, false},
  {"ACs/Chigo/Chigo_CS-21H3A-B155AF.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 197, irExtraRaw021, false},
  {"ACs/Chigo/Chigo_KRF-51G_79F.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 197, irExtraRaw022, false},
  {"ACs/Comfort_Aire/Comfort_Aire_RG57A6.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw023, false},
  {"ACs/Comfort_Aire/Comfort_Aire_RG57A6.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw024, false},
  {"ACs/Corlitec/Cortlitec_portable_ac.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Daikin/Daikin_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 137, irExtraRaw026, false},
  {"ACs/Daikin/Daikin_AC_industrial_TB.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 358, irExtraRaw027, false},
  {"ACs/Daikin/Daikin_AC_industrial_TB.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 359, irExtraRaw028, false},
  {"ACs/Daikin/Daikin_AC_unknownModel.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 439, irExtraRaw029, false},
  {"ACs/Daikin/Daikin_ARC480A41.ir:OFF", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 319, irExtraRaw030, false},
  {"ACs/Daikin/Daikin_ARC480A53.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 319, irExtraRaw031, false},
  {"ACs/Daikin/Daikin_FTE35KV1.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 327, irExtraRaw032, false},
  {"ACs/Daikin/Daikin_FTX50GV1B.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 585, irExtraRaw033, false},
  {"ACs/Daikin/Daikin_FTXM95PVMA.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 583, irExtraRaw034, false},
  {"ACs/Daikin/Daikin_FTXS25KVMA.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 583, irExtraRaw035, false},
  {"ACs/Danby/Danby DAC060EB7WDB.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw036, false},
  {"ACs/DeLonghi/Delonghi_portable_Pinguino-Air-to-Air-PAC-N81_ac.ir:POWER", ExtraIrKind::NECext, 4680UL, 2184UL, 38000, 32, 0, nullptr, false},
  {"ACs/DeLonghi/Pinguino_EL290HLWKC.ir:Power", ExtraIrKind::NEC, 129UL, 107UL, 38000, 32, 0, nullptr, false},
  {"ACs/DeLonghi/Pinguino_PAC_EL275HGRKC.ir:POWER", ExtraIrKind::NEC, 130UL, 107UL, 38000, 32, 0, nullptr, false},
  {"ACs/DeLonghi/Pinguino_PAC_EL92_SILENT.ir:POWER", ExtraIrKind::NECext, 65311UL, 31875UL, 38000, 32, 0, nullptr, false},
  {"ACs/Eberg/Eberg_RIO_R29E1.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Ecofort/Ecofort_CoolAir_7+_EQCA7+2900824.ir:Power", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Electra/electra_smart.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw043, false},
  {"ACs/Electra/electra_smart.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw044, false},
  {"ACs/Electrolux/Electrol_ESV09CRO_B2I.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 229, irExtraRaw045, false},
  {"ACs/Electrolux/Electrol_ESV09CRO_B2I.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 229, irExtraRaw046, false},
  {"ACs/Emerson/Emerson_EARC8RE1_ac.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 51, irExtraRaw047, false},
  {"ACs/Emerson/Emerson_Quiet_Kool_AC.ir:Power", ExtraIrKind::NEC, 129UL, 107UL, 38000, 32, 0, nullptr, false},
  {"ACs/Eurom/Eurom_PAC_9.2.ir:Power", ExtraIrKind::NEC, 4UL, 4UL, 38000, 32, 0, nullptr, false},
  {"ACs/Eurom/Eurom_Tristar_AC.ir:POWER", ExtraIrKind::NEC, 128UL, 156UL, 38000, 32, 0, nullptr, false},
  {"ACs/Ferroli/Ferroli.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw051, false},
  {"ACs/Firstline/Firstline_AAS2500.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 275, irExtraRaw052, false},
  {"ACs/Firstline/Firstline_AAS2500.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 275, irExtraRaw053, false},
  {"ACs/Frico/Frico_PA2510E08.ir:On_off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 19, irExtraRaw054, false},
  {"ACs/Friedrich/Friedrich.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 115, irExtraRaw055, false},
  {"ACs/Friedrich/Friedrich.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 115, irExtraRaw056, false},
  {"ACs/Friedrich/Friedrich_4235h.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 455, irExtraRaw057, false},
  {"ACs/Friedrich/Friedrich_AKB73756214.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw058, false},
  {"ACs/Friedrich/Friedrich_AKB73756214.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw059, false},
  {"ACs/Frigidaire/Frigidaire_AC.ir:POWER", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Frigidaire/Frigidaire_RG15D_AC.ir:Power", ExtraIrKind::NECext, 62728UL, 60945UL, 38000, 32, 0, nullptr, false},
  {"ACs/Fujidenzo/Fujidenzo_FEA5001_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 75, irExtraRaw062, false},
  {"ACs/Fujitsu/Fujitsu_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 259, irExtraRaw063, false},
  {"ACs/Fujitsu/Fujitsu_AC.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 115, irExtraRaw064, false},
  {"ACs/Fujitsu/Fujitsu_AC_ASU18RLF.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 115, irExtraRaw065, false},
  {"ACs/GREE/GREE_YAPOF.ir:Power_on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 279, irExtraRaw066, false},
  {"ACs/GREE/GREE_YAPOF.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 279, irExtraRaw067, false},
  {"ACs/GREE/Gree_KFR-70G-A1.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 73, irExtraRaw068, false},
  {"ACs/GREE/Gree_airco.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw069, false},
  {"ACs/GREE/Gree_airco.ir:Power_on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw070, false},
  {"ACs/GREE/Gree_airco_lightoff.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw071, false},
  {"ACs/GREE/Gree_airco_lightoff.ir:Power_on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw072, false},
  {"ACs/General_Electric/GE_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 113, irExtraRaw073, false},
  {"ACs/General_Electric/GE_Window_AC.ir:POWER", ExtraIrKind::NECext, 28568UL, 58905UL, 38000, 32, 0, nullptr, false},
  {"ACs/Haier/Haier_AC_AS18GD3HRA.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 229, irExtraRaw075, false},
  {"ACs/Haier/Haier_AC_AS18GD3HRA.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 229, irExtraRaw076, false},
  {"ACs/Haier/Haier_AC_HPD10XCM-LW.ir:POWER", ExtraIrKind::NEC, 32UL, 2UL, 38000, 32, 0, nullptr, false},
  {"ACs/Haier/Haier_AC_HWE08XCR-L.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 67, irExtraRaw078, false},
  {"ACs/Hisense/Hisense_DG11J1-99_celsius.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw079, false},
  {"ACs/Hisense/Hisense_DG11J1-99_celsius.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw080, false},
  {"ACs/Hisense/Hisense_DG11J1-99_fahrenheit.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw081, false},
  {"ACs/Hisense/Hisense_DG11J1-99_fahrenheit.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw082, false},
  {"ACs/Hisense/Hisense_room_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw083, false},
  {"ACs/Hisense/Hisense_window_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 371, irExtraRaw084, false},
  {"ACs/Hitachi/Hitach_RAK-18QH8.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 595, irExtraRaw085, false},
  {"ACs/Hitachi/Hitachi_RAK35.ir:Power_On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 455, irExtraRaw086, false},
  {"ACs/Hitachi/Hitachi_RAK35.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 455, irExtraRaw087, false},
  {"ACs/Honeywell/Honeywell_MN10CESS.ir:POWER", ExtraIrKind::NEC, 32UL, 2UL, 38000, 32, 0, nullptr, false},
  {"ACs/Innova/Innova_2.0.ir:Power", ExtraIrKind::NEC, 0UL, 18UL, 38000, 32, 0, nullptr, false},
  {"ACs/Insigna/Insigna_AC_NSRC2AC9.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Insigna/Insignia_NS-AC8PWH9-C_AC.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Inventum/Inventum_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw092, false},
  {"ACs/Kelon/Kelon_AS-24HR4SQJUL.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw093, false},
  {"ACs/Kenmore/Kenmore_AC.ir:POWER", ExtraIrKind::NECext, 62728UL, 60945UL, 38000, 32, 0, nullptr, false},
  {"ACs/Klarstein/Klarstein_Metrobreeze_Miami.ir:POWER", ExtraIrKind::NEC, 128UL, 156UL, 38000, 32, 0, nullptr, false},
  {"ACs/Klarstein/Klarstein_Skyscraper.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 87, irExtraRaw096, false},
  {"ACs/Koldfront/Koldfront_WAC12001.ir:POWER", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/LG/LG_AC.ir:POWER", ExtraIrKind::NECext, 26241UL, 32385UL, 38000, 32, 0, nullptr, false},
  {"ACs/LG/LG_AC_2.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw099, false},
  {"ACs/LG/LG_AC_2.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw100, false},
  {"ACs/LG/LG_COV30332906_AC.ir:Power", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/LG/LG_LP0817WSR.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw102, false},
  {"ACs/LG/LG_LP1015WNR_AC.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/LG/LG_LP1417GSR_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 343, irExtraRaw104, false},
  {"ACs/LG/LG_LP1419IVSM.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw105, false},
  {"ACs/LG/LG_LP1419IVSM.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 61, irExtraRaw106, false},
  {"ACs/LG/LG_R12AWN-NB11.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw107, false},
  {"ACs/LG/LG_SX122CL.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw108, false},
  {"ACs/LG/LG_SX122CL.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw109, false},
  {"ACs/Lamborghini/Unknown_Model_1.ir:Power On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 235, irExtraRaw110, false},
  {"ACs/Lamborghini/Unknown_Model_1.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 235, irExtraRaw111, false},
  {"ACs/Legion/Legion_LE-F30RH-IN.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 197, irExtraRaw112, false},
  {"ACs/Lennox/Lennox_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw113, false},
  {"ACs/Lifetime Air/Lifetime_Air.ir:Off", ExtraIrKind::NEC, 0UL, 2UL, 38000, 32, 0, nullptr, false},
  {"ACs/Logik/Logik_HLF-20R.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 383, irExtraRaw115, false},
  {"ACs/MayTag/MayTag_M6X06F2A.ir:Power", ExtraIrKind::NEC, 32UL, 2UL, 38000, 32, 0, nullptr, false},
  {"ACs/Midea/Midea_AC_MAW05R1WBL.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw117, false},
  {"ACs/Midea/Midea_MP12SVKBA3RCM.ir:POWER", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Midea/Midea_WWK08CR81N.ir:POWER", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Midea/Midea_silent_cool_26_pro.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw120, false},
  {"ACs/Mitsubishi/Mitsubishi_MSH-30RV.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw121, false},
  {"ACs/Mitsubishi/Mitsubishi_MSH-30RV.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw122, false},
  {"ACs/Mitsubishi/Mitsubishi_MSH_GA71VB.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw123, false},
  {"ACs/Mitsubishi/Mitsubishi_SRK20ZJ-S.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 179, irExtraRaw124, false},
  {"ACs/Mitsubishi/Mitsubishi_SRK20ZJ-S.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 179, irExtraRaw125, false},
  {"ACs/Mitsubishi/Mitsubishi_SRK35ZS-W.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 307, irExtraRaw126, false},
  {"ACs/Mitsubishi/Mitsubishi_SRK35ZS-W.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 307, irExtraRaw127, false},
  {"ACs/Mitsubishi/mitsubishi-MSY-GE10VA.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 583, irExtraRaw128, false},
  {"ACs/Mitsubishi/mitsubishi-MSY-GE10VA.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 583, irExtraRaw129, false},
  {"ACs/Moretti/Moretti_Air_Cooler.ir:On_off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 509, irExtraRaw130, false},
  {"ACs/OK/Ok_AC_OAC_7020.ir:ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw131, false},
  {"ACs/OK/Ok_AC_OAC_7020.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw132, false},
  {"ACs/Oreck/Oreck_AIR12GU.ir:Power", ExtraIrKind::NEC, 130UL, 3UL, 38000, 32, 0, nullptr, false},
  {"ACs/Osaka/Osaka_CH_09_DSBP.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw134, false},
  {"ACs/Osaka/Osaka_CH_09_DSBP.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw135, false},
  {"ACs/Panasonic/Panasonic_CS-E9HKR.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 439, irExtraRaw136, false},
  {"ACs/Panasonic/Panasonic_CS-UE12RKE.ir:On_off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 439, irExtraRaw137, false},
  {"ACs/Panasonic/Panasonic_CWA75C4179.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 439, irExtraRaw138, false},
  {"ACs/Panasonic/Panasonic_CWA75C4179.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 439, irExtraRaw139, false},
  {"ACs/Panasonic/Panasonic_Climate_A75C2600.ir:On_off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 271, irExtraRaw140, false},
  {"ACs/Pioneer/PioneerMiniSplit.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw141, false},
  {"ACs/Pioneer/PioneerMiniSplit.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw142, false},
  {"ACs/Princess/Princess_AC.ir:Power", ExtraIrKind::NEC, 4UL, 4UL, 38000, 32, 0, nullptr, false},
  {"ACs/Remko/Remko_RKL.ir:POWER", ExtraIrKind::NECext, 27526UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Rinnai/Rinnai_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw145, false},
  {"ACs/Rinnai/Rinnai_AC.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw146, false},
  {"ACs/Royal_Clima/Royal_Clima_RC-TWN55HN.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw147, false},
  {"ACs/Samsung/Samsung_AC_AR12K.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 349, irExtraRaw148, false},
  {"ACs/Samsung/Samsung_AR13TYHZCWKN.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 349, irExtraRaw149, false},
  {"ACs/Samsung/Samsung_AR13TYHZCWKN.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 349, irExtraRaw150, false},
  {"ACs/Samsung/Samsung_Wind-Free.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 349, irExtraRaw151, false},
  {"ACs/Samsung/Samsung_Wind-Free.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 349, irExtraRaw152, false},
  {"ACs/SereneLife/SereneLife_SLPAC8.ir:POWER", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Sharp/Sharp AH-A9UCD.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw154, false},
  {"ACs/Sharp/Sharp AH-A9UCD.ir:POWER_OFF", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw155, false},
  {"ACs/Sharp/Sharp_AH_X9VEW_AC.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw156, false},
  {"ACs/Sharp/Sharp_AH_X9VEW_AC.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw157, false},
  {"ACs/Sharp/Sharp_CVP10MX.ir:ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw158, false},
  {"ACs/Sharp/Sharp_CVP10MX.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw159, false},
  {"ACs/Shivaki/Shivaki_SSA18002.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw160, false},
  {"ACs/Sinclair/SINCLAIR_ASH13BIF2.ir:POWER_ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 279, irExtraRaw161, false},
  {"ACs/Sinclair/SINCLAIR_ASH13BIF2.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 279, irExtraRaw162, false},
  {"ACs/SoleusAir/SoleusAir.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 197, irExtraRaw163, false},
  {"ACs/SoleusAir/SoleusAir_Portable.ir:Power", ExtraIrKind::NECext, 59152UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"ACs/Subtropic/Subtropic_in-07HN1.ir:OFF", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 211, irExtraRaw165, false},
  {"ACs/Suntec/Suntec_Transform_AC.ir:POWER", ExtraIrKind::NEC, 128UL, 156UL, 38000, 32, 0, nullptr, false},
  {"ACs/TCL/Tcl.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 53, irExtraRaw167, false},
  {"ACs/Timberk/Timberk_RG05D4-BGE.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw168, false},
  {"ACs/Tora/Tora_TS_16-Classic.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw169, false},
  {"ACs/Toshiba/Toshiba_AC.ir:POWER", ExtraIrKind::NECext, 65281UL, 60690UL, 38000, 32, 0, nullptr, false},
  {"ACs/Toshiba/Toshiba_RAS13SKV2E.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 295, irExtraRaw171, false},
  {"ACs/Toshiba/Toshiba_RAS13SKV2E.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 295, irExtraRaw172, false},
  {"ACs/Toshiba/Toshiba_RASB10BKVG-E.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 295, irExtraRaw173, false},
  {"ACs/Toshiba/Toshiba_RG57H4.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw174, false},
  {"ACs/Toshiba/Toshiba_RG57H4.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw175, false},
  {"ACs/Tosot/Tosot_T24H-ILF.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 279, irExtraRaw176, false},
  {"ACs/Tropic/Tropic_AC.ir:On_Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 143, irExtraRaw177, false},
  {"ACs/Trotec/Trotec_PAC2600X.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw178, false},
  {"ACs/Vornado/Vornado.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 167, irExtraRaw179, false},
  {"ACs/Whynter/Whynter_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 69, irExtraRaw180, false},
  {"ACs/Whynter/Whynter_AC.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 69, irExtraRaw181, false},
  {"ACs/Xiaomi/Xiaomi_AC.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 99, irExtraRaw182, false},
  {"ACs/York/York_AC.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 139, irExtraRaw183, false},
  {"ACs/York/York_full_working.ir:on", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw184, false},
  {"ACs/York/York_full_working.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 199, irExtraRaw185, false},
  {"ACs/Zenith/Zenith_AC.ir:POWER", ExtraIrKind::NECext, 26241UL, 32385UL, 38000, 32, 0, nullptr, false},
  {"ACs/electriQ/electriQ_P15C-V2.ir:On_off", ExtraIrKind::NEC, 0UL, 67UL, 38000, 32, 0, nullptr, false},
  {"Projectors/ABOX/Abox_T22.ir:Power", ExtraIrKind::NEC, 2UL, 29UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Acer/Acer_H6517ST.ir:Power", ExtraIrKind::NECext, 4872UL, 30855UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Acer/Acer_XL2530 IR29033.ir:Power", ExtraIrKind::NEC, 50UL, 129UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Acer/Acer_proj.ir:Power", ExtraIrKind::NECext, 4872UL, 30855UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Anker/NebulaMarsLite.ir:POWER", ExtraIrKind::NECext, 6528UL, 61200UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Anker/Nebula_Capsule_Mini_Projector.ir:POWER", ExtraIrKind::NEC, 128UL, 81UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Apeman/Apeman_LC650_.ir:POWER", ExtraIrKind::NECext, 48384UL, 65025UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Artlii/Artlii_YG300.ir:Power", ExtraIrKind::NEC, 2UL, 29UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ.ir:POWER", ExtraIrKind::NECext, 16448UL, 62730UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_MH856UST.ir:Power", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_MH856UST.ir:Power_off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_TH671ST.ir:POWER", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_TH671ST.ir:OFF", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_TK800M.ir:PowerOn", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_TK800M.ir:PowerOff", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_TRY01.ir:Power", ExtraIrKind::NECext, 45316UL, 42840UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1050.ir:On", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1050.ir:Off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1070.ir:POWER", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1070.ir:Off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1110.ir:Power_on", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W1110.ir:Power_off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W2000w.ir:POWER", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W2000w.ir:Off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W2700.ir:power_on", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W2700.ir:Power_off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W770ST.ir:POWER", ExtraIrKind::NECext, 12288UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BenQ/BenQ_W770ST.ir:Off", ExtraIrKind::NECext, 12288UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BrandUnknown/Generic_Projector.ir:Power", ExtraIrKind::NEC, 0UL, 168UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BrandUnknown/Generic_Universal_Remote.ir:Power", ExtraIrKind::NECext, 20552UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/BrandUnknown/LED_Smart_Home_Theater_Projector.ir:POWER", ExtraIrKind::NECext, 5640UL, 30855UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Byintek/Byintek_P10.ir:Power", ExtraIrKind::NEC, 1UL, 1UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Canon/CANON_LV-X320.ir:Power", ExtraIrKind::NECext, 1665UL, 48960UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Casio/Casio_YT-130.ir:POWER", ExtraIrKind::NECext, 62596UL, 62475UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Casio/Casio_YT-150.ir:Power", ExtraIrKind::NECext, 62596UL, 62475UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Coolux/Coolux_X3S.ir:POWER", ExtraIrKind::NEC, 1UL, 0UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Dell/Dell_projector.ir:POWER", ExtraIrKind::NECext, 20559UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Dell/Dell_tsfm_ir01.ir:Power", ExtraIrKind::NECext, 20559UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Denon/Denon_Projector.ir:Power", ExtraIrKind::Panasonic, 3298369UL, 5UL, 38000, 48, 0, nullptr, true},
  {"Projectors/Eiki/EIKI_CMXA_Remote.ir:Power", ExtraIrKind::NECext, 51UL, 65280UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Eiki/Eiki_Projector.ir:POWER", ExtraIrKind::NECext, 51UL, 65280UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson-EB-X12.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 271, irExtraRaw229, true},
  {"Projectors/Epson/Epson-EB-X49.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 339, irExtraRaw230, true},
  {"Projectors/Epson/Epson.ir:POWER", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson2.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_4650.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw233, true},
  {"Projectors/Epson/Epson_4650.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 89, irExtraRaw234, true},
  {"Projectors/Epson/Epson_EB-450.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-575wi.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-595WI.ir:POWER", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-685Wi.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-695Wi.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-725Wi.ir:POWER", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-735f.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-760wi.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 29, irExtraRaw242, true},
  {"Projectors/Epson/Epson_EB-E20.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 543, irExtraRaw243, true},
  {"Projectors/Epson/Epson_EB-L260F.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 59, irExtraRaw244, true},
  {"Projectors/Epson/Epson_EB-L510U.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EB-Series.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EBX39.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EBX7_154720000.ir:Pwr", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EHTW5650.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_EMP822H.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_RC-151506800.ir:Off_on", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Epson/Epson_projector_Power_Only.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 135, irExtraRaw252, true},
  {"Projectors/Epson/Epson_projector_remote_159917600.ir:Power", ExtraIrKind::NECext, 21891UL, 28560UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Gateway/Gateway_210_projextor.ir:Power", ExtraIrKind::NEC, 48UL, 11UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Groview/Groview.ir:Power", ExtraIrKind::NECext, 27526UL, 62730UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Hitachi/Hitachi_CP-X2011_Projector.ir:POWER", ExtraIrKind::NECext, 17799UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/InFocus/Infocus_Navigator_3.ir:Power", ExtraIrKind::NECext, 20103UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/JVC/JVC_LX-UH1B.ir:Power", ExtraIrKind::NECext, 27136UL, 48960UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Jinhoo/Jinhoo_M10.ir:Power", ExtraIrKind::NEC, 1UL, 0UL, 38000, 32, 0, nullptr, true},
  {"Projectors/LG/LG_PH300-NA.ir:Power", ExtraIrKind::NECext, 3844UL, 21165UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Maxell/Maxell_MC-EU5001.ir:Power", ExtraIrKind::NECext, 17799UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Maxell/Maxell_MC-WU5503.ir:Power", ExtraIrKind::NECext, 17799UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Minolta/Minolta_MN674.ir:POWER", ExtraIrKind::NECext, 57088UL, 58140UL, 38000, 32, 0, nullptr, true},
  {"Projectors/NEC/NEC_RD-477E.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 131, irExtraRaw264, true},
  {"Projectors/NEC/NEC_RD-477E.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 103, irExtraRaw265, true},
  {"Projectors/NEC/NEC_RD-V260X.ir:ON", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 11, irExtraRaw266, true},
  {"Projectors/NEC/NEC_RD-V260X.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 103, irExtraRaw267, true},
  {"Projectors/NEC/NEC_RD469e.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 107, irExtraRaw268, true},
  {"Projectors/NEC/NEC_RD469e.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 107, irExtraRaw269, true},
  {"Projectors/NEC/NEC_RU_M124.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 379, irExtraRaw270, true},
  {"Projectors/NEC/NEC_RU_M124.ir:STANDBY", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 797, irExtraRaw271, true},
  {"Projectors/NexiGo/NexiGo-PJ20.ir:Power", ExtraIrKind::NEC, 3UL, 29UL, 38000, 32, 0, nullptr, true},
  {"Projectors/ONOAYO/ONOAYO_Portable_Projector.ir:Power", ExtraIrKind::NEC, 0UL, 168UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/OPTOMA_HD65.ir:Power", ExtraIrKind::NECext, 20559UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_DH1011.ir:POWER", ExtraIrKind::NEC, 50UL, 129UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_IAR_Projector.ir:Power", ExtraIrKind::NECext, 65535UL, 6120UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_Profomo_L-27-5KEY.ir:POWER", ExtraIrKind::NEC, 50UL, 2UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_Profomo_L-27-5KEY.ir:Off", ExtraIrKind::NEC, 50UL, 46UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_Remote_HOF04K276D6.ir:Power", ExtraIrKind::NECext, 20559UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_UHZ45.ir:Power", ExtraIrKind::NEC, 50UL, 2UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_UHZ45.ir:Power_off", ExtraIrKind::NEC, 50UL, 46UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Optoma/Optoma_projector.ir:Power", ExtraIrKind::NECext, 20559UL, 64770UL, 38000, 32, 0, nullptr, true},
  {"Projectors/PVO/PVO_YG300Pro.ir:POWER", ExtraIrKind::NEC, 1UL, 64UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Panasonic/Panasonic_PT-AR100U.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 115, irExtraRaw284, true},
  {"Projectors/Panasonic/Panasonic_Projector.ir:On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 695, irExtraRaw285, true},
  {"Projectors/Panasonic/Panasonic_Projector.ir:Off", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 463, irExtraRaw286, true},
  {"Projectors/Panasonic/Panasonic_Projector.ir:Power_On", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 695, irExtraRaw287, true},
  {"Projectors/Panasonic/Panasonic_Projector.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 347, irExtraRaw288, true},
  {"Projectors/Philips/Philips_NeoPix_Prime_Projector.ir:Pwr", ExtraIrKind::NEC, 32UL, 65UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Philips/Philips_PicoPix_Max_PPX620_Projector.ir:POWER", ExtraIrKind::NEC, 2UL, 18UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Promethean/Promethean_PRM_35.ir:Off", ExtraIrKind::NEC, 49UL, 145UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Promethean/Promethean_PRM_35.ir:POWER", ExtraIrKind::NEC, 49UL, 144UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Promethean/Promethean_UST-P1.ir:Power", ExtraIrKind::NEC, 49UL, 129UL, 38000, 32, 0, nullptr, true},
  {"Projectors/RIF6/RIF6-cube-projector-raw.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 36045, 0, 67, irExtraRaw294, true},
  {"Projectors/Rayfoto/Rayfoto_Projector.ir:Power", ExtraIrKind::NEC, 8UL, 11UL, 38000, 32, 0, nullptr, true},
  {"Projectors/SAKAWA/SAKAWA_Projector.ir:Power", ExtraIrKind::NECext, 65535UL, 6120UL, 38000, 32, 0, nullptr, true},
  {"Projectors/SMART/SMART_Projectors.ir:POWER", ExtraIrKind::NECext, 51851UL, 60690UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Samsung/Samsung_Freestyle_Gen2.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Samsung/Samsung_SP-LSP3BLAXXU.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Samsung/Samsung_VG-TM2360E.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 77, irExtraRaw300, true},
  {"Projectors/Sharp/Sharp_RRMCGA664WJSA_Notevision XR-32S-L.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 159, irExtraRaw301, true},
  {"Projectors/Sharp/Sharp_RRMCGA664WJSA_Notevision XR-32S-L.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 159, irExtraRaw302, true},
  {"Projectors/StereoBoomm/Stereoboomm_MMP-250.ir:Power", ExtraIrKind::NECext, 22456UL, 62220UL, 38000, 32, 0, nullptr, true},
  {"Projectors/TOPTRO/TOPTRO_TR25.ir:Power", ExtraIrKind::NECext, 27526UL, 62730UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Thunrlge/Thunrlge_X1BQ.ir:Power", ExtraIrKind::NEC, 0UL, 20UL, 38000, 32, 0, nullptr, true},
  {"Projectors/TopVisionTec/TopVision.ir:Power", ExtraIrKind::NEC, 2UL, 29UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Vamvo/Vamvo_YG300_Pro_Mini.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 71, irExtraRaw307, true},
  {"Projectors/Vankyo/Vankyo_V630W.ir:POWER", ExtraIrKind::NEC, 0UL, 168UL, 38000, 32, 0, nullptr, true},
  {"Projectors/ViewSonic/ViewSonic_M1_Mini_Plus.ir:Power", ExtraIrKind::NECext, 62595UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/ViewSonic/ViewSonic_Projector_PA503W-2.ir:POWER_On", ExtraIrKind::NECext, 62595UL, 45135UL, 38000, 32, 0, nullptr, true},
  {"Projectors/ViewSonic/ViewSonic_Projector_PA503W-2.ir:POWER_Off", ExtraIrKind::NECext, 62595UL, 45390UL, 38000, 32, 0, nullptr, true},
  {"Projectors/ViewSonic/ViewSonic_X1_Projector.ir:Power", ExtraIrKind::NECext, 62595UL, 59415UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Vivitek/Vivitek.ir:Off", ExtraIrKind::NEC, 49UL, 145UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Vivitek/Vivitek.ir:POWER", ExtraIrKind::NEC, 49UL, 144UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Vivitek/Vivitek2_Projector.ir:Power", ExtraIrKind::NEC, 49UL, 129UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Wanbo/Wanbo_T6_Max.ir:Power", ExtraIrKind::NEC, 59UL, 0UL, 38000, 32, 0, nullptr, true},
  {"Projectors/WiMiUS/WiMiUS_s25.ir:Power", ExtraIrKind::NEC, 2UL, 20UL, 38000, 32, 0, nullptr, true},
  {"Projectors/WiMiUS/Wimius_K1.ir:POWER", ExtraIrKind::NEC, 8UL, 11UL, 38000, 32, 0, nullptr, true},
  {"Projectors/Yoton/Yoton Y3.ir:Power", ExtraIrKind::NEC, 0UL, 168UL, 38000, 32, 0, nullptr, true},
  {"TV_Tuner/Hauppauge/Hauppauge_R-005.ir:POWER", ExtraIrKind::RC5, 28UL, 61UL, 38000, 12, 0, nullptr, false},
  {"TV_Tuner/Hauppauge/WinTV_DualHD.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 43, irExtraRaw321, false},
  {"TV_Tuner/Mediasonic/Mediasonic_Homeworx_HW180STB.ir:Power", ExtraIrKind::NEC, 0UL, 90UL, 38000, 32, 0, nullptr, false},
  {"TV_Tuner/TechniSat/TechniSat_DVR401B.ir:Power", ExtraIrKind::RC5, 8UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TV_Tuner/elWron/elWron.ir:Power", ExtraIrKind::NEC, 1UL, 1UL, 38000, 32, 0, nullptr, false},
  {"TVs/AWA/AWA_MSDV3268O5D0.ir:Power", ExtraIrKind::NECext, 57088UL, 58140UL, 38000, 32, 0, nullptr, false},
  {"TVs/Akai/AKAI_ATE_22Y604W.ir:Power", ExtraIrKind::NECext, 29185UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/Amazon/FireTV_Omni_Series_4K.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/AmazonBasics/AmazonBasics_TV_Remote.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Android/Android_TV_MXQ.ir:Power", ExtraIrKind::NEC, 1UL, 64UL, 38000, 32, 0, nullptr, false},
  {"TVs/Apex/APEX_LE4643T.ir:Power", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/BBK/BBK_TV_LEM-1071.ir:Power", ExtraIrKind::NECext, 57088UL, 58140UL, 38000, 32, 0, nullptr, false},
  {"TVs/BGH/BGH_BLE2814D.ir:Power", ExtraIrKind::NECext, 48896UL, 64515UL, 38000, 32, 0, nullptr, false},
  {"TVs/Baird/BAIRD_T15011DLEDDS_RC-6.ir:Power", ExtraIrKind::NEC, 1UL, 16UL, 38000, 32, 0, nullptr, false},
  {"TVs/Bauhn/Bauhn_ATV_50FHD4.ir:Power", ExtraIrKind::NECext, 29185UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/Bauhn/Bauhn_tv.ir:Power", ExtraIrKind::NECext, 29185UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/Blaupunkt/Blaupunkt.ir:Power", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Blitzwolf/Blitzwolf_BWPCM2.ir:Power", ExtraIrKind::NECext, 47008UL, 5865UL, 38000, 32, 0, nullptr, false},
  {"TVs/Bolva/Bolva_TV.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Bose/Bose_TV.ir:On_off", ExtraIrKind::NECext, 41146UL, 45900UL, 38000, 32, 0, nullptr, false},
  {"TVs/Boulanger/Essentiel_B_TV.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/Brandt/Brandt_B3228HD.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 75, irExtraRaw341, false},
  {"TVs/Brandt/Brandt_B3230HD_TV.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 67, irExtraRaw342, false},
  {"TVs/Bush/BUSH_TV_DLED32287HDCNTDFVP.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Bush/BUSH_TV_VL32HDLED.ir:Power", ExtraIrKind::NEC, 8UL, 215UL, 38000, 32, 0, nullptr, false},
  {"TVs/Bush/Bush43QT24SB.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/CCE/CCE_RC512_Remote.ir:Power", ExtraIrKind::NEC, 4UL, 64UL, 38000, 32, 0, nullptr, false},
  {"TVs/ContinentalEdison/ContinentalEdison.ir:Power", ExtraIrKind::NECext, 32512UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/ContinentalEdison/ContinentalEdison_CELD55SQLDV24B6.ir:Power", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"TVs/ContinentalEdison/ContinentalEdison_CELED32JBL7.ir:Power", ExtraIrKind::NEC, 64UL, 11UL, 38000, 32, 0, nullptr, false},
  {"TVs/ContinentalEdison/ContinentalEdison_CELED502723.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Cranker/Cranker_generic.ir:Power", ExtraIrKind::NEC, 1UL, 16UL, 38000, 32, 0, nullptr, false},
  {"TVs/Crown/Crown_22111.ir:On_off", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/Crown/Crown_RC647340.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/DYON/DYON_Movie_Smart_32_XT.ir:Power", ExtraIrKind::NECext, 16448UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Daewoo/Daewood_Parsed.ir:Power", ExtraIrKind::NEC, 128UL, 130UL, 38000, 32, 0, nullptr, false},
  {"TVs/Denver/Denver_LED-3271.ir:Power", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Devant/Devant_Unknown_Model.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Digihome/Butlins.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Dual/Dual_DL-32HD-002.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Dynex/Dynex_DX-RC01A-12.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Dynex/Dynex_EN21669D.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Dynex/Dynex_RC-701-0A.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/EdenWood/EdenWood_TV.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Element/Element_100-Series_TV.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Element/Element_FullRemote.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Element/Element_TV.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Elements/Elements_TV.ir:Power", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/Elitelux/Elitelux_L32HD1000.ir:Power", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"TVs/Emerson/Emerson_32FNT004.ir:Power", ExtraIrKind::NECext, 57476UL, 57120UL, 38000, 32, 0, nullptr, false},
  {"TVs/Emerson/Emerson_EWC13D4.ir:Power", ExtraIrKind::NECext, 8839UL, 8160UL, 38000, 32, 0, nullptr, false},
  {"TVs/Emerson/Emerson_remote_NH303UD.ir:Power", ExtraIrKind::NECext, 57476UL, 57120UL, 38000, 32, 0, nullptr, false},
  {"TVs/Enseo/Enseo.ir:Power", ExtraIrKind::NEC, 110UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Enseo/Enseo_full.ir:Power", ExtraIrKind::NEC, 110UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Erisson/Erisson_AL52D_B.ir:Power", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/EssentielB/EssentielB.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/FINLUX/FINLUX.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Fetch/Fetch_TV_Box_AUS.ir:Power", ExtraIrKind::NECext, 18020UL, 41565UL, 38000, 32, 0, nullptr, false},
  {"TVs/Ffalcon/Ffalcon_SF1_Smart_TV.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/Funai/Funai.ir:Power", ExtraIrKind::NECext, 57476UL, 57120UL, 38000, 32, 0, nullptr, false},
  {"TVs/Furrion/Furrion.ir:Power", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/GPX/Gpx.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 255, irExtraRaw381, false},
  {"TVs/GVA/GVA_GVA32M7D.ir:Power", ExtraIrKind::NECext, 32512UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/Gigabyte/AORUS_Monitor.ir:Power", ExtraIrKind::NEC, 0UL, 26UL, 38000, 32, 0, nullptr, false},
  {"TVs/Gogen/Gogen_TVH24P266T.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Grandin/Grandin.ir:Power", ExtraIrKind::NEC, 128UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Grandin/Grandin_Unknown_Model.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Grundig/GRUNDIG.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Grundig/GRUNDIG_UNKNOWN.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 71, irExtraRaw388, false},
  {"TVs/Grundig/Grundig_2.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 167, irExtraRaw389, false},
  {"TVs/Grundig/Grundig_AndroidTV.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 47, irExtraRaw390, false},
  {"TVs/Grundig/Grundig_TP750C.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 83, irExtraRaw391, false},
  {"TVs/Grundig/Grundig_TP800.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 63, irExtraRaw392, false},
  {"TVs/GuestTek/GuestTek_Marriot_Hotel.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Haier/Haier_L42C1180.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_32A4HAU.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_55E7KQ.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_55K3201GUWUS.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_55U6K.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_58R5.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_65K3300UW.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_EN3Y39H.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_EN_33926A.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 107, irExtraRaw402, false},
  {"TVs/Hisense/Hisense_ER22601A.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 71, irExtraRaw403, false},
  {"TVs/Hisense/Hisense_K321UW.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_RokuTV.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_TV_ZDB2190126.ir:Power", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hisense/Hisense_U7G.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_43140.ir:Power", ExtraIrKind::RC5, 3UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_49141.ir:Power", ExtraIrKind::RC5, 3UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_CLE-1031.ir:Power", ExtraIrKind::NEC, 80UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_LE46H508.ir:Power", ExtraIrKind::NEC, 80UL, 23UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_RC43140.ir:Power", ExtraIrKind::RC5, 3UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Hitachi/Hitachi_SmartTV_43140.ir:Power", ExtraIrKind::RC5, 3UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Hotels/Hilton_Connected_Room_Remote.ir:Power", ExtraIrKind::NECext, 26985UL, 65025UL, 38000, 32, 0, nullptr, false},
  {"TVs/Hotels/Marriott-BONVoY_Remote.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Insignia/Insignia.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Insignia/Insignia_NS_40D510NA17.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Insignia/Insignia_NS_RC9DNA-14.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/Insignia/Insignia_NS_RCFNA_21.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/JVC/JVC_4KTV.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/JVC/JVC_LT-49HW97U.ir:Power", ExtraIrKind::Samsung, 14UL, 12UL, 38000, 32, 0, nullptr, false},
  {"TVs/JVC/JVC_RMT-JR01.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 69, irExtraRaw422, false},
  {"TVs/Kendo/Kendo_CP20M36VT.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Kogan/Kogan_KALED50XU9210STB.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Kraft/KRAFT_KTV.ir:Power", ExtraIrKind::NECext, 15873UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_24LJ4840.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_27GR95QE_TV.ir:Power", ExtraIrKind::NECext, 62468UL, 63240UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_32LF650V.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_32LN5406.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_32LW4500.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_37LN5403.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_43NANO779PA.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_48LV340H.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_4K_TV.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_55LB870V_ZA.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_55UN7300AUD.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_75UJ6470.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB33871403.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB69680401.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB72913118.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB72914048.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB72915206.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB73275675.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB74915305.ir:POWER", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB75095307.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB75375608.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB75675311.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB75855501.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_AKB76043102.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_C1.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_C9_magic_remote.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_Hotel_TV_Home2.ir:Power", ExtraIrKind::NECext, 26985UL, 65025UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_Hotel_tv.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_MKJ33981404.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_MKJ39170828_Service.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_MR21GC_Magic_Remote.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_OLED48C37LA (LG_OLED C3 models).ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_OLED65C8PUA.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_TV_42LF5800.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LG/LG_TV_AKB75375604.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/LodgeNet/lodgenet_lrc3220.ir:Power", ExtraIrKind::NECext, 31877UL, 32640UL, 38000, 32, 0, nullptr, false},
  {"TVs/Magnavox/MAGNAVOX_20MT1331_17.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Magnavox/MAGNAVOX_CD130MW8.ir:Power", ExtraIrKind::NECext, 8839UL, 8160UL, 38000, 32, 0, nullptr, false},
  {"TVs/Magnavox/MAGNAVOX_RD0946T102.ir:Power", ExtraIrKind::NECext, 31363UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Manta/Manta.ir:On", ExtraIrKind::NECext, 48896UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"TVs/Manta/Manta_TV.ir:Power", ExtraIrKind::NECext, 48896UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"TVs/Manta/Manta_TV_2.ir:Power", ExtraIrKind::NEC, 160UL, 95UL, 38000, 32, 0, nullptr, false},
  {"TVs/Matsui/Matsui_1435b.ir:Standby", ExtraIrKind::Samsung, 23UL, 20UL, 38000, 32, 0, nullptr, false},
  {"TVs/Medion/Medion.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Medion/Medion_MD21302.ir:Power", ExtraIrKind::NEC, 25UL, 24UL, 38000, 32, 0, nullptr, false},
  {"TVs/Medion/Medion_MD31802.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Mivar/Mivar_LCD_TV.ir:Power", ExtraIrKind::NECext, 64256UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/NEC/NEC.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 189, irExtraRaw474, false},
  {"TVs/NEC/NEC.ir:Standby", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 227, irExtraRaw475, false},
  {"TVs/NEC/NEC_E425.ir:Power", ExtraIrKind::NEC, 56UL, 1UL, 38000, 32, 0, nullptr, false},
  {"TVs/Neo/Neo_TV.ir:On_off", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"TVs/Nevir/NEVIR_NVR-7409-39HD-N.ir:Standby", ExtraIrKind::NEC, 1UL, 16UL, 38000, 32, 0, nullptr, false},
  {"TVs/Oky/Oky_TV.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Onn/Onn_Roku_TV.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/PDi/PD108-420.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Panasonic/N2QAYB001109.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/N2QAYB001109_full.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_58JX800_Series.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYA_152.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000352.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000705.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000715.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000752.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000752_Full.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_N2QAYB000926.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TC-P50S2.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TC-P50U1.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TH-43HS550K.ir:Power", ExtraIrKind::Samsung, 62UL, 12UL, 38000, 32, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX-40HX800B.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX-P50C10E.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX29AS10C.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX_42AS650E.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX_43GXW584.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_TX_L42E5E.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_Unknown_Full.ir:Power", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Panasonic/Panasonic_Viera.ir:On_off", ExtraIrKind::Panasonic, 2097792UL, 976UL, 38000, 48, 0, nullptr, false},
  {"TVs/Philips/PhilipsTV.ir:On_off", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_14GX8510.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Philips/Philips_14PT136B00.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Philips/Philips_22IT_TV_Monitor.ir:Power", ExtraIrKind::NECext, 48384UL, 65025UL, 38000, 32, 0, nullptr, false},
  {"TVs/Philips/Philips_32PFL4208T.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_32PFL7403S.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_32PFL7962D12.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Philips/Philips_40HFL3010T12.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_40PFL6533_F7D.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/Philips/Philips_436M6VBPAB.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_50PUT6103_79.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_5766_Series.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_TV_14PV172_08.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Philips/Philips_TV_48OLED806.ir:On_off", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_TV_7000LED_42PFL7695H.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_TV_7956_Series.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_TV_Universal.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_XXPFL9955H.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_generic.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Philips/Philips_sf256.ir:Power", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"TVs/Pioneer/Pioneer_Kuro_PDP_LX508A.ir:Power", ExtraIrKind::Pioneer, 170UL, 28UL, 38000, 64, 0, nullptr, false},
  {"TVs/Platinum/Platinum_PT2020LED.ir:Power", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"TVs/PrismPlus/PrismPlus.ir:Power", ExtraIrKind::Samsung, 14UL, 12UL, 38000, 32, 0, nullptr, false},
  {"TVs/RCA/RCA_24_Roku.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/RCA/RCA_CRK50A.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/RCA/RCA_P46731AT_TV.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 155, irExtraRaw528, false},
  {"TVs/RCA/RCA_RCR314WR_ RCA313BR.ir:Power", ExtraIrKind::NECext, 1414UL, 61455UL, 38000, 32, 0, nullptr, false},
  {"TVs/RCA/RCA_RLDED3258A-B.ir:Power", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/RCA/RCA_RT2471_AC.ir:Power", ExtraIrKind::NEC, 160UL, 95UL, 38000, 32, 0, nullptr, false},
  {"TVs/RCA/RCA_RokuTV_RTR4061-B-CA.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 135, irExtraRaw532, false},
  {"TVs/RCA/RCA_TV_2.ir:Power", ExtraIrKind::NEC, 160UL, 95UL, 38000, 32, 0, nullptr, false},
  {"TVs/SEG/SEG_MALTA.ir:Power_Off", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Samsung/Samsung.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA-00721A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00443A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00484A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00580A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00714A.ir:Power off", ExtraIrKind::Samsung, 7UL, 152UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00714A.ir:Power on", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00741A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59-00786A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA59.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_AA81-00243A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-00511A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01081A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01175N.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01180A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01180A.ir:Power_off", ExtraIrKind::Samsung, 7UL, 152UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01198_R.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01247A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01301A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01303A.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01315B.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01315J.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01330C.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01358C.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01385C.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01388.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59-01391A.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_BN59.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_Broadband_Hospitality.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_E6.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_H6300_TV.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_HQ24ED470AK.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 303, irExtraRaw566, false},
  {"TVs/Samsung/Samsung_LE37S71B.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 129, irExtraRaw567, false},
  {"TVs/Samsung/Samsung_LE40R87BD.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_LN32D403E2GCTC.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_LN46C650L1F.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_LW17E34C.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_P2770HD.ir:On_off", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_QM55RA.ir:Power_off", ExtraIrKind::Samsung, 7UL, 152UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_QM55RA.ir:Power_on", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_QN43Q60AAF.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_Royal_Caribbean.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_Service_Menu.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_Smart_Remote.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_TV_1.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_TV_2.ir:On_off", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_TV_Full.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_TV_Full.ir:Power", ExtraIrKind::Samsung, 7UL, 230UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UE26C4000PW.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UE32F4000.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UE32F4000AW.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UE48JU6490U.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UE75TU7125K.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UN32EH5000F.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UN40C5000QFXZA.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_UN60JU6500.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Samsung/Samsung_Unknown_Model.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sankey/Sankey_TV.ir:Power", ExtraIrKind::NEC, 32UL, 82UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sanyo/Sanyo UR77EC2703-3.ir:Power", ExtraIrKind::NEC, 56UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sanyo/Sanyo_DP26640.ir:Power", ExtraIrKind::NEC, 56UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sanyo/Sanyo_FW40R49FC.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sanyo/Sanyo_ds32224.ir:Power", ExtraIrKind::NEC, 56UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sceptre/Sceptre_8142026670003C.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sceptre/Sceptre_H24.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sceptre/Sceptre_X50_Series.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sencor/Sencor_25801.ir:Power", ExtraIrKind::NEC, 64UL, 11UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sharp/Aquos.ir:Power", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sharp/Sharp_13VT-L100.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 64, irExtraRaw602, false},
  {"TVs/Sharp/Sharp_Aquos_32BG3E.ir:Power", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sharp/Sharp_Aquos_JP.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 99, irExtraRaw604, false},
  {"TVs/Sharp/Sharp_LC-42LB261U.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 95, irExtraRaw605, false},
  {"TVs/Sharp/Sharp_LC-RC1-16.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 127, irExtraRaw606, false},
  {"TVs/Sharp/Sharp_Roku_TV.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sharp/Sharp_TV2.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 159, irExtraRaw608, false},
  {"TVs/Sharp/Sharp_g0684cesa_NES_TV.ir:Power", ExtraIrKind::NEC, 40UL, 11UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sharp/Sharp_tv.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 223, irExtraRaw610, false},
  {"TVs/Silver/Silver_LE410004.ir:Power", ExtraIrKind::NECext, 63232UL, 62220UL, 38000, 32, 0, nullptr, false},
  {"TVs/SkyVue/SKYVUE_03SI-RI.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/SkyVue/SkyVue.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Soniq/Soniq_E32W13B.ir:Power", ExtraIrKind::NECext, 56690UL, 61710UL, 38000, 32, 0, nullptr, false},
  {"TVs/Soniq/Soniq_E55V13A.ir:Power", ExtraIrKind::NECext, 56690UL, 61710UL, 38000, 32, 0, nullptr, false},
  {"TVs/Soniq/Soniq_QSP500TV6.ir:Power", ExtraIrKind::NECext, 56690UL, 61200UL, 38000, 32, 0, nullptr, false},
  {"TVs/Soniq/Soniq_Z24Z15B.ir:Power", ExtraIrKind::NECext, 56690UL, 61710UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sony/SonyTV.ir:On_off", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_Bravia.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_Bravia_KD-55XF80xx-49XF80xx-43XF80xx.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_Bravia_KDL-46W905A.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_FW_75BZ40H.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_KD-55X80CK.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_KD.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_KDL-55HX850.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-GD014.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-V310.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-YD017.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-YD018.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-YD028.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM-YD092.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RMEA002.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RMF-TX500U.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RMT_TB400U.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RMT_TX100D.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RMT_TX200U.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM_ED016.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_RM_ED045.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_SFRTV5.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_X2182U.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_XBR.ir:Power", ExtraIrKind::Sony, 1UL, 46UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_XBR.ir:Power_off", ExtraIrKind::Sony, 1UL, 47UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_XBR_RM-TD017.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Sony/Sony_XBR_RMT-TX200U.ir:Power", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"TVs/Strong/Strong_32HX4003.ir:Power", ExtraIrKind::Samsung, 14UL, 12UL, 38000, 32, 0, nullptr, false},
  {"TVs/Strong/Strong_RCU-Z400N.ir:Power", ExtraIrKind::NEC, 160UL, 28UL, 38000, 32, 0, nullptr, false},
  {"TVs/Strong/Strong_STR7004.ir:Power", ExtraIrKind::NEC, 1UL, 28UL, 38000, 32, 0, nullptr, false},
  {"TVs/Strong/Strong_TVD221_B1825.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sunbrite/Sunbrite.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sunbrite/Sunbrite.ir:Power_off", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Supra/Supra_STV_LC32T880WL_1.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Sweex/SWEEX_Generic_Monitor.ir:Power", ExtraIrKind::NEC, 1UL, 16UL, 38000, 32, 0, nullptr, false},
  {"TVs/Symphonic/Symphonic_ST424FF.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 36700, 0, 52, irExtraRaw653, false},
  {"TVs/Syntax-Brillian/SyntaxBrillian_Olevia232T.ir:Power", ExtraIrKind::NECext, 47364UL, 65280UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_32S327.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_40S615.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/TCL/TCL_43S446.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/TCL/TCL_50S423.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_65C635K.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/TCL/TCL_LED49D2930.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/TCL/TCL_Roku_TV.ir:Power", ExtraIrKind::NECext, 51178UL, 26775UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_Roku_TV_55S405.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_UnknownModel1.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/TCL/TCL_UnknownModel2.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/TCL/TCL_UnknownModel3.ir:Power", ExtraIrKind::NECext, 51178UL, 59415UL, 38000, 32, 0, nullptr, false},
  {"TVs/Technika/TECHNIKA_22880.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_D40F294R4CW.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_L55U405B4CW.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_L65F249i3C.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_TF-LED19S64T2.ir:Power", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_TF-LED32S54T2.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Telefunken/Telefunken_d32f660x5cwi.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Telekom/Telekom_Entertain.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 25, irExtraRaw673, false},
  {"TVs/Tevion/Tevion_3221TS.ir:Power", ExtraIrKind::NEC, 0UL, 28UL, 38000, 32, 0, nullptr, false},
  {"TVs/Thomson/Thomson_40FS3003.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/Thomson/Thomson_UnknownModel1.ir:Power", ExtraIrKind::RCA, 15UL, 84UL, 38000, 12, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba CT 8560.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_32AV502U.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_43LF421U21.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_50C350LC.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_CT-32F2.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_CT-90325.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_CT-9922.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_Ct-8563.ir:Power", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_FireTV.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/Toshiba_SE_R0305_32CV100U.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Toshiba/toshiba_firetv_v2.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/United/United_tv.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"TVs/Viano/Viano_STV65UHD4K.ir:Power", ExtraIrKind::NECext, 32512UL, 57630UL, 38000, 32, 0, nullptr, false},
  {"TVs/ViewSonic/VIEWSONIC_A-00010219.ir:POWER", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/ViewSonic/ViewSonic_VT2645.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/ViewSonic/Viewsonic_RC52A_11.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Viore/Viore_TV_LC37VF72.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vitec/Vitec_Exterity_IPTV.ir:Power", ExtraIrKind::NECext, 60845UL, 19125UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_D32FM-K01.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 71, irExtraRaw696, false},
  {"TVs/Vizio/Vizio_D43-C1.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_E190VA_Razor.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_E70U-D3.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_M70Q6-J03.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_V405-H19.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_V705-G1.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_VX32L.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 71, irExtraRaw703, false},
  {"TVs/Vizio/Vizio_XRT122.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_XRT135.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_XRT136.ir:Power", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Vizio/Vizio_XRT140R.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 79, irExtraRaw707, false},
  {"TVs/Vizio/Vizio_XRT150.ir:POWER", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"TVs/Waltham/Waltham_WTHD3214B.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Watson/WATSON_FA3627T.ir:Power", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"TVs/Wbox/Wbox_TV.ir:Power", ExtraIrKind::NECext, 16448UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"TVs/Westinghouse/Westinghouse.ir:Power", ExtraIrKind::NECext, 32002UL, 47430UL, 38000, 32, 0, nullptr, false},
  {"TVs/Westinghouse/Westinghouse_RMT-13.ir:Power", ExtraIrKind::NEC, 1UL, 16UL, 38000, 32, 0, nullptr, false},
  {"TVs/Zenith/Zenith_SC3492Z.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 33, irExtraRaw714, false},
  {"TVs/Zenith/Zenith_tv.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 33, irExtraRaw715, false},
  {"Universal_TV_Remotes/EHP/EHP_Waagen_Universal_Remote.ir:Power", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 131, irExtraRaw716, false},
  {"Universal_TV_Remotes/One_For_All/OFA_8_Universal_Remote.ir:POWER", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 99, irExtraRaw717, false},
  {"Universal_TV_Remotes/RemotesReplaced/RemotesReplaced_RRS41.ir:Power", ExtraIrKind::NEC, 64UL, 18UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/Sanyo/Sanyo_universal.ir:POWER", ExtraIrKind::NEC, 56UL, 18UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:SAMSUNG", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:GRUNDIG", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:LG", ExtraIrKind::RC5, 0UL, 12UL, 38000, 12, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:SONY", ExtraIrKind::Sony, 1UL, 21UL, 38000, 12, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:TELEFUNKEN", ExtraIrKind::RC5, 1UL, 12UL, 38000, 12, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:VIZIO", ExtraIrKind::NEC, 4UL, 8UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:PHILLIPS", ExtraIrKind::RC6, 0UL, 12UL, 38000, 20, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:MEDION", ExtraIrKind::NEC, 25UL, 24UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:PANASONIC", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 299, irExtraRaw728, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:OPPO", ExtraIrKind::NEC, 73UL, 26UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:FETCH", ExtraIrKind::NECext, 18020UL, 41565UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:DENVER", ExtraIrKind::NECext, 32512UL, 62730UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:EHP WAAGEN", ExtraIrKind::Raw, 0UL, 0UL, 38000, 0, 131, irExtraRaw732, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:XBOX", ExtraIrKind::NECext, 55424UL, 53295UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:PLATINUM", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:HISENSE", ExtraIrKind::NECext, 48896UL, 61965UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/UNIVERSAL_POWER_OFF_DEVICES.ir:ELITELUX", ExtraIrKind::NECext, 32512UL, 59925UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/User_Created/UniversalSamsungFF.ir:Power", ExtraIrKind::Samsung, 7UL, 2UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/User_Created/UniversalSamsungFF.ir:PowerOff", ExtraIrKind::Samsung, 7UL, 152UL, 38000, 32, 0, nullptr, false},
  {"Universal_TV_Remotes/User_Created/UniversalSamsungFF.ir:PowerOn", ExtraIrKind::Samsung, 7UL, 153UL, 38000, 32, 0, nullptr, false},
};
const uint16_t numExtraIrCodes = sizeof(extraIrCodes) / sizeof(extraIrCodes[0]);
