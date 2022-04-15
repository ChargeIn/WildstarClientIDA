#include "../winhttp.h"

//----- (0000000140057390) ----------------------------------------------------
unsigned __int64* __fastcall sub_140057390(__int64 a1, int a2, unsigned __int64* a3, int a4)
{
	_DWORD* v7; // rax
	__int64 v8; // r10
	__int8* v9; // rsi
	__int64 v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	_QWORD* v15; // rax
	_DWORD* v16; // rax
	__int64 v17; // rcx
	int v18; // r14d
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rcx
	unsigned __int64 v25; // rcx
	_QWORD* v26; // rax
	__int64 v27; // rcx

	v7 = sub_1400580E0(a1, a2);
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v8 = *(_QWORD*)v7;
	*(_DWORD*)(v8 + 8) = v7[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	while (1)
	{
		v9 = sub_1407DE0B4((__int64)a3, 0x2Eu);
		if (!v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)a3 + v10));
			v9 = (char*)a3 + v10;
		}
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = sub_140062650(a1, a3, v9 - (__int8*)a3);
		*(_DWORD*)(v11 + 8) = 4;
		*(_QWORD*)v11 = v12;
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = *(_QWORD*)(a1 + 16);
		v14 = v13 - 16;
		v15 = sub_14005C450(*(_QWORD*)(v13 - 32), (int*)(v13 - 16));
		*(_QWORD*)v14 = *v15;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v15 + 2);
		v16 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
		if (v16 == dword_140A12138)
			break;
		if (v16[2])
		{
			if (v16 == dword_140A12138 || v16[2] != 5)
				break;
		}
		else
		{
			v17 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) = v16;
			v18 = a4;
			if (*v9 == 46)
				v18 = 1;
			if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
				sub_14005E2C0(a1);
			v19 = *(_QWORD*)(a1 + 16);
			v20 = sub_14005C1B0(a1, 0, v18);
			*(_DWORD*)(v19 + 8) = 5;
			*(_QWORD*)v19 = v20;
			v21 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v21 + 120) >= *(_QWORD*)(v21 + 112))
				sub_14005E2C0(a1);
			v22 = *(_QWORD*)(a1 + 16);
			v23 = sub_140062650(a1, a3, v9 - (__int8*)a3);
			*(_DWORD*)(v22 + 8) = 4;
			*(_QWORD*)v22 = v23;
			*(_QWORD*)(a1 + 16) += 16i64;
			v24 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v24 = *(_QWORD*)(v24 - 32);
			*(_DWORD*)(v24 + 8) = *(_DWORD*)(v24 - 24);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 64i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
		}
		v25 = *(_QWORD*)(a1 + 16);
		v26 = (_QWORD*)(v25 - 16);
		if (v25 - 16 < v25)
		{
			do
			{
				v27 = *v26;
				v26 += 2;
				*(v26 - 4) = v27;
				*((_DWORD*)v26 - 6) = *((_DWORD*)v26 - 2);
			} while ((unsigned __int64)v26 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
		a3 = (unsigned __int64*)(v9 + 1);
		if (*v9 != 46)
			return 0i64;
	}
	*(_QWORD*)(a1 + 16) -= 32i64;
	return a3;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

