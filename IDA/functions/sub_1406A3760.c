#include "../winhttp.h"

//----- (00000001406A3760) ----------------------------------------------------
__int64 __fastcall sub_1406A3760(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // r14
	int* v7; // rax
	int* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rcx
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // esi
	int* v16; // rax
	int* v17; // rax
	_QWORD* v18; // rax
	__int64 v19; // rcx
	int* v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64* v24; // r8
	unsigned int v25; // edx
	_DWORD* v26; // rax
	__int64 v28; // [rsp+30h] [rbp-D0h] BYREF
	int v29; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v30)(); // [rsp+40h] [rbp-C0h] BYREF
	char v31[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v32; // [rsp+50h] [rbp-B0h]
	_WORD* v33; // [rsp+58h] [rbp-A8h]
	__int128 v34; // [rsp+100h] [rbp+0h]
	int* v35; // [rsp+110h] [rbp+10h]
	__int64 v36; // [rsp+148h] [rbp+48h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	v4 = 0i64;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	v6 = sub_1405A8A40(v3, *(_DWORD*)(v4 + 8));
	if (!v6)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	if (!(unsigned int)sub_1405A4850(v5, 85))
	{
		sub_1400B6F30((__int64)&v30);
		v30 = off_140B69230;
		v35 = 0i64;
		v34 = 0i64;
		v7 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v34 = v7;
		*((_QWORD*)&v34 + 1) = v7;
		v35 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v8 = sub_14018B280(96i64, 0);
		if (v8)
			v9 = (_QWORD*)sub_1404DB7E0((__int64)v8, *(_QWORD*)(qword_140C65898 + 120));
		else
			v9 = 0i64;
		sub_1400B7480((__int64)&v30, v9);
		v11 = (int*)sub_14034BDD0(v10, 651166);
		if (v11)
		{
			v12 = 0i64;
			if (*(_WORD*)v11)
			{
				do
					++v12;
				while (*((_WORD*)v11 + v12));
			}
			sub_14001C480((__int64)v31, v11, (int*)((char*)v11 + 2 * v12));
		}
		else if (v32 != v33)
		{
			*v32 = 0;
			v33 = v32;
		}
		v13 = sub_1400B7660(&v30);
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"GenericFloater",
			"US",
			*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
			*(_QWORD*)(v13 + 8));
		*(_DWORD*)(a1[2] + 8i64) = 0;
		v14 = v34;
		a1[2] += 16i64;
		if (v14)
			sub_14018B900(v14, 0);
	LABEL_19:
		sub_1400B7390(&v30);
		return 1i64;
	}
	v15 = sub_140552550(v6, -1);
	if (v15)
	{
		sub_1400B6F30((__int64)&v30);
		v30 = off_140B69230;
		v35 = 0i64;
		v34 = 0i64;
		v16 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v34 = v16;
		*((_QWORD*)&v34 + 1) = v16;
		v35 = v16 + 4;
		if (v16)
			*(_WORD*)v16 = 0;
		v17 = sub_14018B280(96i64, 0);
		if (v17)
			v18 = (_QWORD*)sub_1404DB7E0((__int64)v17, *(_QWORD*)(qword_140C65898 + 120));
		else
			v18 = 0i64;
		sub_1400B7480((__int64)&v30, v18);
		if (v15 == 3)
		{
			v20 = (int*)sub_14034BDD0(v19, 99852);
			if (!v20)
			{
				if (v32 != v33)
				{
					*v32 = 0;
					v33 = v32;
				}
				goto LABEL_46;
			}
			v21 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v21;
				while (*((_WORD*)v20 + v21));
			}
		}
		else if (v15 == 15)
		{
			v20 = (int*)sub_14034BDD0(v19, 344071);
			if (!v20)
			{
				if (v32 != v33)
				{
					*v32 = 0;
					v33 = v32;
				}
				goto LABEL_46;
			}
			v21 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v21;
				while (*((_WORD*)v20 + v21));
			}
		}
		else
		{
			v20 = (int*)sub_14034BDD0(v19, 99853);
			if (!v20)
			{
				if (v32 != v33)
				{
					*v32 = 0;
					v33 = v32;
				}
				goto LABEL_46;
			}
			v21 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v21;
				while (*((_WORD*)v20 + v21));
			}
		}
		sub_14001C480((__int64)v31, v20, (int*)((char*)v20 + 2 * v21));
	LABEL_46:
		v22 = sub_1400B7660(&v30);
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"GenericFloater",
			"US",
			*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
			*(_QWORD*)(v22 + 8));
		*(_DWORD*)(a1[2] + 8i64) = 0;
		v23 = v34;
		a1[2] += 16i64;
		if (v23)
			sub_14018B900(v23, 0);
		goto LABEL_19;
	}
	if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v6 + 8)) == 4)
	{
		v24 = &v36;
		v25 = 869;
		LODWORD(v36) = *(_DWORD*)(v4 + 8);
	}
	else
	{
		v36 = -4294966996i64;
		v28 = 0i64;
		v29 = 0;
		v29 = *(_DWORD*)(v4 + 8);
		v24 = &v28;
		v28 = -4294966996i64;
		v25 = 859;
	}
	sub_1403F4900(qword_140C65898, v25, (__int64)v24);
	v26 = (_DWORD*)a1[2];
	*v26 = 1;
	v26[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}
// 1406A37A1: variable 'v3' is possibly undefined
// 1406A37C5: variable 'v5' is possibly undefined
// 1406A3850: variable 'v10' is possibly undefined
// 1406A39AA: variable 'v19' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1406A3760: using guessed type char var_E8[8];

