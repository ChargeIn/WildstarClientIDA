#include "../winhttp.h"

//----- (0000000140450160) ----------------------------------------------------
__int64 __fastcall sub_140450160(__int64 a1, __int64 a2, __int64* a3)
{
	unsigned __int64 v3; // rdi
	unsigned int v6; // r14d
	__int64 v7; // rsi
	__int64 v8; // rax
	unsigned int v9; // ebx
	__int64 v10; // rax
	_DWORD* v11; // rbx
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rdx
	__int64 v15; // r9
	_DWORD* v16; // rcx

	v3 = 0i64;
	v6 = 1;
	if (*(_QWORD*)(a2 + 16))
	{
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(a2 + 8);
			if (!*(_DWORD*)(v8 + v7))
			{
				v9 = *(_DWORD*)(v8 + v7 + 4);
				if (qword_140C63840)
				{
					v10 = qword_140C63840(off_140A690C8, v9, qword_140C63858);
					goto LABEL_9;
				}
				if (!dword_140C64170 && (int)sub_1401E89C0() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v9);
				LABEL_9:
					if (v10)
					{
						v11 = (_DWORD*)(v10 + 76);
						if (*(_DWORD*)(v10 + 76))
						{
							sub_140003460(a3, (int*)(v10 + 76));
							v12 = *(_QWORD*)(qword_140C635F0 + 5584);
							v13 = 0i64;
							v14 = *(_QWORD*)(v12 + 160);
							if (!v14)
								goto LABEL_17;
							v15 = *(_QWORD*)(v12 + 152);
							v16 = (_DWORD*)(v15 + 8);
							while (*v16 != *v11)
							{
								++v13;
								v16 += 4;
								if (v13 >= v14)
									goto LABEL_17;
							}
							if (!*(_DWORD*)(v15 + 16 * v13 + 12))
								LABEL_17:
							v6 = 0;
						}
					}
				}
			}
			++v3;
			v7 += 16i64;
		} while (v3 < *(_QWORD*)(a2 + 16));
	}
	return v6;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;

