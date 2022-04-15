//----- (0000000140741000) ----------------------------------------------------
__int64 __fastcall sub_140741000(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int* v3; // r10
	int v4; // edx
	unsigned __int64 v5; // r8
	unsigned int v6; // eax
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	_DWORD* v11; // r8
	int v12; // eax
	BOOL v13; // eax
	_QWORD* v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r9
	__int64 v19; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+28h] [rbp-20h]
	__int64 v21; // [rsp+30h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(unsigned int**)(v2 + 8)) != 0i64)
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		v6 = 0;
		if (v5)
		{
			v7 = *(_QWORD*)(qword_140C63650 + 760);
			v8 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
			{
				v8 = ++v6;
				if (v6 >= v5)
					goto LABEL_7;
			}
			v9 = *(_QWORD*)(v7 + 8i64 * v6);
		}
		else
		{
		LABEL_7:
			v9 = 0i64;
		}
		v10 = *(_QWORD*)(v9 + 400);
		v11 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v10 + 24) + 16i64) < *(_QWORD*)(v10 + 16))
			v11 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64);
		v12 = v11[2];
		v13 = v12 && (v12 != 1 || *v11);
		LOBYTE(v4) = v13;
		sub_14073FAF0(v3, &v19, v4);
		v14 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v14 = v19;
		v14[1] = v20;
		v14[2] = v21;
		v15 = a1[4];
		v16 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v17 = a1[2];
		v19 = v16;
		LODWORD(v20) = 4;
		sub_14005E8E0((__int64)a1, v15 + 160, (int*)&v19, v17);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

