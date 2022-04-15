#include "../winhttp.h"

//----- (000000014088CCE0) ----------------------------------------------------
__int64 __fastcall sub_14088CCE0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_QWORD* v8; // rax
	int* v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // r8d
	__int64 v15; // [rsp+40h] [rbp-38h] BYREF
	int* v16; // [rsp+48h] [rbp-30h] BYREF
	int* v17; // [rsp+50h] [rbp-28h]
	int v18; // [rsp+58h] [rbp-20h]
	int v19; // [rsp+98h] [rbp+20h] BYREF

	*a4 = 0i64;
	v16 = 0i64;
	v17 = 0i64;
	v18 = 0;
	v8 = (_QWORD*)sub_1408906B0(a2, 0i64);
	sub_140892140(v8, a3, &v16);
	v9 = v16;
	if ((unsigned int)(v17 - v16))
	{
		if (*v16)
		{
			v10 = 1;
			if (v16 != v17)
			{
				do
				{
					v11 = *(_QWORD*)(a1 + 16);
					v12 = *(_QWORD*)(a1 + 8);
					v13 = *v9;
					v19 = 0;
					if ((unsigned int)sub_140890530(a2, v12 - *(_QWORD*)(v11 + 112), v13, &v19, 0, 0, &v15) == 1
						&& (v10 == 1 || v15 < *a4))
					{
						*a4 = v15;
						v10 = 0;
					}
					++v9;
				} while (v9 != v17);
				v9 = v16;
			}
		}
		else
		{
			v10 = 2;
		}
	}
	else
	{
		v10 = 3;
	}
	if (v9)
	{
		v17 = v9;
		sub_140881720(dword_140C10F20, (__int64)v9);
	}
	return v10;
}
// 140C10F20: using guessed type int dword_140C10F20;

