/*
Last Updated: 30 Mar. 2018
By Anton Grimpelhuber (anton.grimpelhuber@gmail.com)
Added discrete Samsung / NECv2 power off code_eu140Code

TV-B-Gone for Arduino version 0.001
Ported to Arduino by Ken Shirriff, Dec 3, 2009
http://arcfn.com

The original code is:
TV-B-Gone Firmware version 1.2
 for use with ATtiny85v and v1.2 hardware
 (c) Mitch Altman + Limor Fried 2009

*/

//Codes captured from Generation 3 TV-B-Gone by Limor Fried & Mitch Altman
//table of POWER codes

#include "global.h"
// Flipper-IRDB TV Power import
// Imported entries: 398 Power / Power Off / equivalent toggle/standby signals
// Source TV files represented: 386 of 397
// Parsed protocols converted to mark/space timings; RAW captures retained as timings.
// Timing values are stored in 10-us units, matching the firmware sender.
// The 11 TV files without a matching Power/Power Off signal name were omitted.


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




const uint16_t code_eu000Times[] = {
  43, 47,
  43, 91,
  43, 8324,
  88, 47,
  133, 133,
  264, 90,
  264, 91,
};
const uint8_t code_eu000Codes[] = {
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
const struct IrCode code_eu000Code = {
  freq_to_timerval(35714),
  40,		// # of pairs
  3,		// # of bits per index
  code_eu000Times,
  code_eu000Codes
};
const uint16_t code_eu001Times[] = {
  47, 265,
  51, 54,
  51, 108,
  51, 263,
  51, 2053,
  51, 11647,
  100, 109,
};
const uint8_t code_eu001Codes[] = {
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
const struct IrCode code_eu001Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu001Times,
  code_eu001Codes
};
const uint16_t code_eu002Times[] = {
  43, 206,
  46, 204,
  46, 456,
  46, 3488,
};
const uint8_t code_eu002Codes[] = {
  0x1A,
  0x56,
  0xA6,
  0xD6,
  0x95,
  0xA9,
  0x90,
};
const struct IrCode code_eu002Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_eu002Times,
  code_eu002Codes
};

/* Duplicate timing table, same as na000 !
 const uint16_t code_eu003Times[] = {
 	58, 60,
 	58, 2687,
 	118, 60,
 	237, 60,
 	238, 60,
 };
 */
/*
const uint8_t code_eu003Codes[] = {
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
 const struct IrCode code_eu003Code = {
 	freq_to_timerval(38462),
 	26,		// # of pairs
 	3,		// # of bits per index
 	code_na000Times,
 	code_eu003Codes
 };// Duplicate IR Code - same as na000
 */

const uint16_t code_eu004Times[] = {
  44, 45,
  44, 131,
  44, 7462,
  346, 176,
  346, 178,
};
const uint8_t code_eu004Codes[] = {
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
const struct IrCode code_eu004Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_eu004Times,
  code_eu004Codes
};// Duplicate IR Code? Similar to NA002

const uint16_t code_eu005Times[] = {
  24, 190,
  25, 80,
  25, 190,
  25, 4199,
  25, 4799,
};
const uint8_t code_eu005Codes[] = {
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
const struct IrCode code_eu005Code = {
  freq_to_timerval(38610),
  64,		// # of pairs
  3,		// # of bits per index
  code_eu005Times,
  code_eu005Codes
};
// This is actually power TOGGLE for Samsung TVs. Therefore followed later by new eu141, discrete OFF
const uint16_t code_eu006Times[] = {
  53, 63,
  53, 172,
  53, 4472,
  54, 0,
  455, 468,
};
const uint8_t code_eu006Codes[] = {
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
const struct IrCode code_eu006Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu006Times,
  code_eu006Codes
};
const uint16_t code_eu007Times[] = {
  50, 54,
  50, 159,
  50, 2307,
  838, 422,
};
const uint8_t code_eu007Codes[] = {
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
const struct IrCode code_eu007Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_eu007Times,
  code_eu007Codes
};// Duplicate IR Code? - Similar to NA010


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu008Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu008Codes[] = {
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
const struct IrCode code_eu008Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu008Codes
};


/* Duplicate timing table, same as na005 !
 const uint16_t code_eu009Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_eu009Codes[] = {
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
 const struct IrCode code_eu009Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_eu009Codes
 };// Duplicate IR Code - same as na005
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu010Times[] = {
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
const uint8_t code_eu010Codes[] = {
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
 const struct IrCode code_eu010Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_eu010Codes
 };// Duplicate IR Code - same as NA004
 */

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu011Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu011Codes[] = {
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
const struct IrCode code_eu011Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu011Codes
};
const uint16_t code_eu012Times[] = {
  46, 206,
  46, 459,
  46, 3447,
};
const uint8_t code_eu012Codes[] = {
  0x05,
  0x01,
  0x51,
  0x81,
  0x40,
  0x54,
  0x40,
};
const struct IrCode code_eu012Code = {
  freq_to_timerval(33445),
  26,		// # of pairs
  2,		// # of bits per index
  code_eu012Times,
  code_eu012Codes
};
const uint16_t code_eu013Times[] = {
  53, 59,
  53, 171,
  53, 2302,
  895, 449,
};
const uint8_t code_eu013Codes[] = {
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
const struct IrCode code_eu013Code = {
  freq_to_timerval(38462),
  88,		// # of pairs
  2,		// # of bits per index
  code_eu013Times,
  code_eu013Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_eu014Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
/*
const uint8_t code_eu014Codes[] = {
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
 const struct IrCode code_eu014Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na021Times,
 	code_eu014Codes
 };// Duplicate IR Code - same as NA021
 */

const uint16_t code_eu015Times[] = {
  53, 54,
  53, 156,
  53, 2542,
  851, 425,
  853, 424,
};
const uint8_t code_eu015Codes[] = {
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
const struct IrCode code_eu015Code = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_eu015Times,
  code_eu015Codes
};// Duplicate IR Code? - Similar to NA018

const uint16_t code_eu016Times[] = {
  28, 92,
  28, 213,
  28, 214,
  28, 2771,
};
const uint8_t code_eu016Codes[] = {
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
const struct IrCode code_eu016Code = {
  freq_to_timerval(33333),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu016Times,
  code_eu016Codes
};
const uint16_t code_eu017Times[] = {
  15, 844,
  16, 557,
  16, 844,
  16, 5224,
};
const uint8_t code_eu017Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_eu017Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu017Times,
  code_eu017Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu018Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu018Codes[] = {
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
const struct IrCode code_eu018Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu018Codes
};
const uint16_t code_eu019Times[] = {
  50, 54,
  50, 158,
  50, 418,
  50, 2443,
  843, 418,
};
const uint8_t code_eu019Codes[] = {
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
const struct IrCode code_eu019Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_eu019Times,
  code_eu019Codes
};
const uint16_t code_eu020Times[] = {
  48, 301,
  48, 651,
  48, 1001,
  48, 3001,
};
const uint8_t code_eu020Codes[] = {
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
const struct IrCode code_eu020Code = {
  freq_to_timerval(35714),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu020Times,
  code_eu020Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu021Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu021Codes[] = {
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
const struct IrCode code_eu021Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu021Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu022Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu022Codes[] = {
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
const struct IrCode code_eu022Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu022Codes
};

/* Duplicate timing table, same as na022 !
 const uint16_t code_eu023Times[] = {
 	53, 60,
 	53, 175,
 	53, 4463,
 	53, 9453,
 	892, 450,
 	895, 225,
 };
 */
/*
const uint8_t code_eu023Codes[] = {
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
 const struct IrCode code_eu023Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na022Times,
 	code_eu023Codes
 };// Duplicate IR Code - Same as NA022
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu024Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu024Codes[] = {
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
const struct IrCode code_eu024Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu024Codes
};
const uint16_t code_eu025Times[] = {
  49, 52,
  49, 102,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_eu025Codes[] = {
  0x47,
  0x00,
  0x23,
  0x3C,
  0x01,
  0x59,
  0xE0,
  0x04,
};
const struct IrCode code_eu025Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_eu025Times,
  code_eu025Codes
};
const uint16_t code_eu026Times[] = {
  14, 491,
  14, 743,
  14, 4926,
};
const uint8_t code_eu026Codes[] = {
  0x55,
  0x40,
  0x42,
  0x55,
  0x40,
  0x41,
};
const struct IrCode code_eu026Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu026Times,
  code_eu026Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu027Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu027Codes[] = {
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
const struct IrCode code_eu027Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu027Codes
};
const uint16_t code_eu028Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
};
const uint8_t code_eu028Codes[] = {
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
const struct IrCode code_eu028Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu028Times,
  code_eu028Codes
};
const uint16_t code_eu029Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1445,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_eu029Codes[] = {
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
const struct IrCode code_eu029Code = {
  freq_to_timerval(34483),
  46,		// # of pairs
  3,		// # of bits per index
  code_eu029Times,
  code_eu029Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu030Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu030Codes[] = {
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
const struct IrCode code_eu030Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu030Codes
};// Duplicate IR Code? - Smilar to NA020

const uint16_t code_eu031Times[] = {
  53, 53,
  53, 160,
  53, 1697,
  838, 422,
};
const uint8_t code_eu031Codes[] = {
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
const struct IrCode code_eu031Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_eu031Times,
  code_eu031Codes
};
const uint16_t code_eu032Times[] = {
  49, 205,
  49, 206,
  49, 456,
  49, 3690,
};
const uint8_t code_eu032Codes[] = {
  0x1A,
  0x56,
  0xA5,
  0xD6,
  0x95,
  0xA9,
  0x40,
};
const struct IrCode code_eu032Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_eu032Times,
  code_eu032Codes
};
const uint16_t code_eu033Times[] = {
  48, 150,
  50, 149,
  50, 347,
  50, 2936,
};
const uint8_t code_eu033Codes[] = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_eu033Code = {
  freq_to_timerval(38462),
  14,		// # of pairs
  2,		// # of bits per index
  code_eu033Times,
  code_eu033Codes
};


/* Duplicate timing table, same as na004 !
 const uint16_t code_eu034Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu034Codes[] = {
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
const struct IrCode code_eu034Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu034Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_eu035Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_eu035Codes[] = {
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
 const struct IrCode code_eu035Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_eu035Codes
 };// Duplicate IR Code - same as eu009!
 */

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu036Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu036Codes[] = {
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
const struct IrCode code_eu036Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu036Codes
};
const uint16_t code_eu037Times[] = {
  14, 491,
  14, 743,
  14, 5178,
};
const uint8_t code_eu037Codes[] = {
  0x45,
  0x50,
  0x02,
  0x45,
  0x50,
  0x01,
};
const struct IrCode code_eu037Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu037Times,
  code_eu037Codes
};
const uint16_t code_eu038Times[] = {
  3, 1002,
  3, 1495,
  3, 3059,
};
const uint8_t code_eu038Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_eu038Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_eu038Times,
  code_eu038Codes
};
const uint16_t code_eu039Times[] = {
  13, 445,
  13, 674,
  13, 675,
  13, 4583,
};
const uint8_t code_eu039Codes[] = {
  0x6A,
  0x82,
  0x83,
  0xAA,
  0x82,
  0x81,
};
const struct IrCode code_eu039Code = {
  freq_to_timerval(40161),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu039Times,
  code_eu039Codes
};
const uint16_t code_eu040Times[] = {
  85, 89,
  85, 264,
  85, 3402,
  347, 350,
  348, 350,
};
const uint8_t code_eu040Codes[] = {
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
const struct IrCode code_eu040Code = {
  freq_to_timerval(35714),
  52,		// # of pairs
  3,		// # of bits per index
  code_eu040Times,
  code_eu040Codes
};
const uint16_t code_eu041Times[] = {
  46, 300,
  49, 298,
  49, 648,
  49, 997,
  49, 3056,
};
const uint8_t code_eu041Codes[] = {
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
const struct IrCode code_eu041Code = {
  freq_to_timerval(33333),
  28,		// # of pairs
  3,		// # of bits per index
  code_eu041Times,
  code_eu041Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu042Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu042Codes[] = {
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
const struct IrCode code_eu042Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu042Codes
};
const uint16_t code_eu043Times[] = {
  1037, 4216,
  1040, 0,
};
const uint8_t code_eu043Codes[] = {
  0x10,
};
const struct IrCode code_eu043Code = {
  freq_to_timerval(41667),
  2,		// # of pairs
  2,		// # of bits per index
  code_eu043Times,
  code_eu043Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu044Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu044Codes[] = {
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
const struct IrCode code_eu044Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu044Codes
};
const uint16_t code_eu045Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 2947,
};
const uint8_t code_eu045Codes[] = {
  0x16,
  0xE5,
  0x90,
};
const struct IrCode code_eu045Code = {
  freq_to_timerval(41667),
  10,		// # of pairs
  2,		// # of bits per index
  code_eu045Times,
  code_eu045Codes
};
const uint16_t code_eu046Times[] = {
  15, 493,
  16, 493,
  16, 698,
  16, 1414,
};
const uint8_t code_eu046Codes[] = {
  0x16,
  0xAB,
  0x56,
  0xA9,
};
const struct IrCode code_eu046Code = {
  freq_to_timerval(34602),
  16,		// # of pairs
  2,		// # of bits per index
  code_eu046Times,
  code_eu046Codes
};
const uint16_t code_eu047Times[] = {
  3, 496,
  3, 745,
  3, 1488,
};
const uint8_t code_eu047Codes[] = {
  0x41,
  0x24,
  0x12,
  0x41,
  0x00,
};
const struct IrCode code_eu047Code = {
  0,              // Non-pulsed code
  17,		// # of pairs
  2,		// # of bits per index
  code_eu047Times,
  code_eu047Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu048Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu048Codes[] = {
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
const struct IrCode code_eu048Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu048Codes
};
const uint16_t code_eu049Times[] = {
  55, 55,
  55, 167,
  55, 4577,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_eu049Codes[] = {
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
const struct IrCode code_eu049Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_eu049Times,
  code_eu049Codes
};
const uint16_t code_eu050Times[] = {
  91, 88,
  91, 267,
  91, 3621,
  361, 358,
  361, 359,
};
const uint8_t code_eu050Codes[] = {
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
const struct IrCode code_eu050Code = {
  freq_to_timerval(33333),
  48,		// # of pairs
  3,		// # of bits per index
  code_eu050Times,
  code_eu050Codes
};
const uint16_t code_eu051Times[] = {
  84, 88,
  84, 261,
  84, 3360,
  347, 347,
  347, 348,
};
const uint8_t code_eu051Codes[] = {
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
const struct IrCode code_eu051Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_eu051Times,
  code_eu051Codes
};// Duplicate IR Code? - Similar to NA115

const uint16_t code_eu052Times[] = {
  16, 838,
  17, 558,
  17, 839,
  17, 6328,
};
const uint8_t code_eu052Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_eu052Code = {
  freq_to_timerval(31250),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu052Times,
  code_eu052Codes
};// Duplicate IR Code? -  Similar to EU017


/* Duplicate timing table, same as eu046 !
 const uint16_t code_eu053Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_eu053Codes[] = {
  0x26,
  0xAB,
  0x66,
  0xAA,
};
const struct IrCode code_eu053Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_eu046Times,
  code_eu053Codes
};
const uint16_t code_eu054Times[] = {
  49, 53,
  49, 104,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_eu054Codes[] = {
  0x40,
  0x1A,
  0x23,
  0x00,
  0xD0,
  0x80,
};
const struct IrCode code_eu054Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_eu054Times,
  code_eu054Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu055Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu055Codes[] = {
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
const struct IrCode code_eu055Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu055Codes
};
const uint16_t code_eu056Times[] = {
  112, 107,
  113, 107,
  677, 2766,
};
const uint8_t code_eu056Codes[] = {
  0x26,
};
const struct IrCode code_eu056Code = {
  freq_to_timerval(38462),
  4,		// # of pairs
  2,		// # of bits per index
  code_eu056Times,
  code_eu056Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu057Times[] = {
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
const uint8_t code_eu057Codes[] = {
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
 const struct IrCode code_eu057Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_eu057Codes
 }; // Duplicate IR code - same as EU008
 */
/* Duplicate timing table, same as na009 !
 const uint16_t code_eu058Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu058Codes[] = {
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
const struct IrCode code_eu058Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu058Codes
};
const uint16_t code_eu059Times[] = {
  310, 613,
  310, 614,
  622, 8312,
};
const uint8_t code_eu059Codes[] = {
  0x26,
};
const struct IrCode code_eu059Code = {
  freq_to_timerval(41667),
  4,		// # of pairs
  2,		// # of bits per index
  code_eu059Times,
  code_eu059Codes
};// Duplicate IR Code? - Similar to EU056

const uint16_t code_eu060Times[] = {
  50, 158,
  53, 51,
  53, 156,
  53, 2180,
};
const uint8_t code_eu060Codes[] = {
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
const struct IrCode code_eu060Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu060Times,
  code_eu060Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_eu061Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
const uint8_t code_eu061Codes[] = {
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
const struct IrCode code_eu061Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_eu061Codes
};

/* Duplicate timing table, same as eu060 !
 const uint16_t code_eu062Times[] = {
 	50, 158,
 	53, 51,
 	53, 156,
 	53, 2180,
 };
 */
const uint8_t code_eu062Codes[] = {
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
const struct IrCode code_eu062Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_eu060Times,
  code_eu062Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu063Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu063Codes[] = {
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
const struct IrCode code_eu063Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu063Codes
};
const uint16_t code_eu064Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
  100, 112,
};
const uint8_t code_eu064Codes[] = {
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
const struct IrCode code_eu064Code = {
  freq_to_timerval(30395),
  29,		// # of pairs
  3,		// # of bits per index
  code_eu064Times,
  code_eu064Codes
};
const uint16_t code_eu065Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 112,
};
const uint8_t code_eu065Codes[] = {
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
const struct IrCode code_eu065Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu065Times,
  code_eu065Codes
};

/* Duplicate timing table, same as eu049 !
 const uint16_t code_eu066Times[] = {
 	55, 55,
 	55, 167,
 	55, 4577,
 	55, 9506,
 	448, 445,
 	450, 444,
 };
 */
const uint8_t code_eu066Codes[] = {
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
const struct IrCode code_eu066Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_eu049Times,
  code_eu066Codes
};
const uint16_t code_eu067Times[] = {
  94, 473,
  94, 728,
  102, 1637,
};
const uint8_t code_eu067Codes[] = {
  0x41,
  0x24,
  0x12,
};
const struct IrCode code_eu067Code = {
  freq_to_timerval(38462),
  12,		// # of pairs
  2,		// # of bits per index
  code_eu067Times,
  code_eu067Codes
};
const uint16_t code_eu068Times[] = {
  49, 263,
  50, 54,
  50, 108,
  50, 263,
  50, 2029,
  50, 10199,
  100, 110,
};
const uint8_t code_eu068Codes[] = {
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
const struct IrCode code_eu068Code = {
  freq_to_timerval(38610),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu068Times,
  code_eu068Codes
};
const uint16_t code_eu069Times[] = {
  4, 499,
  4, 750,
  4, 4999,
};
const uint8_t code_eu069Codes[] = {
  0x05,
  0x54,
  0x06,
  0x05,
  0x54,
  0x04,
};
const struct IrCode code_eu069Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu069Times,
  code_eu069Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_eu070Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_eu070Codes[] = {
  0x14,
  0x54,
  0x06,
  0x14,
  0x54,
  0x04,
};
const struct IrCode code_eu070Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu069Times,
  code_eu070Codes
};
const uint16_t code_eu071Times[] = {
  14, 491,
  14, 743,
  14, 4422,
};
const uint8_t code_eu071Codes[] = {
  0x45,
  0x44,
  0x56,
  0x45,
  0x44,
  0x55,
};
const struct IrCode code_eu071Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu071Times,
  code_eu071Codes
};
const uint16_t code_eu072Times[] = {
  5, 568,
  5, 854,
  5, 4999,
};
const uint8_t code_eu072Codes[] = {
  0x55,
  0x45,
  0x46,
  0x55,
  0x45,
  0x44,
};
const struct IrCode code_eu072Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu072Times,
  code_eu072Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_eu073Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_eu073Codes[] = {
  0x19,
  0x57,
  0x59,
  0x55,
};
const struct IrCode code_eu073Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_eu046Times,
  code_eu073Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_eu074Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
const uint8_t code_eu074Codes[] = {
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
const struct IrCode code_eu074Code = {
  freq_to_timerval(35714),
  26,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_eu074Codes
};
const uint16_t code_eu075Times[] = {
  6, 566,
  6, 851,
  6, 5474,
};
const uint8_t code_eu075Codes[] = {
  0x05,
  0x45,
  0x46,
  0x05,
  0x45,
  0x44,
};
const struct IrCode code_eu075Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu075Times,
  code_eu075Codes
};
const uint16_t code_eu076Times[] = {
  14, 843,
  16, 555,
  16, 841,
  16, 4911,
};
const uint8_t code_eu076Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_eu076Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu076Times,
  code_eu076Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_eu077Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_eu077Codes[] = {
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
const struct IrCode code_eu077Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu028Times,
  code_eu077Codes
};
const uint16_t code_eu078Times[] = {
  6, 925,
  6, 1339,
  6, 2098,
  6, 2787,
};
const uint8_t code_eu078Codes[] = {
  0x90,
  0x0D,
  0x00,
};
const struct IrCode code_eu078Code = {
  0,              // Non-pulsed code
  12,		// # of pairs
  2,		// # of bits per index
  code_eu078Times,
  code_eu078Codes
};
const uint16_t code_eu079Times[] = {
  53, 59,
  53, 170,
  53, 4359,
  892, 448,
  893, 448,
};
const uint8_t code_eu079Codes[] = {
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
const struct IrCode code_eu079Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu079Times,
  code_eu079Codes
};
const uint16_t code_eu080Times[] = {
  55, 57,
  55, 167,
  55, 4416,
  895, 448,
  897, 447,
};
const uint8_t code_eu080Codes[] = {
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
const struct IrCode code_eu080Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu080Times,
  code_eu080Codes
};

const uint16_t code_eu081Times[] = {
  26, 185,
  27, 80,
  27, 185,
  27, 4249,
};
const uint8_t code_eu081Codes[] = {
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
const struct IrCode code_eu081Code = {
  freq_to_timerval(38462),
  80,		// # of pairs
  2,		// # of bits per index
  code_eu081Times,
  code_eu081Codes
};
const uint16_t code_eu082Times[] = {
  51, 56,
  51, 162,
  51, 2842,
  848, 430,
  850, 429,
};
const uint8_t code_eu082Codes[] = {
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
const struct IrCode code_eu082Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu082Times,
  code_eu082Codes
};
const uint16_t code_eu083Times[] = {
  16, 559,
  16, 847,
  16, 5900,
  17, 559,
  17, 847,
};
const uint8_t code_eu083Codes[] = {
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
const struct IrCode code_eu083Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_eu083Times,
  code_eu083Codes
};
const uint16_t code_eu084Times[] = {
  16, 484,
  16, 738,
  16, 739,
  16, 4795,
};
const uint8_t code_eu084Codes[] = {
  0x6A,
  0xA0,
  0x03,
  0xAA,
  0xA0,
  0x01,
};
const struct IrCode code_eu084Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu084Times,
  code_eu084Codes
};
const uint16_t code_eu085Times[] = {
  48, 52,
  48, 160,
  48, 400,
  48, 2120,
  799, 400,
};
const uint8_t code_eu085Codes[] = {
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
const struct IrCode code_eu085Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_eu085Times,
  code_eu085Codes
};
const uint16_t code_eu086Times[] = {
  16, 851,
  17, 554,
  17, 850,
  17, 851,
  17, 4847,
};
const uint8_t code_eu086Codes[] = {
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
const struct IrCode code_eu086Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_eu086Times,
  code_eu086Codes
};
const uint16_t code_eu087Times[] = {
  14, 491,
  14, 743,
  14, 5126,
};
const uint8_t code_eu087Codes[] = {
  0x55,
  0x50,
  0x02,
  0x55,
  0x50,
  0x01,
};
const struct IrCode code_eu087Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu087Times,
  code_eu087Codes
};
const uint16_t code_eu088Times[] = {
  14, 491,
  14, 743,
  14, 4874,
};
const uint8_t code_eu088Codes[] = {
  0x45,
  0x54,
  0x42,
  0x45,
  0x54,
  0x41,
};
const struct IrCode code_eu088Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu088Times,
  code_eu088Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_eu089Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
const uint8_t code_eu089Codes[] = {
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
const struct IrCode code_eu089Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_eu089Codes
};
const uint16_t code_eu090Times[] = {
  3, 9,
  3, 19,
  3, 29,
  3, 39,
  3, 9968,
};
const uint8_t code_eu090Codes[] = {
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
const struct IrCode code_eu090Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_eu090Times,
  code_eu090Codes
};
const uint16_t code_eu091Times[] = {
  15, 138,
  15, 446,
  15, 605,
  15, 6565,
};
const uint8_t code_eu091Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0xA0,
};
const struct IrCode code_eu091Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  2,		// # of bits per index
  code_eu091Times,
  code_eu091Codes
};
const uint16_t code_eu092Times[] = {
  48, 50,
  48, 148,
  48, 149,
  48, 1424,
};
const uint8_t code_eu092Codes[] = {
  0x48,
  0x80,
  0x0E,
  0x22,
  0x00,
  0x10,
};
const struct IrCode code_eu092Code = {
  freq_to_timerval(40000),
  22,		// # of pairs
  2,		// # of bits per index
  code_eu092Times,
  code_eu092Codes
};
const uint16_t code_eu093Times[] = {
  87, 639,
  88, 275,
  88, 639,
};
const uint8_t code_eu093Codes[] = {
  0x15,
  0x9A,
  0x94,
};
const struct IrCode code_eu093Code = {
  freq_to_timerval(35714),
  11,		// # of pairs
  2,		// # of bits per index
  code_eu093Times,
  code_eu093Codes
};
const uint16_t code_eu094Times[] = {
  3, 8,
  3, 18,
  3, 24,
  3, 38,
  3, 9969,
};
const uint8_t code_eu094Codes[] = {
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
const struct IrCode code_eu094Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_eu094Times,
  code_eu094Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_eu095Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_eu095Codes[] = {
  0x2A,
  0xAB,
  0x6A,
  0xAA,
};
const struct IrCode code_eu095Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_eu046Times,
  code_eu095Codes
};
const uint16_t code_eu096Times[] = {
  13, 608,
  14, 141,
  14, 296,
  14, 451,
  14, 606,
  14, 608,
  14, 6207,
};
const uint8_t code_eu096Codes[] = {
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
const struct IrCode code_eu096Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  3,		// # of bits per index
  code_eu096Times,
  code_eu096Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_eu097Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_eu097Codes[] = {
  0x19,
  0xAB,
  0x59,
  0xA9,
};
const struct IrCode code_eu097Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_eu046Times,
  code_eu097Codes
};
const uint16_t code_eu098Times[] = {
  3, 8,
  3, 18,
  3, 28,
  3, 12731,
};
const uint8_t code_eu098Codes[] = {
  0x80,
  0x01,
  0x00,
  0xB8,
  0x55,
  0x10,
  0x08,
};
const struct IrCode code_eu098Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_eu098Times,
  code_eu098Codes
};
const uint16_t code_eu099Times[] = {
  46, 53,
  46, 106,
  46, 260,
  46, 1502,
  46, 10962,
  93, 53,
  93, 106,
};
const uint8_t code_eu099Codes[] = {
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
const struct IrCode code_eu099Code = {
  freq_to_timerval(35714),
  46,		// # of pairs
  3,		// # of bits per index
  code_eu099Times,
  code_eu099Codes
};


/* Duplicate timing table, same as eu098 !
 const uint16_t code_eu100Times[] = {
 	3, 8,
 	3, 18,
 	3, 28,
 	3, 12731,
 };
 */
const uint8_t code_eu100Codes[] = {
  0x80,
  0x04,
  0x00,
  0xB8,
  0x55,
  0x40,
  0x08,
};
const struct IrCode code_eu100Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_eu098Times,
  code_eu100Codes
};



const uint16_t code_eu101Times[] = {
  14, 491,
  14, 743,
  14, 4674,
};
const uint8_t code_eu101Codes[] = {
  0x55,
  0x50,
  0x06,
  0x55,
  0x50,
  0x05,
};
const struct IrCode code_eu101Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu101Times,
  code_eu101Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_eu102Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_eu102Codes[] = {
  0x45,
  0x54,
  0x02,
  0x45,
  0x54,
  0x01,
};
const struct IrCode code_eu102Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu087Times,
  code_eu102Codes
};
const uint16_t code_eu103Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 5000,
};
const uint8_t code_eu103Codes[] = {
  0x29,
  0x9A,
  0x9B,
  0xA9,
  0x9A,
  0x9A,
};
const struct IrCode code_eu103Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu103Times,
  code_eu103Codes
};
const uint16_t code_eu104Times[] = {
  14, 491,
  14, 743,
  14, 5881,
};
const uint8_t code_eu104Codes[] = {
  0x44,
  0x40,
  0x02,
  0x44,
  0x40,
  0x01,
};
const struct IrCode code_eu104Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu104Times,
  code_eu104Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_eu105Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_eu105Codes[] = {
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
const struct IrCode code_eu105Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_eu105Codes
};
const uint16_t code_eu106Times[] = {
  48, 246,
  50, 47,
  50, 94,
  50, 245,
  50, 1488,
  50, 10970,
  100, 47,
  100, 94,
};
const uint8_t code_eu106Codes[] = {
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
const struct IrCode code_eu106Code = {
  freq_to_timerval(38462),
  59,		// # of pairs
  3,		// # of bits per index
  code_eu106Times,
  code_eu106Codes
};
const uint16_t code_eu107Times[] = {
  16, 847,
  16, 5900,
  17, 559,
  17, 846,
  17, 847,
};
const uint8_t code_eu107Codes[] = {
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
const struct IrCode code_eu107Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_eu107Times,
  code_eu107Codes
};
const uint16_t code_eu108Times[] = {
  14, 491,
  14, 743,
  14, 4622,
};
const uint8_t code_eu108Codes[] = {
  0x45,
  0x54,
  0x16,
  0x45,
  0x54,
  0x15,
};
const struct IrCode code_eu108Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu108Times,
  code_eu108Codes
};
const uint16_t code_eu109Times[] = {
  24, 185,
  27, 78,
  27, 183,
  27, 1542,
};
const uint8_t code_eu109Codes[] = {
  0x19,
  0x95,
  0x5E,
  0x66,
  0x55,
  0x50,
};
const struct IrCode code_eu109Code = {
  freq_to_timerval(38462),
  22,		// # of pairs
  2,		// # of bits per index
  code_eu109Times,
  code_eu109Codes
};


const uint16_t code_eu110Times[] = {
  56, 55,
  56, 168,
  56, 4850,
  447, 453,
  448, 453,
};
const uint8_t code_eu110Codes[] = {
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
const struct IrCode code_eu110Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu110Times,
  code_eu110Codes
};
const uint16_t code_eu111Times[] = {
  49, 52,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_eu111Codes[] = {
  0x22,
  0x80,
  0x1A,
  0x18,
  0x01,
  0x10,
  0xC0,
  0x02,
};
const struct IrCode code_eu111Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_eu111Times,
  code_eu111Codes
};
const uint16_t code_eu112Times[] = {
  55, 55,
  55, 167,
  55, 5023,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_eu112Codes[] = {
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
const struct IrCode code_eu112Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_eu112Times,
  code_eu112Codes
};


/* Duplicate timing table, same as eu054 !
 const uint16_t code_eu113Times[] = {
 	49, 53,
 	49, 104,
 	49, 262,
 	49, 264,
 	49, 8030,
 	100, 103,
 };
 */
const uint8_t code_eu113Codes[] = {
  0x46,
  0x80,
  0x23,
  0x34,
  0x00,
  0x80,
};
const struct IrCode code_eu113Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_eu054Times,
  code_eu113Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_eu114Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_eu114Codes[] = {
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
const struct IrCode code_eu114Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_eu028Times,
  code_eu114Codes
};


const uint16_t code_eu115Times[] = {
  48, 98,
  48, 196,
  97, 836,
  395, 388,
  1931, 389,
};
const uint8_t code_eu115Codes[] = {
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
const struct IrCode code_eu115Code = {
  freq_to_timerval(58824),
  77,		// # of pairs
  3,		// # of bits per index
  code_eu115Times,
  code_eu115Codes
};
const uint16_t code_eu116Times[] = {
  3, 9,
  3, 31,
  3, 42,
  3, 10957,
};
const uint8_t code_eu116Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0x80,
};
const struct IrCode code_eu116Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  2,		// # of bits per index
  code_eu116Times,
  code_eu116Codes
};
const uint16_t code_eu117Times[] = {
  49, 53,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_eu117Codes[] = {
  0x22,
  0x00,
  0x1A,
  0x10,
  0x00,
  0x40,
};
const struct IrCode code_eu117Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_eu117Times,
  code_eu117Codes
};
const uint16_t code_eu118Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 4713,
};
const uint8_t code_eu118Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_eu118Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu118Times,
  code_eu118Codes
};

const uint16_t code_eu119Times[] = {
  14, 491,
  14, 743,
  14, 5430,
};
const uint8_t code_eu119Codes[] = {
  0x44,
  0x44,
  0x02,
  0x44,
  0x44,
  0x01,
};
const struct IrCode code_eu119Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu119Times,
  code_eu119Codes
};


