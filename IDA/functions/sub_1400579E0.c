#include "../winhttp.h"

//----- (00000001400579E0) ----------------------------------------------------
void __fastcall sub_1400579E0(__int64 a1, __int64 a2, int a3)
{
	__int64* v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // r8
	__int64 v8; // rax

	if (a3 >= 0)
	{
		v5 = (__int64*)sub_1400580E0(a1, -10000);
		v6 = sub_14005C3C0(*v5, 0);
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = *v6;
		*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
		v8 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = (double)a3;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
	}
}

