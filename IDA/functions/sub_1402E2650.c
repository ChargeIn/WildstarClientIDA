#include "../winhttp.h"

//----- (00000001402E2650) ----------------------------------------------------
__int64 __fastcall sub_1402E2650(__int64 a1, _DWORD* a2, _QWORD* a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx

	if (!a3)
		return 2147942487i64;
	v5 = sub_1402E16D0(a1, a2);
	if (v5 && (v6 = *(_QWORD*)(v5 + 32)) != 0)
	{
		*a3 = v6;
		(***(void(__fastcall****)(_QWORD))(v5 + 32))(*(_QWORD*)(v5 + 32));
		return 0i64;
	}
	else
	{
		*a3 = 0i64;
		return 1i64;
	}
}

