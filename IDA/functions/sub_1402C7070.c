#include "../winhttp.h"

//----- (00000001402C7070) ----------------------------------------------------
__int64 __fastcall sub_1402C7070(__int64 a1, unsigned __int64 a2, __int64* a3, int a4, _QWORD* a5)
{
	__int64 result; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // r14
	_QWORD* v12; // rbx
	__int64 v13; // r12
	__int64 v14; // rax
	__m128* v15; // rbp
	__int64 v16; // rsi
	__int64 v17; // rdi
	__int64 v18[6]; // [rsp+30h] [rbp-68h] BYREF
	int v19; // [rsp+60h] [rbp-38h]
	int v20; // [rsp+64h] [rbp-34h]

	if (!a1)
		return 2147500035i64;
	sub_1402B34D0(a5);
	v18[0] = *a3;
	v18[1] = a3[1];
	v18[2] = a3[2];
	v18[3] = a3[3];
	v18[4] = a3[4];
	v18[5] = a3[5];
	v20 = HIDWORD(a3[6]);
	v19 = a4;
	result = sub_1402B2C70((__int64)a5, (__int64)v18);
	if ((int)result >= 0)
	{
		if (a2 != *a5)
		{
		LABEL_20:
			sub_1402B34D0(a5);
			return 2147500037i64;
		}
		v10 = a5[9];
		if (!v10)
		{
		LABEL_6:
			sub_1402B34D0(a5);
			return 2147500035i64;
		}
		v11 = 0i64;
		if (a2)
		{
			v12 = (_QWORD*)(v10 + 8);
			v13 = a1 - v10;
			while (*(_QWORD*)((char*)v12 + v13 - 8) == *(v12 - 1))
			{
				v14 = *(_QWORD*)((char*)v12 + v13);
				if (v14 != *v12)
					break;
				v15 = *(__m128**)((char*)v12 + v13 + 32);
				v16 = v12[4];
				if (!v15 || !v16)
					goto LABEL_6;
				v17 = 0i64;
				if (v14)
				{
					while (sub_1402C4F90(v16, v12[2], a4, v15, *(_QWORD*)((char*)v12 + v13 - 8)))
					{
						v15 = (__m128*)((char*)v15 + *(_QWORD*)((char*)v12 + v13 + 16));
						v16 += v12[2];
						if ((unsigned __int64)++v17 >= *(_QWORD*)((char*)v12 + v13))
							goto LABEL_16;
					}
					goto LABEL_20;
				}
			LABEL_16:
				++v11;
				v12 += 6;
				if (v11 >= a2)
					return 0i64;
			}
			goto LABEL_20;
		}
		return 0i64;
	}
	return result;
}

