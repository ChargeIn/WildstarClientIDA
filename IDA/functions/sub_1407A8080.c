#include "../winhttp.h"

//----- (00000001407A8080) ----------------------------------------------------
__int64 __fastcall sub_1407A8080(_QWORD* a1)
{
	unsigned int v2; // edi
	__int64 v3; // rsi
	__int64 v4; // rcx

	v2 = 0;
	if (a1[18])
	{
		v3 = 0i64;
		do
		{
			sub_1407E4830((int*)(*(_QWORD*)(a1[17] + 8 * v3) + 156i64), 0i64, 0xE0ui64);
			++v2;
			*(_DWORD*)(*(_QWORD*)(a1[17] + 8 * v3) + 380i64) = 0;
			*(_DWORD*)(*(_QWORD*)(a1[17] + 8 * v3) + 388i64) = 0;
			v4 = *(_QWORD*)(a1[17] + 8 * v3);
			v3 = v2;
			*(_DWORD*)(v4 + 384) = 0;
		} while ((unsigned __int64)v2 < a1[18]);
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
}

