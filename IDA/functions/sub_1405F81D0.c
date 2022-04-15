#include "../winhttp.h"

//----- (00000001405F81D0) ----------------------------------------------------
__int64 __fastcall sub_1405F81D0(__int64 a1)
{
	unsigned int v3; // edi

	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 104i64))(a1)
		|| !*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1) + 16))
	{
		return 0i64;
	}
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
	if (v3 <= *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1) + 16))
		return *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1) + 16) - v3;
	else
		return 0i64;
}

