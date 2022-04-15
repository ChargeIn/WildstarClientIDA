#include "../winhttp.h"

//----- (00000001404F92A0) ----------------------------------------------------
__int64 __fastcall sub_1404F92A0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64* v3; // rcx
	int v4; // eax
	double v5; // xmm0_8
	double v6; // xmm1_8
	float v7; // xmm0_4
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v3 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v4 = *((_DWORD*)v3 + 2);
		if (v4 != 3)
		{
			if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v11))
			{
				v5 = 0.0;
			LABEL_10:
				v6 = v5;
			LABEL_11:
				*(_DWORD*)(v2 + 1040) = 1;
				v7 = v6;
				*(float*)(v2 + 2304) = v7;
				return 0i64;
			}
			v10 = 3;
			v3 = &v9;
			v9 = v11;
		}
		v5 = *(double*)v3;
		v6 = 0.0;
		if (*(double*)v3 < 0.0)
			goto LABEL_11;
		v6 = 1.0;
		if (v5 > 1.0)
			goto LABEL_11;
		goto LABEL_10;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

