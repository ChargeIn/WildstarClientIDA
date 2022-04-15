#include "../winhttp.h"

//----- (000000014088CAF0) ----------------------------------------------------
_QWORD* __fastcall sub_14088CAF0(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v5; // rax
	__int64 v6; // rbx
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rax
	_QWORD* result; // rax
	int v11; // [rsp+30h] [rbp-28h] BYREF
	__int64 v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+40h] [rbp-18h]
	__int16 v14; // [rsp+44h] [rbp-14h]
	char v15; // [rsp+78h] [rbp+20h] BYREF

	v5 = sub_140830F00(qword_140C61BA8, a2, 0);
	v6 = v5;
	if (v5)
	{
		v7 = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v5 + 672i64))(
			v5,
			*(_QWORD*)(a1 + 16),
			*(_QWORD*)(a1 + 56),
			a1 + 24);
		v8 = v7;
		if (v7)
		{
			v9 = *v7;
			v12 = 0i64;
			v11 = 0;
			v14 = v14 & 0xFFE0 | 8;
			v13 = 0;
			*a3 = (*(__int64(__fastcall**)(_QWORD*, int*, _QWORD, _QWORD, char*, _DWORD))(v9 + 88))(
				v8,
				&v11,
				0i64,
				0i64,
				&v15,
				0);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		return v8;
	}
	else
	{
		result = 0i64;
		*a3 = 0;
	}
	return result;
}

