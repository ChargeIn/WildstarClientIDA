#include "../winhttp.h"

//----- (00000001405AFF90) ----------------------------------------------------
_BOOL8 __fastcall sub_1405AFF90(__int64 a1)
{
	__int64 v2; // rax
	float v3; // xmm6_4
	__int64 v4; // rcx
	__m256* v5; // rax
	__int128* v6; // rax
	__int128 v7; // xmm1
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	__int128 v13; // [rsp+20h] [rbp-E8h]
	__int128 v14[8]; // [rsp+30h] [rbp-D8h] BYREF
	__m256 v15[2]; // [rsp+B0h] [rbp-58h] BYREF

	if (*(_DWORD*)(a1 + 48) == 3)
		return 0i64;
	v13 = *(_OWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
	v2 = sub_140200220(0x44Bu);
	v3 = v2 ? *(float*)(v2 + 28) : -300.0;
	v4 = *(_QWORD*)(a1 + 280);
	if (v4)
	{
		v6 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 56i64))(v4);
		v7 = v6[1];
		v14[0] = *v6;
		v8 = v6[2];
		v14[1] = v7;
		v9 = v6[3];
		v14[2] = v8;
		v5 = (__m256*)v14;
		v14[3] = v9;
	}
	else
	{
		v5 = sub_1405B0600(a1, v15);
	}
	v10 = *(_OWORD*)&v5->m256_f32[4];
	v14[4] = *(_OWORD*)v5->m256_f32;
	v11 = *(_OWORD*)v5[1].m256_f32;
	v14[5] = v10;
	*(float*)&v10 = v5[1].m256_f32[5] + v3;
	v14[6] = v11;
	return *((float*)&v13 + 1) <= *(float*)&v10;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405AFF90: using guessed type __m256 var_58[2];

