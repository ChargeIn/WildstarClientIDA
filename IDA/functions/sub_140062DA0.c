#include "../winhttp.h"

//----- (0000000140062DA0) ----------------------------------------------------
__int64 __fastcall sub_140062DA0(__int64 a1, unsigned __int64* a2, unsigned __int64 a3)
{
	__int64 v3; // rdi
	__int64 v5; // rsi
	_DWORD* v6; // rax

	v3 = *(_QWORD*)(a1 + 56);
	v5 = sub_140062650(v3, a2, a3);
	v6 = sub_14005C630(v3, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64), v5);
	if (!v6[2])
	{
		*v6 = 1;
		v6[2] = 1;
	}
	return v5;
}

