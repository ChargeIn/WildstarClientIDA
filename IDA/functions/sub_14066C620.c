#include "../winhttp.h"

//----- (000000014066C620) ----------------------------------------------------
__int64 __fastcall sub_14066C620(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int* v5; // rax
	unsigned __int64* v6; // rbx
	unsigned __int64 v8; // r8
	unsigned __int64* v9; // [rsp+38h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (unsigned int*)(*(__int64 (**)(void))(*(_QWORD*)v4 + 40i64))();
		sub_14018DED0(&v9, (__int64)"<A%x>", *v5);
		v6 = v9;
		if (v9)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v9 + v8));
			sub_140058710((__int64)a1, v9, v8);
			(*(void(__fastcall**)(unsigned __int64*))(*(v6 - 2) + 8))(v6 - 2);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

