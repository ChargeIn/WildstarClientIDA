#include "../winhttp.h"

//----- (0000000140844A10) ----------------------------------------------------
__int64 __fastcall sub_140844A10(__int64 a1, __int64 a2, __int64* a3, char a4, int a5)
{
	__int64 i; // rbx

	for (i = qword_140C61F90; i; i = *(_QWORD*)(i + 24))
	{
		if (*(_QWORD*)(i + 160) == a1 && (!a2 || *(_QWORD*)(i + 176) == a2) && (!a5 || *(_DWORD*)(i + 120) == a5))
			sub_140860C80(i, a3, a4);
	}
	return 1i64;
}
// 140C61F90: using guessed type __int64 qword_140C61F90;

