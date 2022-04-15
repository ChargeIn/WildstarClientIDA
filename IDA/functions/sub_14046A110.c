#include "../winhttp.h"

//----- (000000014046A110) ----------------------------------------------------
__int64 __fastcall sub_14046A110(__int64 a1, int a2, int a3)
{
	__int64 v6; // rbx
	unsigned int i; // edi

	if (!a2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 5576);
	for (i = 0; v6; v6 = *(_QWORD*)(v6 + 24))
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 56) + 8i64))(*(_QWORD*)(v6 + 56)) == a3
			&& *(_DWORD*)(*(_QWORD*)(v6 + 56) + 340i64) == a2)
		{
			i += *(_DWORD*)(v6 + 80);
		}
	}
	return i;
}

