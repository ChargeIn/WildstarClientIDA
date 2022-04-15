#include "../winhttp.h"

//----- (00000001407A3100) ----------------------------------------------------
__int64 __fastcall sub_1407A3100(_QWORD* a1, float a2, int a3, float a4, float a5)
{
	__int64 result; // rax
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // r11
	__int64 v11; // r10
	__int64 v12; // rbx
	float v13; // [rsp+50h] [rbp-88h] BYREF
	__int64 v14; // [rsp+58h] [rbp-80h] BYREF
	unsigned __int64 v15; // [rsp+60h] [rbp-78h] BYREF
	void* retaddr; // [rsp+D8h] [rbp+0h] BYREF
	int v17; // [rsp+E8h] [rbp+10h] BYREF
	float v18; // [rsp+F8h] [rbp+20h] BYREF

	result = (__int64)&retaddr;
	v18 = a4;
	if (a2 != 0.0)
	{
		result = sub_1407A4CE0(a1, &v18);
		if ((int)result >= 0)
		{
			result = sub_1407A4CE0(a1, &a5);
			if ((int)result >= 0)
			{
				v8 = sub_1407A45E0((__int64)a1, v18);
				result = sub_1407A3400(v9, a2, &v13, a3, v8, &v17, &v14, &v15, 0i64);
				if ((int)result >= 0)
				{
					result = sub_1407A45E0((__int64)a1, a5);
					v11 = *(_QWORD*)(v8 + 8);
					if (v11 == *(_QWORD*)(result + 8))
					{
						v12 = a1[5];
						if (a3 == 8 && a2 > 0.0)
							result = (unsigned int)((int)(a2 * (1.0 / *(double*)(v8 + 48))) + 1);
						if (v13 >= (float)((float)(*(float*)(v12 + 24 * v14 + 4) * *(float*)(v8 + 56)) + *(float*)(v10 + 4 * v14)))
							return v11 - 1;
					}
				}
			}
		}
	}
	return result;
}
// 1407A31B1: variable 'v9' is possibly undefined
// 1407A32A5: variable 'v10' is possibly undefined

