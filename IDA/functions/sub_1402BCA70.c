#include "../winhttp.h"

//----- (00000001402BCA70) ----------------------------------------------------
__int64 __fastcall sub_1402BCA70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rcx
	int v7; // eax
	__int64 result; // rax

	v3 = a2 + 8;
	v4 = a3 - a1;
	v5 = a1 + 2;
	v6 = 8i64;
	do
	{
		v7 = *(__int16*)(v4 + v5 - 2);
		v5 += 16i64;
		v3 += 32i64;
		*(_WORD*)(v5 - 18) = (int)(float)((float)v7 * *(float*)(v3 - 40));
		*(_WORD*)(v5 - 16) = (int)(float)((float)*(__int16*)(v4 + v5 - 16) * *(float*)(v3 - 36));
		*(_WORD*)(v5 - 14) = (int)(float)((float)*(__int16*)(v4 + v5 - 14) * *(float*)(v3 - 32));
		*(_WORD*)(v5 - 12) = (int)(float)((float)*(__int16*)(v4 + v5 - 12) * *(float*)(v3 - 28));
		*(_WORD*)(v5 - 10) = (int)(float)((float)*(__int16*)(v4 + v5 - 10) * *(float*)(v3 - 24));
		*(_WORD*)(v5 - 8) = (int)(float)((float)*(__int16*)(v4 + v5 - 8) * *(float*)(v3 - 20));
		*(_WORD*)(v5 - 6) = (int)(float)((float)*(__int16*)(v4 + v5 - 6) * *(float*)(v3 - 16));
		result = (unsigned int)(int)(float)((float)*(__int16*)(v4 + v5 - 4) * *(float*)(v3 - 12));
		*(_WORD*)(v5 - 4) = result;
		--v6;
	} while (v6);
	return result;
}

