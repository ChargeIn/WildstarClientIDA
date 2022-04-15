#include "../winhttp.h"

//----- (00000001400FE940) ----------------------------------------------------
__int64 __fastcall sub_1400FE940(
	__int64 a1,
	__int64 a2,
	int* a3,
	int* a4,
	int a5,
	char a6,
	_DWORD* a7,
	unsigned int* a8,
	unsigned int* a9,
	char a10,
	char a11,
	int a12,
	int a13)
{
	__int64 v16; // r8
	unsigned __int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rdx
	int v22; // r9d
	unsigned __int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rcx
	__int64 v26; // rdx
	int v27; // r8d
	__int64 v28; // r8
	__int64 v29; // rdx
	_DWORD* v30; // rcx
	__int64 v31; // r9
	int v32; // eax
	__int64 v33; // rdx
	_DWORD* v34; // rcx
	int v35; // eax
	int v36; // eax
	int v37; // eax
	int v38; // eax
	int v39; // eax
	int v40; // eax

	*(_BYTE*)(a1 + 56) = a6;
	*(_DWORD*)(a1 + 60) = a5;
	*(_BYTE*)(a1 + 57) = a10;
	*(_BYTE*)(a1 + 58) = a11;
	*(_QWORD*)a1 = 0i64;
	*(_DWORD*)(a1 + 72) = *a7;
	v16 = qword_140C63678;
	*(_DWORD*)(a1 + 76) = a7[1];
	*(_DWORD*)(a1 + 80) = a12;
	*(_DWORD*)(a1 + 84) = a13;
	v18 = *a8;
	*(_DWORD*)(a1 + 88) = v18;
	v19 = (unsigned int)v18;
	if (v18 < *(_QWORD*)(v16 + 48))
	{
		v20 = *(_QWORD*)(v16 + 40);
		v21 = 32 * v19;
		v22 = *(_DWORD*)(v21 + v20 + 16);
		if ((unsigned int)(v22 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v21 + v20 + 16) = v22 + 1;
	}
	v23 = *a9;
	*(_DWORD*)(a1 + 92) = v23;
	v24 = (unsigned int)v23;
	if (v23 < *(_QWORD*)(v16 + 48))
	{
		v25 = *(_QWORD*)(v16 + 40);
		v26 = 32 * v24;
		v27 = *(_DWORD*)(v26 + v25 + 16);
		if ((unsigned int)(v27 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v26 + v25 + 16) = v27 + 1;
	}
	v28 = 4i64;
	*(_BYTE*)(a1 + 96) = 0;
	*(_DWORD*)(a1 + 192) = 0;
	v29 = a1 + 128;
	v30 = (_DWORD*)(a1 + 176);
	v31 = 4i64;
	do
	{
		v32 = *(_DWORD*)((char*)v30 + (_QWORD)((char*)&unk_140A1B148 - a1 - 112) - 64);
		*v30 = 0;
		v29 += 8i64;
		*(v30 - 4) = v32;
		*(_QWORD*)(v29 - 8) = 0i64;
		++v30;
		--v31;
	} while (v31);
	*(_DWORD*)(a1 + 288) = 0;
	v33 = a1 + 224;
	v34 = (_DWORD*)(a1 + 272);
	do
	{
		v35 = *(_DWORD*)((char*)v34 + (_QWORD)((char*)&unk_140A1B148 - a1 - 208) - 64);
		*v34 = 0;
		v33 += 8i64;
		*(v34 - 4) = v35;
		*(_QWORD*)(v33 - 8) = 0i64;
		++v34;
		--v28;
	} while (v28);
	v36 = *a4;
	*(_DWORD*)(a1 + 12) = *a4;
	*(_DWORD*)(a1 + 8) = v36;
	v37 = a4[1];
	*(_DWORD*)(a1 + 36) = v37;
	*(_DWORD*)(a1 + 32) = v37;
	v38 = a4[2];
	*(_DWORD*)(a1 + 28) = v38;
	*(_DWORD*)(a1 + 24) = v38;
	*(_DWORD*)(a1 + 20) = v38;
	*(_DWORD*)(a1 + 16) = v38;
	v39 = a4[3];
	*(_DWORD*)(a1 + 52) = v39;
	*(_DWORD*)(a1 + 48) = v39;
	*(_DWORD*)(a1 + 44) = v39;
	*(_DWORD*)(a1 + 40) = v39;
	v40 = a4[3] - a4[1];
	*(_DWORD*)(a1 + 64) = a4[2] - *a4;
	*(_DWORD*)(a1 + 68) = v40;
	sub_140108F00(a2, a3, 0i64, (__int64*)a1);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

