#include "../winhttp.h"

//----- (000000014040BB10) ----------------------------------------------------
char __fastcall sub_14040BB10(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4, int a5)
{
	unsigned int v7; // r14d
	float v8; // xmm8_4
	float v9; // xmm6_4
	__int64 v10; // rdi
	float v11; // xmm9_4
	__int64 v12; // rcx
	int v13; // ebx
	unsigned int v14; // esi
	__int64 v15; // rax
	int v16; // ecx
	unsigned int v17; // ecx
	_DWORD* v18; // rax

	v7 = 0;
	v8 = *(float*)(a1 + 4);
	do
	{
		v9 = 0.0;
		if (v8 > 0.0)
			v9 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * v8;
		v10 = 0i64;
		v8 = 0.0;
		while (v10 < *(_QWORD*)(a1 + 16))
		{
			v11 = v9;
			v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v10);
			v13 = *(_DWORD*)(v12 + 12);
			v14 = *(_DWORD*)(v12 + 16);
			if (!v7)
				v9 = v9 - *(float*)(v12 + 8);
			if (v13 == 2)
				goto LABEL_28;
			if (v13 != 1)
				goto LABEL_18;
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A6DEE0, v14, qword_140C63858);
			}
			else
			{
				if (dword_140C64070 || (int)sub_140247760() < 0)
					goto LABEL_28;
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 24i64))(qword_140C64930, v14);
			}
			if (v15)
			{
				if ((*(_BYTE*)(v15 + 36) & 4) != 0)
				{
					v16 = *(_DWORD*)(v15 + 52);
					if (!v16 || (v16 & a5) != 0)
					{
					LABEL_18:
						v17 = 0;
						v18 = a3;
						while (v13 != 1 || *v18 != 1 || v14 != v18[1])
						{
							++v17;
							v18 += 2;
							if (v17 >= 5)
							{
								if (v7 == 1)
									v9 = v9 - *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v10) + 8i64);
								if (v9 >= 0.0 || v11 < 0.0)
								{
									v8 = v8 + *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v10) + 8i64);
									break;
								}
								return v10 + 1;
							}
						}
					}
				}
			}
		LABEL_28:
			++v10;
		}
		++v7;
	} while (v7 < 2);
	return 0;
}
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140C77890: using guessed type __int64 qword_140C77890;