const uint16_t code_eu120Times[] = {
  19, 78,
  21, 27,
  21, 77,
  21, 3785,
  22, 0,
};
const uint8_t code_eu120Codes[] = {
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
const struct IrCode code_eu120Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_eu120Times,
  code_eu120Codes
};

/* Duplicate timing table, same as eu051 !
 const uint16_t code_eu121Times[] = {
 	84, 88,
 	84, 261,
 	84, 3360,
 	347, 347,
 	347, 348,
 };
 */
const uint8_t code_eu121Codes[] = {
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
const struct IrCode code_eu121Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_eu051Times,
  code_eu121Codes
};

/* Duplicate timing table, same as eu120 !
 const uint16_t code_eu122Times[] = {
 	19, 78,
 	21, 27,
 	21, 77,
 	21, 3785,
 	22, 0,
 };
 */
const uint8_t code_eu122Codes[] = {
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
const struct IrCode code_eu122Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_eu120Times,
  code_eu122Codes
};
const uint16_t code_eu123Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5443,
};
const uint8_t code_eu123Codes[] = {
  0x6A,
  0xA0,
  0x0B,
  0xAA,
  0xA0,
  0x09,
};
const struct IrCode code_eu123Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu123Times,
  code_eu123Codes
};
const uint16_t code_eu124Times[] = {
  50, 54,
  50, 158,
  50, 407,
  50, 2153,
  843, 407,
};
const uint8_t code_eu124Codes[] = {
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
const struct IrCode code_eu124Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_eu124Times,
  code_eu124Codes
};
const uint16_t code_eu125Times[] = {
  55, 56,
  55, 168,
  55, 3929,
  56, 0,
  882, 454,
  884, 452,
};
const uint8_t code_eu125Codes[] = {
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
const struct IrCode code_eu125Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_eu125Times,
  code_eu125Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu126Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu126Codes[] = {
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
const struct IrCode code_eu126Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu126Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_eu127Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_eu127Codes[] = {
  0x44,
  0x40,
  0x56,
  0x44,
  0x40,
  0x55,
};
const struct IrCode code_eu127Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu087Times,
  code_eu127Codes
};
const uint16_t code_eu128Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 782,
  154, 2947,
};
const uint8_t code_eu128Codes[] = {
  0x05,
  0xC4,
  0x59,
};
const struct IrCode code_eu128Code = {
  freq_to_timerval(41667),
  8,		// # of pairs
  3,		// # of bits per index
  code_eu128Times,
  code_eu128Codes
};
const uint16_t code_eu129Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1449,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_eu129Codes[] = {
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
const struct IrCode code_eu129Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_eu129Times,
  code_eu129Codes
};

/* Duplicate timing table, same as eu129 !
 const uint16_t code_eu130Times[] = {
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
const uint8_t code_eu130Codes[] = {
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
const struct IrCode code_eu130Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_eu129Times,
  code_eu130Codes
};
const uint16_t code_eu131Times[] = {
  14, 491,
  14, 743,
  14, 4170,
};
const uint8_t code_eu131Codes[] = {
  0x55,
  0x55,
  0x42,
  0x55,
  0x55,
  0x41,
};
const struct IrCode code_eu131Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu131Times,
  code_eu131Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_eu132Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_eu132Codes[] = {
  0x05,
  0x50,
  0x06,
  0x05,
  0x50,
  0x04,
};
const struct IrCode code_eu132Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu069Times,
  code_eu132Codes
};

/* Duplicate timing table, same as eu071 !
 const uint16_t code_eu133Times[] = {
 	14, 491,
 	14, 743,
 	14, 4422,
 };
 */
const uint8_t code_eu133Codes[] = {
  0x55,
  0x54,
  0x12,
  0x55,
  0x54,
  0x11,
};
const struct IrCode code_eu133Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu071Times,
  code_eu133Codes
};
const uint16_t code_eu134Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5939,
};
const uint8_t code_eu134Codes[] = {
  0x40,
  0x0A,
  0x83,
  0x80,
  0x0A,
  0x81,
};
const struct IrCode code_eu134Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_eu134Times,
  code_eu134Codes
};
const uint16_t code_eu135Times[] = {
  6, 566,
  6, 851,
  6, 5188,
};
const uint8_t code_eu135Codes[] = {
  0x54,
  0x45,
  0x46,
  0x54,
  0x45,
  0x44,
};
const struct IrCode code_eu135Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_eu135Times,
  code_eu135Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_eu136Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_eu136Codes[] = {
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
const struct IrCode code_eu136Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_eu136Codes
};
const uint16_t code_eu137Times[] = {
  86, 91,
  87, 90,
  87, 180,
  87, 8868,
  88, 0,
  174, 90,
};
const uint8_t code_eu137Codes[] = {
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
const struct IrCode code_eu137Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_eu137Times,
  code_eu137Codes
};
const uint16_t code_eu138Times[] = {
  4, 1036,
  4, 1507,
  4, 3005,
};
const uint8_t code_eu138Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_eu138Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_eu138Times,
  code_eu138Codes
};

const uint16_t code_eu139Times[] = {
  0, 0,
  14, 141,
  14, 452,
  14, 607,
  14, 6310,
};
const uint8_t code_eu139Codes[] = {
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

const struct IrCode code_eu139Code = {
  0,              // Non-pulsed code
  30,		// # of pairs
  3,		// # of bits per index
  code_eu139Times,
  code_eu139Codes
};

const uint16_t code_eu140Times[] = {
  448, 448,
  56, 168,
  56, 56,
  56, 4526,
 };

const uint8_t code_eu140Codes[] = {
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

const struct IrCode code_eu140Code = {
  freq_to_timerval(38462),
  68,   // # of pairs
  2,    // # of bits per index
  code_eu140Times,
  code_eu140Codes
};

////////////////////////////////////////////////////////////////

//const array (called "NApowerCodes") of const pointers to IrCode structs
//-otherwise stated: "declare NApowerCodes as array of const pointers to const IrCode structs"
//-to confirm this, go to http://cdecl.org/ and paste "const int* const NApowerCodes[]", and you'll 
// see it means "declare NApowerCodes as array of const pointer to const int"

// ===== Flipper-IRDB TV Power / Power Off additions =====
// Flipper-IRDB: AWA/AWA_MSDV3268O5D0.ir:Power
const uint16_t code_irdb000Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb000Codes[] = {
  0x15, 0x55, 0x6A, 0xA6, 0x96, 0xA5, 0x69, 0x5A, 0xB0,
};
const struct IrCode code_irdb000Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb000Times,
  code_irdb000Codes
};

// Flipper-IRDB: Akai/AKAI_ATE_22Y604W.ir:Power
const uint16_t code_irdb001Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb001Codes[] = {
  0x1A, 0xAA, 0xA6, 0x95, 0xA5, 0x5A, 0x9A, 0xA5, 0x70,
};
const struct IrCode code_irdb001Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb001Times,
  code_irdb001Codes
};

// Flipper-IRDB: Amazon/FireTV_Omni_Series_4K.ir:Power
const uint16_t code_irdb002Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb002Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb002Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb002Times,
  code_irdb002Codes
};

