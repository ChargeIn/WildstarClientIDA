#include "../winhttp.h"

//----- (00000001403610F0) ----------------------------------------------------
__int64 __fastcall sub_1403610F0(__int64 a1)
{
	int v2; // edi

	if ((*(_DWORD*)(a1 + 128) & 0x880) == 2176)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6192) + 88i64))(*(_QWORD*)(a1 + 6192));
	if ((*(_BYTE*)(a1 + 128) & 0x60) == 0 || (v2 = sub_1403640D0((__m128*)a1), v2 >= 0))
	{
		if ((*(_DWORD*)(a1 + 128) & 0x880) != 2176 || (v2 = sub_1403647D0(a1), v2 >= 0))
			v2 = 0;
	}
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6192) + 112i64))(*(_QWORD*)(a1 + 6192));
	return (unsigned int)v2;
}

