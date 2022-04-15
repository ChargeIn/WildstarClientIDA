#include "../winhttp.h"

//----- (0000000140756950) ----------------------------------------------------
__int64 __fastcall sub_140756950(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rbp
	unsigned int v9; // esi
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__m128i v13; // xmm0
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax

	v1 = qword_140C659B0;
	if (!qword_140C659B0)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = qword_140C659B0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v1 + 1);
	}
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v4)
		goto LABEL_24;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	if (v5 == 166)
	{
		v7 = v1 + 240;
	}
	else
	{
		if (v5 != 167)
			goto LABEL_24;
		v7 = v1 + 496;
	}
	if (v7)
	{
		v8 = v7 + 64;
		if (v7 != -64)
		{
			v9 = 1;
			sub_140058900(a1, v6, 0);
			v10 = *(_QWORD*)(v8 + 8);
			v11 = *(_QWORD*)(v10 + 16);
			if (v11 != v10)
			{
				do
				{
					v12 = *(_QWORD*)(a1 + 16);
					v13 = _mm_cvtsi32_si128(v9);
					*(_DWORD*)(v12 + 8) = 3;
					++v9;
					*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
					*(_QWORD*)(a1 + 16) += 16i64;
					if ((unsigned int)sub_140755660(a1, *(unsigned int***)(v11 + 40)))
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
						--v9;
					}
					v14 = *(_QWORD*)(v11 + 24);
					if (v14)
					{
						v11 = *(_QWORD*)(v11 + 24);
						for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
							v11 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v11 = j;
						if (*(_QWORD*)(v11 + 24) != j)
							v11 = j;
					}
				} while (v11 != *(_QWORD*)(v8 + 8));
			}
			return 1i64;
		}
	}
LABEL_24:
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 1407569ED: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

