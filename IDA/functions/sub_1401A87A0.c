#include "../winhttp.h"

//----- (00000001401A87A0) ----------------------------------------------------
__int64 __fastcall sub_1401A87A0(__int64 a1, char a2)
{
	__int64 v3; // rsi
	__int64 result; // rax

	--* (_DWORD*)(a1 + 128);
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * (int)-- * (_DWORD*)(a1 + 108));
	if (*(_BYTE*)(a1 + 8))
	{
		sub_1401A8480(a1, (__int64)L"/>");
	}
	else
	{
		if (*(int*)(a1 + 132) < 0 && !a2)
		{
			sub_1401A8480(a1, (__int64)&unk_1409E2544);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, *(unsigned int*)(a1 + 128));
		}
		sub_1401A8480(a1, (__int64)L"</%s>", v3);
	}
	result = *(unsigned int*)(a1 + 128);
	if (*(_DWORD*)(a1 + 132) == (_DWORD)result)
		*(_DWORD*)(a1 + 132) = -1;
	if (!(_DWORD)result && !a2)
		result = sub_1401A8480(a1, (__int64)&unk_1409E24DC);
	*(_BYTE*)(a1 + 8) = 0;
	return result;
}
// 1409E471C: using guessed type wchar_t asc_1409E471C[3];
// 140A453B0: using guessed type wchar_t aS_17[6];