// Flipper-IRDB: AmazonBasics/AmazonBasics_TV_Remote.ir:Power
const uint16_t code_irdb003Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb003Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb003Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb003Times,
  code_irdb003Codes
};

// Flipper-IRDB: Android/Android_TV_MXQ.ir:Power
const uint16_t code_irdb004Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb004Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0xA9, 0x95, 0x56, 0x70,
};
const struct IrCode code_irdb004Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb004Times,
  code_irdb004Codes
};

// Flipper-IRDB: Apex/APEX_LE4643T.ir:Power
const uint16_t code_irdb005Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb005Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb005Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb005Times,
  code_irdb005Codes
};

// Flipper-IRDB: BBK/BBK_TV_LEM-1071.ir:Power
const uint16_t code_irdb006Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb006Codes[] = {
  0x15, 0x55, 0x6A, 0xA6, 0x96, 0xA5, 0x69, 0x5A, 0xB0,
};
const struct IrCode code_irdb006Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb006Times,
  code_irdb006Codes
};

// Flipper-IRDB: BGH/BGH_BLE2814D.ir:Power
const uint16_t code_irdb007Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb007Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA9, 0x55, 0x56, 0xAA, 0xB0,
};
const struct IrCode code_irdb007Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb007Times,
  code_irdb007Codes
};

// Flipper-IRDB: Baird/BAIRD_T15011DLEDDS_RC-6.ir:Power
const uint16_t code_irdb008Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb008Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0x9A, 0x95, 0x65, 0x70,
};
const struct IrCode code_irdb008Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb008Times,
  code_irdb008Codes
};

// Flipper-IRDB: Bauhn/Bauhn_ATV_50FHD4.ir:Power
const uint16_t code_irdb009Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb009Codes[] = {
  0x1A, 0xAA, 0xA6, 0x95, 0xA5, 0x5A, 0x9A, 0xA5, 0x70,
};
const struct IrCode code_irdb009Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb009Times,
  code_irdb009Codes
};

// Flipper-IRDB: Bauhn/Bauhn_tv.ir:Power
const uint16_t code_irdb010Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb010Codes[] = {
  0x1A, 0xAA, 0xA6, 0x95, 0xA5, 0x5A, 0x9A, 0xA5, 0x70,
};
const struct IrCode code_irdb010Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb010Times,
  code_irdb010Codes
};

// Flipper-IRDB: Blaupunkt/Blaupunkt.ir:Power
const uint16_t code_irdb011Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb011Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb011Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb011Times,
  code_irdb011Codes
};

// Flipper-IRDB: Blitzwolf/Blitzwolf_BWPCM2.ir:Power
const uint16_t code_irdb012Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb012Codes[] = {
  0x15, 0x59, 0xAA, 0x69, 0xA5, 0x9A, 0x9A, 0x65, 0x70,
};
const struct IrCode code_irdb012Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb012Times,
  code_irdb012Codes
};

// Flipper-IRDB: Bolva/Bolva_TV.ir:Power
const uint16_t code_irdb013Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb013Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb013Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb013Times,
  code_irdb013Codes
};

// Flipper-IRDB: Bose/Bose_TV.ir:On_off
const uint16_t code_irdb014Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb014Codes[] = {
  0x19, 0xA9, 0x95, 0x59, 0x96, 0x96, 0x69, 0x69, 0xB0,
};
const struct IrCode code_irdb014Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb014Times,
  code_irdb014Codes
};

// Flipper-IRDB: Boulanger/Essentiel_B_TV.ir:Power
const uint16_t code_irdb015Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb015Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb015Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb015Times,
  code_irdb015Codes
};

// Flipper-IRDB: Brandt/Brandt_B3228HD.ir:Power
const uint16_t code_irdb016Times[] = {
  929, 452, 64, 52, 63, 52, 66, 49,
  66, 162, 66, 52, 66, 160, 66, 163,
  66, 165, 64, 165, 63, 165, 63, 166,
  63, 53, 63, 4077, 930, 224, 63, 9816,
  63, 0,
};
const uint8_t code_irdb016Codes[] = {
  0x00, 0x42, 0x11, 0x0C, 0x64, 0x29, 0x8E, 0x84, 0xA5, 0x21, 0x50, 0x96,
  0xC6, 0x2D, 0x8C, 0x62, 0xD8, 0xB5, 0xB1, 0x6B, 0x5B, 0x5C, 0xF7, 0x40,
};
const struct IrCode code_irdb016Code = {
  freq_to_timerval(38000),
  38,
  5,
  code_irdb016Times,
  code_irdb016Codes
};

// Flipper-IRDB: Brandt/Brandt_B3230HD_TV.ir:Power
const uint16_t code_irdb017Times[] = {
  903, 448, 59, 167, 59, 54, 60, 53,
  59, 56, 57, 56, 56, 54, 59, 57,
  57, 166, 59, 170, 60, 167, 60, 166,
  60, 56, 56, 56, 56, 167, 60, 169,
  57, 167, 59, 169, 56, 58, 167, 0,
};
const uint8_t code_irdb017Codes[] = {
  0x00, 0x44, 0x31, 0x90, 0xA6, 0x39, 0x50, 0x14, 0xA1, 0x41, 0x5B, 0x0A,
  0x63, 0xA1, 0x85, 0x6B, 0x96, 0xF8, 0x31, 0x11, 0x94, 0xC0,
};
const struct IrCode code_irdb017Code = {
  freq_to_timerval(38000),
  34,
  5,
  code_irdb017Times,
  code_irdb017Codes
};

// Flipper-IRDB: Bush/BUSH_TV_DLED32287HDCNTDFVP.ir:Power
const uint16_t code_irdb018Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb018Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb018Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb018Times,
  code_irdb018Codes
};

// Flipper-IRDB: Bush/BUSH_TV_VL32HDLED.ir:Power
const uint16_t code_irdb019Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb019Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0xAA, 0x66, 0x95, 0x99, 0x70,
};
const struct IrCode code_irdb019Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb019Times,
  code_irdb019Codes
};

// Flipper-IRDB: Bush/Bush43QT24SB.ir:Power
const uint16_t code_irdb020Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb020Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb020Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb020Times,
  code_irdb020Codes
};

// Flipper-IRDB: CCE/CCE_RC512_Remote.ir:Power
const uint16_t code_irdb021Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb021Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x56, 0x6A, 0xA9, 0xB0,
};
const struct IrCode code_irdb021Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb021Times,
  code_irdb021Codes
};

// Flipper-IRDB: ContinentalEdison/ContinentalEdison.ir:Power
const uint16_t code_irdb022Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb022Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x5A, 0xA5, 0x65, 0x5A, 0xB0,
};
const struct IrCode code_irdb022Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb022Times,
  code_irdb022Codes
};

// Flipper-IRDB: ContinentalEdison/ContinentalEdison_CELD55SQLDV24B6.ir:Power
const uint16_t code_irdb023Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb023Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x66, 0x65, 0x59, 0x9A, 0xB0,
};
const struct IrCode code_irdb023Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb023Times,
  code_irdb023Codes
};

// Flipper-IRDB: ContinentalEdison/ContinentalEdison_CELED32JBL7.ir:Power
const uint16_t code_irdb024Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb024Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0xA9, 0x95, 0x56, 0x6A, 0xB0,
};
const struct IrCode code_irdb024Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb024Times,
  code_irdb024Codes
};

// Flipper-IRDB: ContinentalEdison/ContinentalEdison_CELED502723.ir:Power
const uint16_t code_irdb025Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb025Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb025Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb025Times,
  code_irdb025Codes
};

// Flipper-IRDB: Cranker/Cranker_generic.ir:Power
const uint16_t code_irdb026Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb026Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0x9A, 0x95, 0x65, 0x70,
};
const struct IrCode code_irdb026Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb026Times,
  code_irdb026Codes
};

// Flipper-IRDB: Crown/Crown_22111.ir:On_off
const uint16_t code_irdb027Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb027Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb027Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb027Times,
  code_irdb027Codes
};

// Flipper-IRDB: Crown/Crown_RC647340.ir:Power
const uint16_t code_irdb028Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb028Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb028Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb028Times,
  code_irdb028Codes
};

// Flipper-IRDB: DYON/DYON_Movie_Smart_32_XT.ir:Power
const uint16_t code_irdb029Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb029Codes[] = {
  0x15, 0x56, 0x55, 0x56, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb029Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb029Times,
  code_irdb029Codes
};

// Flipper-IRDB: Daewoo/Daewood_Parsed.ir:Power
const uint16_t code_irdb030Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb030Codes[] = {
  0x15, 0x55, 0xAA, 0xAA, 0x59, 0x55, 0xA6, 0xAA, 0x70,
};
const struct IrCode code_irdb030Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb030Times,
  code_irdb030Codes
};

// Flipper-IRDB: Denver/Denver_LED-3271.ir:Power
const uint16_t code_irdb031Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb031Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb031Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb031Times,
  code_irdb031Codes
};

// Flipper-IRDB: Devant/Devant_Unknown_Model.ir:Power
const uint16_t code_irdb032Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb032Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb032Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb032Times,
  code_irdb032Codes
};

// Flipper-IRDB: Digihome/Butlins.ir:Power
const uint16_t code_irdb033Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb033Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb033Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb033Times,
  code_irdb033Codes
};

// Flipper-IRDB: Dual/Dual_DL-32HD-002.ir:Power
const uint16_t code_irdb034Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb034Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb034Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb034Times,
  code_irdb034Codes
};

// Flipper-IRDB: Dynex/Dynex_DX-RC01A-12.ir:Power
const uint16_t code_irdb035Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb035Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb035Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb035Times,
  code_irdb035Codes
};

// Flipper-IRDB: Dynex/Dynex_EN21669D.ir:Power
const uint16_t code_irdb036Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb036Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb036Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb036Times,
  code_irdb036Codes
};

// Flipper-IRDB: Dynex/Dynex_RC-701-0A.ir:Power
const uint16_t code_irdb037Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb037Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb037Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb037Times,
  code_irdb037Codes
};

// Flipper-IRDB: EdenWood/EdenWood_TV.ir:Power
const uint16_t code_irdb038Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb038Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb038Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb038Times,
  code_irdb038Codes
};

// Flipper-IRDB: Element/Element_100-Series_TV.ir:Power
const uint16_t code_irdb039Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb039Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb039Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb039Times,
  code_irdb039Codes
};

// Flipper-IRDB: Element/Element_FullRemote.ir:Power
const uint16_t code_irdb040Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb040Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb040Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb040Times,
  code_irdb040Codes
};

// Flipper-IRDB: Element/Element_TV.ir:Power
const uint16_t code_irdb041Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb041Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb041Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb041Times,
  code_irdb041Codes
};

// Flipper-IRDB: Elements/Elements_TV.ir:Power
const uint16_t code_irdb042Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb042Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb042Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb042Times,
  code_irdb042Codes
};

// Flipper-IRDB: Elitelux/Elitelux_L32HD1000.ir:Power
const uint16_t code_irdb043Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb043Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x66, 0x65, 0x59, 0x9A, 0xB0,
};
const struct IrCode code_irdb043Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb043Times,
  code_irdb043Codes
};

// Flipper-IRDB: Emerson/Emerson_32FNT004.ir:Power
const uint16_t code_irdb044Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb044Codes[] = {
  0x16, 0x55, 0x95, 0x5A, 0x95, 0x59, 0x6A, 0xA6, 0xB0,
};
const struct IrCode code_irdb044Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb044Times,
  code_irdb044Codes
};

// Flipper-IRDB: Emerson/Emerson_EWC13D4.ir:Power
const uint16_t code_irdb045Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb045Codes[] = {
  0x15, 0xAA, 0x66, 0xA6, 0xAA, 0xA5, 0x55, 0x5A, 0xB0,
};
const struct IrCode code_irdb045Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb045Times,
  code_irdb045Codes
};

// Flipper-IRDB: Emerson/Emerson_remote_NH303UD.ir:Power
const uint16_t code_irdb046Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb046Codes[] = {
  0x16, 0x55, 0x95, 0x5A, 0x95, 0x59, 0x6A, 0xA6, 0xB0,
};
const struct IrCode code_irdb046Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb046Times,
  code_irdb046Codes
};

// Flipper-IRDB: Enseo/Enseo.ir:Power
const uint16_t code_irdb047Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb047Codes[] = {
  0x1A, 0x9A, 0x65, 0x65, 0x99, 0x55, 0x66, 0xAA, 0xB0,
};
const struct IrCode code_irdb047Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb047Times,
  code_irdb047Codes
};

// Flipper-IRDB: Enseo/Enseo_full.ir:Power
const uint16_t code_irdb048Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb048Codes[] = {
  0x1A, 0x9A, 0x65, 0x65, 0x99, 0x55, 0x66, 0xAA, 0xB0,
};
const struct IrCode code_irdb048Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb048Times,
  code_irdb048Codes
};

// Flipper-IRDB: Erisson/Erisson_AL52D_B.ir:Power
const uint16_t code_irdb049Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb049Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb049Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb049Times,
  code_irdb049Codes
};

// Flipper-IRDB: EssentielB/EssentielB.ir:Power
const uint16_t code_irdb050Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb050Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb050Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb050Times,
  code_irdb050Codes
};

// Flipper-IRDB: FINLUX/FINLUX.ir:Power
const uint16_t code_irdb051Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb051Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb051Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb051Times,
  code_irdb051Codes
};

// Flipper-IRDB: Fetch/Fetch_TV_Box_AUS.ir:Power
const uint16_t code_irdb052Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb052Codes[] = {
  0x16, 0x5A, 0x5A, 0x56, 0x66, 0xA6, 0x59, 0x59, 0xB0,
};
const struct IrCode code_irdb052Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb052Times,
  code_irdb052Codes
};

// Flipper-IRDB: Fetch/Fetch_TV_Box_AUS.ir:TV Power
const uint16_t code_irdb053Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb053Codes[] = {
  0x16, 0x5A, 0x5A, 0x56, 0x65, 0x55, 0x5A, 0xAA, 0xB0,
};
const struct IrCode code_irdb053Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb053Times,
  code_irdb053Codes
};

// Flipper-IRDB: Ffalcon/Ffalcon_SF1_Smart_TV.ir:Power
const uint16_t code_irdb054Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb054Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb054Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb054Times,
  code_irdb054Codes
};

// Flipper-IRDB: Funai/Funai.ir:Power
const uint16_t code_irdb055Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb055Codes[] = {
  0x16, 0x55, 0x95, 0x5A, 0x95, 0x59, 0x6A, 0xA6, 0xB0,
};
const struct IrCode code_irdb055Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb055Times,
  code_irdb055Codes
};

// Flipper-IRDB: Furrion/Furrion.ir:Power
const uint16_t code_irdb056Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb056Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb056Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb056Times,
  code_irdb056Codes
};

// Flipper-IRDB: GPX/Gpx.ir:Power
const uint16_t code_irdb057Times[] = {
  34, 170, 34, 66, 34, 69, 31, 170,
  34, 67, 31, 69, 31, 172, 31, 4446,
  33, 67, 33, 170, 33, 173, 33, 70,
  31, 173, 31, 4238, 31, 70, 30, 70,
  30, 173, 30, 4444, 31, 67, 31, 4443,
  30, 4237, 30, 0,
};
const uint8_t code_irdb057Codes[] = {
  0x00, 0x42, 0x10, 0x88, 0x60, 0x10, 0xC8, 0x22, 0x98, 0xA7, 0x31, 0x4A,
  0x52, 0x98, 0xA8, 0x4A, 0x12, 0xA1, 0xAD, 0x8D, 0x32, 0x10, 0x84, 0x21,
  0x29, 0x42, 0x9C, 0xF7, 0xC1, 0xF1, 0x32, 0x10, 0x85, 0xB2, 0x4B, 0x63,
  0x98, 0xC6, 0x3E, 0x0D, 0x32, 0x10, 0x84, 0x2C, 0x6A, 0x73, 0x1C, 0xE7,
  0xB1, 0xF3, 0x32, 0x10, 0x85, 0xB1, 0xCE, 0x63, 0x98, 0xC6, 0x39, 0x94,
  0x32, 0x10, 0x85, 0xB9, 0x90, 0x73, 0x1E, 0xE7, 0x31, 0xD3, 0x32, 0x10,
  0x85, 0xB1, 0xCE, 0x63, 0x98, 0xC6, 0x39, 0x95,
};
const struct IrCode code_irdb057Code = {
  freq_to_timerval(38000),
  128,
  5,
  code_irdb057Times,
  code_irdb057Codes
};

// Flipper-IRDB: GVA/GVA_GVA32M7D.ir:Power
const uint16_t code_irdb058Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb058Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x5A, 0xA5, 0x65, 0x5A, 0xB0,
};
const struct IrCode code_irdb058Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb058Times,
  code_irdb058Codes
};

// Flipper-IRDB: Gigabyte/AORUS_Monitor.ir:Power
const uint16_t code_irdb059Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb059Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x99, 0xA5, 0x66, 0x5A, 0xB0,
};
const struct IrCode code_irdb059Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb059Times,
  code_irdb059Codes
};

// Flipper-IRDB: Gogen/Gogen_TVH24P266T.ir:Power
const uint16_t code_irdb060Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb060Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb060Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb060Times,
  code_irdb060Codes
};

// Flipper-IRDB: Grandin/Grandin.ir:Power
const uint16_t code_irdb061Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb061Codes[] = {
  0x15, 0x55, 0xAA, 0xAA, 0x59, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb061Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb061Times,
  code_irdb061Codes
};

// Flipper-IRDB: Grandin/Grandin_Unknown_Model.ir:Power
const uint16_t code_irdb062Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb062Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb062Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb062Times,
  code_irdb062Codes
};

// Flipper-IRDB: Grundig/GRUNDIG.ir:Power
const uint16_t code_irdb063Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb063Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb063Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb063Times,
  code_irdb063Codes
};

// Flipper-IRDB: Grundig/GRUNDIG_UNKNOWN.ir:Power
const uint16_t code_irdb064Times[] = {
  93, 75, 176, 76, 92, 76, 92, 78,
  90, 78, 90, 162, 174, 79, 90, 8552,
  173, 78, 89, 78, 90, 8555, 173, 76,
  173, 79, 90, 0,
};
const uint8_t code_irdb064Codes[] = {
  0x01, 0x23, 0x44, 0x44, 0x54, 0x67, 0x38, 0x49, 0x44, 0x44, 0x54, 0x6A,
  0x9B, 0x34, 0x44, 0x49, 0x54, 0xCD,
};
const struct IrCode code_irdb064Code = {
  freq_to_timerval(38000),
  36,
  4,
  code_irdb064Times,
  code_irdb064Codes
};

// Flipper-IRDB: Grundig/Grundig_2.ir:Power
const uint16_t code_irdb065Times[] = {
  97, 72, 182, 72, 94, 75, 92, 77,
  92, 80, 89, 80, 89, 164, 177, 77,
  92, 8614, 92, 78, 91, 78, 91, 80,
  89, 81, 89, 163, 174, 80, 89, 8614,
  177, 78, 91, 162, 176, 78, 91, 8614,
  91, 163, 176, 80, 91, 165, 89, 8615,
  89, 165, 89, 8613, 94, 77, 92, 162,
  91, 0,
};
const uint8_t code_irdb065Codes[] = {
  0x00, 0x02, 0x21, 0x90, 0xA5, 0x31, 0x4E, 0x82, 0x94, 0xE9, 0x52, 0xD8,
  0x56, 0xAD, 0xCF, 0x28, 0xE0, 0xA5, 0x29, 0x4A, 0x8A, 0xA5, 0x32, 0x8E,
  0x0A, 0x52, 0x94, 0xAA, 0x2A, 0xAF, 0x28, 0xE0, 0xA5, 0x29, 0x4A, 0xB1,
  0x5D, 0x72, 0xA6, 0xA5, 0x29, 0x58, 0x5C, 0x15, 0xD9, 0xD0, 0xCE, 0xA5,
  0x29, 0x49, 0xDA, 0x8F, 0xC0,
};
const struct IrCode code_irdb065Code = {
  freq_to_timerval(38000),
  84,
  5,
  code_irdb065Times,
  code_irdb065Codes
};

// Flipper-IRDB: Grundig/Grundig_AndroidTV.ir:Power
const uint16_t code_irdb066Times[] = {
  87, 80, 172, 81, 88, 80, 88, 83,
  87, 77, 90, 80, 87, 161, 172, 82,
  87, 8639, 84, 83, 174, 79, 84, 164,
  169, 84, 84, 0,
};
const uint8_t code_irdb066Codes[] = {
  0x00, 0x12, 0x34, 0x50, 0x60, 0x78, 0x99, 0xA9, 0x99, 0x99, 0xB9, 0xCD,
};
const struct IrCode code_irdb066Code = {
  freq_to_timerval(38000),
  24,
  4,
  code_irdb066Times,
  code_irdb066Codes
};

