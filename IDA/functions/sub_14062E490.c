//----- (000000014062E490) ----------------------------------------------------
void __fastcall sub_14062E490(__int64 a1, __m128** a2, unsigned __int64 a3, __m128* a4)
{
	__m128* v6; // rcx
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rcx
	__m128* v9; // r12
	unsigned __int64 v10; // r13
	unsigned __int64 v11; // rbx
	__m128* v12; // rdi
	__m128* v13; // r15
	int v14; // eax
	int v15; // eax
	unsigned __int64 i; // rbp
	__m128* v17; // r12
	unsigned __int64 v18; // rbx
	unsigned __int64 v19; // r13
	__m128* v20; // rdi
	__m128* v21; // r15
	int v22; // eax
	int v23; // eax
	unsigned __int64 v24; // [rsp+60h] [rbp+8h]
	unsigned __int64 v25; // [rsp+70h] [rbp+18h]

	if (a3 == 2)
	{
		if ((int)sub_14062DC20(*a2, a2[1], a4) > 0)
		{
			v6 = *a2;
			*a2 = a2[1];
			a2[1] = v6;
		}
	}
	else if (a3 > 1)
	{
		v7 = a3 >> 1;
		if (a3 >> 1)
		{
			v8 = 2 * v7 + 1;
			do
			{
				v9 = a2[--v7];
				v8 -= 2i64;
				v24 = v7;
				v25 = v8;
				v10 = v7;
				v11 = v8;
				if (v8 < a3)
				{
					do
					{
						v12 = a2[v11];
						if (v11 + 1 < a3)
						{
							v13 = a2[v11 + 1];
							v14 = sub_14062DC20(v13, a2[v11], a4);
							if (v14 > 0 || !v14 && v13 > v12)
							{
								++v11;
								v12 = v13;
							}
						}
						v15 = sub_14062DC20(v12, v9, a4);
						if (v15 <= 0 && (v15 || v12 <= v9))
							break;
						a2[v10] = v12;
						v10 = v11;
						v11 = 2 * v11 + 1;
					} while (v11 < a3);
					v7 = v24;
					v8 = v25;
				}
				a2[v10] = v9;
			} while (v7);
		}
		for (i = a3 - 1; i; --i)
		{
			v17 = a2[i];
			v18 = 1i64;
			v19 = 0i64;
			for (a2[i] = *a2; v18 < i; v18 = 2 * v18 + 1)
			{
				v20 = a2[v18];
				if (v18 + 1 < i)
				{
					v21 = a2[v18 + 1];
					v22 = sub_14062DC20(v21, a2[v18], a4);
					if (v22 > 0 || !v22 && v21 > v20)
					{
						++v18;
						v20 = v21;
					}
				}
				v23 = sub_14062DC20(v20, v17, a4);
				if (v23 <= 0 && (v23 || v20 <= v17))
					break;
				a2[v19] = v20;
				v19 = v18;
			}
			a2[v19] = v17;
		}
	}
}

