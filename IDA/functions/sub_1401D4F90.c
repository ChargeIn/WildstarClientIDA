#include "../winhttp.h"

//----- (00000001401D4F90) ----------------------------------------------------
signed int __fastcall sub_1401D4F90(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	signed int result; // eax

	if (((*(_DWORD*)(a1 + 64) - 2) & 0xFFFFFFFD) != 0)
		return 0;
	v2 = *(_QWORD*)(a1 + 48);
	if (v2 == -1)
		return -2147467259;
	if ((unsigned int)sub_1401C35A0(v2, a2))
		return 0;
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

