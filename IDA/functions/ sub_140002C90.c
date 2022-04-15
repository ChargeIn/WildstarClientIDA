#include "../winhttp.h"

//----- (0000000140002C90) ----------------------------------------------------
__int64 __fastcall sub_140002C90(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 480) + 32i64))(*(_QWORD*)(a1 + 480)))
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 440) + 32i64))(*(_QWORD*)(a1 + 440), a2))
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 456) + 32i64))(*(_QWORD*)(a1 + 456), a2))
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 448) + 32i64))(*(_QWORD*)(a1 + 448), a2))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 464);
	if (v4)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 32i64))(v4, a2))
			return 0i64;
	}
	sub_140002470(a1);
	*(_DWORD*)(a1 + 64) = 3;
	return 1i64;
}

