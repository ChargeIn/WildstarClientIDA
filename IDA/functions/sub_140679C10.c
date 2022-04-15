//----- (0000000140679C10) ----------------------------------------------------
__int64 __fastcall sub_140679C10(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 v8; // rdx
	char* v9; // rbx
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	_QWORD* v15; // rax
	__int64 v16; // r8
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-48h] BYREF
	int v19; // [rsp+28h] [rbp-40h]
	__int64 v20; // [rsp+30h] [rbp-38h]
	char v21; // [rsp+40h] [rbp-28h] BYREF

	v1 = (_QWORD*)a1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = v1[2];
	v3 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v1[2] += 16i64;
	v4 = sub_1400578C0((__int64)v1);
	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(v1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0)
	{
		v9 = (char*)sub_1406EE640((__int64)&v18, v1, v7 + 40);
		if (&v21 != v9)
		{
			v1 = (_QWORD*)*((_QWORD*)v9 + 2);
			if ((*(unsigned int(__fastcall**)(char*))(*(_QWORD*)v9 + 8i64))(v9))
			{
				sub_1400579E0((__int64)v1, v8, v4);
				v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v9 + 2) + 32i64) + 160i64), *((_DWORD*)v9 + 2));
				v12 = *(_QWORD*)(v11 + 16);
				*(_QWORD*)v12 = *v10;
				*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
				*(_QWORD*)(v11 + 16) += 16i64;
				v4 = sub_1400578C0((__int64)v1);
			}
		}
		v18 = off_140B56A08;
		if (v20)
			sub_1400579E0(v20, v8, v19);
		v13 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v4);
		v14 = v1[2];
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	}
	else
	{
		v15 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v4);
		v16 = v1[2];
		*(_QWORD*)v16 = *v15;
		v14 = *((unsigned int*)v15 + 2);
		*(_DWORD*)(v16 + 8) = v14;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v14, v4);
	return 1i64;
}
// 140679CEE: variable 'v8' is possibly undefined
// 140679D0A: variable 'v11' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

