#include "../winhttp.h"

//----- (0000000140436B60) ----------------------------------------------------
void __fastcall sub_140436B60(_QWORD* a1)
{
	unsigned __int64 v2; // r15
	__int64 v3; // r14
	__int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rsi

	v2 = 0i64;
	if (a1[1])
	{
		do
		{
			v3 = a1[2] + 8 * v2;
			while (*(_QWORD*)v3)
			{
				v4 = *(_QWORD*)v3;
				*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
				if (*(_QWORD*)(v4 + 40))
				{
					v5 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8i64);
					if (v5)
					{
						do
						{
							sub_1400294C0(v4 + 24, *(_QWORD**)(v5 + 24));
							v6 = *(_QWORD*)(v5 + 56);
							v7 = *(_QWORD*)(v5 + 16);
							if (v6)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
							sub_14018B900(v5, 0);
							v5 = v7;
						} while (v7);
					}
					*(_QWORD*)(*(_QWORD*)(v4 + 32) + 16i64) = *(_QWORD*)(v4 + 32);
					*(_QWORD*)(*(_QWORD*)(v4 + 32) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v4 + 32) + 24i64) = *(_QWORD*)(v4 + 32);
					*(_QWORD*)(v4 + 40) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v4 + 32), 0);
				sub_14018B900(v4, 0);
			}
			++v2;
		} while (v2 < a1[1]);
		*a1 = 0i64;
	}
	else
	{
		*a1 = 0i64;
	}
}

