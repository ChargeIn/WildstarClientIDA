#include "../winhttp.h"

//----- (000000014049E6B0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049E6B0(__int64 a1, __int64 a2, int a3, unsigned int a4, float a5)
{
	__int64 v6; // rax
	__int64 v7; // rax
	float v8; // xmm2_4
	__int64 v9; // rcx

	if (!qword_140C658F8)
		return a3 == 2;
	v6 = sub_140448420(a1, a4);
	if (!v6)
		return a3 == 2;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 168i64))(v6);
	v8 = 0.0;
	v9 = *(unsigned int*)(v7 + 4);
	if ((_DWORD)v9)
		v8 = (float)((float)*(int*)v7 * 100.0) / (float)(int)v9;
	return sub_1404A2010(v9, a3, v8, a5);
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

