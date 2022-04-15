#include "../winhttp.h"

//----- (0000000140578460) ----------------------------------------------------
__int64 __fastcall sub_140578460(__int64 a1, int a2, int a3, int* a4, int a5, int** a6, int** a7)
{
	int v10; // r9d
	__int64 v11; // rax
	__int64 v12; // r14
	int* v13; // rax
	int* v14; // rcx
	int** v15; // r14
	__int64 v16; // rax
	__int64 v17; // rax
	bool v19; // zf
	__int64 v20; // rcx
	unsigned int v21; // ebx
	unsigned int v22; // eax
	__int64 v23; // rcx
	__int64 v24; // rcx

	sub_1400035B0();
	if (v10 && (v11 = sub_1403D90D0(qword_140C65898, v10), (v12 = v11) != 0) && !*(_QWORD*)(v11 + 5864))
	{
		v13 = sub_14018B280(64i64, 0);
		v14 = v13;
		if (v13)
		{
			*(_QWORD*)v13 = a4;
			v13[2] = a5;
			v13[3] = a2;
			*((_QWORD*)v13 + 2) = 0i64;
			*((_QWORD*)v13 + 3) = 0i64;
			*((_QWORD*)v13 + 4) = 0i64;
			*((_QWORD*)v13 + 5) = 0i64;
			*((_QWORD*)v13 + 6) = 0i64;
			*((_QWORD*)v13 + 7) = 0i64;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = (int**)(v12 + 1464);
		if (!*((_QWORD*)v14 + 2))
		{
			*((_QWORD*)v14 + 2) = v15;
			*((_QWORD*)v14 + 3) = *v15;
			*v15 = v14;
			v16 = *((_QWORD*)v14 + 3);
			if (v16)
				*(_QWORD*)(v16 + 16) = v14 + 6;
		}
		if (a7 && !*((_QWORD*)v14 + 6))
		{
			*((_QWORD*)v14 + 6) = a7;
			*((_QWORD*)v14 + 7) = *a7;
			*a7 = v14;
			v17 = *((_QWORD*)v14 + 7);
			if (v17)
				*(_QWORD*)(v17 + 48) = v14 + 14;
		}
		sub_1400035B0();
		return 2147483658i64;
	}
	else
	{
		sub_1400035B0();
		v19 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
		v20 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		if (v19 || (_DWORD)v20 == 0x3FFFFFFF)
			dword_140C8AF30 = 1;
		v21 = -2147467259;
		switch (a2)
		{
		case 0:
			v22 = sub_1405765A0(v20, (__int64)a4, a6);
			break;
		case 1:
			v22 = sub_140576670(v20, a4, a6);
			break;
		case 2:
			v22 = sub_1405767D0(v20, a3, (__int64)a4, a6);
			break;
		case 3:
			v22 = sub_140576950(v20, a4, (__int64*)a6);
			break;
		case 4:
			v23 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v23 || a3 != *(_DWORD*)(v23 + 8))
				goto LABEL_35;
			v22 = sub_140576AA0((__int64*)qword_140C65B78, a4, (__int64*)a6);
			break;
		case 5:
			v22 = sub_140576BF0(v20, (__int64)a4, (__int64*)a6);
			break;
		case 6:
			v22 = sub_140576E50(v20, (__int64)a4, (__int64*)a6);
			break;
		case 7:
			v22 = sub_140576F90(v20, a4, (__int64*)a6);
			break;
		case 8:
			v24 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v24 || a3 != *(_DWORD*)(v24 + 8))
				goto LABEL_35;
			v22 = sub_1405770F0((int**)qword_140C65B78, a4, a6);
			break;
		case 9:
			v22 = sub_140577250(v20, 0x140000000i64, a4, (__int64*)a6);
			break;
		case 12:
			v22 = sub_140577510(v20, a4, (__int64*)a6);
			break;
		default:
			goto LABEL_35;
		}
		v21 = v22;
	LABEL_35:
		sub_14018B900((__int64)a4, 0);
		return v21;
	}
}
// 1405784B8: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C8AF30: using guessed type int dword_140C8AF30;

