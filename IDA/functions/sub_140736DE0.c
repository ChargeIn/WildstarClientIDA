#include "../winhttp.h"

//----- (0000000140736DE0) ----------------------------------------------------
__int64 __fastcall sub_140736DE0(__int64 a1)
{
	__int64 v1; // r13
	unsigned int v2; // r12d
	__int64 v3; // r14
	int v4; // ebp
	unsigned int v5; // eax
	unsigned int v6; // r15d
	__int64 v7; // rdx
	__int64 v8; // rcx
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // r14
	unsigned int* v12; // rdi
	__int64 i; // rsi
	unsigned int v14; // ebx
	_DWORD* v15; // rax
	unsigned int v16; // ecx
	unsigned int v17; // r8d
	__int64 v18; // rdi
	unsigned __int64 v19; // rsi
	__int64 v20; // rax
	unsigned int v21; // ebx
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v25; // [rsp+20h] [rbp-48h] BYREF
	__int64 v26; // [rsp+28h] [rbp-40h]
	__int64 v27; // [rsp+30h] [rbp-38h]
	__int64 v28; // [rsp+38h] [rbp-30h]

	v1 = qword_140C7DFE0;
	v2 = 0;
	v3 = a1;
	v4 = 0;
	if (!qword_140C7DFE0)
		goto LABEL_40;
	v5 = *(_DWORD*)(qword_140C7DFE0 + 272);
	v6 = 0;
	if (!v5)
		goto LABEL_28;
	do
	{
		v7 = *(_QWORD*)(v1 + 232);
		if (v7)
		{
			if (v6 < v5)
			{
				v8 = v7 + 192i64 * v6;
				if (v8)
				{
					v9 = *(_DWORD*)(v8 + 12);
					if (qword_140C63840)
					{
						v10 = qword_140C63840(off_140A6A980, v9, qword_140C63858);
					}
					else
					{
						if (dword_140C65068 || (int)sub_140206A00() < 0)
							goto LABEL_26;
						v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64258 + 24i64))(qword_140C64258, v9);
					}
					v11 = v10;
					if (v10)
					{
						v12 = (unsigned int*)(v10 + 72);
						for (i = 5i64; i; --i)
						{
							v14 = *v12;
							if (*v12)
							{
								if (qword_140C63840)
								{
									v15 = (_DWORD*)qword_140C63840(off_140A6A7F8, v14, qword_140C63858);
								LABEL_19:
									if (v15 && v15[1] == 4)
									{
										v16 = v15[2];
										if (*(_DWORD*)(v11 + 128) == 5)
										{
											v17 = v15[8];
											if (v17)
												v16 /= v17;
										}
										v4 += v16;
									}
									goto LABEL_25;
								}
								if (!dword_140C63E00 && (int)sub_140204C40() >= 0)
								{
									v15 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C88 + 24i64))(
										qword_140C64C88,
										v14);
									goto LABEL_19;
								}
							}
						LABEL_25:
							++v12;
						}
					}
				}
			}
		}
	LABEL_26:
		v5 = *(_DWORD*)(v1 + 272);
		++v6;
	} while (v6 < v5);
	v3 = a1;
LABEL_28:
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	sub_1405ACF20(v1, &v25, 6);
	v18 = v26;
	v19 = (v27 - v26) / 104;
	if (v19)
	{
		v20 = 0i64;
		while (1)
		{
			v21 = *(_DWORD*)(104 * v20 + v18 + 76);
			if (qword_140C63840)
				break;
			if (!dword_140C646A8 && (int)sub_140203B40() >= 0)
			{
				v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65008 + 24i64))(qword_140C65008, v21);
			LABEL_35:
				if (v22)
					v4 += *(_DWORD*)(v22 + 24);
			}
			v20 = ++v2;
			if (v2 >= v19)
				goto LABEL_38;
		}
		v22 = qword_140C63840(off_140A6A718, v21, qword_140C63858);
		goto LABEL_35;
	}
LABEL_38:
	if (v18)
		sub_14018B900(v18, 0);
LABEL_40:
	v23 = *(_QWORD*)(v3 + 16);
	*(_DWORD*)(v23 + 8) = 3;
	*(double*)v23 = (double)v4;
	*(_QWORD*)(v3 + 16) += 16i64;
	return 1i64;
}
// 140A6A718: using guessed type wchar_t *off_140A6A718[2];
// 140A6A7F8: using guessed type wchar_t *off_140A6A7F8[2];
// 140A6A980: using guessed type wchar_t *off_140A6A980[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E00: using guessed type int dword_140C63E00;
// 140C64258: using guessed type __int64 qword_140C64258;
// 140C646A8: using guessed type int dword_140C646A8;
// 140C64C88: using guessed type __int64 qword_140C64C88;
// 140C65008: using guessed type __int64 qword_140C65008;
// 140C65068: using guessed type int dword_140C65068;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

