#include "../winhttp.h"

//----- (0000000140741A40) ----------------------------------------------------
__int64 __fastcall sub_140741A40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int16* v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = sub_14022BFC0(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = 0i64;
		v6 = sub_14024B980(*(_DWORD*)(v4 + 4));
		if (v6)
		{
			v7 = sub_14024DB80(*(_DWORD*)(v6 + 44));
			if (v7)
				v5 = sub_14034BDD0(v8, *(_DWORD*)(v7 + 4));
		}
		v9 = (unsigned __int64*)sub_14018F0E0(&v12, (unsigned __int16*)v5)[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710((__int64)a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v13)
		{
			sub_14018B900(v13, 0);
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
// 140741AA5: variable 'v8' is possibly undefined