// Flipper-IRDB: Grundig/Grundig_TP750C.ir:Power
const uint16_t code_irdb067Times[] = {
  57, 260, 57, 48, 57, 49, 57, 1982,
  57, 101, 110, 101, 57, 11637, 62, 254,
  62, 96, 115, 96, 62, 43, 62, 44,
  62, 11633, 62, 0,
};
const uint8_t code_irdb067Codes[] = {
  0x01, 0x11, 0x12, 0x11, 0x11, 0x30, 0x45, 0x21, 0x12, 0x11, 0x67, 0x89,
  0xAA, 0xAB, 0xBB, 0xC7, 0xAA, 0xAA, 0xAB, 0xAA, 0xAD,
};
const struct IrCode code_irdb067Code = {
  freq_to_timerval(38000),
  42,
  4,
  code_irdb067Times,
  code_irdb067Codes
};

// Flipper-IRDB: Grundig/Grundig_TP800.ir:Power
const uint16_t code_irdb068Times[] = {
  60, 256, 60, 45, 61, 45, 60, 1975,
  60, 98, 113, 97, 60, 11625, 60, 0,
};
const uint8_t code_irdb068Codes[] = {
  0x04, 0x92, 0x4A, 0x45, 0x89, 0x49, 0x24, 0xAC, 0x09, 0x24, 0x92, 0x4F,
};
const struct IrCode code_irdb068Code = {
  freq_to_timerval(38000),
  32,
  3,
  code_irdb068Times,
  code_irdb068Codes
};

// Flipper-IRDB: GuestTek/GuestTek_Marriot_Hotel.ir:Power
const uint16_t code_irdb069Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb069Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb069Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb069Times,
  code_irdb069Codes
};

// Flipper-IRDB: Haier/Haier_L42C1180.ir:Power
const uint16_t code_irdb070Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb070Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb070Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb070Times,
  code_irdb070Codes
};

// Flipper-IRDB: Hisense/Hisense_32A4HAU.ir:Power
const uint16_t code_irdb071Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb071Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb071Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb071Times,
  code_irdb071Codes
};

// Flipper-IRDB: Hisense/Hisense_55E7KQ.ir:Power
const uint16_t code_irdb072Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb072Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb072Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb072Times,
  code_irdb072Codes
};

// Flipper-IRDB: Hisense/Hisense_55K3201GUWUS.ir:Power
const uint16_t code_irdb073Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb073Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb073Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb073Times,
  code_irdb073Codes
};

// Flipper-IRDB: Hisense/Hisense_55U6K.ir:Power
const uint16_t code_irdb074Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb074Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb074Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb074Times,
  code_irdb074Codes
};

// Flipper-IRDB: Hisense/Hisense_58R5.ir:Power
const uint16_t code_irdb075Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb075Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb075Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb075Times,
  code_irdb075Codes
};

// Flipper-IRDB: Hisense/Hisense_65K3300UW.ir:Power
const uint16_t code_irdb076Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb076Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb076Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb076Times,
  code_irdb076Codes
};

// Flipper-IRDB: Hisense/Hisense_EN3Y39H.ir:Power
const uint16_t code_irdb077Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb077Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb077Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb077Times,
  code_irdb077Codes
};

// Flipper-IRDB: Hisense/Hisense_EN_33926A.ir:Power
const uint16_t code_irdb078Times[] = {
  902, 438, 66, 45, 65, 45, 65, 157,
  65, 46, 65, 48, 63, 48, 62, 48,
  62, 160, 62, 3991, 891, 214, 62, 9544,
  893, 214, 62, 9543, 62, 0,
};
const uint8_t code_irdb078Codes[] = {
  0x01, 0x23, 0x22, 0x22, 0x43, 0x34, 0x33, 0x33, 0x35, 0x67, 0x87, 0x77,
  0x78, 0x88, 0x78, 0x88, 0x89, 0xAB, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCB,
  0xCB, 0xCB, 0xCE,
};
const struct IrCode code_irdb078Code = {
  freq_to_timerval(38000),
  54,
  4,
  code_irdb078Times,
  code_irdb078Codes
};

// Flipper-IRDB: Hisense/Hisense_ER22601A.ir:Power
const uint16_t code_irdb079Times[] = {
  98, 72, 178, 80, 92, 80, 90, 80,
  92, 161, 92, 78, 177, 81, 91, 8610,
  177, 80, 92, 79, 91, 79, 91, 81,
  89, 162, 176, 83, 89, 8608, 92, 162,
  176, 81, 91, 0,
};
const uint8_t code_irdb079Codes[] = {
  0x00, 0x44, 0x31, 0x8C, 0x63, 0x21, 0x4C, 0x72, 0xA1, 0x2A, 0x52, 0x94,
  0xB6, 0x29, 0xAE, 0x2A, 0x12, 0xA5, 0x29, 0x49, 0x7A, 0x61, 0x10,
};
const struct IrCode code_irdb079Code = {
  freq_to_timerval(38000),
  36,
  5,
  code_irdb079Times,
  code_irdb079Codes
};

// Flipper-IRDB: Hisense/Hisense_K321UW.ir:Power
const uint16_t code_irdb080Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb080Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb080Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb080Times,
  code_irdb080Codes
};

// Flipper-IRDB: Hisense/Hisense_RokuTV.ir:Power
const uint16_t code_irdb081Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb081Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb081Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb081Times,
  code_irdb081Codes
};

// Flipper-IRDB: Hisense/Hisense_TV_ZDB2190126.ir:Power
const uint16_t code_irdb082Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb082Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0xA6, 0x95, 0x59, 0x6A, 0xB0,
};
const struct IrCode code_irdb082Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb082Times,
  code_irdb082Codes
};

// Flipper-IRDB: Hisense/Hisense_U7G.ir:Power
const uint16_t code_irdb083Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb083Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb083Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb083Times,
  code_irdb083Codes
};

// Flipper-IRDB: Hitachi/Hitachi_43140.ir:Power
const uint16_t code_irdb084Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb084Codes[] = {
  0x10, 0x24, 0x93,
};
const struct IrCode code_irdb084Code = {
  freq_to_timerval(38000),
  12,
  2,
  code_irdb084Times,
  code_irdb084Codes
};

// Flipper-IRDB: Hitachi/Hitachi_49141.ir:Power
const uint16_t code_irdb085Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb085Codes[] = {
  0x10, 0x24, 0x93,
};
const struct IrCode code_irdb085Code = {
  freq_to_timerval(38000),
  12,
  2,
  code_irdb085Times,
  code_irdb085Codes
};

// Flipper-IRDB: Hitachi/Hitachi_CLE-1031.ir:Power
const uint16_t code_irdb086Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb086Codes[] = {
  0x15, 0x66, 0x6A, 0x99, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb086Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb086Times,
  code_irdb086Codes
};

// Flipper-IRDB: Hitachi/Hitachi_LE46H508.ir:Power
const uint16_t code_irdb087Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb087Codes[] = {
  0x15, 0x66, 0x6A, 0x99, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb087Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb087Times,
  code_irdb087Codes
};

// Flipper-IRDB: Hitachi/Hitachi_RC43140.ir:Power
const uint16_t code_irdb088Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb088Codes[] = {
  0x10, 0x24, 0x93,
};
const struct IrCode code_irdb088Code = {
  freq_to_timerval(38000),
  12,
  2,
  code_irdb088Times,
  code_irdb088Codes
};

// Flipper-IRDB: Hitachi/Hitachi_SmartTV_43140.ir:Power
const uint16_t code_irdb089Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb089Codes[] = {
  0x10, 0x24, 0x93,
};
const struct IrCode code_irdb089Code = {
  freq_to_timerval(38000),
  12,
  2,
  code_irdb089Times,
  code_irdb089Codes
};

// Flipper-IRDB: Hotels/Hilton_Connected_Room_Remote.ir:Power
const uint16_t code_irdb090Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb090Codes[] = {
  0x1A, 0x65, 0x9A, 0x65, 0x9A, 0xAA, 0xA5, 0x55, 0x70,
};
const struct IrCode code_irdb090Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb090Times,
  code_irdb090Codes
};

// Flipper-IRDB: Hotels/Marriott-BONVoY_Remote.ir:Power
const uint16_t code_irdb091Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb091Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb091Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb091Times,
  code_irdb091Codes
};

// Flipper-IRDB: Insignia/Insignia.ir:Power
const uint16_t code_irdb092Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb092Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb092Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb092Times,
  code_irdb092Codes
};

// Flipper-IRDB: Insignia/Insignia_NS_40D510NA17.ir:Power
const uint16_t code_irdb093Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb093Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb093Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb093Times,
  code_irdb093Codes
};

// Flipper-IRDB: Insignia/Insignia_NS_RC9DNA-14.ir:Power
const uint16_t code_irdb094Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb094Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb094Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb094Times,
  code_irdb094Codes
};

// Flipper-IRDB: Insignia/Insignia_NS_RCFNA_21.ir:Power
const uint16_t code_irdb095Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb095Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb095Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb095Times,
  code_irdb095Codes
};

// Flipper-IRDB: JVC/JVC_4KTV.ir:Power
const uint16_t code_irdb096Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb096Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb096Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb096Times,
  code_irdb096Codes
};

// Flipper-IRDB: JVC/JVC_LT-49HW97U.ir:Power
const uint16_t code_irdb097Times[] = {
  450, 450, 56, 56, 56, 169, 56, 4500,
};
const uint8_t code_irdb097Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0,
};
const struct IrCode code_irdb097Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb097Times,
  code_irdb097Codes
};

// Flipper-IRDB: JVC/JVC_RMT-JR01.ir:Power
const uint16_t code_irdb098Times[] = {
  851, 424, 53, 159, 53, 53, 53, 52,
  53, 2253, 56, 156, 56, 50, 55, 50,
  53, 0,
};
const uint8_t code_irdb098Codes[] = {
  0x01, 0x12, 0x22, 0x22, 0x21, 0x11, 0x21, 0x22, 0x34, 0x11, 0x22, 0x22,
  0x22, 0x11, 0x56, 0x57, 0x23, 0x80,
};
const struct IrCode code_irdb098Code = {
  freq_to_timerval(38000),
  35,
  4,
  code_irdb098Times,
  code_irdb098Codes
};

// Flipper-IRDB: Kendo/Kendo_CP20M36VT.ir:Power
const uint16_t code_irdb099Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb099Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb099Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb099Times,
  code_irdb099Codes
};

// Flipper-IRDB: Kogan/Kogan_KALED50XU9210STB.ir:Power
const uint16_t code_irdb100Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb100Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb100Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb100Times,
  code_irdb100Codes
};

// Flipper-IRDB: Kraft/KRAFT_KTV.ir:Power
const uint16_t code_irdb101Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb101Codes[] = {
  0x1A, 0xAA, 0xA5, 0x56, 0xA6, 0x6A, 0x99, 0x95, 0x70,
};
const struct IrCode code_irdb101Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb101Times,
  code_irdb101Codes
};

// Flipper-IRDB: LG/LG.ir:Power
const uint16_t code_irdb102Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb102Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb102Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb102Times,
  code_irdb102Codes
};

// Flipper-IRDB: LG/LG_24LJ4840.ir:Power
const uint16_t code_irdb103Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb103Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb103Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb103Times,
  code_irdb103Codes
};

// Flipper-IRDB: LG/LG_27GR95QE_TV.ir:Power
const uint16_t code_irdb104Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb104Codes[] = {
  0x16, 0x55, 0x56, 0x6A, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb104Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb104Times,
  code_irdb104Codes
};

// Flipper-IRDB: LG/LG_32LF650V.ir:Power
const uint16_t code_irdb105Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb105Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb105Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb105Times,
  code_irdb105Codes
};

// Flipper-IRDB: LG/LG_32LN5406.ir:Power
const uint16_t code_irdb106Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb106Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb106Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb106Times,
  code_irdb106Codes
};

// Flipper-IRDB: LG/LG_32LW4500.ir:Power
const uint16_t code_irdb107Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb107Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb107Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb107Times,
  code_irdb107Codes
};

// Flipper-IRDB: LG/LG_37LN5403.ir:Power
const uint16_t code_irdb108Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb108Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb108Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb108Times,
  code_irdb108Codes
};

// Flipper-IRDB: LG/LG_43NANO779PA.ir:Power
const uint16_t code_irdb109Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb109Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb109Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb109Times,
  code_irdb109Codes
};

// Flipper-IRDB: LG/LG_48LV340H.ir:Power
const uint16_t code_irdb110Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb110Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb110Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb110Times,
  code_irdb110Codes
};

// Flipper-IRDB: LG/LG_4K_TV.ir:Power
const uint16_t code_irdb111Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb111Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb111Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb111Times,
  code_irdb111Codes
};

// Flipper-IRDB: LG/LG_55LB870V_ZA.ir:Power
const uint16_t code_irdb112Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb112Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb112Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb112Times,
  code_irdb112Codes
};

// Flipper-IRDB: LG/LG_55UN7300AUD.ir:Power
const uint16_t code_irdb113Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb113Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb113Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb113Times,
  code_irdb113Codes
};

// Flipper-IRDB: LG/LG_75UJ6470.ir:Power
const uint16_t code_irdb114Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb114Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb114Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb114Times,
  code_irdb114Codes
};

// Flipper-IRDB: LG/LG_AKB33871403.ir:Power
const uint16_t code_irdb115Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb115Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb115Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb115Times,
  code_irdb115Codes
};

// Flipper-IRDB: LG/LG_AKB69680401.ir:Power
const uint16_t code_irdb116Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb116Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb116Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb116Times,
  code_irdb116Codes
};

// Flipper-IRDB: LG/LG_AKB72913118.ir:Power
const uint16_t code_irdb117Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb117Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb117Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb117Times,
  code_irdb117Codes
};

// Flipper-IRDB: LG/LG_AKB72914048.ir:Power
const uint16_t code_irdb118Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb118Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb118Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb118Times,
  code_irdb118Codes
};

// Flipper-IRDB: LG/LG_AKB72915206.ir:Power
const uint16_t code_irdb119Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb119Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb119Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb119Times,
  code_irdb119Codes
};

// Flipper-IRDB: LG/LG_AKB73275675.ir:Power
const uint16_t code_irdb120Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb120Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb120Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb120Times,
  code_irdb120Codes
};

// Flipper-IRDB: LG/LG_AKB74915305.ir:POWER
const uint16_t code_irdb121Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb121Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb121Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb121Times,
  code_irdb121Codes
};

// Flipper-IRDB: LG/LG_AKB75095307.ir:Power
const uint16_t code_irdb122Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb122Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb122Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb122Times,
  code_irdb122Codes
};

// Flipper-IRDB: LG/LG_AKB75375608.ir:Power
const uint16_t code_irdb123Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb123Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb123Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb123Times,
  code_irdb123Codes
};

// Flipper-IRDB: LG/LG_AKB75675311.ir:Power
const uint16_t code_irdb124Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb124Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb124Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb124Times,
  code_irdb124Codes
};

// Flipper-IRDB: LG/LG_AKB75855501.ir:Power
const uint16_t code_irdb125Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb125Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb125Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb125Times,
  code_irdb125Codes
};

// Flipper-IRDB: LG/LG_AKB76043102.ir:Power
const uint16_t code_irdb126Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb126Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb126Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb126Times,
  code_irdb126Codes
};

// Flipper-IRDB: LG/LG_C1.ir:Power
const uint16_t code_irdb127Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb127Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb127Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb127Times,
  code_irdb127Codes
};

// Flipper-IRDB: LG/LG_C9_magic_remote.ir:Power
const uint16_t code_irdb128Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb128Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb128Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb128Times,
  code_irdb128Codes
};

// Flipper-IRDB: LG/LG_Hotel_TV_Home2.ir:Power
const uint16_t code_irdb129Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb129Codes[] = {
  0x1A, 0x65, 0x9A, 0x65, 0x9A, 0xAA, 0xA5, 0x55, 0x70,
};
const struct IrCode code_irdb129Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb129Times,
  code_irdb129Codes
};

// Flipper-IRDB: LG/LG_Hotel_tv.ir:Power
const uint16_t code_irdb130Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb130Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb130Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb130Times,
  code_irdb130Codes
};

// Flipper-IRDB: LG/LG_MKJ33981404.ir:Power
const uint16_t code_irdb131Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb131Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb131Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb131Times,
  code_irdb131Codes
};

// Flipper-IRDB: LG/LG_MKJ39170828_Service.ir:Power
const uint16_t code_irdb132Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb132Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb132Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb132Times,
  code_irdb132Codes
};

// Flipper-IRDB: LG/LG_MR21GC_Magic_Remote.ir:Power
const uint16_t code_irdb133Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb133Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb133Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb133Times,
  code_irdb133Codes
};

// Flipper-IRDB: LG/LG_OLED48C37LA (LG_OLED C3 models).ir:Power
const uint16_t code_irdb134Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb134Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb134Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb134Times,
  code_irdb134Codes
};

// Flipper-IRDB: LG/LG_OLED65C8PUA.ir:Power
const uint16_t code_irdb135Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb135Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb135Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb135Times,
  code_irdb135Codes
};

// Flipper-IRDB: LG/LG_TV_42LF5800.ir:Power
const uint16_t code_irdb136Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb136Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb136Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb136Times,
  code_irdb136Codes
};

// Flipper-IRDB: LG/LG_TV_AKB75375604.ir:Power
const uint16_t code_irdb137Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb137Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb137Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb137Times,
  code_irdb137Codes
};

// Flipper-IRDB: LodgeNet/lodgenet_lrc3220.ir:Power
const uint16_t code_irdb138Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb138Codes[] = {
  0x19, 0xAA, 0x69, 0x55, 0xAA, 0xAA, 0x55, 0x55, 0xB0,
};
const struct IrCode code_irdb138Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb138Times,
  code_irdb138Codes
};

// Flipper-IRDB: Magnavox/MAGNAVOX_20MT1331_17.ir:Power
const uint16_t code_irdb139Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb139Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb139Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb139Times,
  code_irdb139Codes
};

// Flipper-IRDB: Magnavox/MAGNAVOX_CD130MW8.ir:Power
const uint16_t code_irdb140Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb140Codes[] = {
  0x15, 0xAA, 0x66, 0xA6, 0xAA, 0xA5, 0x55, 0x5A, 0xB0,
};
const struct IrCode code_irdb140Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb140Times,
  code_irdb140Codes
};

// Flipper-IRDB: Magnavox/MAGNAVOX_RD0946T102.ir:Power
const uint16_t code_irdb141Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb141Codes[] = {
  0x16, 0xAA, 0x66, 0x55, 0xAA, 0x6A, 0xAA, 0xAA, 0xB0,
};
const struct IrCode code_irdb141Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb141Times,
  code_irdb141Codes
};

// Flipper-IRDB: Manta/Manta_TV.ir:Power
const uint16_t code_irdb142Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb142Codes[] = {
  0x15, 0x55, 0x6A, 0xA9, 0x95, 0x55, 0x6A, 0xAA, 0xB0,
};
const struct IrCode code_irdb142Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb142Times,
  code_irdb142Codes
};

// Flipper-IRDB: Manta/Manta_TV_2.ir:Power
const uint16_t code_irdb143Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb143Codes[] = {
  0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0,
};
const struct IrCode code_irdb143Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb143Times,
  code_irdb143Codes
};

// Flipper-IRDB: Matsui/Matsui_1435b.ir:Standby
const uint16_t code_irdb144Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb144Codes[] = {
  0x15, 0x9A, 0xAA, 0x65, 0x69, 0x9A, 0x96, 0x65, 0x70,
};
const struct IrCode code_irdb144Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb144Times,
  code_irdb144Codes
};

// Flipper-IRDB: Medion/Medion.ir:Power
const uint16_t code_irdb145Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb145Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb145Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb145Times,
  code_irdb145Codes
};

// Flipper-IRDB: Medion/Medion_MD21302.ir:Power
const uint16_t code_irdb146Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb146Codes[] = {
  0x1A, 0x5A, 0xA5, 0xA5, 0x6A, 0x5A, 0x95, 0xA5, 0x70,
};
const struct IrCode code_irdb146Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb146Times,
  code_irdb146Codes
};

// Flipper-IRDB: Medion/Medion_MD31802.ir:Power
const uint16_t code_irdb147Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb147Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb147Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb147Times,
  code_irdb147Codes
};

