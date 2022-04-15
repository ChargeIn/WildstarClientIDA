#include "../winhttp.h"

//----- (000000014067F670) ----------------------------------------------------
__int64 __fastcall sub_14067F670(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD** v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rcx
	__int16* v6; // rax
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_14067B760(a1);
	v3 = (_QWORD**)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 3
		&& *(_DWORD*)(*v3[6] + 12i64) == 18
		&& ((unsigned int(__fastcall*)(_QWORD**))(*v3)[5])(v3)
		&& (v4 = sub_14021E2C0(*(_DWORD*)(*v3[6] + 20i64))) != 0)
	{
		v6 = sub_14034BDD0(v5, *(_DWORD*)(v4 + 24));
		v7 = (unsigned __int64*)sub_14018F0E0(&v10, (unsigned __int16*)v6)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_140058710((__int64)a1, v7, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
		{
			sub_14018B900(v11, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14067F6F2: variable 'v5' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

