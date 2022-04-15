#include "../winhttp.h"

//----- (0000000140669290) ----------------------------------------------------
__int64 __fastcall sub_140669290(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v3; // rax
	unsigned __int64* v4; // rbx
	unsigned __int64 v6; // r8
	unsigned __int64* v7; // [rsp+38h] [rbp+10h] BYREF

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *v2) != 0)
	{
		sub_14018DED0(&v7, (__int64)"<Q%x>", **(unsigned int**)(v3 + 8));
		v4 = v7;
		if (v7)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v7 + v6));
			sub_140058710((__int64)a1, v7, v6);
			(*(void(__fastcall**)(unsigned __int64*))(*(v4 - 2) + 8))(v4 - 2);
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

