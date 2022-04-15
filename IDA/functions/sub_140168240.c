//----- (0000000140168240) ----------------------------------------------------
void __fastcall sub_140168240(__int64 a1, __int64* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64 v5; // rdi
	__int64 v6; // rbx
	int v7; // r14d
	int v8; // r12d
	__int64 v9; // rcx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // r13
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rdi
	unsigned __int64 v15; // rbx
	unsigned __int64 v16; // rsi
	int v17; // eax
	int v18; // eax
	unsigned __int64 v19; // rsi
	unsigned __int64 v20; // r13
	unsigned __int64 v21; // rdi
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rbx
	unsigned __int64 v24; // rsi
	int v25; // eax
	int v26; // eax
	unsigned __int64 v27; // [rsp+20h] [rbp-48h]
	unsigned __int64 v28; // [rsp+70h] [rbp+8h]
	unsigned __int64 v30; // [rsp+80h] [rbp+18h]
	unsigned __int64 v31; // [rsp+88h] [rbp+20h]
	unsigned __int64 v32; // [rsp+88h] [rbp+20h]

	v3 = a3;
	if (a3 != 2)
	{
		if (a3 <= 1)
			return;
		v10 = a3 >> 1;
		if (!(a3 >> 1))
			goto LABEL_44;
		v11 = 2 * v10 + 1;
		while (1)
		{
			v12 = a2[--v10];
			v11 -= 2i64;
			v28 = v10;
			v27 = v11;
			v13 = v10;
			v31 = v10;
			v14 = v11;
			if (v11 >= v3)
				goto LABEL_43;
			while (1)
			{
				v15 = a2[v14];
				if (v14 + 1 >= v3)
					goto LABEL_29;
				v16 = a2[v14 + 1];
				if (sub_14015D6E0(v16, a2[v14]))
				{
					v17 = 1;
					if (byte_140C1D18E)
						v17 = -1;
					goto LABEL_24;
				}
				if (sub_14015D6E0(v15, v16))
				{
					v17 = -1;
					if (byte_140C1D18E)
						v17 = 1;
				LABEL_24:
					if (v17 <= 0)
						goto LABEL_28;
				LABEL_27:
					++v14;
					v15 = v16;
					goto LABEL_28;
				}
				if (v16 > v15)
					goto LABEL_27;
			LABEL_28:
				v3 = a3;
			LABEL_29:
				if (sub_14015D6E0(v15, v12))
				{
					v18 = 1;
					if (byte_140C1D18E)
						v18 = -1;
					goto LABEL_36;
				}
				if (sub_14015D6E0(v12, v15))
				{
					v18 = -1;
					if (byte_140C1D18E)
						v18 = 1;
				LABEL_36:
					if (v18 <= 0)
						break;
					goto LABEL_39;
				}
				if (v15 <= v12)
					break;
			LABEL_39:
				a2[v31] = v15;
				v13 = v14;
				v14 = 2 * v14 + 1;
				v31 = v13;
				if (v14 >= v3)
					goto LABEL_42;
			}
			v13 = v31;
		LABEL_42:
			v10 = v28;
			v11 = v27;
		LABEL_43:
			a2[v13] = v12;
			if (!v10)
			{
			LABEL_44:
				v19 = v3 - 1;
				v30 = v19;
				if (!v19)
					return;
				while (1)
				{
					v20 = a2[v19];
					v21 = 1i64;
					a2[v19] = *a2;
					v22 = 0i64;
					v32 = 0i64;
					if (v19 <= 1)
						goto LABEL_72;
					while (1)
					{
						v23 = a2[v21];
						if (v21 + 1 >= v19)
							goto LABEL_59;
						v24 = a2[v21 + 1];
						if (sub_14015D6E0(v24, a2[v21]))
						{
							v25 = 1;
							if (byte_140C1D18E)
								v25 = -1;
							goto LABEL_54;
						}
						if (sub_14015D6E0(v23, v24))
						{
							v25 = -1;
							if (byte_140C1D18E)
								v25 = 1;
						LABEL_54:
							if (v25 <= 0)
								goto LABEL_58;
						LABEL_57:
							++v21;
							v23 = v24;
							goto LABEL_58;
						}
						if (v24 > v23)
							goto LABEL_57;
					LABEL_58:
						v19 = v30;
					LABEL_59:
						if (sub_14015D6E0(v23, v20))
						{
							v26 = 1;
							if (byte_140C1D18E)
								v26 = -1;
							goto LABEL_66;
						}
						if (!sub_14015D6E0(v20, v23))
							break;
						v26 = -1;
						if (byte_140C1D18E)
							v26 = 1;
					LABEL_66:
						if (v26 <= 0)
							goto LABEL_71;
					LABEL_69:
						a2[v32] = v23;
						v22 = v21;
						v21 = 2 * v21 + 1;
						v32 = v22;
						if (v21 >= v19)
							goto LABEL_72;
					}
					if (v23 > v20)
						goto LABEL_69;
				LABEL_71:
					v22 = v32;
				LABEL_72:
					--v19;
					a2[v22] = v20;
					v30 = v19;
					if (!v19)
						return;
				}
			}
		}
	}
	v5 = *a2;
	v6 = a2[1];
	if (sub_14015D6E0(*a2, v6))
	{
		v7 = 1;
		if (byte_140C1D18E)
			v7 = -1;
	}
	else
	{
		if (!sub_14015D6E0(v6, v5))
			return;
		v8 = -1;
		if (byte_140C1D18E)
			v8 = 1;
		v7 = v8;
	}
	if (v7 > 0)
	{
		v9 = *a2;
		*a2 = a2[1];
		a2[1] = v9;
	}
}
// 1401683A1: conditional instruction was optimized away because eax.4==FFFFFFFF
// 1401683F6: conditional instruction was optimized away because eax.4==FFFFFFFF
// 1401684D2: conditional instruction was optimized away because eax.4==FFFFFFFF
// 140168527: conditional instruction was optimized away because eax.4==FFFFFFFF
// 140C1D18E: using guessed type char byte_140C1D18E;

