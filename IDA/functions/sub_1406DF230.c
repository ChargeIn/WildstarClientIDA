#include "../winhttp.h"

//----- (00000001406DF230) ----------------------------------------------------
__int64 __fastcall sub_1406DF230(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rcx
	int v4; // eax
	__int64 v5; // rax
	unsigned __int64 v6; // rbx
	double v7; // xmm0_8
	unsigned __int64 v8; // rax
	unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1406DF190(a1);
	if ((*(_BYTE*)(v2 + 28) & 1) != 0)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		if (v4 == 3 || v4 == 4 && sub_14005AC80((char*)(*(_QWORD*)v3 + 32i64), &v10))
		{
			v7 = sub_140056C40(a1, 2u);
			v8 = 0i64;
			if (v7 >= 9.223372036854776e18)
			{
				v7 = v7 - 9.223372036854776e18;
				if (v7 < 9.223372036854776e18)
					v8 = 0x8000000000000000ui64;
			}
			v6 = v8 + (unsigned int)(int)v7;
		}
		else
		{
			v5 = sub_140056AB0(a1, 2u);
			v6 = *(_QWORD*)v5;
			sub_1406DE010(v2, *(_DWORD*)(v5 + 8), *(_DWORD*)(v5 + 12), *(_DWORD*)(v5 + 16), *(_DWORD*)(v5 + 20));
		}
		sub_1406DE650(v2, v6);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

