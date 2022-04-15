#include "../winhttp.h"

//----- (0000000140419EF0) ----------------------------------------------------
__int64 __fastcall sub_140419EF0(_QWORD* a1)
{
	_DWORD** v2; // rax
	_DWORD* v3; // rbx
	__int64 v4; // rax
	int v5; // ecx
	_DWORD* v6; // rax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+28h] [rbp-10h]

	v2 = (_DWORD**)sub_140417660((__int64)a1, 1);
	if (v2)
	{
		v3 = *v2;
		if (*v2)
			v3 = *(_DWORD**)v3;
		if (v3)
		{
			v8 = 0i64;
			v9 = 0i64;
			v4 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v3 + 48i64))(v3);
			v5 = 1;
			v8 = v4;
			if (v3[30])
				v5 = v3[30];
			v6 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
				LODWORD(v9) = v5;
			else
				LODWORD(v9) = sub_140056D60(a1, 2u);
			sub_1403F4900(qword_140C65898, 0x12Au, (__int64)&v8);
		}
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

