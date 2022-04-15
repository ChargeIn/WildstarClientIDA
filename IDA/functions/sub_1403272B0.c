#include "../winhttp.h"

//----- (00000001403272B0) ----------------------------------------------------
__int64 __fastcall sub_1403272B0(__int64 a1, int a2, void(__fastcall*** a3)(_QWORD), int a4)
{
	__int64 v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rax

	*(_QWORD*)a1 = &off_140B644F8;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 8) = a2;
	if (*(void(__fastcall****)(_QWORD))(a1 + 16) != a3)
	{
		if (a3)
			(**a3)(a3);
		v7 = *(_QWORD*)(a1 + 16);
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 16) = a3;
	}
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a4;
	v9 = (_QWORD*)(v8 + 1704);
	if (!*(_QWORD*)(a1 + 48))
	{
		*(_QWORD*)(a1 + 48) = v9;
		*(_QWORD*)(a1 + 56) = *v9;
		*v9 = a1;
		v10 = *(_QWORD*)(a1 + 56);
		if (v10)
			*(_QWORD*)(v10 + 48) = a1 + 56;
	}
	return a1;
}
// 140B644F8: using guessed type __int64 (__fastcall *off_140B644F8)();

