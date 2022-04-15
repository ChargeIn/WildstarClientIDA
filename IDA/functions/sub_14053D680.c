#include "../winhttp.h"

//----- (000000014053D680) ----------------------------------------------------
void __fastcall sub_14053D680(__int64 a1, __int64 a2)
{
	int v2; // ebp
	__int64 v5; // r14
	__int64 v6; // rbx
	int* v7; // rax
	int v8; // edi
	const void*** v9; // rbx
	unsigned __int64 v10; // r15
	__int64 v11; // r14
	__int64 v12; // rcx
	int v13; // r8d
	__int64 v14; // rax

	if (a2)
	{
		v2 = *(_DWORD*)a2;
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
		if (v5)
		{
			v6 = *(_QWORD*)(a1 + 72);
			if (v6)
			{
				while (*(_DWORD*)(v6 + 64) != v2)
				{
					v6 = *(_QWORD*)(v6 + 40);
					if (!v6)
						goto LABEL_6;
				}
				sub_1407188D0(v6, *(unsigned __int16*)(a2 + 6));
				v8 = 0;
				v10 = 0i64;
				if (*(_BYTE*)(a2 + 12))
				{
					v11 = 0i64;
					do
					{
						sub_140718120(v6, (unsigned int*)(v11 + *(_QWORD*)(a2 + 16)));
						++v10;
						v11 += 80i64;
					} while (v10 < *(unsigned __int8*)(a2 + 12));
				}
				sub_1407180C0(v6);
			}
			else
			{
			LABEL_6:
				v7 = sub_14018B280(104i64, 0);
				v8 = 0;
				v9 = (const void***)v7;
				if (v7)
				{
					*(_QWORD*)v7 = 0i64;
					*((_QWORD*)v7 + 1) = 0i64;
					*((_QWORD*)v7 + 2) = 0i64;
					*((_QWORD*)v7 + 3) = 0i64;
					*((_QWORD*)v7 + 4) = 0i64;
					*((_QWORD*)v7 + 5) = 0i64;
					*((_QWORD*)v7 + 7) = 0i64;
					v7[16] = 0;
					v7[17] = -1;
					v7[18] = 0;
					v7[19] = -1;
					v7[20] = 0;
					v7[22] = 8;
					*((_QWORD*)v7 + 12) = 0i64;
				}
				else
				{
					v9 = 0i64;
				}
				if ((int)sub_140717990((__int64)v9, a2, v5, (_DWORD*)a1) < 0)
				{
					if (v9)
					{
						sub_1407177B0(v9);
						sub_14018B900((__int64)v9, 0);
					}
					return;
				}
			}
			v12 = qword_140C65898;
			if (*(_QWORD*)(qword_140C65898 + 25744))
			{
				v13 = *(_DWORD*)(a1 + 340);
				if (v13 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64) && *(_DWORD*)(a2 + 8) == 1)
				{
					sub_14039C720(qword_140C65898, 6, v13, 0);
					v12 = qword_140C65898;
				}
			}
			v14 = *(_QWORD*)(v12 + 25744);
			if (v14)
			{
				LOBYTE(v8) = v2 == *(_DWORD*)(v14 + 8);
				if (v8)
				{
					if (*(_DWORD*)(a2 + 8) == 1)
						sub_14039C720(v12, 2, v2, 0);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

