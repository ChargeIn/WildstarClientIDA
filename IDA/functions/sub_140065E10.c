#include "../winhttp.h"

//----- (0000000140065E10) ----------------------------------------------------
void __fastcall sub_140065E10(__int64 a1)
{
	__int64 v1; // rdi
	int v3; // r9d
	__int64 i; // r8
	int v5; // r8d

	v1 = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)v1;
	v3 = *(unsigned __int8*)(v1 + 12);
	for (i = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48i64);
		*(unsigned __int8*)(i + 74) > v3;
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)i + 48i64)
			+ 16i64 * *(unsigned __int16*)(i + 2i64 * *(unsigned __int8*)(i + 74) + 196)
			+ 12) = *(_DWORD*)(i + 48))
	{
		--* (_BYTE*)(i + 74);
	}
	if (*(_BYTE*)(v1 + 13))
		sub_14006BBF0(a1, (*(unsigned __int8*)(v1 + 12) << 6) | 0x23, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	*(_DWORD*)(a1 + 60) = *(unsigned __int8*)(a1 + 74);
	v5 = *(_DWORD*)(v1 + 8);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 48);
	if (v5 != -1)
		sub_14006A3C0((__int64*)a1, (int*)(a1 + 56), v5);
}

