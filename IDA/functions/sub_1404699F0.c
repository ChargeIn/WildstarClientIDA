#include "../winhttp.h"

//----- (00000001404699F0) ----------------------------------------------------
__int64 __fastcall sub_1404699F0(__int64 a1, int a2, int a3)
{
	__int64 v6; // rbx

	if (!a2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 5576);
	if (!v6)
		return 0i64;
	while ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 56) + 8i64))(*(_QWORD*)(v6 + 56)) != a3
		|| *(_DWORD*)(*(_QWORD*)(v6 + 56) + 340i64) != a2)
	{
		v6 = *(_QWORD*)(v6 + 24);
		if (!v6)
			return 0i64;
	}
	return 1i64;
}

