//----- (0000000140593F30) ----------------------------------------------------
__int64 __fastcall sub_140593F30(_QWORD* a1)
{
	__int64 v1; // rax
	unsigned __int64 v3; // r8
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rbx
	unsigned __int64 v9; // r8
	__int64 v10; // rcx
	unsigned int v11; // r9d
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int v16; // r10d
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // r9
	__int64 v23; // [rsp+20h] [rbp-28h] BYREF
	__int64 v24; // [rsp+28h] [rbp-20h]
	__int64 v25; // [rsp+30h] [rbp-18h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v5 = (unsigned int)v1;
			if ((unsigned int)v1 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = 0i64;
	v9 = *(_QWORD*)(qword_140C65898 + 5792);
	v10 = 0i64;
	v11 = v7;
	if (v9)
	{
		v12 = *(_QWORD*)(qword_140C65898 + 5784);
		v13 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v12 + 8 * v13) + 8i64) != v11)
		{
			v10 = (unsigned int)(v10 + 1);
			v13 = (unsigned int)v10;
			if ((unsigned int)v10 >= v9)
				goto LABEL_20;
		}
		v14 = *(_QWORD*)(v12 + 8 * v10);
		if (v14)
		{
			if (!*(_DWORD*)(v14 + 12))
			{
				if (*(_DWORD*)(v14 + 84))
				{
					v15 = sub_1405BE150(v14, v11);
					if (v15)
					{
						if (v16 <= *(_DWORD*)(v15 + 12))
						{
							if (v16)
							{
								v17 = v15 + 48i64 * (v16 - 1) + 32;
								if (v17)
									v8 = *(_QWORD*)(v17 + 40);
							}
						}
					}
				}
			}
		}
	}
LABEL_20:
	v24 = 1i64;
	v25 = 0i64;
	v18 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	*v18 = v8;
	v18[1] = v24;
	v18[2] = v25;
	v19 = a1[4];
	v20 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v21 = a1[2];
	v23 = v20;
	LODWORD(v24) = 4;
	sub_14005E8E0((__int64)a1, v19 + 160, (int*)&v23, v21);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140593FF6: variable 'v16' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

