//----- (0000000140503100) ----------------------------------------------------
__int64 __fastcall sub_140503100(_QWORD* a1)
{
	int* v2; // rax
	int v3; // ebx
	int* v4; // rdi
	_DWORD* v5; // rdx
	__int64 v6; // rcx
	int v7; // r9d
	unsigned int v8; // r8d
	unsigned int v9; // eax
	bool v10; // sf
	bool v11; // of
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rdx
	_DWORD* v18; // rax

	v2 = (int*)sub_140056AB0(a1, 1u);
	v3 = 0;
	v4 = v2;
	if (v2)
	{
		v6 = v2[2];
		v7 = 0;
		if ((_DWORD)v6 == 15)
		{
			v8 = v2[4];
			if (v8)
			{
				v9 = sub_1403AC840(qword_140C65898 + 160, 2, v8);
				v7 = 0;
				v11 = __OFSUB__(v9, *(_QWORD*)v4);
				v10 = (__int64)(v9 - *(_QWORD*)v4) < 0;
				goto LABEL_21;
			}
			if (v2[3] == 1)
			{
				v12 = 0i64;
				if (!qword_140C7DE20)
				{
				LABEL_22:
					v18 = (_DWORD*)a1[2];
					LOBYTE(v3) = v7 != 0;
					v18[2] = 1;
					*v18 = v3;
					goto LABEL_23;
				}
				while (1)
				{
					v13 = *(_QWORD*)(qword_140C7DE18 + 8 * v12);
					if (v13)
					{
						if (*(_DWORD*)(v13 + 16) == 3)
							break;
					}
					if (++v12 >= (unsigned __int64)qword_140C7DE20)
						goto LABEL_22;
				}
				v14 = *(unsigned int*)(v13 + 504);
				v11 = __OFSUB__(v14, *(_QWORD*)v4);
				v10 = v14 - *(_QWORD*)v4 < 0;
			LABEL_21:
				LOBYTE(v7) = v10 == v11;
				goto LABEL_22;
			}
			v15 = v2[5];
			if ((_DWORD)v15)
			{
				if ((unsigned int)v15 > 0x12)
				{
					v11 = __OFSUB__(0i64, *(_QWORD*)v4);
					v10 = (__int64)-*(_QWORD*)v4 < 0;
				}
				else
				{
					v16 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 8 * v15 + 208);
					v11 = __OFSUB__(v16, *(_QWORD*)v4);
					v10 = v16 - *(_QWORD*)v4 < 0;
				}
				goto LABEL_21;
			}
		}
		if ((unsigned int)(v6 - 1) > 0xD)
			v17 = 0i64;
		else
			v17 = *(_QWORD*)(qword_140C65898 + 8 * v6 + 5616);
		v11 = __OFSUB__(v17, *(_QWORD*)v4);
		v10 = v17 - *(_QWORD*)v4 < 0;
		goto LABEL_21;
	}
	v5 = (_DWORD*)a1[2];
	*v5 = 0;
	v5[2] = 1;
LABEL_23:
	a1[2] += 16i64;
	return 1i64;
}
// 140503180: conditional instruction was optimized away because ecx.4==F
// 1405031D2: conditional instruction was optimized away because ecx.4==F
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

