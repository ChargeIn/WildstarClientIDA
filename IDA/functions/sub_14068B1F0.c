//----- (000000014068B1F0) ----------------------------------------------------
__int64 __fastcall sub_14068B1F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebx
	__int64 v12; // rax
	unsigned int v13; // eax
	__int64 v14; // rax
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rdx
	unsigned __int16* v23; // r11
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-28h] BYREF
	int v29; // [rsp+28h] [rbp-20h]
	_QWORD* v30; // [rsp+30h] [rbp-18h]
	int v31; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = a1[4];
		v28 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v30 = a1;
		v31 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		v29 = v11;
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
		sub_1405F05B0((__int64)&v28, v6 + 236, v12);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 368i64))(v6);
		v14 = sub_140229540(v13);
		if (v14)
		{
			sub_14034BDD0(v15, *(_DWORD*)(v14 + 4));
			v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v17 = a1[2];
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v18, L"strTeamName", v19);
			a1[2] -= 16i64;
		}
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v21 = a1[2];
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v22, L"strPlayerName", v23);
		a1[2] -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v26, v11);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14068B308: variable 'v15' is possibly undefined
// 14068B348: variable 'v18' is possibly undefined
// 14068B348: variable 'v19' is possibly undefined
// 14068B398: variable 'v22' is possibly undefined
// 14068B398: variable 'v23' is possibly undefined
// 14068B3BE: variable 'v25' is possibly undefined
// 14068B3D0: variable 'v26' is possibly undefined
// 140B32E30: using guessed type wchar_t aStrplayername_0[14];
// 140B32E80: using guessed type wchar_t aStrteamname_2[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

