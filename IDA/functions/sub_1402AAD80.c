#include "../winhttp.h"

//----- (00000001402AAD80) ----------------------------------------------------
__int64 __fastcall sub_1402AAD80(__int64 a1, int* a2)
{
	__int64 result; // rax
	__m128i* v5; // rax
	bool v6; // cc
	__m128i* v7; // r8
	__int64 v8; // rdx
	volatile signed __int32* v9; // rdx
	__int64 v10; // rdi
	unsigned __int64 v11; // rbp
	int** v12; // r14
	int* v13; // rax
	int* v14; // rcx
	__int64 v15; // rcx
	__int64* v16; // rcx
	__int64 v17; // rax

	result = sub_1402AAF00(a1);
	if ((int)result >= 0)
	{
		v5 = (__m128i*)sub_14018E9C0(a2);
		v6 = *(_DWORD*)(a1 + 32) < 1;
		v7 = v5;
		*(_QWORD*)(a1 + 24) = v5;
		if (v6)
		{
			if (v5)
			{
				result = sub_140279ED0(*(_QWORD*)(a1 + 16), 0, v5, 0, 0, 512, 1, (__int64*)(a1 + 40));
				if ((int)result < 0)
				{
					*(_DWORD*)(a1 + 128) = result;
					return result;
				}
			}
			else
			{
				*(_DWORD*)(a1 + 128) = 0;
			}
		}
		v8 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 32) = 2;
		v9 = (volatile signed __int32*)(v8 + 1012);
		_InterlockedIncrement(v9);
		_InterlockedExchangeAdd(v9 + 1, 0x1000u);
		_InterlockedIncrement(v9 + 2);
		_InterlockedExchangeAdd(v9 + 3, 0x1000u);
		v10 = *(_QWORD*)(a1 + 16) + 7136i64;
		if (*(_QWORD*)v10 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 7144i64))
			sub_1400290D0(*(_QWORD*)(a1 + 16) + 7136i64);
		v11 = (*(__int64(__fastcall**)(__int64, volatile signed __int32*, __m128i*))(v10 + 24))(a1 + 24, v9, v7);
		v12 = (int**)(*(_QWORD*)(v10 + 16) + 8 * (v11 % *(_QWORD*)(v10 + 8)));
		v13 = sub_14018B280(32i64, 0);
		if (v13)
		{
			v14 = *v12;
			*(_QWORD*)v13 = v11;
			*((_QWORD*)v13 + 1) = v14;
			v15 = *(_QWORD*)(a1 + 24);
			*((_QWORD*)v13 + 3) = a1;
			*((_QWORD*)v13 + 2) = v15;
		}
		*v12 = v13;
		++* (_QWORD*)v10;
		v16 = (__int64*)(*(_QWORD*)(a1 + 16) + 6896i64);
		if (!*(_QWORD*)(a1 + 136))
		{
			*(_QWORD*)(a1 + 136) = v16;
			*(_QWORD*)(a1 + 144) = *v16;
			*v16 = a1;
			v17 = *(_QWORD*)(a1 + 144);
			if (v17)
				*(_QWORD*)(v17 + 136) = a1 + 144;
		}
		return 0i64;
	}
	return result;
}
// 1402AAE1A: variable 'v9' is possibly undefined
// 1402AAE1A: variable 'v7' is possibly undefined

