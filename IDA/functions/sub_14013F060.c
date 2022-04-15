#include "../winhttp.h"

//----- (000000014013F060) ----------------------------------------------------
__int64 __fastcall sub_14013F060(__int64 a1)
{
	__int64 v2; // rdx
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64);
	v3 = *(_QWORD**)(v2 + 16);
	if (!v3)
		return *(_QWORD*)(a1 + 24);
	if (!(*(unsigned __int8(__fastcall**)(_QWORD))(*v3 + 96i64))(*(_QWORD*)(v2 + 16)))
	{
		if ((*(unsigned __int8(__fastcall**)(_QWORD*))(*v3 + 88i64))(v3))
			return v3[4];
		return *(_QWORD*)(a1 + 24);
	}
	v4 = v3[13];
	if (!v4)
		return *(_QWORD*)(a1 + 24);
	result = *(_QWORD*)(v3[12] + 8 * v4 - 8);
	if (!result)
		return *(_QWORD*)(a1 + 24);
	return result;
}

