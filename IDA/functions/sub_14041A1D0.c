//----- (000000014041A1D0) ----------------------------------------------------
__int64 __fastcall sub_14041A1D0(__int64 a1)
{
	__int64** v2; // rax
	__int64* v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax
	__int64 v9; // rax
	char v10; // [rsp+38h] [rbp+10h] BYREF

	v2 = (__int64**)sub_140417660(a1, 1);
	if (!v2)
		goto LABEL_9;
	v3 = *v2;
	if (*v2)
		v3 = (__int64*)*v3;
	if (v3)
	{
		v4 = (*(__int64(__fastcall**)(__int64*, char*))(*v3 + 32))(v3, &v10);
		if (*(int*)v4 < 300)
			v5 = *(unsigned __int8*)(v4 + 4) | ((unsigned __int8)*(_DWORD*)v4 << 8);
		else
			v5 = -1;
		v6 = *(_QWORD*)(a1 + 16);
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
	LABEL_9:
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}

