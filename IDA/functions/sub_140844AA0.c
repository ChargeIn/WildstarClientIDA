#include "../winhttp.h"

//----- (0000000140844AA0) ----------------------------------------------------
__int64 __fastcall sub_140844AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rbx
	int v5; // esi
	__int64* i; // r14

	v4 = qword_140C61F90;
	v5 = a4;
	for (i = (__int64*)a3; v4; v4 = *(_QWORD*)(v4 + 24))
	{
		if (*(_QWORD*)(v4 + 160) == a1 && (!a2 || *(_QWORD*)(v4 + 176) == a2) && (!v5 || *(_DWORD*)(v4 + 120) == v5))
		{
			LOBYTE(a3) = 1;
			sub_140860EA0(v4, i, a3, a4);
		}
	}
	return 1i64;
}
// 140844AFB: variable 'a3' is possibly undefined
// 140844AFB: variable 'a4' is possibly undefined
// 140C61F90: using guessed type __int64 qword_140C61F90;

