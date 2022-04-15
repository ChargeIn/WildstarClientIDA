#include "../winhttp.h"

//----- (0000000140608670) ----------------------------------------------------
__int64 __fastcall sub_140608670(__int64 a1)
{
	int* v2; // rax
	int v3; // ecx
	_QWORD* v4; // rax

	*(_DWORD*)a1 = 0;
	*(__m256*)(a1 + 16) = ymmword_140C78390;
	*(_OWORD*)(a1 + 48) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 64) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 136) = 0i64;
	v3 = 12;
	*(_QWORD*)(a1 + 128) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 16i64) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(*(_QWORD*)(a1 + 128) + 24i64) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	v4 = (_QWORD*)(a1 + 288);
	do
	{
		--v3;
		*(v4 - 1) = 0i64;
		*v4 = 0i64;
		v4[1] = 0i64;
		v4 += 4;
	} while (v3 >= 0);
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 200) = 0;
	return a1;
}
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