// Flipper-IRDB: Mivar/Mivar_LCD_TV.ir:Power
const uint16_t code_irdb148Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb148Codes[] = {
  0x15, 0x55, 0x69, 0xAA, 0x99, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb148Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb148Times,
  code_irdb148Codes
};

// Flipper-IRDB: NEC/NEC.ir:Power
const uint16_t code_irdb149Times[] = {
  807, 400, 52, 50, 50, 50, 49, 151,
  49, 150, 50, 150, 50, 399, 50, 1881,
  49, 51, 49, 399, 50, 0,
};
const uint8_t code_irdb149Codes[] = {
  0x01, 0x23, 0x24, 0x55, 0x36, 0x15, 0x22, 0x32, 0x52, 0x70, 0x12, 0x32,
  0x53, 0x53, 0x61, 0x52, 0x23, 0x25, 0x87, 0x01, 0x83, 0x23, 0x53, 0x59,
  0x13, 0x22, 0x32, 0x32, 0x70, 0x18, 0x32, 0x35, 0x35, 0x91, 0x32, 0x23,
  0x23, 0x27, 0x01, 0x23, 0x24, 0x55, 0x36, 0x15, 0x22, 0x32, 0x58, 0xA0,
};
const struct IrCode code_irdb149Code = {
  freq_to_timerval(38000),
  95,
  4,
  code_irdb149Times,
  code_irdb149Codes
};

// Flipper-IRDB: NEC/NEC.ir:Standby
const uint16_t code_irdb150Times[] = {
  806, 400, 52, 51, 50, 50, 50, 150,
  49, 151, 50, 148, 52, 148, 52, 398,
  53, 50, 49, 51, 50, 1780, 49, 150,
  49, 148, 52, 399, 52, 50, 50, 1781,
  807, 400, 50, 51, 49, 399, 49, 1781,
  806, 401, 50, 399, 50, 0,
};
const uint8_t code_irdb150Codes[] = {
  0x00, 0x44, 0x31, 0x0C, 0x85, 0x31, 0xD0, 0x32, 0x14, 0x22, 0x1A, 0x54,
  0x00, 0x89, 0x62, 0x19, 0x06, 0xC6, 0xB8, 0x64, 0x1A, 0x44, 0x31, 0x3E,
  0x0E, 0x48, 0xE2, 0x41, 0x90, 0x72, 0x09, 0x06, 0x41, 0x24, 0x71, 0x9D,
  0x1C, 0x22, 0x08, 0x64, 0x19, 0x2A, 0xE1, 0x8C, 0x62, 0x11, 0x04, 0xF8,
  0x38, 0x44, 0x12, 0xC6, 0x53, 0x35, 0xC3, 0x21, 0x42, 0x25, 0x89, 0xF0,
  0x70, 0x88, 0x25, 0x8C, 0xA6, 0x6B, 0x86, 0x32, 0x84, 0x44, 0x15, 0x80,
};
const struct IrCode code_irdb150Code = {
  freq_to_timerval(38000),
  114,
  5,
  code_irdb150Times,
  code_irdb150Codes
};

// Flipper-IRDB: NEC/NEC_E425.ir:Power
const uint16_t code_irdb151Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb151Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0xA5, 0x55, 0x5A, 0xAA, 0xB0,
};
const struct IrCode code_irdb151Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb151Times,
  code_irdb151Codes
};

// Flipper-IRDB: Neo/Neo_TV.ir:On_off
const uint16_t code_irdb152Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb152Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x66, 0x65, 0x59, 0x9A, 0xB0,
};
const struct IrCode code_irdb152Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb152Times,
  code_irdb152Codes
};

// Flipper-IRDB: Nevir/NEVIR_NVR-7409-39HD-N.ir:Standby
const uint16_t code_irdb153Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb153Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0x9A, 0x95, 0x65, 0x70,
};
const struct IrCode code_irdb153Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb153Times,
  code_irdb153Codes
};

// Flipper-IRDB: Oky/Oky_TV.ir:Power
const uint16_t code_irdb154Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb154Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb154Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb154Times,
  code_irdb154Codes
};

// Flipper-IRDB: Onn/Onn_Roku_TV.ir:Power
const uint16_t code_irdb155Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb155Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb155Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb155Times,
  code_irdb155Codes
};

// Flipper-IRDB: PDi/PD108-420.ir:Power
const uint16_t code_irdb156Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb156Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb156Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb156Times,
  code_irdb156Codes
};

// Flipper-IRDB: Panasonic/N2QAYB001109.ir:Power
const uint16_t code_irdb157Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb157Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb157Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb157Times,
  code_irdb157Codes
};

// Flipper-IRDB: Panasonic/N2QAYB001109_full.ir:Power
const uint16_t code_irdb158Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb158Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb158Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb158Times,
  code_irdb158Codes
};

// Flipper-IRDB: Panasonic/Panasonic_58JX800_Series.ir:Power
const uint16_t code_irdb159Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb159Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb159Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb159Times,
  code_irdb159Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYA_152.ir:Power
const uint16_t code_irdb160Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb160Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb160Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb160Times,
  code_irdb160Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000352.ir:Power
const uint16_t code_irdb161Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb161Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb161Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb161Times,
  code_irdb161Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000705.ir:Power
const uint16_t code_irdb162Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb162Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb162Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb162Times,
  code_irdb162Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000715.ir:Power
const uint16_t code_irdb163Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb163Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb163Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb163Times,
  code_irdb163Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000752.ir:Power
const uint16_t code_irdb164Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb164Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb164Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb164Times,
  code_irdb164Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000752_Full.ir:Power
const uint16_t code_irdb165Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb165Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb165Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb165Times,
  code_irdb165Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000752_Full.ir:Power2
const uint16_t code_irdb166Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb166Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x69, 0xA9, 0x55, 0x55, 0x66, 0xA9,
  0xB0,
};
const struct IrCode code_irdb166Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb166Times,
  code_irdb166Codes
};

// Flipper-IRDB: Panasonic/Panasonic_N2QAYB000926.ir:Power
const uint16_t code_irdb167Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb167Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb167Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb167Times,
  code_irdb167Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TC-P50S2.ir:Power
const uint16_t code_irdb168Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb168Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb168Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb168Times,
  code_irdb168Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TC-P50U1.ir:Power
const uint16_t code_irdb169Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb169Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb169Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb169Times,
  code_irdb169Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TH-43HS550K.ir:Power
const uint16_t code_irdb170Times[] = {
  450, 450, 56, 56, 56, 169, 56, 4500,
};
const uint8_t code_irdb170Codes[] = {
  0x1A, 0xA9, 0x65, 0x56, 0x96, 0x95, 0x69, 0x6A, 0xB0,
};
const struct IrCode code_irdb170Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb170Times,
  code_irdb170Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX-40HX800B.ir:Power
const uint16_t code_irdb171Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb171Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb171Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb171Times,
  code_irdb171Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX-P50C10E.ir:Power
const uint16_t code_irdb172Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb172Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb172Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb172Times,
  code_irdb172Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX29AS10C.ir:Power
const uint16_t code_irdb173Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb173Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb173Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb173Times,
  code_irdb173Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX_42AS650E.ir:Power
const uint16_t code_irdb174Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb174Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb174Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb174Times,
  code_irdb174Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX_43GXW584.ir:Power
const uint16_t code_irdb175Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb175Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb175Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb175Times,
  code_irdb175Codes
};

// Flipper-IRDB: Panasonic/Panasonic_TX_L42E5E.ir:Power
const uint16_t code_irdb176Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb176Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb176Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb176Times,
  code_irdb176Codes
};

// Flipper-IRDB: Panasonic/Panasonic_Unknown_Full.ir:Power
const uint16_t code_irdb177Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb177Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb177Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb177Times,
  code_irdb177Codes
};

// Flipper-IRDB: Panasonic/Panasonic_Viera.ir:On_off
const uint16_t code_irdb178Times[] = {
  346, 173, 43, 43, 43, 130, 43, 4000,
};
const uint8_t code_irdb178Codes[] = {
  0x19, 0x55, 0x55, 0x59, 0x56, 0x55, 0x55, 0xA9, 0x55, 0x55, 0x66, 0x95,
  0xB0,
};
const struct IrCode code_irdb178Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_irdb178Times,
  code_irdb178Codes
};

// Flipper-IRDB: Philips/PhilipsTV.ir:On_off
const uint16_t code_irdb179Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb179Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb179Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb179Times,
  code_irdb179Codes
};

// Flipper-IRDB: Philips/Philips_14GX8510.ir:Power
const uint16_t code_irdb180Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb180Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb180Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb180Times,
  code_irdb180Codes
};

// Flipper-IRDB: Philips/Philips_14PT136B00.ir:Power
const uint16_t code_irdb181Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb181Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb181Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb181Times,
  code_irdb181Codes
};

// Flipper-IRDB: Philips/Philips_22IT_TV_Monitor.ir:Power
const uint16_t code_irdb182Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb182Codes[] = {
  0x15, 0x55, 0x66, 0xA9, 0xA5, 0x55, 0x5A, 0xAA, 0xB0,
};
const struct IrCode code_irdb182Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb182Times,
  code_irdb182Codes
};

// Flipper-IRDB: Philips/Philips_32PFL4208T.ir:Power
const uint16_t code_irdb183Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb183Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb183Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb183Times,
  code_irdb183Codes
};

// Flipper-IRDB: Philips/Philips_32PFL7403S.ir:Power
const uint16_t code_irdb184Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb184Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb184Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb184Times,
  code_irdb184Codes
};

// Flipper-IRDB: Philips/Philips_32PFL7962D12.ir:Power
const uint16_t code_irdb185Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb185Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb185Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb185Times,
  code_irdb185Codes
};

// Flipper-IRDB: Philips/Philips_40HFL3010T12.ir:Power
const uint16_t code_irdb186Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb186Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb186Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb186Times,
  code_irdb186Codes
};

// Flipper-IRDB: Philips/Philips_40PFL6533_F7D.ir:Power
const uint16_t code_irdb187Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb187Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb187Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb187Times,
  code_irdb187Codes
};

// Flipper-IRDB: Philips/Philips_436M6VBPAB.ir:Power
const uint16_t code_irdb188Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb188Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb188Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb188Times,
  code_irdb188Codes
};

// Flipper-IRDB: Philips/Philips_50PUT6103_79.ir:Power
const uint16_t code_irdb189Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb189Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb189Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb189Times,
  code_irdb189Codes
};

// Flipper-IRDB: Philips/Philips_5766_Series.ir:Power
const uint16_t code_irdb190Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb190Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb190Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb190Times,
  code_irdb190Codes
};

// Flipper-IRDB: Philips/Philips_TV_14PV172_08.ir:Power
const uint16_t code_irdb191Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb191Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb191Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb191Times,
  code_irdb191Codes
};

// Flipper-IRDB: Philips/Philips_TV_48OLED806.ir:On_off
const uint16_t code_irdb192Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb192Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb192Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb192Times,
  code_irdb192Codes
};

// Flipper-IRDB: Philips/Philips_TV_7000LED_42PFL7695H.ir:Power
const uint16_t code_irdb193Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb193Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb193Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb193Times,
  code_irdb193Codes
};

// Flipper-IRDB: Philips/Philips_TV_7956_Series.ir:Power
const uint16_t code_irdb194Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb194Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb194Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb194Times,
  code_irdb194Codes
};

// Flipper-IRDB: Philips/Philips_TV_Universal.ir:Power
const uint16_t code_irdb195Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb195Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb195Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb195Times,
  code_irdb195Codes
};

// Flipper-IRDB: Philips/Philips_XXPFL9955H.ir:Power
const uint16_t code_irdb196Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb196Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb196Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb196Times,
  code_irdb196Codes
};

// Flipper-IRDB: Philips/Philips_generic.ir:Power
const uint16_t code_irdb197Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb197Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb197Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb197Times,
  code_irdb197Codes
};

// Flipper-IRDB: Philips/Philips_sf256.ir:Power
const uint16_t code_irdb198Times[] = {
  267, 89, 44, 89, 44, 44, 89, 0,
  89, 44, 44, 4544,
};
const uint8_t code_irdb198Codes[] = {
  0x05, 0x22, 0xD2, 0x49, 0x24, 0x92, 0x45, 0x4A,
};
const struct IrCode code_irdb198Code = {
  freq_to_timerval(38000),
  21,
  3,
  code_irdb198Times,
  code_irdb198Codes
};

// Flipper-IRDB: Pioneer/Pioneer_Kuro_PDP_LX508A.ir:Power
const uint16_t code_irdb199Times[] = {
  840, 420, 55, 55, 55, 160, 55, 4500,
};
const uint8_t code_irdb199Codes[] = {
  0x19, 0x99, 0x95, 0x55, 0x66, 0x66, 0x6A, 0xAA, 0x96, 0xA5, 0x55, 0x55,
  0x69, 0x5A, 0xAA, 0xAA, 0xB0,
};
const struct IrCode code_irdb199Code = {
  freq_to_timerval(38000),
  66,
  2,
  code_irdb199Times,
  code_irdb199Codes
};

// Flipper-IRDB: Platinum/Platinum_PT2020LED.ir:Power
const uint16_t code_irdb200Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb200Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x66, 0x65, 0x59, 0x9A, 0xB0,
};
const struct IrCode code_irdb200Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb200Times,
  code_irdb200Codes
};

// Flipper-IRDB: PrismPlus/PrismPlus.ir:Power
const uint16_t code_irdb201Times[] = {
  450, 450, 56, 56, 56, 169, 56, 4500,
};
const uint8_t code_irdb201Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0,
};
const struct IrCode code_irdb201Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb201Times,
  code_irdb201Codes
};

// Flipper-IRDB: RCA/RCA_24_Roku.ir:Power
const uint16_t code_irdb202Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb202Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb202Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb202Times,
  code_irdb202Codes
};

// Flipper-IRDB: RCA/RCA_CRK50A.ir:Power
const uint16_t code_irdb203Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb203Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb203Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb203Times,
  code_irdb203Codes
};

// Flipper-IRDB: RCA/RCA_CRK50A.ir:Power_off_(3b)
const uint16_t code_irdb204Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb204Codes[] = {
  0x15, 0x69, 0x59, 0x70,
};
const struct IrCode code_irdb204Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb204Times,
  code_irdb204Codes
};

// Flipper-IRDB: RCA/RCA_P46731AT_TV.ir:Power
const uint16_t code_irdb205Times[] = {
  18, 783, 17, 233, 18, 233, 18, 232,
  18, 131, 18, 133, 18, 132, 17, 133,
  18, 231, 17, 834, 18, 782, 17, 132,
  18, 834, 18, 130, 57, 192, 59, 92,
  58, 193, 58, 0,
};
const uint8_t code_irdb205Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA1, 0x28, 0x88, 0x23, 0x14, 0x85, 0x38, 0x50,
  0x51, 0x19, 0x06, 0x1A, 0x54, 0x21, 0x05, 0x05, 0x28, 0x88, 0x22, 0x88,
  0xE4, 0x29, 0x48, 0x31, 0x14, 0x6B, 0x11, 0xC6, 0xC5, 0x09, 0x03, 0x11,
  0x4A, 0x82, 0x88, 0xA2, 0x69, 0x4A, 0x43, 0x8C, 0x45, 0x71, 0x46, 0xF8,
  0x44,
};
const struct IrCode code_irdb205Code = {
  freq_to_timerval(38000),
  78,
  5,
  code_irdb205Times,
  code_irdb205Codes
};

// Flipper-IRDB: RCA/RCA_RCR314WR_ RCA313BR.ir:Power
const uint16_t code_irdb206Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb206Codes[] = {
  0x1A, 0x55, 0xA6, 0x55, 0x6A, 0x95, 0x55, 0x6A, 0xB0,
};
const struct IrCode code_irdb206Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb206Times,
  code_irdb206Codes
};

// Flipper-IRDB: RCA/RCA_RLDED3258A-B.ir:Power
const uint16_t code_irdb207Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb207Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb207Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb207Times,
  code_irdb207Codes
};

// Flipper-IRDB: RCA/RCA_RT2471_AC.ir:Power
const uint16_t code_irdb208Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb208Codes[] = {
  0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0,
};
const struct IrCode code_irdb208Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb208Times,
  code_irdb208Codes
};

// Flipper-IRDB: RCA/RCA_RokuTV_RTR4061-B-CA.ir:Power
const uint16_t code_irdb209Times[] = {
  905, 438, 68, 47, 68, 158, 71, 48,
  70, 158, 68, 161, 68, 48, 70, 48,
  68, 3957, 907, 439, 68, 50, 70, 45,
  70, 156, 68, 0,
};
const uint8_t code_irdb209Codes[] = {
  0x01, 0x23, 0x23, 0x24, 0x42, 0x52, 0x66, 0x62, 0x42, 0x54, 0x72, 0x76,
  0x66, 0x66, 0x27, 0x24, 0x48, 0x96, 0x2A, 0x27, 0x24, 0x44, 0x44, 0x66,
  0x62, 0x54, 0x44, 0x72, 0x76, 0x26, 0xBB, 0xC7, 0x24, 0x7D,
};
const struct IrCode code_irdb209Code = {
  freq_to_timerval(38000),
  68,
  4,
  code_irdb209Times,
  code_irdb209Codes
};

// Flipper-IRDB: RCA/RCA_TV_2.ir:Power
const uint16_t code_irdb210Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb210Codes[] = {
  0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0,
};
const struct IrCode code_irdb210Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb210Times,
  code_irdb210Codes
};

// Flipper-IRDB: SEG/SEG_MALTA.ir:Power_Off
const uint16_t code_irdb211Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb211Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb211Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb211Times,
  code_irdb211Codes
};

// Flipper-IRDB: Samsung/Samsung.ir:Power
const uint16_t code_irdb212Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb212Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb212Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb212Times,
  code_irdb212Codes
};

// Flipper-IRDB: Samsung/Samsung_AA-00721A.ir:Power
const uint16_t code_irdb213Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb213Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb213Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb213Times,
  code_irdb213Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00443A.ir:Power
const uint16_t code_irdb214Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb214Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb214Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb214Times,
  code_irdb214Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00484A.ir:Power
const uint16_t code_irdb215Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb215Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb215Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb215Times,
  code_irdb215Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00580A.ir:Power
const uint16_t code_irdb216Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb216Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb216Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb216Times,
  code_irdb216Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00714A.ir:Power off
const uint16_t code_irdb217Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb217Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0,
};
const struct IrCode code_irdb217Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb217Times,
  code_irdb217Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00741A.ir:Power
const uint16_t code_irdb218Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb218Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb218Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb218Times,
  code_irdb218Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59-00786A.ir:Power
const uint16_t code_irdb219Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb219Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb219Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb219Times,
  code_irdb219Codes
};

// Flipper-IRDB: Samsung/Samsung_AA59.ir:Power
const uint16_t code_irdb220Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb220Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb220Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb220Times,
  code_irdb220Codes
};

// Flipper-IRDB: Samsung/Samsung_AA81-00243A.ir:Power
const uint16_t code_irdb221Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb221Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb221Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb221Times,
  code_irdb221Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-00511A.ir:Power
const uint16_t code_irdb222Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb222Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb222Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb222Times,
  code_irdb222Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01081A.ir:Power
const uint16_t code_irdb223Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb223Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb223Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb223Times,
  code_irdb223Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01175N.ir:Power
const uint16_t code_irdb224Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb224Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb224Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb224Times,
  code_irdb224Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01179A.ir:TV_PWR
const uint16_t code_irdb225Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb225Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb225Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb225Times,
  code_irdb225Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01180A.ir:Power
const uint16_t code_irdb226Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb226Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb226Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb226Times,
  code_irdb226Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01180A.ir:Power_off
const uint16_t code_irdb227Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb227Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0,
};
const struct IrCode code_irdb227Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb227Times,
  code_irdb227Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01198_R.ir:Power
const uint16_t code_irdb228Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb228Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb228Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb228Times,
  code_irdb228Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01247A.ir:Power
const uint16_t code_irdb229Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb229Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb229Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb229Times,
  code_irdb229Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01301A.ir:Power
const uint16_t code_irdb230Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb230Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb230Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb230Times,
  code_irdb230Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01303A.ir:Power
const uint16_t code_irdb231Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb231Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb231Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb231Times,
  code_irdb231Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01315B.ir:Power
const uint16_t code_irdb232Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb232Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb232Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb232Times,
  code_irdb232Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01315J.ir:Power
const uint16_t code_irdb233Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb233Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb233Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb233Times,
  code_irdb233Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01330C.ir:Power
const uint16_t code_irdb234Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb234Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb234Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb234Times,
  code_irdb234Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01358C.ir:Power
const uint16_t code_irdb235Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb235Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb235Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb235Times,
  code_irdb235Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01385C.ir:Power
