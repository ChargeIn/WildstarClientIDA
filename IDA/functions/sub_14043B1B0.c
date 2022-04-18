#include "../winhttp.h"

//----- (000000014043B1B0) ----------------------------------------------------
__int64 __fastcall sub_14043B1B0(__int64 a1, float a2)
{
	int v2; // r8d
	float v3; // xmm0_4
	int v4; // r8d
	__int64 result; // rax

	if (*(float*)&dword_140C7CD6C > 0.0)
	{
		v2 = (int)*(float*)&dword_140C7CD6C;
		v3 = *(float*)&dword_140C7CD6C - a2;
		dword_140C7CD6C = LODWORD(v3);
		v4 = v2 % 5;
		if (v3 >= 0.0)
		{
			result = (unsigned int)(5 * ((int)v3 / 5));
			if ((int)v3 % 5 > v4 && !dword_140C7CD70)
				return sub_140051AF0(0, 56);
		}
		else
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Communicator_EndIncoming", &unk_1409D0B07);
			return sub_140437A10((_QWORD*)qword_140C658D8, 0x92u, 0, 0i64, 0, 0, 1);
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C7CD6C: using guessed type int dword_140C7CD6C;
// 140C7CD70: using guessed type int dword_140C7CD70;

