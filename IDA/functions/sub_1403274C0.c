#include "../winhttp.h"

//----- (00000001403274C0) ----------------------------------------------------
void __fastcall sub_1403274C0(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 16);
	if (v2[120])
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v2 + 1008i64))(v2))
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, _QWORD))(*(_QWORD*)(a1 + 16) + 960i64))(
				*(_QWORD*)(a1 + 16),
				*(unsigned int*)(a1 + 64),
				a1 + 68,
				*(unsigned int*)(a1 + 96),
				*(_DWORD*)(a1 + 8),
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 968i64));
	}
}

