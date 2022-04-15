//----- (00000001402B3660) ----------------------------------------------------
__int64 __fastcall sub_1402B3660(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rdi
	__int64* v6; // rsi
	unsigned __int64 v7; // rdi
	unsigned __int64 v8; // rbx
	unsigned __int64 v9; // r15
	__int64 v10; // rbp
	__int64 result; // rax
	__int64 v12; // r12
	int v13; // eax
	unsigned __int64* v14; // rax
	unsigned __int64 v15; // r9
	unsigned __int64 v16; // r14
	unsigned int v17; // r8d
	int v18; // eax
	__int64 v19; // rcx
	unsigned __int64 v20; // rax
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // rcx
	__int64 v23; // rax
	int* v24; // rbx
	int* v25; // rdi
	unsigned __int64* v26; // rsi
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // rbp
	unsigned __int64 v29; // rax
	unsigned __int64* v30; // r9
	__int64* v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // r8
	__int64 v34; // rax
	unsigned __int64 v35; // r14
	unsigned __int64 v36; // r15
	unsigned __int64 v37; // rbp
	unsigned int v38; // r12d
	unsigned __int64 v39; // rdx
	int v40; // eax
	unsigned __int64 v41; // rcx
	unsigned __int64 v42; // rax
	unsigned __int64 v43; // rdx
	__int64 v44; // rdx
	int* v45; // rbx
	int v46; // eax
	unsigned __int64* v47; // rax
	unsigned __int64 v48; // rdi
	int* v49; // rsi
	unsigned __int64 v50; // rax
	unsigned __int64 v51; // rcx
	unsigned __int64* v52; // r14
	unsigned __int64* v53; // r9
	unsigned __int64 v54; // [rsp+30h] [rbp-68h] BYREF
	unsigned __int64 v55; // [rsp+38h] [rbp-60h] BYREF
	unsigned __int64 v56; // [rsp+40h] [rbp-58h]
	unsigned __int64 v57; // [rsp+48h] [rbp-50h] BYREF
	int* v58; // [rsp+50h] [rbp-48h] BYREF
	unsigned int v59; // [rsp+58h] [rbp-40h]
	unsigned int v60; // [rsp+5Ch] [rbp-3Ch]
	__int64 v62; // [rsp+A8h] [rbp+10h]

	v62 = a2;
	v5 = a3;
	v6 = a1;
	if (!a2 || !*(_QWORD*)(a4 + 80))
		return 2147500035i64;
	if (*(_DWORD*)(a3 + 52) == 4)
	{
		v7 = *(_QWORD*)(a3 + 8);
		v8 = *(_QWORD*)(a3 + 16);
		v9 = 0i64;
		v10 = a3;
		v55 = v7;
		v56 = v8;
		if (*(_QWORD*)(a3 + 32))
		{
			while (1)
			{
				result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, __int64, _DWORD, int**))(*v6 + 112))(
					v6,
					a2,
					(unsigned int)v9,
					1i64,
					0,
					&v58);
				if ((int)result < 0)
					return result;
				v12 = (__int64)v58;
				if (!v58)
				{
					(*(void(__fastcall**)(__int64*, __int64, _QWORD))(*v6 + 120))(v6, v62, (unsigned int)v9);
					return 2147500035i64;
				}
				v13 = *(_DWORD*)(v10 + 48);
				if (v13 < 70 || v13 > 84 && (unsigned int)(v13 - 94) > 5)
				{
					v15 = v7;
				}
				else
				{
					v14 = &v54;
					v57 = 1i64;
					v54 = (v7 + 3) >> 2;
					if (v54 <= 1)
						v14 = &v57;
					v15 = *v14;
				}
				v16 = 0i64;
				v54 = v15;
				if (v8)
				{
					v17 = v59;
					while (v9 < *(_QWORD*)(a4 + 48))
					{
						v18 = *(_DWORD*)(a4 + 68);
						v19 = 0i64;
						if (v18 < 2)
							break;
						if (v18 <= 3)
						{
							if (v16 || !*(_QWORD*)(a4 + 40))
								break;
							v22 = v9;
						}
						else
						{
							if (v18 != 4)
								break;
							v20 = *(_QWORD*)(a4 + 32);
							if (v9)
							{
								v21 = v9;
								do
								{
									v19 += v20;
									if (v20 > 1)
										v20 >>= 1;
									--v21;
								} while (v21);
							}
							if (v16 >= v20)
								break;
							v22 = v16 + v19;
						}
						v23 = *(_QWORD*)(a4 + 72) + 48 * v22;
						if (!v23)
							break;
						v24 = *(int**)(v23 + 40);
						if (!v24)
						{
							(*(void(__fastcall**)(__int64*, __int64, _QWORD))(*a1 + 120))(a1, v62, (unsigned int)v9);
							return 2147500035i64;
						}
						v25 = (int*)v12;
						if (v15)
						{
							v26 = (unsigned __int64*)(v23 + 24);
							v27 = v17;
							v28 = v15;
							v29 = *(_QWORD*)(v23 + 24);
							do
							{
								v57 = v27;
								v30 = &v57;
								if (v27 >= v29)
									v30 = v26;
								sub_1407E15B8(v24, v29, v25, *v30);
								v17 = v59;
								v29 = *v26;
								v25 = (int*)((char*)v25 + v59);
								v24 = (int*)((char*)v24 + *v26);
								v27 = v59;
								--v28;
							} while (v28);
							v15 = v54;
						}
						v8 = v56;
						++v16;
						v12 += v60;
						if (v16 >= v56)
						{
							v7 = v55;
							v6 = a1;
							v10 = a3;
							goto LABEL_40;
						}
					}
					v31 = a1;
					v32 = v62;
					v33 = (unsigned int)v9;
					v34 = *a1;
					goto LABEL_48;
				}
			LABEL_40:
				(*(void(__fastcall**)(__int64*, __int64, _QWORD))(*v6 + 120))(v6, v62, (unsigned int)v9);
				if (v7 > 1)
				{
					v7 >>= 1;
					v55 = v7;
				}
				if (v8 > 1)
				{
					v8 >>= 1;
					v56 = v8;
				}
				if (++v9 >= *(_QWORD*)(v10 + 32))
					return 0i64;
				a2 = v62;
			}
		}
		return 0i64;
	}
	v35 = 0i64;
	v56 = 0i64;
	if (!*(_QWORD*)(a3 + 24))
		return 0i64;
	while (1)
	{
		v36 = *(_QWORD*)(v5 + 8);
		v37 = 0i64;
		if (*(_QWORD*)(v5 + 32))
			break;
	LABEL_86:
		v56 = ++v35;
		if (v35 >= *(_QWORD*)(v5 + 24))
			return 0i64;
	}
	while (1)
	{
		v38 = v37 + *(_DWORD*)(v5 + 32) * v35;
		result = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, __int64, _DWORD, int**))(*v6 + 112))(
			v6,
			a2,
			v38,
			1i64,
			0,
			&v58);
		if ((int)result < 0)
			return result;
		v39 = *(_QWORD*)(a4 + 48);
		if (v37 >= v39)
			goto LABEL_65;
		v40 = *(_DWORD*)(a4 + 68);
		v41 = 0i64;
		if (v40 < 2)
			goto LABEL_65;
		if (v40 <= 3)
		{
			if (v35 >= *(_QWORD*)(a4 + 40))
				goto LABEL_65;
			v41 = v37 + v35 * v39;
		}
		else
		{
			if (v40 != 4 || v35)
				goto LABEL_65;
			v42 = *(_QWORD*)(a4 + 32);
			if (v37)
			{
				v43 = v37;
				do
				{
					v41 += v42;
					if (v42 > 1)
						v42 >>= 1;
					--v43;
				} while (v43);
			}
			if (!v42)
			{
			LABEL_65:
				v34 = *v6;
				v32 = v62;
				v33 = v38;
				v31 = v6;
			LABEL_48:
				(*(void(__fastcall**)(__int64*, __int64, __int64))(v34 + 120))(v31, v32, v33);
				return 2147500037i64;
			}
		}
		v44 = *(_QWORD*)(a4 + 72) + 48 * v41;
		if (!v44)
			goto LABEL_65;
		v45 = *(int**)(v44 + 40);
		if (!v45)
		{
			(*(void(__fastcall**)(__int64*, __int64, _QWORD))(*v6 + 120))(v6, v62, v38);
			return 2147500035i64;
		}
		v46 = *(_DWORD*)(v5 + 48);
		if (v46 < 70 || v46 > 84 && (unsigned int)(v46 - 94) > 5)
		{
			v48 = v36;
		}
		else
		{
			v47 = &v57;
			v55 = 1i64;
			v57 = (v36 + 3) >> 2;
			if (v57 <= 1)
				v47 = &v55;
			v48 = *v47;
		}
		v49 = v58;
		if (v48)
		{
			v50 = *(_QWORD*)(v44 + 24);
			v51 = v59;
			v52 = (unsigned __int64*)(v44 + 24);
			do
			{
				v57 = v51;
				v53 = &v57;
				if (v51 >= v50)
					v53 = v52;
				sub_1407E15B8(v45, v50, v49, *v53);
				v51 = v59;
				v50 = *v52;
				v49 = (int*)((char*)v49 + v59);
				v45 = (int*)((char*)v45 + *v52);
				--v48;
			} while (v48);
			v35 = v56;
		}
		v6 = a1;
		(*(void(__fastcall**)(__int64*, __int64, _QWORD))(*a1 + 120))(a1, v62, v38);
		if (v36 > 1)
			v36 >>= 1;
		v5 = a3;
		a2 = v62;
		if (++v37 >= *(_QWORD*)(a3 + 32))
			goto LABEL_86;
	}
}

