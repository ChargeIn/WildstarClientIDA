#include "../winhttp.h"

//----- (00000001401E5130) ----------------------------------------------------
__int64 __fastcall sub_1401E5130(__int64 a1, __int64* a2)
{
	__int64 v2; // rsi
	__int64 v4; // r8
	__int64 v5; // rax
	__int128 v6; // xmm0
	__int64 v7; // r8
	int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // rdi
	unsigned __int64 v11; // rbp
	int** v12; // r14
	int* v13; // rax
	int* v14; // rdx
	int* v15; // rcx
	__int64 v16; // r8
	char* v17; // rcx
	__int64 v18; // r9
	__int64 v19; // rax
	_QWORD* v20; // rcx
	__int64 v21; // rax

	v2 = a1 + 24;
	v4 = a1 + 24;
	if ((((unsigned __int8)(a1 + 24) | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)(a1 + 24), (int*)a2, 0x498ui64);
	}
	else
	{
		v5 = 9i64;
		do
		{
			v6 = *(_OWORD*)a2;
			v4 += 128i64;
			a2 += 16;
			*(_OWORD*)(v4 - 128) = v6;
			*(_OWORD*)(v4 - 112) = *((_OWORD*)a2 - 7);
			*(_OWORD*)(v4 - 96) = *((_OWORD*)a2 - 6);
			*(_OWORD*)(v4 - 80) = *((_OWORD*)a2 - 5);
			*(_OWORD*)(v4 - 64) = *((_OWORD*)a2 - 4);
			*(_OWORD*)(v4 - 48) = *((_OWORD*)a2 - 3);
			*(_OWORD*)(v4 - 32) = *((_OWORD*)a2 - 2);
			*(_OWORD*)(v4 - 16) = *((_OWORD*)a2 - 1);
			--v5;
		} while (v5);
		*(_OWORD*)v4 = *(_OWORD*)a2;
		*(_QWORD*)(v4 + 16) = a2[2];
	}
	*(_DWORD*)(a1 + 1204) = 1;
	*(_QWORD*)(a1 + 1208) = 1i64;
	*(_DWORD*)(a1 + 1216) = 7;
	*(_QWORD*)(a1 + 1220) = 7i64;
	*(_QWORD*)(a1 + 1228) = 0i64;
	*(_QWORD*)(a1 + 1236) = 0i64;
	*(_QWORD*)(a1 + 1244) = 0i64;
	v7 = *(_QWORD*)(a1 + 40);
	*(_DWORD*)(a1 + 1200) = 0;
	if (v7)
	{
		v8 = 0;
		a2 = (__int64*)(a1 + 48);
		do
		{
			v9 = *a2;
			a2 += 2;
			v8 |= *(_DWORD*)(v9 + 144);
			*(_DWORD*)(a1 + 1200) = v8;
			--v7;
		} while (v7);
	}
	v10 = *(_QWORD*)(a1 + 16) + 256i64;
	if (*(_QWORD*)v10 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 264i64))
		sub_1400290D0(*(_QWORD*)(a1 + 16) + 256i64);
	v11 = (*(__int64(__fastcall**)(__int64, __int64*))(v10 + 24))(v2, a2);
	v12 = (int**)(*(_QWORD*)(v10 + 16) + 8 * (v11 % *(_QWORD*)(v10 + 8)));
	v13 = sub_14018B280(1200i64, 0);
	v14 = v13;
	if (v13)
	{
		v15 = *v12;
		*(_QWORD*)v13 = v11;
		*((_QWORD*)v13 + 1) = v15;
		v16 = 36i64;
		v13[4] = *(_DWORD*)v2;
		v13[5] = *(_DWORD*)(v2 + 4);
		v13[6] = *(_DWORD*)(v2 + 8);
		v13[7] = *(_DWORD*)(v2 + 12);
		*((_QWORD*)v13 + 4) = *(_QWORD*)(v2 + 16);
		v17 = (char*)v13 + v2 + 24 - a1 + 8;
		v18 = a1 - (_QWORD)v13;
		do
		{
			v19 = *(_QWORD*)&v17[v18 - 8];
			v17 += 32;
			*((_QWORD*)v17 - 6) = v19;
			*((_DWORD*)v17 - 10) = *(_DWORD*)&v17[v18 - 32];
			*((_QWORD*)v17 - 4) = *(_QWORD*)&v17[v18 - 24];
			*((_DWORD*)v17 - 6) = *(_DWORD*)&v17[v18 - 16];
			--v16;
		} while (v16);
		*((_QWORD*)v14 + 149) = a1;
	}
	else
	{
		v14 = 0i64;
	}
	*v12 = v14;
	++* (_QWORD*)v10;
	v20 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 248i64);
	if (!*(_QWORD*)(a1 + 1272))
	{
		*(_QWORD*)(a1 + 1272) = v20;
		*(_QWORD*)(a1 + 1280) = *v20;
		*v20 = a1;
		v21 = *(_QWORD*)(a1 + 1280);
		if (v21)
			*(_QWORD*)(v21 + 1272) = a1 + 1280;
	}
	return 0i64;
}
// 1401E526A: variable 'a2' is possibly undefined

