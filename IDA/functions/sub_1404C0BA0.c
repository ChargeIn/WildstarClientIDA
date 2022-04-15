#include "../winhttp.h"

//----- (00000001404C0BA0) ----------------------------------------------------
__int64 __fastcall sub_1404C0BA0(__int64 a1, __int128* a2, unsigned int a3)
{
	__int64 v6; // rbp
	_OWORD* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int128 v11; // xmm0
	__int128 v12; // xmm1
	__int128 v13; // xmm0
	__int128 v14; // xmm1
	__int128 v15; // xmm0
	__int128 v16; // xmm1
	__int128 v17; // xmm0
	__int128 v18; // xmm1
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int64 v21; // rax
	__int128 v22; // xmm0
	bool v23; // zf

	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 248i64))(a1, a3);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 256i64))(a1, a3);
	if (*(_DWORD*)(a1 + 304))
		sub_1404C0DA0(a1);
	v6 = *(_QWORD*)(a1 + 328);
	if (!v6 || !*(_DWORD*)(a1 + 336))
		v6 = *((_QWORD*)a2 + 1);
	v7 = (_OWORD*)(a1 + 80);
	v8 = a1 + 320;
	v9 = a1 + 80;
	if ((((unsigned __int8)(a1 + 64) | (unsigned __int8)(a1 + 80)) & 0xF) != 0)
	{
		sub_1407DB590((int*)v8, (int*)v9, 0xB0ui64);
	}
	else
	{
		v10 = 1i64;
		do
		{
			v11 = *(_OWORD*)v9;
			v12 = *(_OWORD*)(v9 + 16);
			v8 += 128i64;
			v9 += 128i64;
			*(_OWORD*)(v8 - 128) = v11;
			v13 = *(_OWORD*)(v9 - 96);
			*(_OWORD*)(v8 - 112) = v12;
			v14 = *(_OWORD*)(v9 - 80);
			*(_OWORD*)(v8 - 96) = v13;
			v15 = *(_OWORD*)(v9 - 64);
			*(_OWORD*)(v8 - 80) = v14;
			v16 = *(_OWORD*)(v9 - 48);
			*(_OWORD*)(v8 - 64) = v15;
			v17 = *(_OWORD*)(v9 - 32);
			*(_OWORD*)(v8 - 48) = v16;
			v18 = *(_OWORD*)(v9 - 16);
			*(_OWORD*)(v8 - 32) = v17;
			*(_OWORD*)(v8 - 16) = v18;
			--v10;
		} while (v10);
		v19 = *(_OWORD*)(v9 + 16);
		*(_OWORD*)v8 = *(_OWORD*)v9;
		v20 = *(_OWORD*)(v9 + 32);
		*(_OWORD*)(v8 + 16) = v19;
		*(_OWORD*)(v8 + 32) = v20;
	}
	if ((((unsigned __int8)v7 | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)(a1 + 80), (int*)a2, 0xB0ui64);
	}
	else
	{
		v21 = 1i64;
		do
		{
			v22 = *a2;
			v7 += 8;
			a2 += 8;
			*(v7 - 8) = v22;
			*(v7 - 7) = *(a2 - 7);
			*(v7 - 6) = *(a2 - 6);
			*(v7 - 5) = *(a2 - 5);
			*(v7 - 4) = *(a2 - 4);
			*(v7 - 3) = *(a2 - 3);
			*(v7 - 2) = *(a2 - 2);
			*(v7 - 1) = *(a2 - 1);
			--v21;
		} while (v21);
		*v7 = *a2;
		v7[1] = a2[1];
		v7[2] = a2[2];
	}
	if (!v6)
		v6 = *(_QWORD*)(a1 + 328);
	v23 = *(_DWORD*)(a1 + 348) == 0;
	*(_QWORD*)(a1 + 88) = v6;
	*(_DWORD*)(a1 + 304) = 1;
	*(_DWORD*)(a1 + 308) = !v23;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 232i64))(a1, a3);
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 240i64))(a1, a3);
}

