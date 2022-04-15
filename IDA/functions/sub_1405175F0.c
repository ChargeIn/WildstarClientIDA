#include "../winhttp.h"

//----- (00000001405175F0) ----------------------------------------------------
__int64 __fastcall sub_1405175F0(__int64 a1, __int64 a2, char a3)
{
	__int64 v6; // rcx
	__int64 v7; // rax
	_DWORD* v8; // rax
	int v9; // ecx
	__int64 v10; // rax
	_DWORD* v11; // rax
	int v12; // ecx
	_DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 26392))
	{
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
	v6 = *(_QWORD*)(a1 + 8);
	if (a3)
	{
		if (v6 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 168i64))(v6))
		{
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8));
			v8 = sub_1400CB3D0(v7, v13);
			v9 = v8[2] - *v8;
			LODWORD(v8) = v8[3] - v8[1];
			*(_DWORD*)a2 = v9;
			*(_DWORD*)(a2 + 4) = (_DWORD)v8;
			return a2;
		}
	}
	else if (v6 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 176i64))(v6))
	{
		v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 176i64))(*(_QWORD*)(a1 + 8));
		v11 = sub_1400CB3D0(v10, v13);
		v12 = v11[2] - *v11;
		LODWORD(v11) = v11[3] - v11[1];
		*(_DWORD*)a2 = v12;
		*(_DWORD*)(a2 + 4) = (_DWORD)v11;
		return a2;
	}
	*(_QWORD*)a2 = 0i64;
	return a2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405175F0: using guessed type _DWORD var_18[6];

