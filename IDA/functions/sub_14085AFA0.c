#include "../winhttp.h"

//----- (000000014085AFA0) ----------------------------------------------------
void __fastcall sub_14085AFA0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v7; // rax

	if (!a2)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 608i64))(a1);
		if (v7)
			sub_140855080(a1, v7, 0.0, a3, a4);
	}
}

