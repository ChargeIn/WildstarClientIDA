#include "../winhttp.h"

//----- (0000000140616C10) ----------------------------------------------------
float __fastcall sub_140616C10(__int64 a1, int a2)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v5; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = *(_QWORD*)(a1 + 48);
	v3 = 0;
	v5 = *(_QWORD*)(v2 + 16);
	if (v5 != v2)
	{
		do
		{
			if (*(_DWORD*)(v5 + 36) == a2)
			{
				v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v5 + 32));
				if (v7)
				{
					if (a2)
					{
						if (a2 == 1)
							++v3;
					}
					else
					{
						v3 += (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 64i64))(v7);
					}
				}
			}
			v8 = *(_QWORD*)(v5 + 24);
			if (v8)
			{
				v5 = *(_QWORD*)(v5 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v5 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = j;
				if (*(_QWORD*)(v5 + 24) != j)
					v5 = j;
			}
		} while (v5 != *(_QWORD*)(a1 + 48));
	}
	return (float)v3;
}
// 140C65898: using guessed type __int64 qword_140C65898;

