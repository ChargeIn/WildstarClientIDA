//----- (000000014062E680) ----------------------------------------------------
void __fastcall sub_14062E680(__int64 a1, __m128*** a2, unsigned __int64 a3, __m128* a4)
{
	__m128** v7; // rbx
	float v8; // xmm6_4
	__m128** v9; // rcx
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rcx
	__m128** v12; // r13
	unsigned __int64 v13; // r12
	unsigned __int64 v14; // rbx
	__m128** v15; // rdi
	__m128** v16; // r15
	float v17; // xmm7_4
	float v18; // xmm7_4
	float v19; // xmm7_4
	float v20; // xmm7_4
	unsigned __int64 i; // rbp
	__m128** v22; // r13
	unsigned __int64 v23; // rbx
	unsigned __int64 v24; // r12
	__m128** v25; // rdi
	__m128** v26; // r15
	float v27; // xmm7_4
	float v28; // xmm7_4
	float v29; // xmm7_4
	float v30; // xmm7_4
	unsigned __int64 v31; // [rsp+80h] [rbp+8h]
	unsigned __int64 v32; // [rsp+90h] [rbp+18h]

	if (a3 == 2)
	{
		v7 = a2[1];
		v8 = sub_14062DBF0(a4, **a2 + 1);
		if ((float)(v8 - sub_14062DBF0(a4, *v7 + 1)) > 0.0)
		{
			v9 = *a2;
			*a2 = a2[1];
			a2[1] = v9;
		}
	}
	else if (a3 > 1)
	{
		v10 = a3 >> 1;
		if (a3 >> 1)
		{
			v11 = 2 * v10 + 1;
			do
			{
				v12 = a2[--v10];
				v11 -= 2i64;
				v31 = v10;
				v32 = v11;
				v13 = v10;
				v14 = v11;
				if (v11 < a3)
				{
					do
					{
						v15 = a2[v14];
						if (v14 + 1 < a3)
						{
							v16 = a2[v14 + 1];
							v17 = sub_14062DBF0(a4, *v16 + 1);
							v18 = v17 - sub_14062DBF0(a4, *v15 + 1);
							if (v18 >= 0.0 && (v18 > 0.0 || v16 > v15))
							{
								++v14;
								v15 = v16;
							}
						}
						v19 = sub_14062DBF0(a4, *v15 + 1);
						v20 = v19 - sub_14062DBF0(a4, *v12 + 1);
						if (v20 < 0.0 || v20 <= 0.0 && v15 <= v12)
							break;
						a2[v13] = v15;
						v13 = v14;
						v14 = 2 * v14 + 1;
					} while (v14 < a3);
					v10 = v31;
					v11 = v32;
				}
				a2[v13] = v12;
			} while (v10);
		}
		for (i = a3 - 1; i; --i)
		{
			v22 = a2[i];
			v23 = 1i64;
			v24 = 0i64;
			for (a2[i] = *a2; v23 < i; v23 = 2 * v23 + 1)
			{
				v25 = a2[v23];
				if (v23 + 1 < i)
				{
					v26 = a2[v23 + 1];
					v27 = sub_14062DBF0(a4, *v26 + 1);
					v28 = v27 - sub_14062DBF0(a4, *v25 + 1);
					if (v28 >= 0.0 && (v28 > 0.0 || v26 > v25))
					{
						++v23;
						v25 = v26;
					}
				}
				v29 = sub_14062DBF0(a4, *v25 + 1);
				v30 = v29 - sub_14062DBF0(a4, *v22 + 1);
				if (v30 < 0.0 || v30 <= 0.0 && v25 <= v22)
					break;
				a2[v24] = v25;
				v24 = v23;
			}
			a2[v24] = v22;
		}
	}
}

