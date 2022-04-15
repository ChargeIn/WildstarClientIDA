#include "../winhttp.h"

//----- (0000000140155570) ----------------------------------------------------
HIMC __fastcall sub_140155570(__int64 a1)
{
	bool v1; // zf
	HWND v3; // rcx
	HIMC Context; // rax
	HWND v5; // rcx
	HWND v6; // rcx
	HIMC result; // rax
	__int64(__fastcall * **v8)(_QWORD, void*, __int64*); // rcx
	__int64 v9; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD*)a1 == 0i64;
	*(_DWORD*)(a1 + 16) = 1;
	if (v1)
	{
		v3 = *(HWND*)(qword_140C65678 + 8);
		*(_QWORD*)a1 = v3;
		Context = ImmGetContext(v3);
		v5 = *(HWND*)a1;
		*(_QWORD*)(a1 + 8) = Context;
		ImmReleaseContext(v5, Context);
	}
	sub_140155E50(a1);
	v6 = *(HWND*)a1;
	*(_DWORD*)(a1 + 20) = 0;
	result = ImmAssociateContext(v6, 0i64);
	v8 = *(__int64(__fastcall****)(_QWORD, void*, __int64*))(a1 + 472);
	if (v8 && *(_DWORD*)(a1 + 496) != -1)
	{
		v10 = 0i64;
		result = (HIMC)(**v8)(v8, &unk_140B5C848, &v10);
		if ((int)result >= 0)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 32i64))(v10, *(unsigned int*)(a1 + 496));
			v9 = v10;
			*(_DWORD*)(a1 + 496) = -1;
			return (HIMC)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		}
	}
	return result;
}
// 140C65678: using guessed type __int64 qword_140C65678;

