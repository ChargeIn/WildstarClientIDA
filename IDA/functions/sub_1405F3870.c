#include "../winhttp.h"

//----- (00000001405F3870) ----------------------------------------------------
__int64 __fastcall sub_1405F3870(__int64* a1, __int64 a2)
{
	unsigned int i; // ebx
	unsigned __int64 v5; // r9
	unsigned int v6; // r8d
	__int64 v7; // r10
	__int64 v8; // rax
	_DWORD* v9; // rdx
	_DWORD* v10; // rax
	__int64 v11; // rcx
	unsigned int j; // esi
	unsigned __int64 v13; // r8
	unsigned int v14; // edx
	__int64 v15; // r9
	__int64 v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rdi
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v25; // rbx
	__int64 v26; // [rsp+20h] [rbp-118h] BYREF
	int v27; // [rsp+28h] [rbp-110h]
	__int64 v28; // [rsp+30h] [rbp-108h]
	int v29; // [rsp+38h] [rbp-100h]
	int v30; // [rsp+3Ch] [rbp-FCh]
	int v31[48]; // [rsp+40h] [rbp-F8h] BYREF

	for (i = 0; i < *(_DWORD*)(a2 + 4); ++i)
	{
		v5 = a1[55];
		v6 = 0;
		if (v5)
		{
			v7 = a1[54];
			v8 = 0i64;
			v9 = (_DWORD*)(*(_QWORD*)(a2 + 8) + 24i64 * i);
			while (*(_DWORD*)(196 * v8 + v7) != *v9)
			{
				v8 = ++v6;
				if (v6 >= v5)
					goto LABEL_6;
			}
			v11 = v7 + 196i64 * v6 + 4;
			*(_DWORD*)(v7 + 196i64 * v6) = *v9;
		}
		else
		{
		LABEL_6:
			sub_1405F8DC0((_DWORD*)&v26 + 1);
			LODWORD(v26) = 0;
			v10 = (_DWORD*)(a1[54] + 196 * sub_1405F7170(a1 + 54, (int*)&v26));
			v9 = (_DWORD*)(*(_QWORD*)(a2 + 8) + 24i64 * i);
			*v10 = *v9;
			v11 = (__int64)(v10 + 1);
		}
		sub_1405F8C40(v11, (__int64)(v9 + 2));
	}
	for (j = 0; j < *(_DWORD*)(a2 + 16); ++j)
	{
		v13 = a1[57];
		v14 = 0;
		if (v13)
		{
			v15 = a1[56];
			v16 = 0i64;
			v17 = *(_QWORD*)(a2 + 24) + 48i64 * j;
			while (1)
			{
				v18 = 224 * v16 + v15;
				if (*(_DWORD*)(v18 + 8) == *(_DWORD*)(v17 + 8) && *(_QWORD*)(v18 + 16) == *(_QWORD*)(v17 + 16))
					break;
				v16 = ++v14;
				if (v14 >= v13)
					goto LABEL_14;
			}
			v25 = v15 + 224i64 * v14;
			*(_DWORD*)v25 = *(_DWORD*)v17;
			*(_DWORD*)(v25 + 4) = *(_DWORD*)(v17 + 4);
			*(_QWORD*)(v25 + 8) = *(_QWORD*)(v17 + 8);
			*(_QWORD*)(v25 + 16) = *(_QWORD*)(v17 + 16);
			sub_1405F8C40(v25 + 32, v17 + 32);
			*(_DWORD*)(v25 + 24) = *(_DWORD*)(v17 + 24);
			*(_DWORD*)(v25 + 28) = *(_DWORD*)(v17 + 28);
		}
		else
		{
		LABEL_14:
			v27 = 0;
			v28 = 0i64;
			sub_1405F8DC0(v31);
			v26 = 0i64;
			v29 = 23;
			v30 = 4;
			v19 = sub_1405F7380(a1 + 56, (int*)&v26);
			v20 = *(_QWORD*)(a2 + 24) + 48i64 * j;
			v21 = a1[56] + 224 * v19;
			*(_DWORD*)v21 = *(_DWORD*)v20;
			*(_DWORD*)(v21 + 4) = *(_DWORD*)(v20 + 4);
			*(_QWORD*)(v21 + 8) = *(_QWORD*)(v20 + 8);
			*(_QWORD*)(v21 + 16) = *(_QWORD*)(v20 + 16);
			sub_1405F8C40(v21 + 32, v20 + 32);
			*(_DWORD*)(v21 + 24) = *(_DWORD*)(v20 + 24);
			*(_DWORD*)(v21 + 28) = *(_DWORD*)(v20 + 28);
		}
	}
	if ((*(unsigned int(__fastcall**)(__int64*))(*a1 + 176))(a1))
	{
		v22 = *(_QWORD*)(qword_140C65898 + 29504);
		v23 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
		sub_1400EA3E0(v22, "PublicEventLiveStatsUpdate", byte_1409ECED4, v23);
	}
	return 0i64;
}
// 1409ECED4: using guessed type _BYTE byte_1409ECED4[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405F3870: using guessed type int var_F8[48];

