#include "../winhttp.h"

//----- (00000001401A62C0) ----------------------------------------------------
__int64 __fastcall sub_1401A62C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int* v4; // rax
	__int64 result; // rax

	v2 = a2;
	if (!a2)
		v2 = *(_QWORD*)(a1 + 8);
	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1))
		v4 = 0i64;
	else
		v4 = (int*)sub_1401A4F40(a1 + 24);
	result = sub_1401A7880(v2, v4);
	*(_BYTE*)(result + 88) = *(_BYTE*)(a1 + 88);
	return result;
}

