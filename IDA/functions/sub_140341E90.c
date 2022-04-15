#include "../winhttp.h"

//----- (0000000140341E90) ----------------------------------------------------
__m128 __fastcall sub_140341E90(__int64 a1)
{
	int* v2; // rax
	bool v3; // zf
	__int64* v4; // rsi
	__int64 v5; // rax
	__m128 result; // xmm0

	if (!*(_QWORD*)(a1 + 32))
	{
		v2 = sub_14018B280(96i64, 0);
		if (v2)
		{
			*((_QWORD*)v2 + 2) = 0i64;
			*((_QWORD*)v2 + 1) = 0i64;
			*((_QWORD*)v2 + 4) = 0i64;
			*((_QWORD*)v2 + 3) = 0i64;
			*((_QWORD*)v2 + 6) = 0i64;
			*((_QWORD*)v2 + 5) = 0i64;
			*((_QWORD*)v2 + 10) = 0i64;
			*((_QWORD*)v2 + 11) = 0i64;
			v2[18] = 1;
			*((_QWORD*)v2 + 8) = 0i64;
			v2[14] = 0;
			*v2 = 0;
		}
		else
		{
			v2 = 0i64;
		}
		v3 = *(_DWORD*)(a1 + 48) == 0;
		*(_QWORD*)(a1 + 32) = v2;
		if (v3)
		{
			return sub_1403417A0((__int64)v2, 0i64, 0i64);
		}
		else
		{
			v4 = (__int64*)(v2 + 2);
			sub_1402877C0((__int64*)v2 + 1, 1ui64);
			v5 = *v4;
			*(_OWORD*)v5 = *(_OWORD*)a1;
			result = *(__m128*)(a1 + 16);
			*(__m128*)(v5 + 16) = result;
		}
	}
	return result;
}

