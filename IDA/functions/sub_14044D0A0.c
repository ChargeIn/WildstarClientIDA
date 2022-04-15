#include "../winhttp.h"

//----- (000000014044D0A0) ----------------------------------------------------
void __fastcall sub_14044D0A0(__int64 a1, __int64* a2, __int64 a3)
{
	__int64* v3; // r14
	__int64 v4; // rsi
	unsigned __int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // esi
	__int64 v10; // rax
	__int64 v11; // r11
	__int64 v12; // rbx
	unsigned __int64 v13; // r9
	unsigned int v14; // r10d
	unsigned __int64 v15; // r8
	__int64 v16; // rdi
	unsigned __int64 v17; // rdx
	unsigned int v18; // eax
	__int64 v19; // r13
	unsigned __int64 v20; // rdi
	int* v21; // rax
	__int64 v22; // rsi
	int* v23; // rdx
	unsigned __int64 v24; // r15
	__int64 v25; // r14
	__int64 v26; // rax
	__int64 v27; // rdx
	int v28; // eax
	__int64 v29; // rdi
	int* v30; // rax
	int* v31; // r14
	__int64 v32; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v35; // rdi
	__int64 v36; // rbx
	char v39[8]; // [rsp+38h] [rbp-29h] BYREF
	int* v40; // [rsp+40h] [rbp-21h]
	__int64 v41; // [rsp+48h] [rbp-19h]
	__int64 v42; // [rsp+58h] [rbp-9h] BYREF
	unsigned __int64 v43; // [rsp+60h] [rbp-1h]
	unsigned int v44; // [rsp+68h] [rbp+7h]

	v3 = a2;
	v4 = a1;
	v41 = 0i64;
	v40 = sub_14018B280(40i64, 0);
	*(_BYTE*)v40 = 0;
	*((_QWORD*)v40 + 1) = 0i64;
	v6 = 0i64;
	*((_QWORD*)v40 + 2) = v40;
	*((_QWORD*)v40 + 3) = v40;
	if (!*(_QWORD*)(a3 + 16))
		goto LABEL_13;
	v7 = 0i64;
	do
	{
		v8 = *(_QWORD*)(a3 + 8);
		if (*(_DWORD*)(v7 + v8))
			goto LABEL_11;
		v9 = *(_DWORD*)(v7 + v8 + 4);
		if (qword_140C63840)
		{
			v10 = qword_140C63840(off_140A690C8, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C64170 || (int)sub_1401E89C0() < 0)
				goto LABEL_11;
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v9);
		}
		if (v10)
			sub_1400293C0((__int64)v39, (__int64)&v42, (int*)(v10 + 56));
	LABEL_11:
		++v6;
		v7 += 16i64;
	} while (v6 < *(_QWORD*)(a3 + 16));
	v4 = a1;
LABEL_13:
	v11 = (__int64)v40;
	v12 = *((_QWORD*)v40 + 2);
	if ((int*)v12 == v40)
		goto LABEL_57;
	while (2)
	{
		v13 = *(_QWORD*)(v4 + 40);
		v14 = *(_DWORD*)(v12 + 32);
		v15 = 0i64;
		v44 = v14;
		if (!v13)
			goto LABEL_48;
		v16 = *(_QWORD*)(v4 + 32);
		while (2)
		{
			v17 = v15 + ((v13 - v15) >> 1);
			v18 = **(_DWORD**)(v16 + 40 * v17);
			if (v14 < v18)
			{
				v13 = v15 + ((v13 - v15) >> 1);
			LABEL_20:
				if (v15 >= v13)
					goto LABEL_48;
				continue;
			}
			break;
		}
		if (v14 > v18)
		{
			v15 = v17 + 1;
			goto LABEL_20;
		}
		v19 = v16 + 40 * v17;
		if (v19)
		{
			v20 = *(_QWORD*)(v19 + 16);
			v43 = v20;
			if (v20)
			{
				v21 = sub_14018B280(4 * v20 + 16, 0);
				if (v21)
				{
					*(_QWORD*)v21 = off_140B55060;
					*((_QWORD*)v21 + 1) = v20;
					v22 = (__int64)(v21 + 4);
				}
				else
				{
					v22 = 16i64;
				}
			}
			else
			{
				v22 = 0i64;
			}
			v23 = *(int**)(v19 + 8);
			v42 = v22;
			sub_1407DB590((int*)v22, v23, 4 * v20);
			v24 = 0i64;
			if (*(_QWORD*)(a3 + 16))
			{
				v25 = 0i64;
				do
				{
					v26 = *(_QWORD*)(a3 + 8);
					if (!*(_DWORD*)(v25 + v26))
					{
						v27 = 0i64;
						if (v20)
						{
							v28 = *(_DWORD*)(v25 + v26 + 4);
							while (*(_DWORD*)(v22 + 4 * v27) != v28)
							{
								if (++v27 >= v20)
									goto LABEL_37;
							}
							sub_1401C2F20((__int64)&v42, v27);
							v20 = v43;
							v22 = v42;
						}
					}
				LABEL_37:
					++v24;
					v25 += 16i64;
				} while (v24 < *(_QWORD*)(a3 + 16));
				v3 = a2;
			}
			if (!v20)
			{
				v29 = v3[1];
				v30 = sub_14018DB00(*v3, v29 + 1, 8i64);
				v31 = v30;
				*(_QWORD*)&v30[2 * v29] = v19;
				if ((int*)*a2 != v30)
				{
					sub_1407DB590(v30, (int*)*a2, 8 * a2[1]);
					if (*a2)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
					*a2 = (__int64)v31;
				}
				a2[1] = v29 + 1;
			}
			if (v22)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
			v4 = a1;
			v3 = a2;
			v11 = (__int64)v40;
		}
	LABEL_48:
		v32 = *(_QWORD*)(v12 + 24);
		if (v32)
		{
			v12 = *(_QWORD*)(v12 + 24);
			for (i = *(_QWORD*)(v32 + 16); i; i = *(_QWORD*)(i + 16))
				v12 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v12 = j;
			if (*(_QWORD*)(v12 + 24) != j)
				v12 = j;
		}
		if (v12 != v11)
			continue;
		break;
	}
LABEL_57:
	if (v41)
	{
		v35 = *(_QWORD*)(v11 + 8);
		if (v35)
		{
			do
			{
				sub_1400083B0((__int64)v39, *(_QWORD*)(v35 + 24));
				v36 = *(_QWORD*)(v35 + 16);
				sub_14018B900(v35, 0);
				v35 = v36;
			} while (v36);
			v11 = (__int64)v40;
		}
		*(_QWORD*)(v11 + 16) = v11;
		*((_QWORD*)v40 + 1) = 0i64;
		*((_QWORD*)v40 + 3) = v40;
		v11 = (__int64)v40;
		v41 = 0i64;
	}
	sub_14018B900(v11, 0);
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 14044D0A0: using guessed type char var_80[8];

