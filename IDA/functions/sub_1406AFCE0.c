#include "../winhttp.h"

//----- (00000001406AFCE0) ----------------------------------------------------
__int64 __fastcall sub_1406AFCE0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx

	v1 = sub_140056AB0(a1, 1u);
	if (v1 && qword_140C659F0)
	{
		v3 = *(_QWORD*)(v1 + 16);
		v4 = v3 ? sub_1404B6E50(v2, v3) : sub_1404C9B90(v2, *(_DWORD*)(v1 + 8));
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 88);
			v6 = sub_1405B1510(&qword_140C7DFB0);
			if (v6)
				sub_1405AAEB0(v6);
			if (sub_1405B1510(&qword_140C7DFB0))
			{
				v7 = sub_1405B1510(&qword_140C7DFB0);
				if (v7)
				{
					v9 = sub_1404C9E20(v8, *(_DWORD*)(v7 + 188), v5);
					if (v9)
						sub_1404C9520(v10, v9);
				}
			}
		}
	}
	return 0i64;
}
// 1406AFD15: variable 'v2' is possibly undefined
// 1406AFD76: variable 'v8' is possibly undefined
// 1406AFD83: variable 'v10' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

