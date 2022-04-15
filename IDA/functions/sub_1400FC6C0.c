//----- (00000001400FC6C0) ----------------------------------------------------
__int64 __fastcall sub_1400FC6C0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rsi
	__int64 v11; // rax
	_DWORD* v12; // rcx
	__int64(__fastcall * *v13)(); // rdx
	_DWORD* v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rcx
	int v17; // eax
	int v18; // r8d
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-28h] BYREF
	int v25; // [rsp+28h] [rbp-20h]
	__int64 v26; // [rsp+30h] [rbp-18h]
	int v27; // [rsp+38h] [rbp-10h]

	v4 = sub_14005C3C0(
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	v10 = *(_QWORD*)(a1 + 16);
	if (!(unsigned int)sub_14005BA70(v10, *(_QWORD*)(*(_QWORD*)(v10 + 16) - 32i64), *(_QWORD*)(v10 + 16) - 16i64))
	{
		*(_QWORD*)(v10 + 16) -= 16i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		return 2147500037i64;
	}
	*(_QWORD*)(v10 + 16) += 16i64;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 4294967294i64);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = (_DWORD*)(*(_QWORD*)(v11 + 16) - 16i64);
	if (v12 == dword_140A12138 || v12[2] != 5)
	{
		*(_QWORD*)(v11 + 16) -= 48i64;
		return 2147500037i64;
	}
	v13 = off_140B569F0;
	v26 = *(_QWORD*)(a1 + 16);
	v27 = 1;
	v24 = off_140B569F0;
	v25 = -2;
	v14 = (_DWORD*)(*(_QWORD*)(v11 + 16) - 16i64);
	if (v14 != dword_140A12138 && v14[2] == 5)
	{
		sub_1400579E0(v11, (__int64)off_140B569F0, -2);
		v15 = v26;
		v16 = *(_QWORD*)(v26 + 16);
		*(_QWORD*)v16 = *(_QWORD*)(v16 - 16);
		*(_DWORD*)(v16 + 8) = *(_DWORD*)(v16 - 8);
		*(_QWORD*)(v15 + 16) += 16i64;
		v17 = sub_1400578C0(v26);
		v13 = v24;
		v25 = v17;
		v11 = v26;
	}
	if ((__int64(__fastcall***)())a2 != &v24)
	{
		*(_DWORD*)(a2 + 24) = 1;
		*(_QWORD*)(a2 + 16) = v11;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v13[1])(&v24))
		{
			v18 = *(_DWORD*)(a2 + 8);
			v19 = *(_QWORD*)(a2 + 16);
			*(_DWORD*)(a2 + 24) = v27;
			sub_1400579E0(v19, (__int64)v13, v18);
			v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v26 + 32) + 160i64), v25);
			v22 = *(_QWORD*)(v21 + 16);
			*(_QWORD*)v22 = *v20;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
			*(_QWORD*)(v21 + 16) += 16i64;
			*(_DWORD*)(a2 + 8) = sub_1400578C0(*(_QWORD*)(a2 + 16));
		}
		v11 = v26;
	}
	v24 = off_140B56A08;
	if (v11)
		sub_1400579E0(v11, (__int64)v13, v25);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 48i64;
	return 0i64;
}
// 1400FC6F0: variable 'v5' is possibly undefined
// 1400FC71C: variable 'v8' is possibly undefined
// 1400FC82F: variable 'v13' is possibly undefined
// 1400FC84D: variable 'v21' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

