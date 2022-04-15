#include "../winhttp.h"

//----- (00000001407ABFA0) ----------------------------------------------------
__int64 __fastcall sub_1407ABFA0(__int64 a1)
{
	unsigned int v1; // r8d
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = 0;
	if (*(_QWORD*)(a1 + 144))
	{
		v2 = 0i64;
		do
		{
			result = *(_QWORD*)(a1 + 136);
			++v1;
			*(_DWORD*)(*(_QWORD*)(result + 8 * v2) + 388i64) = 0;
			v2 = v1;
		} while ((unsigned __int64)v1 < *(_QWORD*)(a1 + 144));
	}
	return result;
}

