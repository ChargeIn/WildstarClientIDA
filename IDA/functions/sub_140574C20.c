#include "../winhttp.h"

//----- (0000000140574C20) ----------------------------------------------------
__int64 __fastcall sub_140574C20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // r8
	unsigned int v7; // ebx
	int v8; // edi
	__int64 v9; // r8
	bool v10; // zf
	int v11; // eax

	if (!a1 || !a2)
		return 0i64;
	v6 = *(unsigned int*)(a3 + 16);
	v7 = 1;
	if (!(_DWORD)v6
		|| (v8 = 0,
			(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					a1,
					v6,
					a2,
					0i64,
					0)))
	{
		v8 = 1;
	}
	v9 = *(unsigned int*)(a3 + 24);
	if (!(_DWORD)v9
		|| (v10 = (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				a2,
				v9,
				a1,
				0i64,
				0) == 0,
			v11 = 0,
			!v10))
	{
		v11 = 1;
	}
	if (!v8 || !v11)
		return 0;
	return v7;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;

