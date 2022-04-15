#include "../winhttp.h"

//----- (00000001402B1EA0) ----------------------------------------------------
__int64 __fastcall sub_1402B1EA0(__int64* a1)
{
	unsigned __int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			v5 = *(_QWORD*)(v3 + *a1 + 72);
			*(_QWORD*)(v3 + v4) = 0i64;
			*(_QWORD*)(v3 + v4 + 8) = 0i64;
			if (v5)
			{
				sub_14018B900(v5, 0);
				*(_QWORD*)(v3 + v4 + 72) = 0i64;
			}
			v6 = *(_QWORD*)(v3 + v4 + 80);
			if (v6)
			{
				sub_14018B900(v6, 0);
				*(_QWORD*)(v3 + v4 + 80) = 0i64;
			}
			result = 0i64;
			++v2;
			v3 += 88i64;
			*(_QWORD*)(v3 + v4 - 72) = 0i64;
			*(_QWORD*)(v3 + v4 - 64) = 0i64;
			*(_QWORD*)(v3 + v4 - 56) = 0i64;
			*(_QWORD*)(v3 + v4 - 48) = 0i64;
			*(_QWORD*)(v3 + v4 - 40) = 0i64;
			*(_QWORD*)(v3 + v4 - 32) = 0i64;
			*(_QWORD*)(v3 + v4 - 24) = 0i64;
		} while (v2 < a1[1]);
	}
	if (*a1)
		return (**(__int64(__fastcall***)(__int64))(*a1 - 16))(*a1 - 16);
	return result;
}

