#include "../winhttp.h"

//----- (000000014053E1B0) ----------------------------------------------------
__int64 __fastcall sub_14053E1B0(__int64 a1, unsigned int a2, int a3, int a4)
{
	int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // r13
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rcx
	int v14; // edx
	int v15; // r8d
	unsigned int v16; // edx
	__int64 v17; // rbx
	__int64 v18; // rbp
	int v19; // ecx
	int v20; // eax
	_WORD* v21; // rax
	_WORD* v22; // rax
	_QWORD* v23; // rcx
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	int v27; // eax
	__int64 result; // rax
	__int64 v29; // rbx
	__int64 v30; // rsi
	__int64 v31; // [rsp+40h] [rbp-28h] BYREF
	unsigned int v32; // [rsp+48h] [rbp-20h]

	if (a2 <= 0x14B)
		sub_140237240(a2);
	sub_1400035B0();
	v8 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64);
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v10 = v9;
	if (v9)
	{
		if ((*(_DWORD*)(a1 + 400) == 1 || v8 == 1) && (unsigned int)(v8 - 1) <= 1 && !*(_DWORD*)(a1 + 324))
			sub_14046B1E0(v9, *(_QWORD*)(a1 + 312), a1);
		if (v8 == 8)
		{
			v11 = *(_QWORD*)(a1 + 312);
			if (*(_QWORD*)(v11 + 88))
			{
				if (!*(_DWORD*)(a1 + 324) && *(_DWORD*)(a1 + 332))
					sub_14046B1E0(v10, v11, a1);
			}
		}
	}
	v12 = *(_QWORD*)(a1 + 528);
	*(_DWORD*)(a1 + 844) = a2;
	*(_DWORD*)(a1 + 336) = 5;
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 88i64))(v12);
		v13 = *(_QWORD*)(a1 + 528);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 528) = 0i64;
		}
	}
	if (a2 != 8)
		sub_14053FD20((const void***)a1);
	sub_14053FF40(a1, a4);
	if (((a2 - 6) & 0xFFFFFFFD) != 0)
	{
		v14 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64);
		if (((v14 - 2) & 0xFFFFFFFA) == 0 && v14 != 3)
		{
			if (*(_QWORD*)(qword_140C65898 + 25744))
			{
				v15 = *(_DWORD*)(a1 + 340);
				if (v15 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64) && (v14 != 6 || a3 && a3 != v15))
				{
					v16 = *(_DWORD*)(a1 + 112);
					if (!v16)
						v16 = *(_DWORD*)(a1 + 304);
					sub_1403BEF30((__int64*)qword_140C65898, v16, 1);
					sub_1403BDAC0(qword_140C65898);
				}
			}
		}
	}
	if (a2 != 7)
	{
		v17 = *(_QWORD*)(a1 + 456);
		if (v17)
		{
			do
			{
				v18 = *(_QWORD*)(v17 + 8);
				v19 = 1;
				if ((*(_BYTE*)(v17 + 896) & 2) != 0
					|| (v20 = *(_DWORD*)(v17 + 968), v20 == 3)
					|| v20 == 2
					&& ((v21 = *(_WORD**)(v17 + 832)) == 0i64 || !*v21)
					&& (v22 = *(_WORD**)(v17 + 880)) != 0i64
					&& *v22
					&& ((*(_DWORD*)(v17 + 960) + 1) & 0xFFFFFFFE) == 0)
				{
					v19 = 0;
				}
				if (a2 == 34 || !v19)
					sub_140624200(v17);
				if (*(_QWORD*)v17)
					**(_QWORD**)v17 = *(_QWORD*)(v17 + 8);
				v23 = *(_QWORD**)(v17 + 8);
				if (v23)
					*v23 = *(_QWORD*)v17;
				*(_QWORD*)v17 = 0i64;
				*(_QWORD*)(v17 + 8) = 0i64;
				v17 = v18;
			} while (v18);
		}
	}
	while (*(_QWORD*)(a1 + 72))
	{
		v24 = *(_QWORD*)(a1 + 72);
		if (v24)
		{
			sub_1407177B0(*(const void****)(a1 + 72));
			sub_14018B900(v24, 0);
		}
	}
	if (v10)
	{
		v25 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v10 + 5632));
		if (!v25 && *(_QWORD*)(qword_140C65898 + 120) == v10)
		{
			v26 = sub_14039DF50(qword_140C65898);
			if (v26)
				v25 = sub_1404695E0(v26);
			else
				v25 = 0i64;
		}
		if (v25 == a1)
		{
			v27 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64);
			if (v27 != 2 && v27 != 7)
				sub_1404698A0(v10);
		}
	}
	v32 = a2;
	v31 = a1;
	result = *(_QWORD*)(qword_140C65898 + 25744);
	if (result)
	{
		result = *(unsigned int*)(result + 8);
		if (*(_DWORD*)(a1 + 340) == (_DWORD)result)
		{
			v29 = *(_QWORD*)(qword_140C65898 + 27864);
			if (v29)
			{
				do
				{
					v30 = *(_QWORD*)(v29 + 40);
					result = (__int64)&v31;
					*(_QWORD*)(v29 + 48) = 0i64;
					*(_QWORD*)(v29 + 56) = &v31;
					if (*(_DWORD*)v29)
					{
						if (*(_DWORD*)v29 == 1)
							result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(v29 + 16))(
								*(_QWORD*)(v29 + 8),
								*(_QWORD*)(v29 + 24));
					}
					else
					{
						result = (*(__int64(__fastcall**)(_QWORD))(v29 + 16))(*(_QWORD*)(v29 + 8));
					}
					*(_QWORD*)(v29 + 48) = 0i64;
					*(_QWORD*)(v29 + 56) = 0i64;
					v29 = v30;
				} while (v30);
			}
		}
	}
	return result;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

