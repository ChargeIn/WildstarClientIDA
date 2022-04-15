#include "../winhttp.h"

//----- (000000014038A4A0) ----------------------------------------------------
__int64 __fastcall sub_14038A4A0(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 48i64))(*(_QWORD*)(a1 + 16));
	if ((_DWORD)result)
	{
		sub_14038A590(a1);
		v3 = *(_QWORD**)(a1 + 128);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 136);
		v4 = *(_QWORD*)(a1 + 136);
		if (v4)
			*(_QWORD*)(v4 + 128) = *(_QWORD*)(a1 + 128);
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_QWORD*)(a1 + 136) = 0i64;
		return 1i64;
	}
	return result;
}

