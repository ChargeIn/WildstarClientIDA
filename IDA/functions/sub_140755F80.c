//----- (0000000140755F80) ----------------------------------------------------
__int64 __fastcall sub_140755F80(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // r14
	unsigned int v8; // esi
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned int v11; // ebp
	__int64 v12; // rax
	__m128i v13; // xmm0
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rcx

	v1 = qword_140C659B0;
	if (!qword_140C659B0)
		return 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v4)
		return 0i64;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	if (v5 == 166)
	{
		v7 = v1 + 104;
	}
	else
	{
		if (v5 != 167)
			return 0i64;
		v7 = v1 + 136;
	}
	if (!v7)
		return 0i64;
	v8 = 1;
	sub_140058900(a1, v6, 0);
	v9 = *(_QWORD*)(v7 + 8);
	v10 = *(_QWORD*)(v9 + 16);
	if (v10 != v9)
	{
		do
		{
			v11 = *(_DWORD*)(v10 + 32);
			if ((unsigned int)sub_1404A8310(qword_140C659B0, v11, 1))
			{
				v12 = *(_QWORD*)(a1 + 16);
				v13 = _mm_cvtsi32_si128(v8);
				*(_DWORD*)(v12 + 8) = 3;
				++v8;
				*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
				*(_QWORD*)(a1 + 16) += 16i64;
				if ((unsigned int)sub_140755DE0(a1, v11))
				{
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
				}
				else
				{
					*(_QWORD*)(a1 + 16) -= 16i64;
					--v8;
				}
			}
			v14 = *(_QWORD*)(v10 + 24);
			if (v14)
			{
				v10 = *(_QWORD*)(v10 + 24);
				for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
					v10 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = j;
				if (*(_QWORD*)(v10 + 24) != j)
					v10 = j;
			}
		} while (v10 != *(_QWORD*)(v7 + 8));
	}
	return 1i64;
}
// 140756000: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

