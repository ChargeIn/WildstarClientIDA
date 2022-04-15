#include "../winhttp.h"

//----- (000000014038A050) ----------------------------------------------------
void __fastcall sub_14038A050(__int64 a1, __int64* a2, unsigned __int64 a3)
{
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // r12
	unsigned __int64 v9; // r13
	unsigned __int64 v10; // rbx
	unsigned __int64 v11; // rdi
	unsigned __int64 v12; // r15
	int v13; // eax
	int v14; // eax
	unsigned __int64 i; // rbp
	unsigned __int64 v16; // r12
	unsigned __int64 v17; // rbx
	unsigned __int64 v18; // r13
	unsigned __int64 v19; // rdi
	unsigned __int64 v20; // r15
	int v21; // eax
	int v22; // eax
	unsigned __int64 v23; // [rsp+60h] [rbp+8h]
	unsigned __int64 v24; // [rsp+78h] [rbp+20h]

	if (a3 == 2)
	{
		if ((int)sub_140386220(*a2, a2[1]) > 0)
		{
			v5 = *a2;
			*a2 = a2[1];
			a2[1] = v5;
		}
	}
	else if (a3 > 1)
	{
		v6 = a3 >> 1;
		if (a3 >> 1)
		{
			v7 = 2 * v6 + 1;
			do
			{
				v8 = a2[--v6];
				v7 -= 2i64;
				v24 = v6;
				v23 = v7;
				v9 = v6;
				v10 = v7;
				if (v7 < a3)
				{
					do
					{
						v11 = a2[v10];
						if (v10 + 1 < a3)
						{
							v12 = a2[v10 + 1];
							v13 = sub_140386220(v12, a2[v10]);
							if (v13 > 0 || !v13 && v12 > v11)
							{
								++v10;
								v11 = v12;
							}
						}
						v14 = sub_140386220(v11, v8);
						if (v14 <= 0 && (v14 || v11 <= v8))
							break;
						a2[v9] = v11;
						v9 = v10;
						v10 = 2 * v10 + 1;
					} while (v10 < a3);
					v6 = v24;
					v7 = v23;
				}
				a2[v9] = v8;
			} while (v6);
		}
		for (i = a3 - 1; i; --i)
		{
			v16 = a2[i];
			v17 = 1i64;
			v18 = 0i64;
			for (a2[i] = *a2; v17 < i; v17 = 2 * v17 + 1)
			{
				v19 = a2[v17];
				if (v17 + 1 < i)
				{
					v20 = a2[v17 + 1];
					v21 = sub_140386220(v20, a2[v17]);
					if (v21 > 0 || !v21 && v20 > v19)
					{
						++v17;
						v19 = v20;
					}
				}
				v22 = sub_140386220(v19, v16);
				if (v22 <= 0 && (v22 || v19 <= v16))
					break;
				a2[v18] = v19;
				v18 = v17;
			}
			a2[v18] = v16;
		}
	}
}

