#include "../winhttp.h"

//----- (0000000140867F60) ----------------------------------------------------
__int64 __fastcall sub_140867F60(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // r8

	for (result = *(_QWORD*)(a1 + 48); result != *(_QWORD*)(a1 + 56); result += 8i64)
	{
		v2 = *(_QWORD*)(*(_QWORD*)result + 88i64);
		if ((*(_BYTE*)(v2 + 76) & 4) == 0)
		{
			*(_DWORD*)(v2 + 24) = *(_DWORD*)(a1 + 100);
			*(_DWORD*)(v2 + 28) = *(_DWORD*)(a1 + 104);
			*(_DWORD*)(v2 + 32) = *(_DWORD*)(a1 + 108);
		}
	}
	return result;
}

