#include "../winhttp.h"

//----- (000000014088C040) ----------------------------------------------------
__int64 __fastcall sub_14088C040(__int64 a1, int a2, float a3)
{
	__int64 result; // rax

	if (!a2)
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)(a1 + 544) + 24i64))(a1 + 544, a1 + a2);
	if (a2 == 1)
	{
		*(float*)(a1 + 292) = a3;
		*(float*)(a1 + 212) = *(float*)(a1 + 292) + *(float*)(a1 + 288);
		return result;
	}
	result = (unsigned int)(a2 - 2);
	if ((unsigned int)result <= 1)
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)(a1 + 544) + 24i64))(a1 + 544, a1 + a2);
	return result;
}

