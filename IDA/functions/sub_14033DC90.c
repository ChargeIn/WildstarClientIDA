#include "../winhttp.h"

//----- (000000014033DC90) ----------------------------------------------------
void __fastcall sub_14033DC90(__int64* a1)
{
	__int64 v1; // rbp
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v6; // rcx

	v1 = a1[7];
	v2 = a1[3];
	v3 = a1[5];
	v4 = a1[6];
	while (v2 != v1)
	{
		v6 = *(_QWORD*)(v2 + 8);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v2 += 16i64;
		if (v2 == v3)
		{
			v2 = *(_QWORD*)(v4 + 8);
			v3 = v2 + 496;
			v4 += 8i64;
		}
	}
	sub_14033E040(a1);
}