const uint16_t code_irdb236Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb236Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb236Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb236Times,
  code_irdb236Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01388.ir:Power
const uint16_t code_irdb237Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb237Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb237Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb237Times,
  code_irdb237Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59-01391A.ir:Power
const uint16_t code_irdb238Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb238Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb238Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb238Times,
  code_irdb238Codes
};

// Flipper-IRDB: Samsung/Samsung_BN59.ir:Power
const uint16_t code_irdb239Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb239Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb239Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb239Times,
  code_irdb239Codes
};

// Flipper-IRDB: Samsung/Samsung_Broadband_Hospitality.ir:Power
const uint16_t code_irdb240Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb240Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb240Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb240Times,
  code_irdb240Codes
};

// Flipper-IRDB: Samsung/Samsung_E6.ir:Power
const uint16_t code_irdb241Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb241Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb241Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb241Times,
  code_irdb241Codes
};

// Flipper-IRDB: Samsung/Samsung_H6300_TV.ir:Power
const uint16_t code_irdb242Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb242Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb242Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb242Times,
  code_irdb242Codes
};

// Flipper-IRDB: Samsung/Samsung_HQ24ED470AK.ir:Power
const uint16_t code_irdb243Times[] = {
  450, 447, 57, 166, 56, 166, 56, 56,
  54, 56, 54, 168, 54, 166, 57, 169,
  54, 169, 54, 4297, 54, 167, 57, 56,
  57, 168, 54, 4296, 56, 167, 450, 446,
  56, 169, 54, 0,
};
const uint8_t code_irdb243Codes[] = {
  0x00, 0x44, 0x21, 0x90, 0x84, 0x21, 0x4C, 0x72, 0x10, 0x84, 0x21, 0x0A,
  0x42, 0x10, 0x84, 0x21, 0x48, 0x52, 0x98, 0xE8, 0x30, 0xC8, 0x42, 0x24,
  0x01, 0x10, 0x86, 0x42, 0x10, 0x88, 0x42, 0x96, 0x42, 0x10, 0x84, 0x41,
  0x08, 0x42, 0x10, 0x88, 0x21, 0x4A, 0x66, 0x20, 0xCB, 0x21, 0x08, 0xD0,
  0x38, 0x21, 0x59, 0x08, 0x42, 0x21, 0x06, 0x19, 0x08, 0x42, 0x11, 0x04,
  0x21, 0x08, 0x42, 0x14, 0x85, 0x29, 0x98, 0x60, 0xAC, 0x84, 0x23, 0x5E,
  0x21, 0x08, 0x64, 0x21, 0x08, 0x84, 0x18, 0x64, 0x21, 0x08, 0x42, 0x90,
  0x84, 0x21, 0x08, 0x82, 0x21, 0x06, 0x82, 0x82, 0xB2, 0x10, 0x91,
};
const struct IrCode code_irdb243Code = {
  freq_to_timerval(38000),
  152,
  5,
  code_irdb243Times,
  code_irdb243Codes
};

// Flipper-IRDB: Samsung/Samsung_LE37S71B.ir:Power
const uint16_t code_irdb244Times[] = {
  457, 448, 73, 156, 70, 161, 70, 48,
  68, 46, 67, 51, 65, 51, 62, 164,
  67, 162, 67, 164, 65, 48, 64, 51,
  65, 164, 65, 161, 67, 4854, 457, 450,
  65, 49, 65, 162, 67, 0,
};
const uint8_t code_irdb244Codes[] = {
  0x00, 0x44, 0x21, 0x90, 0xA6, 0x31, 0xD0, 0x92, 0x98, 0xCA, 0x59, 0x98,
  0x53, 0x29, 0x66, 0x33, 0x0A, 0xD4, 0xA5, 0x28, 0x4B, 0x9E, 0xC4, 0xA4,
  0xC6, 0x31, 0x8C, 0xC6, 0x24, 0xA6, 0x32, 0x96, 0x66, 0x14, 0xD0, 0x59,
  0x8C, 0xC2, 0xC5, 0x29, 0x90,
};
const struct IrCode code_irdb244Code = {
  freq_to_timerval(38000),
  65,
  5,
  code_irdb244Times,
  code_irdb244Codes
};

// Flipper-IRDB: Samsung/Samsung_LE40R87BD.ir:Power
const uint16_t code_irdb245Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb245Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb245Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb245Times,
  code_irdb245Codes
};

// Flipper-IRDB: Samsung/Samsung_LN32D403E2GCTC.ir:Power
const uint16_t code_irdb246Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb246Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb246Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb246Times,
  code_irdb246Codes
};

// Flipper-IRDB: Samsung/Samsung_LN46C650L1F.ir:Power
const uint16_t code_irdb247Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb247Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb247Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb247Times,
  code_irdb247Codes
};

// Flipper-IRDB: Samsung/Samsung_LW17E34C.ir:Power
const uint16_t code_irdb248Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb248Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb248Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb248Times,
  code_irdb248Codes
};

// Flipper-IRDB: Samsung/Samsung_P2770HD.ir:On_off
const uint16_t code_irdb249Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb249Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb249Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb249Times,
  code_irdb249Codes
};

// Flipper-IRDB: Samsung/Samsung_QM55RA.ir:Power_off
const uint16_t code_irdb250Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb250Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0,
};
const struct IrCode code_irdb250Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb250Times,
  code_irdb250Codes
};

// Flipper-IRDB: Samsung/Samsung_QN43Q60AAF.ir:Power
const uint16_t code_irdb251Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb251Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb251Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb251Times,
  code_irdb251Codes
};

// Flipper-IRDB: Samsung/Samsung_Royal_Caribbean.ir:Power
const uint16_t code_irdb252Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb252Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb252Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb252Times,
  code_irdb252Codes
};

// Flipper-IRDB: Samsung/Samsung_Service_Menu.ir:Power
const uint16_t code_irdb253Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb253Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb253Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb253Times,
  code_irdb253Codes
};

// Flipper-IRDB: Samsung/Samsung_Smart_Remote.ir:Power
const uint16_t code_irdb254Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb254Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb254Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb254Times,
  code_irdb254Codes
};

// Flipper-IRDB: Samsung/Samsung_TV_1.ir:Power
const uint16_t code_irdb255Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb255Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb255Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb255Times,
  code_irdb255Codes
};

// Flipper-IRDB: Samsung/Samsung_TV_2.ir:On_off
const uint16_t code_irdb256Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb256Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb256Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb256Times,
  code_irdb256Codes
};

// Flipper-IRDB: Samsung/Samsung_TV_Full.ir:Power
const uint16_t code_irdb257Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb257Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb257Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb257Times,
  code_irdb257Codes
};

// Flipper-IRDB: Samsung/Samsung_TV_Full.ir:Power
const uint16_t code_irdb258Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb258Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_irdb258Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb258Times,
  code_irdb258Codes
};

// Flipper-IRDB: Samsung/Samsung_TV_Full.ir:Power_off_only
const uint16_t code_irdb259Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb259Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0,
};
const struct IrCode code_irdb259Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb259Times,
  code_irdb259Codes
};

// Flipper-IRDB: Samsung/Samsung_UE26C4000PW.ir:Power
const uint16_t code_irdb260Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb260Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb260Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb260Times,
  code_irdb260Codes
};

// Flipper-IRDB: Samsung/Samsung_UE32F4000.ir:Power
const uint16_t code_irdb261Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb261Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb261Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb261Times,
  code_irdb261Codes
};

// Flipper-IRDB: Samsung/Samsung_UE32F4000AW.ir:Power
const uint16_t code_irdb262Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb262Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb262Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb262Times,
  code_irdb262Codes
};

// Flipper-IRDB: Samsung/Samsung_UE48JU6490U.ir:Power
const uint16_t code_irdb263Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb263Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb263Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb263Times,
  code_irdb263Codes
};

// Flipper-IRDB: Samsung/Samsung_UE75TU7125K.ir:Power
const uint16_t code_irdb264Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb264Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb264Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb264Times,
  code_irdb264Codes
};

// Flipper-IRDB: Samsung/Samsung_UN32EH5000F.ir:Power
const uint16_t code_irdb265Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb265Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb265Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb265Times,
  code_irdb265Codes
};

// Flipper-IRDB: Samsung/Samsung_UN40C5000QFXZA.ir:Power
const uint16_t code_irdb266Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb266Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb266Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb266Times,
  code_irdb266Codes
};

// Flipper-IRDB: Samsung/Samsung_UN60JU6500.ir:Power
const uint16_t code_irdb267Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb267Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb267Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb267Times,
  code_irdb267Codes
};

// Flipper-IRDB: Samsung/Samsung_Unknown_Model.ir:Power
const uint16_t code_irdb268Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb268Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb268Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb268Times,
  code_irdb268Codes
};

// Flipper-IRDB: Sankey/Sankey_TV.ir:Power
const uint16_t code_irdb269Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb269Codes[] = {
  0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0,
};
const struct IrCode code_irdb269Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb269Times,
  code_irdb269Codes
};

// Flipper-IRDB: Sanyo/Sanyo UR77EC2703-3.ir:Power
const uint16_t code_irdb270Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb270Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb270Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb270Times,
  code_irdb270Codes
};

// Flipper-IRDB: Sanyo/Sanyo_DP26640.ir:Power
const uint16_t code_irdb271Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb271Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb271Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb271Times,
  code_irdb271Codes
};

// Flipper-IRDB: Sanyo/Sanyo_FW40R49FC.ir:Power
const uint16_t code_irdb272Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb272Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb272Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb272Times,
  code_irdb272Codes
};

// Flipper-IRDB: Sanyo/Sanyo_ds32224.ir:Power
const uint16_t code_irdb273Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb273Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb273Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb273Times,
  code_irdb273Codes
};

// Flipper-IRDB: Sceptre/Sceptre_8142026670003C.ir:Power
const uint16_t code_irdb274Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb274Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb274Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb274Times,
  code_irdb274Codes
};

// Flipper-IRDB: Sceptre/Sceptre_8142026670003C.ir:Power2
const uint16_t code_irdb275Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb275Codes[] = {
  0x19, 0x65, 0x6A, 0xB0,
};
const struct IrCode code_irdb275Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb275Times,
  code_irdb275Codes
};

// Flipper-IRDB: Sceptre/Sceptre_H24.ir:Power
const uint16_t code_irdb276Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb276Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb276Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb276Times,
  code_irdb276Codes
};

// Flipper-IRDB: Sceptre/Sceptre_H24.ir:Power_alt
const uint16_t code_irdb277Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb277Codes[] = {
  0x19, 0x65, 0x6A, 0xB0,
};
const struct IrCode code_irdb277Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb277Times,
  code_irdb277Codes
};

// Flipper-IRDB: Sceptre/Sceptre_X50_Series.ir:Power
const uint16_t code_irdb278Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb278Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb278Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb278Times,
  code_irdb278Codes
};

// Flipper-IRDB: Seiki/Seiki_SE40FYP1T_TV.ir:Power_seiki
const uint16_t code_irdb279Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb279Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb279Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb279Times,
  code_irdb279Codes
};

// Flipper-IRDB: Sencor/Sencor_25801.ir:Power
const uint16_t code_irdb280Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb280Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0xA9, 0x95, 0x56, 0x6A, 0xB0,
};
const struct IrCode code_irdb280Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb280Times,
  code_irdb280Codes
};

// Flipper-IRDB: Sharp/Aquos.ir:Power
const uint16_t code_irdb281Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb281Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb281Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb281Times,
  code_irdb281Codes
};

// Flipper-IRDB: Sharp/Sharp_13VT-L100.ir:Power
const uint16_t code_irdb282Times[] = {
  26, 185, 26, 79, 26, 4356,
};
const uint8_t code_irdb282Codes[] = {
  0x15, 0x50, 0x45, 0x46, 0x15, 0x45, 0x10, 0x12,
};
const struct IrCode code_irdb282Code = {
  freq_to_timerval(38000),
  32,
  2,
  code_irdb282Times,
  code_irdb282Codes
};

// Flipper-IRDB: Sharp/Sharp_Aquos_32BG3E.ir:Power
const uint16_t code_irdb283Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb283Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb283Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb283Times,
  code_irdb283Codes
};

// Flipper-IRDB: Sharp/Sharp_Aquos_JP.ir:Power
const uint16_t code_irdb284Times[] = {
  338, 166, 44, 40, 44, 124, 44, 43,
  44, 0,
};
const uint8_t code_irdb284Codes[] = {
  0x05, 0x14, 0x51, 0x45, 0x14, 0x9A, 0x29, 0x24, 0x49, 0x45, 0x12, 0x89,
  0x25, 0x22, 0x89, 0x28, 0x92, 0x8A, 0x50,
};
const struct IrCode code_irdb284Code = {
  freq_to_timerval(38000),
  50,
  3,
  code_irdb284Times,
  code_irdb284Codes
};

// Flipper-IRDB: Sharp/Sharp_LC-42LB261U.ir:Power
const uint16_t code_irdb285Times[] = {
  28, 181, 28, 79, 25, 79, 25, 76,
  25, 181, 28, 182, 27, 79, 26, 78,
  26, 4532, 25, 77, 25, 182, 28, 78,
  27, 182, 28, 4322, 26, 181, 28, 76,
  25, 0,
};
const uint8_t code_irdb285Codes[] = {
  0x00, 0x44, 0x30, 0x88, 0x85, 0x31, 0x02, 0x71, 0x10, 0x28, 0x00, 0x52,
  0x11, 0x28, 0xC2, 0x52, 0xD4, 0xC0, 0x05, 0x4D, 0x61, 0x86, 0x11, 0x09,
  0xC0, 0x0A, 0x96, 0x97, 0xB1, 0x70,
};
const struct IrCode code_irdb285Code = {
  freq_to_timerval(38000),
  48,
  5,
  code_irdb285Times,
  code_irdb285Codes
};

// Flipper-IRDB: Sharp/Sharp_LC-RC1-16.ir:Power
const uint16_t code_irdb286Times[] = {
  35, 175, 35, 69, 35, 174, 36, 69,
  36, 175, 36, 174, 36, 4639, 36, 4429,
  26, 184, 26, 79, 26, 78, 26, 4649,
  26, 0,
};
const uint8_t code_irdb286Codes[] = {
  0x01, 0x11, 0x11, 0x02, 0x34, 0x13, 0x35, 0x36, 0x53, 0x33, 0x35, 0x33,
  0x53, 0x55, 0x53, 0x57, 0x89, 0x9A, 0xA9, 0x88, 0x98, 0x9A, 0x98, 0xAB,
  0x89, 0x99, 0x98, 0x99, 0x89, 0x88, 0x89, 0x8C,
};
const struct IrCode code_irdb286Code = {
  freq_to_timerval(38000),
  64,
  4,
  code_irdb286Times,
  code_irdb286Codes
};

// Flipper-IRDB: Sharp/Sharp_Roku_TV.ir:Power
const uint16_t code_irdb287Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb287Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb287Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb287Times,
  code_irdb287Codes
};

// Flipper-IRDB: Sharp/Sharp_TV2.ir:Power
const uint16_t code_irdb288Times[] = {
  28, 181, 27, 78, 28, 78, 28, 77,
  28, 180, 28, 183, 25, 78, 27, 4596,
  27, 80, 25, 77, 26, 80, 26, 77,
  27, 77, 28, 4389, 28, 80, 27, 184,
  25, 181, 28, 4596, 25, 184, 25, 80,
  26, 180, 27, 181, 28, 0,
};
const uint8_t code_irdb288Codes[] = {
  0x00, 0x44, 0x31, 0x8C, 0x00, 0x09, 0x04, 0x31, 0x94, 0xC7, 0x20, 0xC2,
  0x84, 0x95, 0x4B, 0x00, 0x40, 0x40, 0x30, 0x0D, 0x00, 0xC4, 0xE5, 0x8D,
  0xF0, 0x18, 0x02, 0x17, 0x40, 0x31, 0x20, 0xC2, 0x37, 0x49, 0x53, 0x80,
  0xC0, 0x40, 0x04, 0x0D, 0x20, 0xC4, 0x11, 0x8C, 0xB4, 0x18, 0x02, 0x31,
  0xD4, 0x56,
};
const struct IrCode code_irdb288Code = {
  freq_to_timerval(38000),
  80,
  5,
  code_irdb288Times,
  code_irdb288Codes
};

// Flipper-IRDB: Sharp/Sharp_g0684cesa_NES_TV.ir:Power
const uint16_t code_irdb289Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb289Codes[] = {
  0x15, 0x99, 0x6A, 0x66, 0xA9, 0x95, 0x56, 0x6A, 0xB0,
};
const struct IrCode code_irdb289Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb289Times,
  code_irdb289Codes
};

// Flipper-IRDB: Sharp/Sharp_tv.ir:Power
const uint16_t code_irdb290Times[] = {
  20, 183, 30, 77, 28, 76, 28, 79,
  28, 74, 31, 73, 30, 180, 27, 80,
  27, 183, 27, 77, 25, 4585, 33, 178,
  30, 74, 31, 78, 28, 73, 31, 180,
  30, 76, 30, 178, 33, 180, 27, 181,
  25, 81, 27, 178, 28, 4376, 31, 76,
  33, 76, 30, 73, 30, 183, 30, 79,
  28, 180, 25, 4587, 28, 183, 27, 76,
  27, 184, 28, 4374, 31, 79, 28, 178,
  30, 4582, 28, 182, 24, 4377, 25, 76,
  34, 177, 31, 182, 27, 0,
};
const uint8_t code_irdb290Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x86, 0x14, 0x61, 0xC2, 0x08, 0x82, 0x4A,
  0x2C, 0xC3, 0x4E, 0x30, 0xF1, 0x50, 0x44, 0x54, 0x88, 0x4D, 0x45, 0x56,
  0x19, 0x71, 0x18, 0x39, 0x91, 0x8F, 0x15, 0xA2, 0x4E, 0x6D, 0xC0, 0x9D,
  0x3D, 0x02, 0x43, 0x09, 0xE3, 0x99, 0x19, 0x77, 0x9C, 0x79, 0xF8, 0x21,
  0x46, 0x20, 0x82, 0x09, 0x78, 0xCF, 0x31, 0xA0, 0x82, 0x31, 0xA3, 0xA4,
  0x3D, 0x00, 0x83, 0x0A, 0x53, 0x8C, 0x3C, 0x56, 0x93, 0x78, 0x98, 0x26,
  0x45, 0xB0, 0x82, 0x0E, 0x74, 0x68, 0x42, 0x50, 0x9F, 0x32, 0x90, 0xAA,
};
const struct IrCode code_irdb290Code = {
  freq_to_timerval(38000),
  112,
  6,
  code_irdb290Times,
  code_irdb290Codes
};

// Flipper-IRDB: Silver/Silver_LE410004.ir:Power
const uint16_t code_irdb291Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb291Codes[] = {
  0x15, 0x55, 0x6A, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0,
};
const struct IrCode code_irdb291Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb291Times,
  code_irdb291Codes
};

// Flipper-IRDB: SkyVue/SKYVUE_03SI-RI.ir:Power
const uint16_t code_irdb292Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb292Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb292Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb292Times,
  code_irdb292Codes
};

// Flipper-IRDB: SkyVue/SkyVue.ir:Power
const uint16_t code_irdb293Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb293Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb293Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb293Times,
  code_irdb293Codes
};

// Flipper-IRDB: Soniq/Soniq_E32W13B.ir:Power
const uint16_t code_irdb294Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb294Codes[] = {
  0x19, 0x6A, 0x66, 0xA6, 0x9A, 0x95, 0x65, 0x6A, 0xB0,
};
const struct IrCode code_irdb294Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb294Times,
  code_irdb294Codes
};

// Flipper-IRDB: Soniq/Soniq_E55V13A.ir:Power
const uint16_t code_irdb295Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb295Codes[] = {
  0x19, 0x6A, 0x66, 0xA6, 0x9A, 0x95, 0x65, 0x6A, 0xB0,
};
const struct IrCode code_irdb295Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb295Times,
  code_irdb295Codes
};

// Flipper-IRDB: Soniq/Soniq_QSP500TV6.ir:Power
const uint16_t code_irdb296Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb296Codes[] = {
  0x19, 0x6A, 0x66, 0xA6, 0x95, 0x65, 0x6A, 0x9A, 0xB0,
};
const struct IrCode code_irdb296Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb296Times,
  code_irdb296Codes
};

