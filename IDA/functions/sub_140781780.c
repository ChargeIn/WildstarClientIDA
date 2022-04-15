//----- (0000000140781780) ----------------------------------------------------
__int64 __fastcall sub_140781780(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int v4; // eax
	__int64 v6; // rbx
	__int64* v7; // rdx
	__int64 result; // rax
	float v9; // xmm1_4
	float v10; // xmm0_4
	__m128i v11; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_DWORD*)(a3 + 28);
	v6 = a1;
	*(_DWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = a4;
	*(_DWORD*)(a1 + 12) = v4;
	if (a4)
	{
		v7 = (__int64*)(a4 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v7;
			a1 += 32i64;
			*(_QWORD*)a1 = *v7;
			*v7 = v6;
			if (*(_QWORD*)a1)
				*(_QWORD*)(*(_QWORD*)a1 + 24i64) = a1;
		}
	}
	result = sub_140633CB0(a1, *(_DWORD*)a3, (_QWORD*)(v6 + 56));
	if ((int)result >= 0)
	{
		*(_DWORD*)(v6 + 64) = *(_DWORD*)a3;
		*(_DWORD*)(v6 + 68) = *(_DWORD*)(a3 + 4);
		*(_DWORD*)(v6 + 72) = *(_DWORD*)(a3 + 8);
		sub_1401ADB90(&v11, (unsigned __int16*)(a3 + 12));
		*(__m128i*)(v6 + 80) = v11;
		v9 = *(float*)(v6 + 68);
		*(_DWORD*)(v6 + 96) = *(_DWORD*)(a3 + 20);
		*(_DWORD*)(v6 + 100) = *(_DWORD*)(a3 + 24);
		if (v9 == -1.0 || v9 > 0.0000099999997)
			v10 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 56) + 112i64))(*(_QWORD*)(v6 + 56));
		else
			v10 = 0.0;
		*(float*)(v6 + 104) = v10;
		return 0i64;
	}
	return result;
}
// 140781780: using guessed type __m128i var_18;

