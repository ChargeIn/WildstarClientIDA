#include "../winhttp.h"

//----- (00000001400465C0) ----------------------------------------------------
__int64 __fastcall sub_1400465C0(__int64 a1, int* a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 176);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 176) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 184);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 184) = 0i64;
	}
	sub_1400168A0(v5, *a2);
	result = sub_1400481B0(a1, *(_QWORD*)(qword_140C635F0 + 5888), 0i64);
	*(_DWORD*)(a1 + 168) = 5;
	return result;
}
// 14004660C: variable 'v5' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;

