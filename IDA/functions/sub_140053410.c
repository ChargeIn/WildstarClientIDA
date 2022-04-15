#include "../winhttp.h"

//----- (0000000140053410) ----------------------------------------------------
__int64 __fastcall sub_140053410(__int64 a1)
{
	int v2; // eax
	__int64 result; // rax

	v2 = dword_140C3B9F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B9F0)
		v2 = *(_DWORD*)qword_140C63750;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		L"Arial Unicode MS",
		dword_140C3BA00[v2]);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
			qword_140C65680,
			L"Courier",
			9i64);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\SimplePS.sho",
				a1 + 16);
			if ((int)result >= 0)
			{
				*(_DWORD*)(a1 + 24) = sub_14018CDF0();
				*(_DWORD*)(a1 + 28) = 0;
				*(_DWORD*)(a1 + 36) = 0;
				*(_DWORD*)(a1 + 44) = 0;
				*(_DWORD*)(a1 + 52) = 0;
				*(_DWORD*)(a1 + 60) = 0;
				*(_DWORD*)(a1 + 68) = 0;
				sub_1407E4830((int*)(a1 + 76), 0i64, 0x3B0ui64);
				result = 0i64;
				*(_QWORD*)(a1 + 1024) = 0i64;
				*(_QWORD*)(a1 + 1032) = 0i64;
				*(_QWORD*)(a1 + 1040) = 0i64;
				*(_QWORD*)(a1 + 1048) = 0i64;
				*(_QWORD*)(a1 + 1056) = 0i64;
				*(_QWORD*)(a1 + 1064) = 0i64;
				*(_QWORD*)(a1 + 1072) = 0i64;
				*(_QWORD*)(a1 + 1080) = 0i64;
				*(_QWORD*)(a1 + 1088) = 0i64;
				*(_QWORD*)(a1 + 1096) = 0i64;
			}
		}
	}
	return result;
}
// 140A11558: using guessed type wchar_t aArialUnicodeMs[17];
// 140A115E0: using guessed type wchar_t aCourier_7[8];
// 140A115F0: using guessed type wchar_t aShadersSimplep_2[21];
// 140C3B9F0: using guessed type int dword_140C3B9F0;
// 140C3BA00: using guessed type unsigned int dword_140C3BA00[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;

