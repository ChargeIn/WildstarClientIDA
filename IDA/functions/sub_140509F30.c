#include "../winhttp.h"

//----- (0000000140509F30) ----------------------------------------------------
__int64 __fastcall sub_140509F30(__int64 a1, __int64 a2, __int64 a3, unsigned int* a4)
{
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // ebx
	__int64 v9; // rax
	__m128i v10; // xmm0
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 result; // rax

	sub_140058710(a1, (unsigned __int64*)"format", 6ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = 0;
	do
	{
		if (!*a4)
			break;
		v9 = *(_QWORD*)(a1 + 16);
		++v8;
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = (double)v8;
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = _mm_cvtsi32_si128(*a4);
		v11 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		++a4;
	} while ((unsigned int)v8 < 0xC);
	v12 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v12, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

