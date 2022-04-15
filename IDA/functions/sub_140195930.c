#include "../winhttp.h"

//----- (0000000140195930) ----------------------------------------------------
__int64 __fastcall sub_140195930(__int64 a1, __int64 a2)
{
	int v2; // ecx
	__int64 result; // rax

	v2 = *(_DWORD*)(a2 + 32);
	if (!v2)
		return (*(__int64(__fastcall**)(_QWORD))(a2 + 48))(*(_QWORD*)(a2 + 40));
	if (v2 == 1)
		return (*(__int64(__fastcall**)(_QWORD, _QWORD))(a2 + 48))(*(_QWORD*)(a2 + 40), *(_QWORD*)(a2 + 56));
	return result;
}

