#include "../winhttp.h"

//----- (00000001406070A0) ----------------------------------------------------
void __fastcall sub_1406070A0(__int64 a1)
{
	unsigned __int64 v1; // rdi
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = 0i64;
	if (*(_DWORD*)(a1 + 16))
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(v3 + *(_QWORD*)(a1 + 24));
			if (v4)
				sub_14018B900(v4, 0);
			++v1;
			v3 += 168i64;
		} while (v1 < *(unsigned int*)(a1 + 16));
	}
	v5 = *(_QWORD*)(a1 + 24);
	if (v5)
		sub_14018B900(v5, 0);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)a1 = 0i64;
}

