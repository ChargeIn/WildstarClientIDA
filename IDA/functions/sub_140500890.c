#include "../winhttp.h"

//----- (0000000140500890) ----------------------------------------------------
_QWORD* __fastcall sub_140500890(_QWORD* a1, _QWORD* a2)
{
	__int64 v4; // rcx
	char* v5; // rbx
	char* v6; // rdi
	unsigned __int64 v7; // r14
	int* v8; // rax
	int* v9; // rbp
	signed __int64 v10; // rdx
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 j; // rdi
	__int64 v14; // rdx
	char* v15; // rbx
	__int64 v16; // rax
	_QWORD* v17; // r9
	_QWORD* v18; // rdx
	_QWORD* i; // r8

	if (a2 != a1)
	{
		v4 = a1[1];
		v5 = (char*)a2[1];
		v6 = (char*)a2[2];
		v7 = (v6 - v5) >> 3;
		if (v7 <= (a1[3] - v4) >> 3)
		{
			v12 = (a1[2] - v4) >> 3;
			if (v12 < v7)
			{
				v14 = (__int64)(8 * v12) >> 3;
				if (v14 > 0)
				{
					v15 = &v5[-v4];
					do
					{
						v16 = *(_QWORD*)&v15[v4];
						--v14;
						v4 += 8i64;
						*(_QWORD*)(v4 - 8) = v16;
					} while (v14 > 0);
				}
				v17 = (_QWORD*)a2[2];
				v18 = (_QWORD*)a1[2];
				for (i = (_QWORD*)(a2[1] + 8 * (((__int64)v18 - a1[1]) >> 3)); i != v17; ++v18)
				{
					if (v18)
						*v18 = *i;
					++i;
				}
			}
			else
			{
				for (j = (v6 - v5) >> 3; j > 0; v5 += 8)
				{
					--j;
					v4 += 8i64;
					*(_QWORD*)(v4 - 8) = *(_QWORD*)v5;
				}
			}
		}
		else
		{
			v8 = sub_14018B280(8 * v7, 0);
			v9 = v8;
			if (v5 != v6)
			{
				v10 = (char*)v8 - v5;
				do
				{
					if (&v5[v10])
						*(_QWORD*)&v5[v10] = *(_QWORD*)v5;
					v5 += 8;
				} while (v5 != v6);
			}
			v11 = a1[1];
			if (v11)
				sub_14018B900(v11, 0);
			a1[1] = v9;
			a1[3] = &v9[2 * v7];
		}
		a1[2] = a1[1] + 8 * v7;
	}
	return a1;
}

