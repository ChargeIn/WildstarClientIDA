#include "../winhttp.h"

//----- (0000000140794E60) ----------------------------------------------------
__int64 __fastcall sub_140794E60(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	bool v3; // zf
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v1 = a1;
	*(_DWORD*)(v1 + 8) = 8;
	v2 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) += 16i64;
	v3 = *(_QWORD*)(v2 + 176) == a1;
	result = 1i64;
	if (v3)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}

