//----- (0000000140748390) ----------------------------------------------------
__int64 __fastcall sub_140748390(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	unsigned int v4; // esi
	unsigned __int8 v5; // r14
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rax
	_DWORD* v9; // rcx
	_DWORD* v11; // rax
	__int64 v12; // rbp
	_DWORD* v13; // rax
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // rcx
	__int64 v17; // r15
	__int64 v18; // rdx
	unsigned __int8 v19; // bl
	unsigned int v20; // eax
	unsigned __int8 v21; // bl
	unsigned int v22; // edx
	_DWORD* v23; // rax
	_DWORD* v24; // rax
	__int64 v25; // [rsp+48h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v2 + 684)
		|| (unsigned int)sub_1403BB8D0())
	{
		v24 = *(_DWORD**)(a1 + 16);
		*v24 = 0;
		v24[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v3 = sub_1400E93D0(a1) + 384;
		v4 = sub_1400F26A0(v3, 1);
		v5 = sub_1400F26A0(v3, 2);
		v7 = sub_1407A1440(v6, v4, 1u);
		v8 = sub_1403ACD90(qword_140C65B70, v7, *(_QWORD*)(qword_140C65898 + 120));
		if (!v8)
		{
			v9 = *(_DWORD**)(a1 + 16);
			*v9 = 0;
			v9[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		if (!(unsigned int)sub_1404823C0(v8))
		{
			v11 = *(_DWORD**)(a1 + 16);
			*v11 = 0;
			v11[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		v12 = qword_140C65898;
		if (!sub_1403BB170(qword_140C65898, v4))
		{
			v13 = *(_DWORD**)(a1 + 16);
			*v13 = 0;
			v13[2] = 1;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		v14 = sub_1403BACC0(v12, v4, *(_BYTE*)(v12 + 28140));
		v15 = *(_QWORD*)(v12 + 5216);
		v16 = *(_QWORD*)(v15 + 8);
		v17 = v14;
		v18 = v15;
		while (v16)
		{
			if (*(_DWORD*)(v16 + 32) < v4)
			{
				v16 = *(_QWORD*)(v16 + 24);
			}
			else
			{
				v18 = v16;
				v16 = *(_QWORD*)(v16 + 16);
			}
		}
		if (v18 == v15 || (v25 = v18, v4 < *(_DWORD*)(v18 + 32)))
			v25 = *(_QWORD*)(v12 + 5216);
		if (v25 == v15 || (v19 = *(_BYTE*)(v25 + 36)) == 0)
			v19 = *(_BYTE*)(v14 + 8);
		if (!v14)
			goto LABEL_34;
		if (v5 != v19)
		{
			if (v5 <= v19)
			{
			LABEL_34:
				sub_1403BB340(v16, v4, v5);
				return 0i64;
			}
			if (v4)
			{
				v20 = sub_1407A1440(v16, v4, v5);
				if (v20)
				{
					if ((unsigned int)sub_1403BB040(v12, v20))
					{
						v16 = *(unsigned int*)(qword_140C65898 + 28124);
						if ((_DWORD)v16 == -1)
							v16 = *(unsigned int*)(qword_140C65898 + 28120);
						if ((_DWORD)v16)
						{
							v21 = v19 + 1;
							if (v21 <= (int)v5)
							{
								while (1)
								{
									v22 = *(_DWORD*)(*(_QWORD*)(v17 + 24) + 4i64 * v21);
									if ((unsigned int)v16 < v22)
										break;
									++v21;
									v16 = (unsigned int)v16 - v22;
									if (v21 > (int)v5)
										goto LABEL_34;
								}
								v5 = v21 - 1;
							}
							goto LABEL_34;
						}
					}
				}
			}
		}
		v23 = *(_DWORD**)(a1 + 16);
		*v23 = 0;
		v23[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140748417: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

