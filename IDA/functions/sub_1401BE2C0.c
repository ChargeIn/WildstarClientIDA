#include "../winhttp.h"

//----- (00000001401BE2C0) ----------------------------------------------------
__int64 __fastcall sub_1401BE2C0(__int64 a1, __int64 a2, char* a3)
{
	__int8* v6; // rax
	__int8* v7; // rsi
	unsigned __int64 v8; // rax
	__int64 result; // rax
	__int64* v10; // rbx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rsi
	__int64 v13; // rbx
	unsigned __int64 v14; // [rsp+20h] [rbp-18h]
	__int64 v15; // [rsp+58h] [rbp+20h]

	v6 = sub_1407DE0B4((__int64)a3, 0x5Cu);
	v7 = v6;
	if (!v6)
	{
		v11 = sub_1401BF1C0(a1, a3);
		v12 = v11;
		if (v11 >= *(_QWORD*)(a1 + 32))
			return 2147943568i64;
		v13 = 56 * v11;
		sub_1401C01E0(a2, 56 * v11 + *(_QWORD*)(a1 + 24) + 32i64);
		sub_1407DB590(
			(int*)(v13 + *(_QWORD*)(a1 + 24)),
			(int*)(v13 + *(_QWORD*)(a1 + 24) + 56),
			56 * (*(_QWORD*)(a1 + 32) - v12 - 1));
		--* (_QWORD*)(a1 + 32);
		result = sub_1401BD1F0((unsigned int*)a1, a2);
		if ((int)result < 0)
			return result;
		return 0i64;
	}
	*v6 = 0;
	v8 = sub_1401BF0F0(a1, a3);
	*v7 = 92;
	v14 = v8;
	if (v8 >= *(_QWORD*)(a1 + 16))
		return 2147943568i64;
	v10 = *(__int64**)(16 * v8 + *(_QWORD*)(a1 + 8) + 8);
	v15 = 16 * v8;
	result = sub_1401BE2C0(v10, a2, v7 + 1);
	if ((int)result >= 0)
	{
		if (v10[2])
			return 0i64;
		if (v10[4])
			return 0i64;
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a2 + 40) + 56i64))(
			*(_QWORD*)(a2 + 40),
			*(unsigned int*)v10);
		if ((int)result >= 0)
		{
			sub_1401BCE10(v10);
			sub_14018B900((__int64)v10, 0);
			sub_1407DB590(
				(int*)(*(_QWORD*)(a1 + 8) + v15),
				(int*)(*(_QWORD*)(a1 + 8) + v15 + 16),
				16 * (*(_QWORD*)(a1 + 16) - v14 - 1));
			--* (_QWORD*)(a1 + 16);
			result = sub_1401BD1F0((unsigned int*)a1, a2);
			if ((int)result >= 0)
				return 0i64;
		}
	}
	return result;
}

