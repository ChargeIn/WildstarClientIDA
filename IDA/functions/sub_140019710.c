#include "../winhttp.h"

//----- (0000000140019710) ----------------------------------------------------
__int64 __fastcall sub_140019710(__int64 a1, char a2)
{
	int* v3; // r8
	unsigned __int64 v4; // rcx
	unsigned __int8 v5; // r9
	int v6; // eax
	char v7; // dl
	_BYTE* v8; // r8
	void(__fastcall * v9)(_QWORD); // r8
	char v11; // [rsp+38h] [rbp+10h] BYREF

	v11 = a2;
	if (*(_DWORD*)(a1 + 48))
	{
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 48i64))(a1, &v11);
		a2 = v11;
	}
	v3 = (int*)qword_140C63750;
	v4 = 0i64;
	v5 = *(_BYTE*)(*(int*)qword_140C63750 + a1 + 32);
	*(_BYTE*)(a1 + 39) = a2;
	v6 = 1;
	do
	{
		if ((v6 & *(_DWORD*)(a1 + 24)) != 0)
			break;
		v6 = __ROL4__(v6, 1);
		*(_BYTE*)(v4 + a1 + 32) = a2;
		++v4;
	} while (v4 < 5);
	v7 = *(_BYTE*)(*v3 + a1 + 32);
	if (v5 != v7)
	{
		v8 = *(_BYTE**)(a1 + 40);
		if (v8)
			*v8 = v7;
		v9 = *(void(__fastcall**)(_QWORD))(a1 + 56);
		if (v9)
			v9(v5);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

