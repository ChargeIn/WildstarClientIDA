#include "../winhttp.h"

//----- (0000000140574F40) ----------------------------------------------------
void __fastcall sub_140574F40(int* a1, int* a2, unsigned __int8(__fastcall* a3)(int*, int*))
{
	_DWORD* v3; // r13
	int* v7; // rsi
	__int64 v8; // rbx
	int* v9; // rbp
	_DWORD* v10; // rax
	__int64 i; // rdx
	int v12; // ecx
	int* v13; // rdi
	int* j; // rbx
	__int64 v15; // [rsp+20h] [rbp-58h]
	int v16; // [rsp+28h] [rbp-50h] BYREF
	int v17; // [rsp+2Ch] [rbp-4Ch]
	int v18; // [rsp+30h] [rbp-48h]
	int v19; // [rsp+34h] [rbp-44h]

	if (a1 != a2)
	{
		v3 = a1 + 4;
		v7 = a1 + 4;
		if (a1 + 4 != a2)
		{
			v8 = 16i64 - (_QWORD)a1;
			v9 = a1;
			v15 = 16i64 - (_QWORD)a1;
			do
			{
				v16 = *v7;
				v17 = v7[1];
				v18 = v7[2];
				v19 = v7[3];
				if (a3(&v16, a1))
				{
					v10 = (_DWORD*)((char*)v3 + (_QWORD)v9 + v8);
					for (i = ((__int64)v9 + v8) >> 4; i > 0; v10[3] = *(v10 - 1))
					{
						v12 = *(v10 - 8);
						v10 -= 4;
						--i;
						*v10 = v12;
						v10[1] = *(v10 - 3);
						v10[2] = *(v10 - 2);
					}
					*a1 = v16;
					a1[1] = v17;
					a1[2] = v18;
					a1[3] = v19;
				}
				else
				{
					v13 = v7;
					for (j = v9; a3(&v16, j); j -= 4)
					{
						*v13 = *j;
						v13[1] = j[1];
						v13[2] = j[2];
						v13[3] = j[3];
						v13 = j;
					}
					v8 = v15;
					*v13 = v16;
					v13[1] = v17;
					v13[2] = v18;
					v13[3] = v19;
				}
				v7 += 4;
				v9 += 4;
			} while (v7 != a2);
		}
	}
}

