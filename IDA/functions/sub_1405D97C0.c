#include "../winhttp.h"

//----- (00000001405D97C0) ----------------------------------------------------
void __fastcall sub_1405D97C0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	_QWORD* v4; // r9
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r8
	_QWORD* v7; // rax

	if (*(_QWORD*)(a1 + 336))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		if (v2)
		{
			v3 = *(_QWORD*)(a1 + 336);
			if (v3)
			{
				v4 = (_QWORD*)(v2 + 5648);
				v5 = 0i64;
				v6 = *(_QWORD*)(v2 + 5656);
				if (v6)
				{
					v7 = (_QWORD*)*v4;
					while (*v7 != v3)
					{
						++v5;
						++v7;
						if (v5 >= v6)
							goto LABEL_10;
					}
					sub_140007270((__int64)v4, v5);
				}
			}
		}
	LABEL_10:
		sub_14018B900(*(_QWORD*)(a1 + 336), 0);
		*(_QWORD*)(a1 + 336) = 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

