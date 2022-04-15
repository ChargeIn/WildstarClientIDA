#include "../winhttp.h"

//----- (00000001403DC280) ----------------------------------------------------
__int64 __fastcall sub_1403DC280(__int64 a1, int* a2)
{
	__int64 v4; // rax
	_DWORD* v5; // r8
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // rax

	v4 = sub_1403D90D0(a1, *a2);
	v5 = (_DWORD*)v4;
	if (v4)
	{
		if (*(_QWORD*)(a1 + 120) != v4)
		{
			v6 = a2[1];
			if (v5[3454] != v6)
			{
				v7 = qword_140C65898;
				v5[3454] = v6;
				v5[1578] = 1;
				v8 = *(_QWORD*)(v7 + 120);
				if (v8)
				{
					if (v5[2] == *(_DWORD*)(v8 + 8))
						*(_DWORD*)(v7 + 28568) = 1;
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

