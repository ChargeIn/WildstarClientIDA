#include "../winhttp.h"

//----- (00000001406928B0) ----------------------------------------------------
__int64 __fastcall sub_1406928B0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+28h] [rbp-10h]

	v1 = sub_140056AB0(a1, 1u);
	if (v1)
	{
		v2 = *(_QWORD*)(v1 + 8);
		if (v2)
		{
			v3 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v2 + 8), *(_QWORD*)(v2 + 16));
			if (v3)
			{
				v7 = 0i64;
				v8 = 0i64;
				v4 = *(_QWORD*)(v3 + 16);
				v5 = *(_DWORD**)(v3 + 8);
				v8 = v4;
				LODWORD(v7) = *v5;
				sub_1403F4740(qword_140C65898, 0x1D2u, (__int64)&v7);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

