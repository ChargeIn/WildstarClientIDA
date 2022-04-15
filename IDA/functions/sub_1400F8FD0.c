#include "../winhttp.h"

//----- (00000001400F8FD0) ----------------------------------------------------
__int64 __fastcall sub_1400F8FD0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v6; // rdi
	bool v8; // al
	__int64 v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // r12
	_QWORD* v12; // rbx
	_QWORD* i; // rax
	_QWORD* v14; // rax
	__int64 v15; // r12
	unsigned __int16* v16; // r13
	__int64 v17; // rcx
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	int* v23; // [rsp+60h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = *(_QWORD*)(a3 + 16);
		v11 = *(_QWORD*)(a3 + 8);
		do
		{
			v9 = v6;
			v8 = (int)sub_1400454D0(v11, v10, *(unsigned __int16**)(v6 + 40), *(_QWORD*)(v6 + 48)) < 0;
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
		v4 = *(_QWORD*)(a1 + 8);
	}
	v12 = (_QWORD*)v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
			*(_QWORD*)a2 = *sub_1400F8EF0(a1, &v23, v6, v9, a3);
			*(_BYTE*)(a2 + 8) = 1;
			return a2;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v12 = *(_QWORD**)(v9 + 16);
			if (v12)
			{
				for (i = (_QWORD*)v12[3]; i; i = (_QWORD*)i[3])
					v12 = i;
			}
			else
			{
				v12 = *(_QWORD**)(v9 + 8);
				if (v9 == v12[2])
				{
					do
					{
						v14 = v12;
						v12 = (_QWORD*)v12[1];
					} while (v14 == (_QWORD*)v12[2]);
				}
			}
		}
		else
		{
			v12 = *(_QWORD**)(v9 + 24);
		}
	}
	v15 = *(_QWORD*)(a3 + 16);
	v16 = *(unsigned __int16**)(a3 + 8);
	if ((int)sub_1400454D0(v12[5], v12[6], v16, v15) >= 0)
	{
		*(_QWORD*)a2 = v12;
		*(_BYTE*)(a2 + 8) = 0;
	}
	else
	{
		if (v9 == *(_QWORD*)(a1 + 8)
			|| (int)sub_1400454D0((__int64)v16, v15, *(unsigned __int16**)(v9 + 40), *(_QWORD*)(v9 + 48)) < 0)
		{
			v19 = sub_1400F92D0(v17, a3);
			*(_QWORD*)(v9 + 16) = v19;
			v21 = *(_QWORD*)(a1 + 8);
			if (v9 == v21)
			{
				*(_QWORD*)(v21 + 8) = v19;
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v19;
			}
			else if (v9 == *(_QWORD*)(v21 + 16))
			{
				*(_QWORD*)(v21 + 16) = v19;
			}
		}
		else
		{
			v18 = sub_1400F92D0(v17, a3);
			*(_QWORD*)(v9 + 24) = v18;
			v19 = v18;
			v20 = *(_QWORD*)(a1 + 8);
			if (v9 == *(_QWORD*)(v20 + 24))
				*(_QWORD*)(v20 + 24) = v19;
		}
		*((_QWORD*)v19 + 1) = v9;
		*((_QWORD*)v19 + 2) = 0i64;
		*((_QWORD*)v19 + 3) = 0i64;
		sub_1400081C0((__int64)v19, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
		++* (_QWORD*)(a1 + 16);
		*(_QWORD*)a2 = v19;
		*(_BYTE*)(a2 + 8) = 1;
	}
	return a2;
}
// 1400F90FE: conditional instruction was optimized away because rdi.8==0
// 1400F911A: variable 'v17' is possibly undefined

