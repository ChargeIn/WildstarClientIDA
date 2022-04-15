#include "../winhttp.h"

//----- (0000000140692930) ----------------------------------------------------
__int64 __fastcall sub_140692930(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	char* v5; // rax
	_DWORD* v6; // rcx
	int v7; // edi
	void* v8; // rbx
	int v9; // edx
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	void* lpv; // [rsp+28h] [rbp-20h]
	void* v13; // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
			if (v4)
			{
				v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
				sub_14018F2D0(&v11, v5);
				v6 = (_DWORD*)(a1[3] + 32i64);
				if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
					v7 = 0;
				else
					v7 = sub_140056D60(a1, 3u);
				v8 = lpv;
				if ((unsigned int)sub_1403E1170(lpv, 0))
				{
					v11 = 0i64;
					lpv = 0i64;
					v13 = 0i64;
					v14 = 0i64;
					lpv = *(void**)(v4 + 16);
					v9 = **(_DWORD**)(v4 + 8);
					v13 = v8;
					LODWORD(v14) = v7;
					LODWORD(v11) = v9;
					sub_1403F4740(qword_140C65898, 0x1CEu, (__int64)&v11);
				}
				if (v8)
					sub_14018B900((__int64)v8, 0);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

