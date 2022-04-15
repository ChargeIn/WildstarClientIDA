#include "../winhttp.h"

//----- (00000001408992A0) ----------------------------------------------------
char __fastcall sub_1408992A0(__int64* a1, int a2)
{
	__int64 v3; // r13
	__int64 v4; // rax
	__int64 v5; // r14
	__int64 v6; // rdx
	__int64 v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rbp
	__int64 v10; // r12
	__int64 v11; // rcx
	int v13; // [rsp+58h] [rbp+10h]

	v3 = (unsigned int)(a2 + *((_DWORD*)a1 + 4));
	v13 = a2 + *((_DWORD*)a1 + 4);
	v4 = sub_1408819F0(dword_140C10F20, 24 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (a1[1] - *a1) / 24;
		v7 = (unsigned int)v6;
		if (*a1)
		{
			if ((_DWORD)v6)
			{
				v8 = v4 + 12;
				v9 = (unsigned int)v6;
				v10 = -12 - v4;
				do
				{
					if (v8 != 12)
					{
						sub_14087B9A0((_QWORD*)(v8 - 12));
						*(_QWORD*)(v8 - 12) = off_1409A9830;
						*(_DWORD*)v8 = -1;
						*(_QWORD*)(v8 + 4) = 0i64;
					}
					v11 = *a1;
					*(_DWORD*)(v8 - 4) = *(_DWORD*)(*a1 + v10 + v8 + 8);
					*(_DWORD*)v8 = *(_DWORD*)(v11 + v8 - v5);
					*(_QWORD*)(v8 + 4) = *(_QWORD*)(v11 + v10 + v8 + 16);
					(**(void(__fastcall***)(__int64, _QWORD))(v10 + v8 + *a1))(v10 + v8 + *a1, 0i64);
					v8 += 24i64;
					--v9;
				} while (v9);
				LODWORD(v3) = v13;
			}
			sub_140881720(dword_140C10F20, *a1);
		}
		*a1 = v5;
		*((_DWORD*)a1 + 4) = v3;
		LOBYTE(v4) = 1;
		a1[1] = v5 + 24 * v7;
	}
	return v4;
}
// 1409A9830: using guessed type __int64 (__fastcall *off_1409A9830[7])();
// 140C10F20: using guessed type int dword_140C10F20;

