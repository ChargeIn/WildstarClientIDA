#include "../winhttp.h"

//----- (00000001400590E0) ----------------------------------------------------
void __fastcall sub_1400590E0(_QWORD* a1, int a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax

	if (a2 < 2)
	{
		if (!a2)
		{
			v4 = a1[2];
			v5 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_140C635FE, 0i64);
			*(_DWORD*)(v4 + 8) = 4;
			*(_QWORD*)v4 = v5;
			a1[2] += 16i64;
		}
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		sub_14005F210((__int64)a1, a2, ((__int64)(a1[2] - a1[3]) >> 4) - 1);
		a1[2] += -16i64 * (a2 - 1);
	}
}

