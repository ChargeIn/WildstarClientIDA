#include "../winhttp.h"

//----- (000000014072D0A0) ----------------------------------------------------
__int64 __fastcall sub_14072D0A0(_QWORD* a1)
{
	__int64* v2; // rsi
	_QWORD* v3; // rax
	__int64 v4; // rsi
	int v5; // ebx
	int v6; // eax
	int v7; // edx
	BOOL v8; // r8d
	_DWORD* v9; // rcx
	_DWORD* v10; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_QWORD*)sub_140056AB0(a1, 2u);
	if (v2 && v3)
	{
		v4 = *v2;
		if (v4 && *v3)
		{
			v5 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			v7 = 0;
			v8 = v6 == v5;
		}
		else
		{
			v7 = 0;
			v8 = 0;
		}
		v9 = (_DWORD*)a1[2];
		LOBYTE(v7) = v8;
		v9[2] = 1;
		*v9 = v7;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}

