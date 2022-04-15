#include "../winhttp.h"

//----- (00000001405C3790) ----------------------------------------------------
__int64 __fastcall sub_1405C3790(__int64 a1, int a2, int a3)
{
	__int64 v3; // r13
	__int64 v4; // rdi
	__int64 v5; // rcx
	unsigned int v7; // r15d
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned __int64 v12; // rbp
	__int64 v13; // rbx
	unsigned int* v14; // rsi
	_DWORD* v15; // rax
	__int64 v16; // rcx
	bool v17; // cf
	__int64 v18; // [rsp+50h] [rbp+8h]

	v3 = qword_140C65B98;
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5)
		v7 = *(_DWORD*)(v5 + 56);
	else
		v7 = 0;
	switch (a2)
	{
	case 0:
	case 5:
		if (!a3)
			goto LABEL_10;
		return 0i64;
	case 1:
	case 8:
	case 15:
		goto LABEL_10;
	case 2:
		if (a3)
			goto LABEL_10;
		return 0i64;
	case 13:
	case 14:
		if (!a3)
			return 0i64;
	LABEL_10:
		v9 = *(_QWORD*)(qword_140C65B98 + 544);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < a2)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v9 || (v18 = v10, a2 < *(_DWORD*)(v10 + 32)))
			v18 = *(_QWORD*)(qword_140C65B98 + 544);
		if (v18 == v9 || v18 == -40)
			return 0i64;
		v12 = *(_QWORD*)(v18 + 48);
		v13 = 0i64;
		if (!v12)
			return 0i64;
		while (1)
		{
			v14 = *(unsigned int**)(*(_QWORD*)(v18 + 40) + 8 * v13);
			v15 = (_DWORD*)sub_140214E00(v14[4]);
			if (v15[6] <= v7 && v15[7] >= v7 && a3 == ((v15[4] >> 5) & 1))
			{
				if ((unsigned int)sub_1405BEDA0(v16, (__int64)v14))
				{
					if ((unsigned int)sub_1405C3960(v3, *v14))
					{
						v17 = v4++ == -1;
						if (!v17 && v4 != 1)
							break;
					}
				}
			}
			if (++v13 >= v12)
				return 0i64;
		}
		return 1i64;
	default:
		return 0i64;
	}
}
// 1405C38BC: variable 'v16' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

