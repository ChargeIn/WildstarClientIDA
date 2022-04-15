#include "../winhttp.h"

//----- (00000001404C27A0) ----------------------------------------------------
__int64 __fastcall sub_1404C27A0(__int64 a1, __int64 a2)
{
	__int64 v3; // r8
	__int64* v4; // rax
	__int64* v5; // rdx
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // rcx
	__m256* v9; // rax
	__int128 v10; // xmm0

	v3 = *(_QWORD*)(qword_140C659F0 + 824);
	v4 = *(__int64**)(v3 + 16);
	v5 = *(__int64**)(v3 + 24);
	if (v4 == v5)
		goto LABEL_4;
	while (1)
	{
		v6 = *v4;
		if (*(_DWORD*)(*v4 + 188) == *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64))
			break;
		if (++v4 == v5)
			goto LABEL_4;
	}
	if (!v6)
	{
	LABEL_4:
		result = a2;
		*(__m256*)a2 = ymmword_140C78390;
		*(_OWORD*)(a2 + 32) = xmmword_140C783B0;
		*(_OWORD*)(a2 + 48) = xmmword_140C783C0;
	}
	else if (*(_DWORD*)(a1 + 124))
	{
		sub_1405B0600(*v4, (__m256*)a2);
		return a2;
	}
	else
	{
		v8 = *(_QWORD*)(v6 + 280);
		if (v8)
			v9 = (__m256*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 56i64))(v8);
		else
			v9 = &ymmword_140C78390;
		*(_OWORD*)a2 = *(_OWORD*)v9->m256_f32;
		*(_OWORD*)(a2 + 16) = *(_OWORD*)&v9->m256_f32[4];
		*(_OWORD*)(a2 + 32) = *(_OWORD*)v9[1].m256_f32;
		v10 = *(_OWORD*)&v9[1].m256_f32[4];
		result = a2;
		*(_OWORD*)(a2 + 48) = v10;
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

