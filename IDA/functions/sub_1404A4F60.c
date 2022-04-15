#include "../winhttp.h"

//----- (00000001404A4F60) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A4F60(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	__int64 v8; // rbx
	unsigned int i; // edi

	if (!a2)
		return 0i64;
	v8 = *(_QWORD*)(a2 + 5576);
	for (i = 0; v8; v8 = *(_QWORD*)(v8 + 24))
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 56) + 8i64))(*(_QWORD*)(v8 + 56)) == a4)
			i += *(_DWORD*)(v8 + 80);
	}
	return sub_1404A2090(a1, a3, i, a5);
}
// 1404A4FD8: variable 'a1' is possibly undefined

