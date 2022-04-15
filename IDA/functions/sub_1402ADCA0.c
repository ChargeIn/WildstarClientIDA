#include "../winhttp.h"

//----- (00000001402ADCA0) ----------------------------------------------------
__int64 __fastcall sub_1402ADCA0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rax

	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)a1 = a2;
	*(_QWORD*)(a1 + 8) = a3[1];
	*(_QWORD*)(a1 + 16) = a3[2];
	*(_QWORD*)(a1 + 24) = a3[3];
	v5 = a3[4];
	if (*(_QWORD*)(a1 + 32) != v5)
	{
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		v6 = *(_QWORD*)(a1 + 32);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		*(_QWORD*)(a1 + 32) = a3[4];
	}
	v7 = (_QWORD*)(*(_QWORD*)a1 + 8600i64);
	if (!*(_QWORD*)(a1 + 40))
	{
		*(_QWORD*)(a1 + 40) = v7;
		*(_QWORD*)(a1 + 48) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 48);
		if (v8)
			*(_QWORD*)(v8 + 40) = a1 + 48;
	}
	return a1;
}