// Flipper-IRDB: Soniq/Soniq_Z24Z15B.ir:Power
const uint16_t code_irdb297Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb297Codes[] = {
  0x19, 0x6A, 0x66, 0xA6, 0x9A, 0x95, 0x65, 0x6A, 0xB0,
};
const struct IrCode code_irdb297Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb297Times,
  code_irdb297Codes
};

// Flipper-IRDB: Sony/SonyTV.ir:On_off
const uint16_t code_irdb298Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb298Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb298Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb298Times,
  code_irdb298Codes
};

// Flipper-IRDB: Sony/Sony_Bravia.ir:Power
const uint16_t code_irdb299Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb299Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb299Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb299Times,
  code_irdb299Codes
};

// Flipper-IRDB: Sony/Sony_Bravia_KD-55XF80xx-49XF80xx-43XF80xx.ir:Power
const uint16_t code_irdb300Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb300Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb300Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb300Times,
  code_irdb300Codes
};

// Flipper-IRDB: Sony/Sony_Bravia_KDL-46W905A.ir:Power
const uint16_t code_irdb301Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb301Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb301Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb301Times,
  code_irdb301Codes
};

// Flipper-IRDB: Sony/Sony_FW_75BZ40H.ir:Power
const uint16_t code_irdb302Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb302Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb302Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb302Times,
  code_irdb302Codes
};

// Flipper-IRDB: Sony/Sony_KD-55X80CK.ir:Power
const uint16_t code_irdb303Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb303Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb303Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb303Times,
  code_irdb303Codes
};

// Flipper-IRDB: Sony/Sony_KD.ir:Power
const uint16_t code_irdb304Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb304Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb304Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb304Times,
  code_irdb304Codes
};

// Flipper-IRDB: Sony/Sony_KDL-55HX850.ir:Power
const uint16_t code_irdb305Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb305Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb305Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb305Times,
  code_irdb305Codes
};

// Flipper-IRDB: Sony/Sony_RM-GD014.ir:Power
const uint16_t code_irdb306Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb306Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb306Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb306Times,
  code_irdb306Codes
};

// Flipper-IRDB: Sony/Sony_RM-V310.ir:Power
const uint16_t code_irdb307Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb307Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb307Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb307Times,
  code_irdb307Codes
};

// Flipper-IRDB: Sony/Sony_RM-YD017.ir:Power
const uint16_t code_irdb308Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb308Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb308Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb308Times,
  code_irdb308Codes
};

// Flipper-IRDB: Sony/Sony_RM-YD018.ir:Power
const uint16_t code_irdb309Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb309Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb309Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb309Times,
  code_irdb309Codes
};

// Flipper-IRDB: Sony/Sony_RM-YD028.ir:Power
const uint16_t code_irdb310Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb310Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb310Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb310Times,
  code_irdb310Codes
};

// Flipper-IRDB: Sony/Sony_RM-YD092.ir:Power
const uint16_t code_irdb311Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb311Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb311Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb311Times,
  code_irdb311Codes
};

// Flipper-IRDB: Sony/Sony_RMEA002.ir:Power
const uint16_t code_irdb312Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb312Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb312Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb312Times,
  code_irdb312Codes
};

// Flipper-IRDB: Sony/Sony_RMF-TX500U.ir:Power
const uint16_t code_irdb313Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb313Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb313Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb313Times,
  code_irdb313Codes
};

// Flipper-IRDB: Sony/Sony_RMT_TB400U.ir:Power
const uint16_t code_irdb314Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb314Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb314Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb314Times,
  code_irdb314Codes
};

// Flipper-IRDB: Sony/Sony_RMT_TX100D.ir:Power
const uint16_t code_irdb315Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb315Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb315Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb315Times,
  code_irdb315Codes
};

// Flipper-IRDB: Sony/Sony_RMT_TX200U.ir:Power
const uint16_t code_irdb316Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb316Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb316Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb316Times,
  code_irdb316Codes
};

// Flipper-IRDB: Sony/Sony_RM_ED016.ir:Power
const uint16_t code_irdb317Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb317Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb317Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb317Times,
  code_irdb317Codes
};

// Flipper-IRDB: Sony/Sony_RM_ED045.ir:Power
const uint16_t code_irdb318Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb318Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb318Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb318Times,
  code_irdb318Codes
};

// Flipper-IRDB: Sony/Sony_SFRTV5.ir:Power
const uint16_t code_irdb319Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb319Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb319Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb319Times,
  code_irdb319Codes
};

// Flipper-IRDB: Sony/Sony_SFRTV5.ir:0Power
const uint16_t code_irdb320Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb320Codes[] = {
  0x19, 0x9A, 0xAA, 0x5A, 0xC0,
};
const struct IrCode code_irdb320Code = {
  freq_to_timerval(38000),
  17,
  2,
  code_irdb320Times,
  code_irdb320Codes
};

// Flipper-IRDB: Sony/Sony_X2182U.ir:Power
const uint16_t code_irdb321Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb321Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb321Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb321Times,
  code_irdb321Codes
};

// Flipper-IRDB: Sony/Sony_XBR.ir:Power
const uint16_t code_irdb322Times[] = {
  240, 60, 60, 60, 120, 60, 60, 4500,
};
const uint8_t code_irdb322Codes[] = {
  0x1A, 0x99, 0x95, 0x70,
};
const struct IrCode code_irdb322Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb322Times,
  code_irdb322Codes
};

// Flipper-IRDB: Sony/Sony_XBR.ir:Power_off
const uint16_t code_irdb323Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb323Codes[] = {
  0x15, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb323Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb323Times,
  code_irdb323Codes
};

// Flipper-IRDB: Sony/Sony_XBR_RM-TD017.ir:Power
const uint16_t code_irdb324Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb324Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb324Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb324Times,
  code_irdb324Codes
};

// Flipper-IRDB: Sony/Sony_XBR_RMT-TX200U.ir:Power
const uint16_t code_irdb325Times[] = {
  240, 60, 120, 60, 60, 60, 60, 4500,
};
const uint8_t code_irdb325Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0,
};
const struct IrCode code_irdb325Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb325Times,
  code_irdb325Codes
};

// Flipper-IRDB: Strong/Strong_32HX4003.ir:Power
const uint16_t code_irdb326Times[] = {
  450, 450, 56, 56, 56, 169, 56, 4500,
};
const uint8_t code_irdb326Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0,
};
const struct IrCode code_irdb326Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb326Times,
  code_irdb326Codes
};

// Flipper-IRDB: Strong/Strong_RCU-Z400N.ir:Power
const uint16_t code_irdb327Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb327Codes[] = {
  0x15, 0x59, 0xAA, 0xA6, 0x56, 0xA5, 0x69, 0x5A, 0xB0,
};
const struct IrCode code_irdb327Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb327Times,
  code_irdb327Codes
};

// Flipper-IRDB: Strong/Strong_STR7004.ir:Power
const uint16_t code_irdb328Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb328Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x69, 0x5A, 0x96, 0xA5, 0x70,
};
const struct IrCode code_irdb328Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb328Times,
  code_irdb328Codes
};

// Flipper-IRDB: Strong/Strong_TVD221_B1825.ir:Power
const uint16_t code_irdb329Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb329Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb329Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb329Times,
  code_irdb329Codes
};

// Flipper-IRDB: Sunbrite/Sunbrite.ir:Power
const uint16_t code_irdb330Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb330Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb330Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb330Times,
  code_irdb330Codes
};

// Flipper-IRDB: Sunbrite/Sunbrite.ir:Power_off
const uint16_t code_irdb331Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb331Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb331Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb331Times,
  code_irdb331Codes
};

// Flipper-IRDB: Supra/Supra_STV_LC32T880WL_1.ir:Power
const uint16_t code_irdb332Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb332Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb332Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb332Times,
  code_irdb332Codes
};

// Flipper-IRDB: Sweex/SWEEX_Generic_Monitor.ir:Power
const uint16_t code_irdb333Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb333Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0x9A, 0x95, 0x65, 0x70,
};
const struct IrCode code_irdb333Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb333Times,
  code_irdb333Codes
};

// Flipper-IRDB: Symphonic/Symphonic_ST424FF.ir:Power
const uint16_t code_irdb334Times[] = {
  349, 349, 87, 262, 87, 87, 87, 3401,
};
const uint8_t code_irdb334Codes[] = {
  0x1A, 0x66, 0xAA, 0x65, 0x99, 0x55, 0xB0,
};
const struct IrCode code_irdb334Code = {
  freq_to_timerval(36700),
  26,
  2,
  code_irdb334Times,
  code_irdb334Codes
};

// Flipper-IRDB: Syntax-Brillian/SyntaxBrillian_Olevia232T.ir:Power
const uint16_t code_irdb335Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb335Codes[] = {
  0x16, 0x55, 0x65, 0xA9, 0x95, 0x55, 0x6A, 0xAA, 0xB0,
};
const struct IrCode code_irdb335Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb335Times,
  code_irdb335Codes
};

// Flipper-IRDB: TCL/TCL_32S327.ir:Power
const uint16_t code_irdb336Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb336Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb336Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb336Times,
  code_irdb336Codes
};

// Flipper-IRDB: TCL/TCL_40S615.ir:Power
const uint16_t code_irdb337Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb337Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb337Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb337Times,
  code_irdb337Codes
};

// Flipper-IRDB: TCL/TCL_43S446.ir:Power
const uint16_t code_irdb338Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb338Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb338Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb338Times,
  code_irdb338Codes
};

// Flipper-IRDB: TCL/TCL_50S423.ir:Power
const uint16_t code_irdb339Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb339Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb339Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb339Times,
  code_irdb339Codes
};

// Flipper-IRDB: TCL/TCL_65C635K.ir:Power
const uint16_t code_irdb340Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb340Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb340Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb340Times,
  code_irdb340Codes
};

// Flipper-IRDB: TCL/TCL_LED49D2930.ir:Power
const uint16_t code_irdb341Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb341Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb341Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb341Times,
  code_irdb341Codes
};

// Flipper-IRDB: TCL/TCL_ROKU_US.ir:Power_tcl
const uint16_t code_irdb342Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb342Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb342Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb342Times,
  code_irdb342Codes
};

// Flipper-IRDB: TCL/TCL_Roku_TV.ir:Power
const uint16_t code_irdb343Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb343Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x95, 0x9A, 0x70,
};
const struct IrCode code_irdb343Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb343Times,
  code_irdb343Codes
};

// Flipper-IRDB: TCL/TCL_Roku_TV_55S405.ir:Power
const uint16_t code_irdb344Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb344Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb344Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb344Times,
  code_irdb344Codes
};

// Flipper-IRDB: TCL/TCL_UnknownModel1.ir:Power
const uint16_t code_irdb345Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb345Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb345Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb345Times,
  code_irdb345Codes
};

// Flipper-IRDB: TCL/TCL_UnknownModel2.ir:Power
const uint16_t code_irdb346Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb346Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb346Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb346Times,
  code_irdb346Codes
};

// Flipper-IRDB: TCL/TCL_UnknownModel3.ir:Power
const uint16_t code_irdb347Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb347Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_irdb347Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb347Times,
  code_irdb347Codes
};

// Flipper-IRDB: Technika/TECHNIKA_22880.ir:Power
const uint16_t code_irdb348Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb348Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb348Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb348Times,
  code_irdb348Codes
};

// Flipper-IRDB: Telefunken/Telefunken_D40F294R4CW.ir:Power
const uint16_t code_irdb349Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb349Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb349Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb349Times,
  code_irdb349Codes
};

// Flipper-IRDB: Telefunken/Telefunken_L55U405B4CW.ir:Power
const uint16_t code_irdb350Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb350Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb350Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb350Times,
  code_irdb350Codes
};

// Flipper-IRDB: Telefunken/Telefunken_L65F249i3C.ir:Power
const uint16_t code_irdb351Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb351Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb351Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb351Times,
  code_irdb351Codes
};

// Flipper-IRDB: Telefunken/Telefunken_TF-LED19S64T2.ir:Power
const uint16_t code_irdb352Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb352Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x66, 0x65, 0x59, 0x9A, 0xB0,
};
const struct IrCode code_irdb352Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb352Times,
  code_irdb352Codes
};

// Flipper-IRDB: Telefunken/Telefunken_TF-LED32S54T2.ir:Power
const uint16_t code_irdb353Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb353Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb353Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb353Times,
  code_irdb353Codes
};

// Flipper-IRDB: Telefunken/Telefunken_d32f660x5cwi.ir:Power
const uint16_t code_irdb354Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb354Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb354Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb354Times,
  code_irdb354Codes
};

// Flipper-IRDB: Telekom/Telekom_Entertain.ir:Power
const uint16_t code_irdb355Times[] = {
  33, 60, 32, 28, 64, 29, 31, 59,
  32, 29, 64, 60, 64, 59, 33, 0,
};
const uint8_t code_irdb355Codes[] = {
  0x05, 0x39, 0x71, 0x39, 0x3E,
};
const struct IrCode code_irdb355Code = {
  freq_to_timerval(38000),
  13,
  3,
  code_irdb355Times,
  code_irdb355Codes
};

// Flipper-IRDB: Tevion/Tevion_3221TS.ir:Power
const uint16_t code_irdb356Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb356Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x96, 0xA5, 0x69, 0x5A, 0xB0,
};
const struct IrCode code_irdb356Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb356Times,
  code_irdb356Codes
};

// Flipper-IRDB: Thomson/Thomson_40FS3003.ir:Power
const uint16_t code_irdb357Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb357Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb357Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb357Times,
  code_irdb357Codes
};

// Flipper-IRDB: Thomson/Thomson_UnknownModel1.ir:Power
const uint16_t code_irdb358Times[] = {
  400, 400, 50, 150, 50, 50, 50, 4000,
};
const uint8_t code_irdb358Codes[] = {
  0x15, 0x69, 0x99, 0xB0,
};
const struct IrCode code_irdb358Code = {
  freq_to_timerval(38000),
  14,
  2,
  code_irdb358Times,
  code_irdb358Codes
};

// Flipper-IRDB: Toshiba/Toshiba CT 8560.ir:Power
const uint16_t code_irdb359Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb359Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb359Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb359Times,
  code_irdb359Codes
};

// Flipper-IRDB: Toshiba/Toshiba_32AV502U.ir:Power
const uint16_t code_irdb360Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb360Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb360Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb360Times,
  code_irdb360Codes
};

// Flipper-IRDB: Toshiba/Toshiba_43LF421U21.ir:Power
const uint16_t code_irdb361Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb361Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb361Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb361Times,
  code_irdb361Codes
};

// Flipper-IRDB: Toshiba/Toshiba_50C350LC.ir:Power
const uint16_t code_irdb362Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb362Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb362Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb362Times,
  code_irdb362Codes
};

// Flipper-IRDB: Toshiba/Toshiba_CT-32F2.ir:Power
const uint16_t code_irdb363Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb363Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb363Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb363Times,
  code_irdb363Codes
};

// Flipper-IRDB: Toshiba/Toshiba_CT-90325.ir:Power
const uint16_t code_irdb364Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb364Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb364Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb364Times,
  code_irdb364Codes
};

// Flipper-IRDB: Toshiba/Toshiba_CT-9922.ir:Power
const uint16_t code_irdb365Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb365Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb365Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb365Times,
  code_irdb365Codes
};

// Flipper-IRDB: Toshiba/Toshiba_Ct-8563.ir:Power
const uint16_t code_irdb366Times[] = {
  89, 89, 89, 178, 178, 178, 178, 89,
  89, 4500,
};
const uint8_t code_irdb366Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_irdb366Code = {
  freq_to_timerval(38000),
  12,
  3,
  code_irdb366Times,
  code_irdb366Codes
};

// Flipper-IRDB: Toshiba/Toshiba_FireTV.ir:Power
const uint16_t code_irdb367Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb367Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb367Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb367Times,
  code_irdb367Codes
};

// Flipper-IRDB: Toshiba/Toshiba_SE_R0305_32CV100U.ir:Power
const uint16_t code_irdb368Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb368Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb368Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb368Times,
  code_irdb368Codes
};

// Flipper-IRDB: Toshiba/toshiba_firetv_v2.ir:Power
const uint16_t code_irdb369Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb369Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb369Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb369Times,
  code_irdb369Codes
};

// Flipper-IRDB: United/United_tv.ir:Power
const uint16_t code_irdb370Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb370Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_irdb370Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb370Times,
  code_irdb370Codes
};

// Flipper-IRDB: Viano/Viano_STV65UHD4K.ir:Power
const uint16_t code_irdb371Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb371Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0x5A, 0xA5, 0x65, 0x5A, 0xB0,
};
const struct IrCode code_irdb371Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb371Times,
  code_irdb371Codes
};

// Flipper-IRDB: ViewSonic/VIEWSONIC_A-00010219.ir:POWER
const uint16_t code_irdb372Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb372Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb372Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb372Times,
  code_irdb372Codes
};

// Flipper-IRDB: ViewSonic/ViewSonic_VT2645.ir:Power
const uint16_t code_irdb373Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb373Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb373Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb373Times,
  code_irdb373Codes
};

// Flipper-IRDB: ViewSonic/Viewsonic_RC52A_11.ir:Power
const uint16_t code_irdb374Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb374Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb374Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb374Times,
  code_irdb374Codes
};

// Flipper-IRDB: Viore/Viore_TV_LC37VF72.ir:Power
const uint16_t code_irdb375Times[] = {
  450, 450, 56, 169, 56, 56, 56, 4500,
};
const uint8_t code_irdb375Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_irdb375Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb375Times,
  code_irdb375Codes
};

// Flipper-IRDB: Vitec/Vitec_Exterity_IPTV.ir:Power
const uint16_t code_irdb376Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb376Codes[] = {
  0x19, 0x66, 0x59, 0x65, 0x59, 0x96, 0x66, 0x69, 0xB0,
};
const struct IrCode code_irdb376Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb376Times,
  code_irdb376Codes
};

// Flipper-IRDB: Vizio/Vizio.ir:Power
const uint16_t code_irdb377Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb377Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb377Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb377Times,
  code_irdb377Codes
};

// Flipper-IRDB: Vizio/Vizio_D32FM-K01.ir:Power
const uint16_t code_irdb378Times[] = {
  922, 448, 66, 47, 66, 163, 66, 50,
  63, 50, 63, 166, 63, 4011, 911, 220,
  63, 0,
};
const uint8_t code_irdb378Codes[] = {
  0x01, 0x12, 0x11, 0x34, 0x45, 0x54, 0x55, 0x55, 0x54, 0x44, 0x54, 0x44,
  0x45, 0x55, 0x45, 0x55, 0x56, 0x78,
};
const struct IrCode code_irdb378Code = {
  freq_to_timerval(38000),
  36,
  4,
  code_irdb378Times,
  code_irdb378Codes
};

// Flipper-IRDB: Vizio/Vizio_D43-C1.ir:Power
const uint16_t code_irdb379Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb379Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb379Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb379Times,
  code_irdb379Codes
};

// Flipper-IRDB: Vizio/Vizio_E190VA_Razor.ir:Power
const uint16_t code_irdb380Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb380Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb380Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb380Times,
  code_irdb380Codes
};

// Flipper-IRDB: Vizio/Vizio_E70U-D3.ir:Power
const uint16_t code_irdb381Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb381Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb381Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb381Times,
  code_irdb381Codes
};

// Flipper-IRDB: Vizio/Vizio_M70Q6-J03.ir:Power
const uint16_t code_irdb382Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb382Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb382Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb382Times,
  code_irdb382Codes
};

// Flipper-IRDB: Vizio/Vizio_V405-H19.ir:Power
const uint16_t code_irdb383Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb383Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb383Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb383Times,
  code_irdb383Codes
};

// Flipper-IRDB: Vizio/Vizio_V705-G1.ir:Power
const uint16_t code_irdb384Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb384Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb384Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb384Times,
  code_irdb384Codes
};

// Flipper-IRDB: Vizio/Vizio_VX32L.ir:Power
const uint16_t code_irdb385Times[] = {
  922, 448, 66, 47, 66, 163, 66, 50,
  63, 50, 63, 166, 63, 4011, 911, 220,
  63, 0,
};
const uint8_t code_irdb385Codes[] = {
  0x01, 0x12, 0x11, 0x34, 0x45, 0x54, 0x55, 0x55, 0x54, 0x44, 0x54, 0x44,
  0x45, 0x55, 0x45, 0x55, 0x56, 0x78,
};
const struct IrCode code_irdb385Code = {
  freq_to_timerval(38000),
  36,
  4,
  code_irdb385Times,
  code_irdb385Codes
};

// Flipper-IRDB: Vizio/Vizio_XRT122.ir:Power
const uint16_t code_irdb386Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb386Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb386Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb386Times,
  code_irdb386Codes
};

// Flipper-IRDB: Vizio/Vizio_XRT135.ir:Power
const uint16_t code_irdb387Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb387Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb387Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb387Times,
  code_irdb387Codes
};

