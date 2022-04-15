#include "../winhttp.h"

//----- (000000014086F6E0) ----------------------------------------------------
__int64 __fastcall sub_14086F6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v8; // r10
	__int64 v10; // rax
	__int64 i; // rcx
	__int16 v12; // ax

	v8 = sub_140852C90(a1);
	if (!v8)
		return 2i64;
	v10 = *(_QWORD*)(a1 + 168);
	for (i = *(_QWORD*)(a1 + 176); v10 != i; v10 += 16i64)
	{
		if (*(_QWORD*)(v10 + 8) == a3)
			break;
	}
	if (!*(_WORD*)(a2 + 50))
	{
		*(_WORD*)(a2 + 50) = *(_WORD*)(*(_QWORD*)(v10 + 8) + 42i64);
		v12 = *(_WORD*)(*(_QWORD*)(v10 + 8) + 40i64);
		*(_QWORD*)a2 = v8;
		*(_WORD*)(a2 + 48) = v12;
	}
	*(_DWORD*)(a2 + 8) = 0;
	*(_DWORD*)(a2 + 20) = 0;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _BYTE))(*(_QWORD*)v8 + 512i64))(
		v8,
		a2,
		a3,
		a4,
		0);
}

