#include "../winhttp.h"

//----- (000000014084B1C0) ----------------------------------------------------
void sub_14084B1C0()
{
	int v0; // edx

	v0 = byte_140C62075 != 0;
	if (byte_140C620F5)
		v0 |= 2u;
	if (byte_140C62175)
		v0 |= 4u;
	if (byte_140C621F5)
		v0 |= 8u;
	if (byte_140C62275)
		v0 |= 0x10u;
	if (byte_140C622F5)
		v0 |= 0x20u;
	if (byte_140C62375)
		v0 |= 0x40u;
	if (byte_140C623F5)
		v0 |= 0x80u;
	if (v0)
		sub_1408304E0(qword_140C61BA0, v0);
	byte_140C62075 = 0;
	byte_140C620F5 = 0;
	byte_140C62175 = 0;
	byte_140C621F5 = 0;
	byte_140C62275 = 0;
	byte_140C622F5 = 0;
	byte_140C62375 = 0;
	byte_140C623F5 = 0;
}
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 140C62075: using guessed type char byte_140C62075;
// 140C620F5: using guessed type char byte_140C620F5;
// 140C62175: using guessed type char byte_140C62175;
// 140C621F5: using guessed type char byte_140C621F5;
// 140C62275: using guessed type char byte_140C62275;
// 140C622F5: using guessed type char byte_140C622F5;
// 140C62375: using guessed type char byte_140C62375;
// 140C623F5: using guessed type char byte_140C623F5;

