#include "../winhttp.h"

//----- (0000000140731A20) ----------------------------------------------------
__int64 __fastcall sub_140731A20(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rax
	int v4; // ecx
	_DWORD* v5; // rdx
	__int64 result; // rax
	unsigned int v7; // eax
	int v8; // edx
	unsigned __int8 v9; // cf
	int v10; // edx
	_DWORD* v11; // rax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v3 = sub_14024ACC0(v2);
	v4 = 0;
	if (v3)
	{
		v7 = *(_DWORD*)(v3 + 20);
		if (v7 > 7 || (v8 = 164, v9 = _bittest(&v8, v7), v10 = 1, !v9))
			v10 = 0;
		v11 = *(_DWORD**)(a1 + 16);
		LOBYTE(v4) = v10 != 0;
		v11[2] = 1;
		*v11 = v4;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v5 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

