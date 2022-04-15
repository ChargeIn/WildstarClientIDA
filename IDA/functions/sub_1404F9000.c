#include "../winhttp.h"

//----- (00000001404F9000) ----------------------------------------------------
__int64 __fastcall sub_1404F9000(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64* v3; // rcx
	int v4; // eax
	int v5; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v3 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v4 = *((_DWORD*)v3 + 2);
		if (v4 != 3)
		{
			if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v9))
			{
				v5 = 0;
				goto LABEL_9;
			}
			v8 = 3;
			v3 = &v7;
			v7 = v9;
		}
		v5 = (int)*(double*)v3;
	LABEL_9:
		*(float*)(v2 + 2288) = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * (float)v5;
		sub_1404FFDD0(v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B438: using guessed type int dword_140C3B438;

