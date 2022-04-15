#include "../winhttp.h"

//----- (00000001405B9FA0) ----------------------------------------------------
void __fastcall sub_1405B9FA0(char* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rax

	if (a1[28] < 0)
	{
		v2 = sub_1405BA0B0((__int64)a1);
		v3 = v2;
		if (v2)
		{
			v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v2 + 84));
			v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v3 + 80), v4);
			if (v5)
				(*(void(__fastcall**)(char*, const char*, __int64, __int64))(*(_QWORD*)a1 + 120i64))(a1, "iM", 4i64, v5);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

