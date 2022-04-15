#include "../winhttp.h"

//----- (00000001400F9E50) ----------------------------------------------------
__int64 __fastcall sub_1400F9E50(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx

	if (a1 != a2)
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2))
		{
			sub_1400579E0(*(_QWORD*)(a1 + 16), v4, *(_DWORD*)(a1 + 8));
			v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v7 = *(_QWORD*)(v6 + 16);
			*(_QWORD*)v7 = *v5;
			*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
			*(_QWORD*)(v6 + 16) += 16i64;
			*(_DWORD*)(a1 + 8) = sub_1400578C0(*(_QWORD*)(a1 + 16));
		}
	}
	return a1;
}
// 1400F9E82: variable 'v4' is possibly undefined
// 1400F9E9E: variable 'v6' is possibly undefined

