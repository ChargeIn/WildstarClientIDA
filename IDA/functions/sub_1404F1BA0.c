//----- (00000001404F1BA0) ----------------------------------------------------
__int64 __fastcall sub_1404F1BA0(__int64 a1)
{
	unsigned int v1; // ebx
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbp
	int v8; // eax
	unsigned __int64 v9; // rcx
	int v10; // r8d
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rdi
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // ebx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	__int64 v22; // r8
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-28h] BYREF
	int v24; // [rsp+28h] [rbp-20h]
	__int64 v25; // [rsp+30h] [rbp-18h]
	int v26; // [rsp+38h] [rbp-10h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = *(_QWORD*)(qword_140C65908 + 384);
	v10 = v8;
	if (!v9)
		return 0i64;
	v11 = *(_QWORD*)(qword_140C65908 + 376);
	v12 = 0i64;
	while (1)
	{
		v13 = *(_QWORD*)(v11 + 8 * v12);
		if (*(_DWORD*)v13 == v10)
			break;
		v12 = ++v1;
		if (v1 >= v9)
			return 0i64;
	}
	if (!(unsigned int)sub_1404EA830(*(_QWORD*)(v11 + 8 * v12)))
		return 0i64;
	v15 = *(_QWORD*)(a1 + 32);
	v25 = a1;
	v23 = off_140B569F0;
	v16 = *(_QWORD*)(v15 + 112);
	v26 = 1;
	if (*(_QWORD*)(v15 + 120) >= v16)
		sub_14005E2C0(a1);
	v17 = *(_QWORD*)(a1 + 16);
	v18 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = sub_1400578C0(a1);
	v24 = v19;
	sub_1404EA950((__int64)&v23, v13);
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v19);
	v22 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v22 = *v20;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_DWORD*)(v13 + 12))
		sub_1404EA4F0(v7, *(int**)(v13 + 16), *(__m128i**)(v13 + 24), *(_DWORD*)(v13 + 4));
	sub_1400579E0(a1, v21, v19);
	return 1i64;
}
// 1404F1D16: variable 'v21' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

