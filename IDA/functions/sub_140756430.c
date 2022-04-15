//----- (0000000140756430) ----------------------------------------------------
__int64 __fastcall sub_140756430(_QWORD* a1)
{
	unsigned int v3; // eax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rbp
	unsigned int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__m128i v11; // xmm0
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rax

	if (qword_140C659B0)
	{
		v3 = sub_140056D60(a1, 1u);
		if (v3)
		{
			v6 = sub_1404A8700(v4, v3);
			if (v6)
			{
				v7 = 1;
				sub_140058900((__int64)a1, v5, 0);
				v8 = *(_QWORD*)(v6 + 8);
				v9 = *(_QWORD*)(v8 + 16);
				if (v9 != v8)
				{
					do
					{
						v10 = a1[2];
						v11 = _mm_cvtsi32_si128(v7);
						*(_DWORD*)(v10 + 8) = 3;
						++v7;
						*(_QWORD*)v10 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
						a1[2] += 16i64;
						if ((unsigned int)sub_140755DE0((__int64)a1, *(_DWORD*)(v9 + 32)))
						{
							sub_14005EA50(
								(__int64)a1,
								(__int64*)(a1[2] - 48i64),
								(int*)(a1[2] - 32i64),
								(unsigned int*)(a1[2] - 16i64));
							a1[2] -= 32i64;
						}
						else
						{
							a1[2] -= 16i64;
							--v7;
						}
						v12 = *(_QWORD*)(v9 + 24);
						if (v12)
						{
							v9 = *(_QWORD*)(v9 + 24);
							for (i = *(_QWORD*)(v12 + 16); i; i = *(_QWORD*)(i + 16))
								v9 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v9 = j;
							if (*(_QWORD*)(v9 + 24) != j)
								v9 = j;
						}
					} while (v9 != *(_QWORD*)(v6 + 8));
				}
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14075648E: variable 'v4' is possibly undefined
// 1407564CC: variable 'v5' is possibly undefined
// 140C659B0: using guessed type __int64 qword_140C659B0;

