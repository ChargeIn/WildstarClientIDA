//----- (00000001402C0CF0) ----------------------------------------------------
__int64 __fastcall sub_1402C0CF0(
	__int64 a1,
	unsigned __int64 a2,
	__int64 a3,
	unsigned __int64 a4,
	unsigned __int64 a5,
	__int64 a6)
{
	__int64 result; // rax
	char v10; // al
	__int64 v11; // rdx
	int v12; // ecx
	char v13; // r12
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rbx
	int v16; // eax
	unsigned __int64 v17; // rax
	__int64 v18; // rcx
	int v19; // eax
	unsigned int* v20; // r8
	int v21; // eax
	unsigned int v22; // edi
	unsigned __int64 v23; // rdx
	unsigned __int64 v24; // rbx
	__int64 v25; // rax
	int v26; // ecx
	unsigned __int64 v27; // rax
	__int64 v28; // r8
	__int64 v29; // rcx
	unsigned __int64 v30; // rax
	unsigned int* v31; // r8
	int v32; // eax
	unsigned __int64 v33; // [rsp+20h] [rbp-88h] BYREF
	unsigned __int64 v34; // [rsp+28h] [rbp-80h]
	__int64 v35; // [rsp+30h] [rbp-78h]
	__int64 v36; // [rsp+38h] [rbp-70h]
	__int64 v37; // [rsp+40h] [rbp-68h]
	__int64 v38; // [rsp+48h] [rbp-60h]
	__int64 v39; // [rsp+50h] [rbp-58h]
	_QWORD v40[2]; // [rsp+58h] [rbp-50h] BYREF

	if (!a2 || !a4 || !a5)
		return 2147942487i64;
	if (a4 > 0xFFFFFFFF || a5 > 0xFFFFFFFF)
		return 2147942487i64;
	v33 = *(_QWORD*)a3;
	v34 = *(_QWORD*)(a3 + 8);
	v35 = *(_QWORD*)(a3 + 16);
	v36 = *(_QWORD*)(a3 + 24);
	v37 = *(_QWORD*)(a3 + 32);
	v38 = *(_QWORD*)(a3 + 40);
	v39 = *(_QWORD*)(a3 + 48);
	v33 = a4;
	v34 = a5;
	v37 = 1i64;
	result = sub_1402B2C70(a6, (__int64)&v33);
	if ((int)result >= 0)
	{
		v10 = sub_1402B1FE0(*(_DWORD*)(a3 + 48), v40);
		v12 = *(_DWORD*)(a3 + 52);
		v13 = v10;
		if (v12 < 2)
			goto LABEL_78;
		if (v12 > 3)
		{
			if (v12 == 4)
			{
				v14 = *(_QWORD*)(a3 + 16);
				v15 = 0i64;
				if (v14)
				{
					while (1)
					{
						if (!*(_QWORD*)(a3 + 32))
							goto LABEL_20;
						v16 = *(_DWORD*)(a3 + 52);
						if (v16 < 2)
							goto LABEL_20;
						if (v16 <= 3)
							break;
						if (v16 != 4)
							goto LABEL_20;
						v17 = v15;
						if (v15 >= v14)
							v17 = -1i64;
					LABEL_21:
						if (v17 >= a2)
							goto LABEL_78;
						v18 = a1 + 48 * v17;
						if (!*(_QWORD*)(a6 + 48) || (v19 = *(_DWORD*)(a6 + 68), v19 < 2))
						{
						LABEL_31:
							v20 = 0i64;
							goto LABEL_32;
						}
						if (v19 <= 3)
						{
							if (v15 || !*(_QWORD*)(a6 + 40))
								goto LABEL_31;
							v20 = *(unsigned int**)(a6 + 72);
						}
						else
						{
							if (v19 != 4 || v15 >= *(_QWORD*)(a6 + 32))
								goto LABEL_31;
							v20 = (unsigned int*)(*(_QWORD*)(a6 + 72) + 48 * v15);
						}
					LABEL_32:
						if (!v18 || !v20)
							goto LABEL_77;
						if (*(_DWORD*)(v18 + 16) != *(_DWORD*)(a3 + 48)
							|| *(_QWORD*)v18 > 0xFFFFFFFFui64
							|| *(_QWORD*)(v18 + 8) > 0xFFFFFFFFui64)
						{
							goto LABEL_78;
						}
						if (v13)
							v21 = sub_1402C0840((unsigned int*)v18, v11, v40, v20);
						else
							v21 = sub_1402C0B20(v18, v11, (unsigned __int64*)v20);
						v22 = v21;
						if (v21 < 0)
							goto LABEL_76;
						v14 = *(_QWORD*)(a3 + 16);
						if (++v15 >= v14)
							return 0i64;
					}
					if (!v15)
					{
						v17 = (*(_QWORD*)(a3 + 24) != 0i64) - 1i64;
						goto LABEL_21;
					}
				LABEL_20:
					v17 = -1i64;
					goto LABEL_21;
				}
				return 0i64;
			}
		LABEL_78:
			sub_1402B34D0((_QWORD*)a6);
			return 2147500037i64;
		}
		v23 = *(_QWORD*)(a3 + 24);
		v24 = 0i64;
		if (!v23)
			return 0i64;
		while (1)
		{
			v25 = *(_QWORD*)(a3 + 32);
			if (v25)
			{
				v26 = *(_DWORD*)(a3 + 52);
				if (v26 >= 2)
				{
					if (v26 <= 3)
					{
						if (v24 < v23)
						{
							v27 = v24 * v25;
							goto LABEL_54;
						}
					}
					else if (v26 == 4 && !v24)
					{
						v27 = (*(_QWORD*)(a3 + 16) != 0i64) - 1i64;
						goto LABEL_54;
					}
				}
			}
			v27 = -1i64;
		LABEL_54:
			if (v27 >= a2)
				goto LABEL_78;
			v28 = *(_QWORD*)(a6 + 48);
			v29 = a1 + 48 * v27;
			if (v28)
			{
				v23 = *(unsigned int*)(a6 + 68);
				v30 = 0i64;
				if ((int)v23 >= 2)
				{
					if ((int)v23 <= 3)
					{
						if (v24 < *(_QWORD*)(a6 + 40))
						{
							v30 = v24 * v28;
						LABEL_71:
							v31 = (unsigned int*)(*(_QWORD*)(a6 + 72) + 48 * v30);
							goto LABEL_62;
						}
					}
					else if ((_DWORD)v23 == 4 && !v24 && *(_QWORD*)(a6 + 32))
					{
						goto LABEL_71;
					}
				}
			}
			v31 = 0i64;
		LABEL_62:
			if (!v29 || !v31)
			{
			LABEL_77:
				sub_1402B34D0((_QWORD*)a6);
				return 2147500035i64;
			}
			if (*(_DWORD*)(v29 + 16) != *(_DWORD*)(a3 + 48)
				|| *(_QWORD*)v29 > 0xFFFFFFFFui64
				|| *(_QWORD*)(v29 + 8) > 0xFFFFFFFFui64)
			{
				goto LABEL_78;
			}
			if (v13)
				v32 = sub_1402C0840((unsigned int*)v29, v23, v40, v31);
			else
				v32 = sub_1402C0B20(v29, v23, (unsigned __int64*)v31);
			v22 = v32;
			if (v32 < 0)
			{
			LABEL_76:
				sub_1402B34D0((_QWORD*)a6);
				return v22;
			}
			v23 = *(_QWORD*)(a3 + 24);
			if (++v24 >= v23)
				return 0i64;
		}
	}
	return result;
}
// 1402C0EF3: variable 'v11' is possibly undefined
// 1402C0CF0: using guessed type _QWORD var_50[2];

