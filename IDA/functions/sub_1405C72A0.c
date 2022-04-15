#include "../winhttp.h"

//----- (00000001405C72A0) ----------------------------------------------------
void __fastcall sub_1405C72A0(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	unsigned __int64 v4; // r10
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rcx
	_QWORD* v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rcx
	_QWORD* v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rcx
	_QWORD* v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rcx
	_QWORD* v24; // rdx
	__int64 v25; // rdx
	_QWORD* v26; // rcx
	_QWORD* v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx

	*a1 = (__int64)off_140B6DCE0;
	if (qword_140C65898 && *(__int64**)(qword_140C65898 + 5352) == a1)
	{
		*(_QWORD*)(qword_140C65898 + 5352) = 0i64;
		switch ((*(unsigned int(__fastcall**)(__int64*))(*a1 + 8))(a1))
		{
		case 1u:
			if (*((_DWORD*)a1 + 81))
			{
				v2 = sub_140584690();
				v3 = v2;
				if (!v2)
					break;
				v4 = *(_QWORD*)(v2 + 656);
				v5 = 0i64;
				do
				{
					if (v5 >= v4)
						goto LABEL_16;
					v6 = *(_QWORD*)(v3 + 648);
					v7 = *((_DWORD*)a1 + 80);
				} while (*(_DWORD*)(v6 + 8 * v5++) != v7);
				sub_140399D40(v6, v7);
			}
			else
			{
				(*(void(__fastcall**)(__int64*, __int64))(*a1 + 72))(a1, 3i64);
			}
			break;
		case 2u:
		case 0xCu:
			break;
		case 7u:
			sub_14039DFB0();
			break;
		case 9u:
			(*(void(__fastcall**)(__int64*, __int64))(*a1 + 88))(a1, 3i64);
			goto LABEL_15;
		case 0xBu:
			sub_1403D90D0(qword_140C65898, *((_DWORD*)a1 + 128));
			break;
		default:
		LABEL_15:
			(*(void(__fastcall**)(__int64*, __int64))(*a1 + 80))(a1, 3i64);
			break;
		}
	}
LABEL_16:
	sub_1403BDAC0(qword_140C65898);
	sub_1405CA990(v9, a1 + 52);
	sub_1405CA990(v10, a1 + 51);
	v11 = a1[43];
	if (v11)
	{
		v12 = *(_QWORD**)(v11 + 32);
		if (v12)
			*v12 = *(_QWORD*)(v11 + 40);
		v13 = *(_QWORD*)(v11 + 40);
		if (v13)
			*(_QWORD*)(v13 + 32) = *(_QWORD*)(v11 + 32);
		*(_QWORD*)(v11 + 32) = 0i64;
		*(_QWORD*)(v11 + 40) = 0i64;
		sub_14018B900(v11, 0);
	}
	v14 = a1[44];
	if (v14)
	{
		v15 = *(_QWORD**)(v14 + 32);
		if (v15)
			*v15 = *(_QWORD*)(v14 + 40);
		v16 = *(_QWORD*)(v14 + 40);
		if (v16)
			*(_QWORD*)(v16 + 32) = *(_QWORD*)(v14 + 32);
		*(_QWORD*)(v14 + 32) = 0i64;
		*(_QWORD*)(v14 + 40) = 0i64;
		sub_14018B900(v14, 0);
	}
	v17 = a1[45];
	if (v17)
	{
		v18 = *(_QWORD**)(v17 + 32);
		if (v18)
			*v18 = *(_QWORD*)(v17 + 40);
		v19 = *(_QWORD*)(v17 + 40);
		if (v19)
			*(_QWORD*)(v19 + 32) = *(_QWORD*)(v17 + 32);
		*(_QWORD*)(v17 + 32) = 0i64;
		*(_QWORD*)(v17 + 40) = 0i64;
		sub_14018B900(v17, 0);
	}
	v20 = a1[46];
	if (v20)
	{
		v21 = *(_QWORD**)(v20 + 32);
		if (v21)
			*v21 = *(_QWORD*)(v20 + 40);
		v22 = *(_QWORD*)(v20 + 40);
		if (v22)
			*(_QWORD*)(v22 + 32) = *(_QWORD*)(v20 + 32);
		*(_QWORD*)(v20 + 32) = 0i64;
		*(_QWORD*)(v20 + 40) = 0i64;
		sub_14018B900(v20, 0);
	}
	v23 = a1[47];
	if (v23)
	{
		v24 = *(_QWORD**)(v23 + 32);
		if (v24)
			*v24 = *(_QWORD*)(v23 + 40);
		v25 = *(_QWORD*)(v23 + 40);
		if (v25)
			*(_QWORD*)(v25 + 32) = *(_QWORD*)(v23 + 32);
		*(_QWORD*)(v23 + 32) = 0i64;
		*(_QWORD*)(v23 + 40) = 0i64;
		sub_14018B900(v23, 0);
	}
	sub_140195D70((__int64)(a1 + 54));
	*((_DWORD*)a1 + 108) = 0;
	v26 = (_QWORD*)a1[56];
	if (v26)
		*v26 = a1[57];
	v27 = (_QWORD*)a1[57];
	if (v27)
		*v27 = a1[56];
	a1[56] = 0i64;
	a1[57] = 0i64;
	if (a1[52])
		sub_1401A4A00((const void***)a1 + 52);
	if (a1[51])
		sub_1401A4A00((const void***)a1 + 51);
	v28 = a1[36];
	if (v28)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
	v29 = a1[15];
	if (v29)
		sub_14018B900(v29, 0);
	v30 = a1[11];
	if (v30)
		sub_14018B900(v30, 0);
	v31 = a1[7];
	if (v31)
		sub_14018B900(v31, 0);
	v32 = a1[3];
	if (v32)
		sub_14018B900(v32, 0);
}
// 1405C7370: conditional instruction was optimized away because r8d.4==0
// 1405C73D9: variable 'v9' is possibly undefined
// 1405C73E5: variable 'v10' is possibly undefined
// 140B6DCE0: using guessed type __int64 (__fastcall *off_140B6DCE0[151])();
// 140C65898: using guessed type __int64 qword_140C65898;