// Flipper-IRDB: Vizio/Vizio_XRT136.ir:Power
const uint16_t code_irdb388Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb388Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb388Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb388Times,
  code_irdb388Codes
};

// Flipper-IRDB: Vizio/Vizio_XRT140R.ir:Power
const uint16_t code_irdb389Times[] = {
  902, 441, 60, 51, 63, 160, 69, 43,
  63, 48, 63, 49, 62, 160, 62, 49,
  62, 163, 60, 163, 60, 164, 60, 52,
  60, 4000, 902, 217, 63, 9574, 901, 217,
  62, 9574, 63, 0,
};
const uint8_t code_irdb389Codes[] = {
  0x00, 0x42, 0x21, 0x90, 0x84, 0x28, 0x8C, 0x74, 0x25, 0x29, 0x52, 0xD6,
  0xB4, 0xAD, 0x6B, 0x5A, 0x52, 0x95, 0xA5, 0x29, 0x4B, 0x1A, 0xE7, 0xC1,
  0xF1,
};
const struct IrCode code_irdb389Code = {
  freq_to_timerval(38000),
  40,
  5,
  code_irdb389Times,
  code_irdb389Codes
};

// Flipper-IRDB: Vizio/Vizio_XRT150.ir:POWER
const uint16_t code_irdb390Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb390Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_irdb390Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb390Times,
  code_irdb390Codes
};

// Flipper-IRDB: Waltham/Waltham_WTHD3214B.ir:Power
const uint16_t code_irdb391Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb391Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb391Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb391Times,
  code_irdb391Codes
};

// Flipper-IRDB: Watson/WATSON_FA3627T.ir:Power
const uint16_t code_irdb392Times[] = {
  89, 89, 89, 178, 178, 89, 89, 4500,
};
const uint8_t code_irdb392Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_irdb392Code = {
  freq_to_timerval(38000),
  13,
  2,
  code_irdb392Times,
  code_irdb392Codes
};

// Flipper-IRDB: Wbox/Wbox_TV.ir:Power
const uint16_t code_irdb393Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb393Codes[] = {
  0x15, 0x56, 0x55, 0x56, 0x59, 0x95, 0x66, 0x6A, 0xB0,
};
const struct IrCode code_irdb393Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb393Times,
  code_irdb393Codes
};

// Flipper-IRDB: Westinghouse/Westinghouse.ir:Power
const uint16_t code_irdb394Times[] = {
  900, 450, 56, 56, 56, 169, 56, 4000,
};
const uint8_t code_irdb394Codes[] = {
  0x19, 0x55, 0x66, 0xAA, 0x5A, 0x56, 0x65, 0xA9, 0xB0,
};
const struct IrCode code_irdb394Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb394Times,
  code_irdb394Codes
};

// Flipper-IRDB: Westinghouse/Westinghouse_RMT-13.ir:Power
const uint16_t code_irdb395Times[] = {
  900, 450, 56, 169, 56, 56, 56, 4000,
};
const uint8_t code_irdb395Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0x9A, 0x95, 0x65, 0x70,
};
const struct IrCode code_irdb395Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_irdb395Times,
  code_irdb395Codes
};

// Flipper-IRDB: Zenith/Zenith_SC3492Z.ir:Power
const uint16_t code_irdb396Times[] = {
  61, 39, 61, 398, 61, 498, 61, 399,
  61, 499, 61, 0,
};
const uint8_t code_irdb396Codes[] = {
  0x05, 0x02, 0x1A, 0x0D, 0x07, 0x10, 0xA0,
};
const struct IrCode code_irdb396Code = {
  freq_to_timerval(38000),
  17,
  3,
  code_irdb396Times,
  code_irdb396Codes
};

// Flipper-IRDB: Zenith/Zenith_tv.ir:Power
const uint16_t code_irdb397Times[] = {
  56, 44, 56, 406, 59, 503, 59, 41,
  59, 403, 62, 39, 62, 400, 59, 44,
  56, 403, 56, 0,
};
const uint8_t code_irdb397Codes[] = {
  0x01, 0x23, 0x43, 0x42, 0x56, 0x27, 0x82, 0x27, 0x90,
};
const struct IrCode code_irdb397Code = {
  freq_to_timerval(38000),
  17,
  4,
  code_irdb397Times,
  code_irdb397Codes
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
  &code_irdb000Code,
  &code_irdb001Code,
  &code_irdb002Code,
  &code_irdb003Code,
  &code_irdb004Code,
  &code_irdb005Code,
  &code_irdb006Code,
  &code_irdb007Code,
  &code_irdb008Code,
  &code_irdb009Code,
  &code_irdb010Code,
  &code_irdb011Code,
  &code_irdb012Code,
  &code_irdb013Code,
  &code_irdb014Code,
  &code_irdb015Code,
  &code_irdb016Code,
  &code_irdb017Code,
  &code_irdb018Code,
  &code_irdb019Code,
  &code_irdb020Code,
  &code_irdb021Code,
  &code_irdb022Code,
  &code_irdb023Code,
  &code_irdb024Code,
  &code_irdb025Code,
  &code_irdb026Code,
  &code_irdb027Code,
  &code_irdb028Code,
  &code_irdb029Code,
  &code_irdb030Code,
  &code_irdb031Code,
  &code_irdb032Code,
  &code_irdb033Code,
  &code_irdb034Code,
  &code_irdb035Code,
  &code_irdb036Code,
  &code_irdb037Code,
  &code_irdb038Code,
  &code_irdb039Code,
  &code_irdb040Code,
  &code_irdb041Code,
  &code_irdb042Code,
  &code_irdb043Code,
  &code_irdb044Code,
  &code_irdb045Code,
  &code_irdb046Code,
  &code_irdb047Code,
  &code_irdb048Code,
  &code_irdb049Code,
  &code_irdb050Code,
  &code_irdb051Code,
  &code_irdb052Code,
  &code_irdb053Code,
  &code_irdb054Code,
  &code_irdb055Code,
  &code_irdb056Code,
  &code_irdb057Code,
  &code_irdb058Code,
  &code_irdb059Code,
  &code_irdb060Code,
  &code_irdb061Code,
  &code_irdb062Code,
  &code_irdb063Code,
  &code_irdb064Code,
  &code_irdb065Code,
  &code_irdb066Code,
  &code_irdb067Code,
  &code_irdb068Code,
  &code_irdb069Code,
  &code_irdb070Code,
  &code_irdb071Code,
  &code_irdb072Code,
  &code_irdb073Code,
  &code_irdb074Code,
  &code_irdb075Code,
  &code_irdb076Code,
  &code_irdb077Code,
  &code_irdb078Code,
  &code_irdb079Code,
  &code_irdb080Code,
  &code_irdb081Code,
  &code_irdb082Code,
  &code_irdb083Code,
  &code_irdb084Code,
  &code_irdb085Code,
  &code_irdb086Code,
  &code_irdb087Code,
  &code_irdb088Code,
  &code_irdb089Code,
  &code_irdb090Code,
  &code_irdb091Code,
  &code_irdb092Code,
  &code_irdb093Code,
  &code_irdb094Code,
  &code_irdb095Code,
  &code_irdb096Code,
  &code_irdb097Code,
  &code_irdb098Code,
  &code_irdb099Code,
  &code_irdb100Code,
  &code_irdb101Code,
  &code_irdb102Code,
  &code_irdb103Code,
  &code_irdb104Code,
  &code_irdb105Code,
  &code_irdb106Code,
  &code_irdb107Code,
  &code_irdb108Code,
  &code_irdb109Code,
  &code_irdb110Code,
  &code_irdb111Code,
  &code_irdb112Code,
  &code_irdb113Code,
  &code_irdb114Code,
  &code_irdb115Code,
  &code_irdb116Code,
  &code_irdb117Code,
  &code_irdb118Code,
  &code_irdb119Code,
  &code_irdb120Code,
  &code_irdb121Code,
  &code_irdb122Code,
  &code_irdb123Code,
  &code_irdb124Code,
  &code_irdb125Code,
  &code_irdb126Code,
  &code_irdb127Code,
  &code_irdb128Code,
  &code_irdb129Code,
  &code_irdb130Code,
  &code_irdb131Code,
  &code_irdb132Code,
  &code_irdb133Code,
  &code_irdb134Code,
  &code_irdb135Code,
  &code_irdb136Code,
  &code_irdb137Code,
  &code_irdb138Code,
  &code_irdb139Code,
  &code_irdb140Code,
  &code_irdb141Code,
  &code_irdb142Code,
  &code_irdb143Code,
  &code_irdb144Code,
  &code_irdb145Code,
  &code_irdb146Code,
  &code_irdb147Code,
  &code_irdb148Code,
  &code_irdb149Code,
  &code_irdb150Code,
  &code_irdb151Code,
  &code_irdb152Code,
  &code_irdb153Code,
  &code_irdb154Code,
  &code_irdb155Code,
  &code_irdb156Code,
  &code_irdb157Code,
  &code_irdb158Code,
  &code_irdb159Code,
  &code_irdb160Code,
  &code_irdb161Code,
  &code_irdb162Code,
  &code_irdb163Code,
  &code_irdb164Code,
  &code_irdb165Code,
  &code_irdb166Code,
  &code_irdb167Code,
  &code_irdb168Code,
  &code_irdb169Code,
  &code_irdb170Code,
  &code_irdb171Code,
  &code_irdb172Code,
  &code_irdb173Code,
  &code_irdb174Code,
  &code_irdb175Code,
  &code_irdb176Code,
  &code_irdb177Code,
  &code_irdb178Code,
  &code_irdb179Code,
  &code_irdb180Code,
  &code_irdb181Code,
  &code_irdb182Code,
  &code_irdb183Code,
  &code_irdb184Code,
  &code_irdb185Code,
  &code_irdb186Code,
  &code_irdb187Code,
  &code_irdb188Code,
  &code_irdb189Code,
  &code_irdb190Code,
  &code_irdb191Code,
  &code_irdb192Code,
  &code_irdb193Code,
  &code_irdb194Code,
  &code_irdb195Code,
  &code_irdb196Code,
  &code_irdb197Code,
  &code_irdb198Code,
  &code_irdb199Code,
  &code_irdb200Code,
  &code_irdb201Code,
  &code_irdb202Code,
  &code_irdb203Code,
  &code_irdb204Code,
  &code_irdb205Code,
  &code_irdb206Code,
  &code_irdb207Code,
  &code_irdb208Code,
  &code_irdb209Code,
  &code_irdb210Code,
  &code_irdb211Code,
  &code_irdb212Code,
  &code_irdb213Code,
  &code_irdb214Code,
  &code_irdb215Code,
  &code_irdb216Code,
  &code_irdb217Code,
  &code_irdb218Code,
  &code_irdb219Code,
  &code_irdb220Code,
  &code_irdb221Code,
  &code_irdb222Code,
  &code_irdb223Code,
  &code_irdb224Code,
  &code_irdb225Code,
  &code_irdb226Code,
  &code_irdb227Code,
  &code_irdb228Code,
  &code_irdb229Code,
  &code_irdb230Code,
  &code_irdb231Code,
  &code_irdb232Code,
  &code_irdb233Code,
  &code_irdb234Code,
  &code_irdb235Code,
  &code_irdb236Code,
  &code_irdb237Code,
  &code_irdb238Code,
  &code_irdb239Code,
  &code_irdb240Code,
  &code_irdb241Code,
  &code_irdb242Code,
  &code_irdb243Code,
  &code_irdb244Code,
  &code_irdb245Code,
  &code_irdb246Code,
  &code_irdb247Code,
  &code_irdb248Code,
  &code_irdb249Code,
  &code_irdb250Code,
  &code_irdb251Code,
  &code_irdb252Code,
  &code_irdb253Code,
  &code_irdb254Code,
  &code_irdb255Code,
  &code_irdb256Code,
  &code_irdb257Code,
  &code_irdb258Code,
  &code_irdb259Code,
  &code_irdb260Code,
  &code_irdb261Code,
  &code_irdb262Code,
  &code_irdb263Code,
  &code_irdb264Code,
  &code_irdb265Code,
  &code_irdb266Code,
  &code_irdb267Code,
  &code_irdb268Code,
  &code_irdb269Code,
  &code_irdb270Code,
  &code_irdb271Code,
  &code_irdb272Code,
  &code_irdb273Code,
  &code_irdb274Code,
  &code_irdb275Code,
  &code_irdb276Code,
  &code_irdb277Code,
  &code_irdb278Code,
  &code_irdb279Code,
  &code_irdb280Code,
  &code_irdb281Code,
  &code_irdb282Code,
  &code_irdb283Code,
  &code_irdb284Code,
  &code_irdb285Code,
  &code_irdb286Code,
  &code_irdb287Code,
  &code_irdb288Code,
  &code_irdb289Code,
  &code_irdb290Code,
  &code_irdb291Code,
  &code_irdb292Code,
  &code_irdb293Code,
  &code_irdb294Code,
  &code_irdb295Code,
  &code_irdb296Code,
  &code_irdb297Code,
  &code_irdb298Code,
  &code_irdb299Code,
  &code_irdb300Code,
  &code_irdb301Code,
  &code_irdb302Code,
  &code_irdb303Code,
  &code_irdb304Code,
  &code_irdb305Code,
  &code_irdb306Code,
  &code_irdb307Code,
  &code_irdb308Code,
  &code_irdb309Code,
  &code_irdb310Code,
  &code_irdb311Code,
  &code_irdb312Code,
  &code_irdb313Code,
  &code_irdb314Code,
  &code_irdb315Code,
  &code_irdb316Code,
  &code_irdb317Code,
  &code_irdb318Code,
  &code_irdb319Code,
  &code_irdb320Code,
  &code_irdb321Code,
  &code_irdb322Code,
  &code_irdb323Code,
  &code_irdb324Code,
  &code_irdb325Code,
  &code_irdb326Code,
  &code_irdb327Code,
  &code_irdb328Code,
  &code_irdb329Code,
  &code_irdb330Code,
  &code_irdb331Code,
  &code_irdb332Code,
  &code_irdb333Code,
  &code_irdb334Code,
  &code_irdb335Code,
  &code_irdb336Code,
  &code_irdb337Code,
  &code_irdb338Code,
  &code_irdb339Code,
  &code_irdb340Code,
  &code_irdb341Code,
  &code_irdb342Code,
  &code_irdb343Code,
  &code_irdb344Code,
  &code_irdb345Code,
  &code_irdb346Code,
  &code_irdb347Code,
  &code_irdb348Code,
  &code_irdb349Code,
  &code_irdb350Code,
  &code_irdb351Code,
  &code_irdb352Code,
  &code_irdb353Code,
  &code_irdb354Code,
  &code_irdb355Code,
  &code_irdb356Code,
  &code_irdb357Code,
  &code_irdb358Code,
  &code_irdb359Code,
  &code_irdb360Code,
  &code_irdb361Code,
  &code_irdb362Code,
  &code_irdb363Code,
  &code_irdb364Code,
  &code_irdb365Code,
  &code_irdb366Code,
  &code_irdb367Code,
  &code_irdb368Code,
  &code_irdb369Code,
  &code_irdb370Code,
  &code_irdb371Code,
  &code_irdb372Code,
  &code_irdb373Code,
  &code_irdb374Code,
  &code_irdb375Code,
  &code_irdb376Code,
  &code_irdb377Code,
  &code_irdb378Code,
  &code_irdb379Code,
  &code_irdb380Code,
  &code_irdb381Code,
  &code_irdb382Code,
  &code_irdb383Code,
  &code_irdb384Code,
  &code_irdb385Code,
  &code_irdb386Code,
  &code_irdb387Code,
  &code_irdb388Code,
  &code_irdb389Code,
  &code_irdb390Code,
  &code_irdb391Code,
  &code_irdb392Code,
  &code_irdb393Code,
  &code_irdb394Code,
  &code_irdb395Code,
  &code_irdb396Code,
  &code_irdb397Code,
};

const IrCode* const EUpowerCodes[] = {
  &code_eu000Code,
  &code_eu001Code,
  &code_eu002Code,
  &code_na000Code, // same as &code_eu003Code
  &code_eu004Code,
  &code_eu005Code,
  &code_eu006Code, // toggle power, &code_eu140Code turns it off again
  &code_eu007Code,
  &code_eu008Code,
  &code_na005Code, // same as &code_eu009Code
  &code_na004Code, // same as &code_eu010Code
  &code_eu011Code,
  &code_eu012Code,
  &code_eu013Code,
  &code_na021Code, // same as &code_eu014Code
  &code_eu015Code,
  &code_eu016Code,
  &code_eu017Code,
  &code_eu018Code,
  &code_eu019Code,
  &code_eu020Code,
  &code_eu021Code,
  &code_eu022Code,
  &code_na022Code, // same as &code_eu023Code
  &code_eu024Code,
  &code_eu025Code,
  &code_eu026Code,
  &code_eu140Code, // counters &code_eu006Code (toggle), so out of order
  &code_eu027Code,
  &code_eu028Code,
  &code_eu029Code,
  &code_eu030Code,
  &code_eu031Code,
  &code_eu032Code,
  &code_eu033Code,
  &code_eu034Code,
  //&code_eu035Code, same as eu009
  &code_eu036Code,
  &code_eu037Code,
  &code_eu038Code,
  &code_eu039Code,
  &code_eu040Code,
  &code_eu041Code,
  &code_eu042Code,
  &code_eu043Code,
  &code_eu044Code,
  &code_eu045Code,
  &code_eu046Code,
  &code_eu047Code,
  &code_eu048Code,
  &code_eu049Code,
  &code_eu050Code,
  &code_eu051Code,
  &code_eu052Code,
  &code_eu053Code,
  &code_eu054Code,
  &code_eu055Code,
  &code_eu056Code,
  //&code_eu057Code, same as eu008
  &code_eu058Code,
  &code_eu059Code,
  &code_eu060Code,
  &code_eu061Code,
  &code_eu062Code,
  &code_eu063Code,
  &code_eu064Code,
  &code_eu065Code,
  &code_eu066Code,
  &code_eu067Code,
  &code_eu068Code,
  &code_eu069Code,
  &code_eu070Code,
  &code_eu071Code,
  &code_eu072Code,
  &code_eu073Code,
  &code_eu074Code,
  &code_eu075Code,
  &code_eu076Code,
  &code_eu077Code,
  &code_eu078Code,
  &code_eu079Code,
  &code_eu080Code,
  &code_eu081Code,
  &code_eu082Code,
  &code_eu083Code,
  &code_eu084Code,
  &code_eu085Code,
  &code_eu086Code,
  &code_eu087Code,
  &code_eu088Code,
  &code_eu089Code,
  &code_eu090Code,
  &code_eu091Code,
  &code_eu092Code,
  &code_eu093Code,
  &code_eu094Code,
  &code_eu095Code,
  &code_eu096Code,
  &code_eu097Code,
  &code_eu098Code,
  &code_eu099Code,
  &code_eu100Code,
  &code_eu101Code,
  &code_eu102Code,
  &code_eu103Code,
  &code_eu104Code,
  &code_eu105Code,
  &code_eu106Code,
  &code_eu107Code,
  &code_eu108Code,
  &code_eu109Code,
  &code_eu110Code,
  &code_eu111Code,
  &code_eu112Code,
  &code_eu113Code,
  &code_eu114Code,
  &code_eu115Code,
  &code_eu116Code,
  &code_eu117Code,
  &code_eu118Code,
  &code_eu119Code,
  &code_eu120Code,
  &code_eu121Code,
  &code_eu122Code,
  &code_eu123Code,
  &code_eu124Code,
  &code_eu125Code,
  &code_eu126Code,
  &code_eu127Code,
  &code_eu128Code,
  &code_eu129Code,
  &code_eu130Code,
  &code_eu131Code,
  &code_eu132Code,
  &code_eu133Code,
  &code_eu134Code,
  &code_eu135Code,
  &code_eu136Code,
  &code_eu137Code,
  &code_eu138Code,
  &code_eu139Code,
};

uint16_t num_NAcodes = NUM_ELEM(NApowerCodes);
uint16_t num_EUcodes = NUM_ELEM(EUpowerCodes);
