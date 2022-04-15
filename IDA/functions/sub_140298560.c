#include "../winhttp.h"

//----- (0000000140298560) ----------------------------------------------------
__int64 __fastcall sub_140298560(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rdx
	__int64 result; // rax

	v3 = a1 + 32i64 * a2;
	*(_DWORD*)(v3 + 168) = *(_DWORD*)a3;
	*(_QWORD*)(v3 + 184) = *(_QWORD*)(a3 + 16);
	*(_QWORD*)(v3 + 176) = *(_QWORD*)(a3 + 8);
	result = *(_QWORD*)(a3 + 24);
	*(_QWORD*)(v3 + 192) = result;
	return result;
}

