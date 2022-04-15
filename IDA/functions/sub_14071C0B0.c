#include "../winhttp.h"

//----- (000000014071C0B0) ----------------------------------------------------
__int64 __fastcall sub_14071C0B0(__int64 a1, __int64 a2)
{
	_WORD* v2; // rax
	int v5; // eax
	__int64 v6; // rax
	unsigned int v7; // r10d
	__int64 result; // rax
	__int64 v9; // rcx

	v2 = *(_WORD**)(a2 + 152);
	if (!v2 || !*v2)
		return 2147500037i64;
	v5 = *(_DWORD*)(a2 + 192);
	*(_DWORD*)(a1 + 244) = v5;
	if (!v5)
		v5 = 150;
	*(_DWORD*)(a1 + 244) = v5;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
	if ((*(int(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)v6 + 40i64))(
		v6,
		*(_QWORD*)(a2 + 152),
		a1 + 224,
		1i64) >= 0)
	{
		v9 = *(_QWORD*)(a1 + 224);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 736i64))(v9);
		result = sub_140719EF0((__int64*)a1, (int*)a2);
		if ((int)result >= 0)
		{
			*(_DWORD*)(a1 + 320) = *(_DWORD*)(a2 + 4) != 0;
			return 0i64;
		}
	}
	else
	{
		sub_1400035B0();
		return v7;
	}
	return result;
}
// 14071C146: variable 'v7' is possibly undefined

