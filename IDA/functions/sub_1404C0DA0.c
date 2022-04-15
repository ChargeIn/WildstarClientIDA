#include "../winhttp.h"

//----- (00000001404C0DA0) ----------------------------------------------------
__int64 __fastcall sub_1404C0DA0(__int64 a1)
{
	__int64 v2; // rcx
	__int128* v3; // rdx
	__int64 v4; // rax
	__int128 v5; // xmm0
	__int128 v6; // xmm1
	__int128 v7; // xmm0
	__int128 v8; // xmm1
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	__int128 v12; // xmm1
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int64 result; // rax

	v2 = a1 + 80;
	v3 = (__int128*)(a1 + 320);
	if ((((unsigned __int8)v2 | (unsigned __int8)(a1 + 64)) & 0xF) != 0)
	{
		sub_1407DB590((int*)v2, (int*)(a1 + 320), 0xB0ui64);
	}
	else
	{
		v4 = 1i64;
		do
		{
			v5 = *v3;
			v6 = v3[1];
			v2 += 128i64;
			v3 += 8;
			*(_OWORD*)(v2 - 128) = v5;
			v7 = *(v3 - 6);
			*(_OWORD*)(v2 - 112) = v6;
			v8 = *(v3 - 5);
			*(_OWORD*)(v2 - 96) = v7;
			v9 = *(v3 - 4);
			*(_OWORD*)(v2 - 80) = v8;
			v10 = *(v3 - 3);
			*(_OWORD*)(v2 - 64) = v9;
			v11 = *(v3 - 2);
			*(_OWORD*)(v2 - 48) = v10;
			v12 = *(v3 - 1);
			*(_OWORD*)(v2 - 32) = v11;
			*(_OWORD*)(v2 - 16) = v12;
			--v4;
		} while (v4);
		v13 = v3[1];
		*(_OWORD*)v2 = *v3;
		v14 = v3[2];
		*(_OWORD*)(v2 + 16) = v13;
		*(_OWORD*)(v2 + 32) = v14;
	}
	sub_1407E4830((int*)(a1 + 320), 0i64, 0xB0ui64);
	result = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	return result;
}

