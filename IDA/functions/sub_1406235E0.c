#include "../winhttp.h"

//----- (00000001406235E0) ----------------------------------------------------
void __fastcall sub_1406235E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64* v9; // r8

	if (!a4)
	{
		v6 = *(_QWORD*)(a6 + 1472);
		while (v6)
		{
			v7 = v6;
			v8 = v6 + 40;
			v9 = *(__int64**)(v6 + 32);
			v6 = *(_QWORD*)(v6 + 40);
			if (v9)
				*v9 = v6;
			if (*(_QWORD*)v8)
				*(_QWORD*)(*(_QWORD*)v8 + 32i64) = *(_QWORD*)(v7 + 32);
			*(_QWORD*)(v7 + 32) = 0i64;
			*(_QWORD*)v8 = 0i64;
			sub_140624200(v7);
		}
		sub_140622B70(a6);
	}
}

