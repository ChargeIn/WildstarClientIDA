#include "../winhttp.h"

//----- (00000001401316D0) ----------------------------------------------------
__int64 __fastcall sub_1401316D0(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64* v3; // rdx
	unsigned __int64 v4; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = sub_140131630(a1, 1u);
	v3 = (unsigned __int64*)sub_14018F0E0(&v6, *(unsigned __int16**)(v2 + 1472))[1];
	if (v3)
	{
		v4 = -1i64;
		do
			++v4;
		while (*((_BYTE*)v3 + v4));
		sub_140058710((__int64)a1, v3, v4);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v7)
		sub_14018B900(v7, 0);
	return 1i64;
}

