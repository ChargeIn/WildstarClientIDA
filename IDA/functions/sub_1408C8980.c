#include "../winhttp.h"

//----- (00000001408C8980) ----------------------------------------------------
__int64 __fastcall sub_1408C8980(__int64 a1, __int64 a2)
{
	unsigned int v4; // ecx
	__int64 v5; // rbp
	__int64 v6; // rbx

	v4 = 1;
	v5 = *(unsigned int*)(*(_QWORD*)(a1 + 328) + 92i64);
	if (*(_BYTE*)(a1 + 300))
	{
		v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 800i64);
		if (v6)
		{
			*(_DWORD*)v6 = 0;
			*(_QWORD*)(v6 + 8) = 0i64;
			*(_DWORD*)(v6 + 16) = 0;
			*(_QWORD*)(v6 + 788) = 0i64;
			sub_1407E4830((int*)(v6 + 20), 0i64, 0x100ui64);
			sub_1407E4830((int*)(v6 + 276), 0i64, 0x100ui64);
			sub_1407E4830((int*)(v6 + 532), 0i64, 0x80ui64);
			sub_1407E4830((int*)(v6 + 660), 0i64, 0x80ui64);
		}
		else
		{
			v6 = 0i64;
		}
		*(_QWORD*)(a1 + 320) = v6;
		if (!v6)
			return 52i64;
		return (unsigned int)sub_1408C9E00(
			(unsigned int*)v6,
			a2,
			*(float*)(*(_QWORD*)(a1 + 328) + 100i64),
			(float*)(&off_1409B0C70)[5 * v5 + 1],
			(float*)(&off_1409B0C70)[5 * v5 + 2],
			*((_DWORD*)&off_1409B0C70 + 10 * v5 + 2),
			*((_DWORD*)&off_1409B0C70 + 10 * v5 + 6),
			*(_DWORD*)(a1 + 292));
	}
	return v4;
}
// 1409B0C70: using guessed type wchar_t *off_1409B0C70;

