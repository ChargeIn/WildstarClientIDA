#include "../winhttp.h"

//----- (000000014053F090) ----------------------------------------------------
unsigned __int64 __fastcall sub_14053F090(_DWORD* a1, __int64 a2, double a3, double a4)
{
	int v5; // edx
	unsigned __int64 result; // rax
	unsigned __int64 v8; // r14
	__int64 v9; // r8
	__int64 v10; // r15
	int* v11; // rsi
	int v12; // edi
	__int64 v13; // rdx
	int* v14; // rax
	__int64 v15; // rbx
	int* v16; // rdx
	_WORD* v17; // rax
	__int64 v18; // rax
	int v19; // r9d
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // eax
	int v24; // [rsp+20h] [rbp-118h]
	__int64(__fastcall * *v25)(); // [rsp+30h] [rbp-108h] BYREF
	char v26[8]; // [rsp+38h] [rbp-100h] BYREF
	_WORD* v27; // [rsp+40h] [rbp-F8h]
	_WORD* v28; // [rsp+48h] [rbp-F0h]
	int* v29; // [rsp+F0h] [rbp-48h]
	int* v30; // [rsp+F8h] [rbp-40h]
	int* v31; // [rsp+100h] [rbp-38h]

	v5 = a1[85];
	a1[84] = 6;
	result = sub_1403D90D0(qword_140C65898, v5);
	v8 = 0i64;
	if (*(_DWORD*)(a2 + 4))
	{
		v9 = qword_140C65898;
		v10 = 0i64;
		do
		{
			v11 = (int*)(v10 + *(_QWORD*)(a2 + 8));
			v12 = *v11;
			sub_1403D90D0(v9, *v11);
			if (v11[1])
			{
				sub_1400B6F30((__int64)&v25);
				v25 = off_140B69230;
				v14 = sub_14018B280(16i64, 0);
				v15 = (__int64)v14;
				v29 = v14;
				v30 = v14;
				v31 = v14 + 4;
				if (v14)
					*(_WORD*)v14 = 0;
				v16 = (int*)sub_14034BDD0((__int64)(v14 + 4), 12335);
				if (v16)
				{
					v18 = 0i64;
					if (*(_WORD*)v16)
					{
						do
							++v18;
						while (*((_WORD*)v16 + v18));
					}
					sub_14001C480((__int64)v26, v16, (int*)((char*)v16 + 2 * v18));
					v15 = (__int64)v29;
				}
				else
				{
					v17 = v27;
					if (v27 != v28)
					{
						*v27 = 0;
						v28 = v17;
					}
				}
				if (v15)
					sub_14018B900(v15, 0);
				sub_1400B7390(&v25);
			}
			else
			{
				if (!*(_QWORD*)(qword_140C65898 + 120)
					|| (v19 = 16, v12 != *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64)))
				{
					v19 = 17;
				}
				sub_140542A30((__int64)a1, v13, v12, v19, v24, v11[2]);
			}
			v9 = qword_140C65898;
			v20 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v20 && a1[85] == *(_DWORD*)(v20 + 8) && v12 == a1[86] && !v11[1])
			{
				sub_14039C720(a1[85] == *(_DWORD*)(v20 + 8), 0, v12, 0);
				v9 = qword_140C65898;
			}
			v21 = *(_QWORD*)(v9 + 25744);
			if (v21 && v12 == *(_DWORD*)(*(_QWORD*)(v9 + 25744) + 8i64))
			{
				if (!v11[1])
				{
					sub_14039C720(v21, 4, v12, 0);
					v9 = qword_140C65898;
				}
				v22 = *(_QWORD*)(v9 + 25744);
				if (!*(_DWORD*)(v22 + 264) && (!v22 || a1[85] != *(_DWORD*)(v22 + 8)))
				{
					v23 = dword_140C45EC0;
					if (*(_DWORD*)qword_140C63750 < dword_140C45EC0)
						v23 = *(_DWORD*)qword_140C63750;
					if (!*((_BYTE*)&dword_140C45ED0 + v23))
					{
						sub_14055B0E0(v9, a1[85], a3, a4);
						v9 = qword_140C65898;
					}
				}
			}
			result = *(unsigned int*)(a2 + 4);
			++v8;
			v10 += 12i64;
		} while (v8 < result);
	}
	return result;
}
// 14053F209: variable 'v13' is possibly undefined
// 14053F209: variable 'v24' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C45EC0: using guessed type int dword_140C45EC0;
// 140C45ED0: using guessed type int dword_140C45ED0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14053F090: using guessed type char var_100[8];

