#include "../winhttp.h"

//----- (000000014051CDC0) ----------------------------------------------------
__int64 __fastcall sub_14051CDC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	_DWORD* v4; // rax
	__int64 v5; // rcx
	__int64 result; // rax
	void(__fastcall * ***v7)(_QWORD); // rax
	void(__fastcall * **v8)(_QWORD); // rbx
	__int64 v9; // rcx

	v4 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v4 >= a2[2] || v4 == dword_140A12138 || *(_DWORD*)(a2[3] + 40i64))
	{
		v7 = (void(__fastcall****)(_QWORD))sub_140056AB0(a2, 3u);
		if (v7)
			v8 = *v7;
		else
			v8 = 0i64;
		if (*(void(__fastcall****)(_QWORD))(a1 + 16) != v8)
		{
			if (v8)
				(**v8)(v8);
			v9 = *(_QWORD*)(a1 + 16);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 16) = v8;
		}
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 16);
		if (v5)
		{
			(*(void(__fastcall**)(__int64, _QWORD*, __int64, _QWORD*))(*(_QWORD*)v5 + 8i64))(v5, a2, a3, a2);
			result = 0i64;
			*(_QWORD*)(a1 + 16) = 0i64;
			return result;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

