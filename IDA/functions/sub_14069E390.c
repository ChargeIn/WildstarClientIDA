//----- (000000014069E390) ----------------------------------------------------
__int64 __fastcall sub_14069E390(_QWORD* a1)
{
	unsigned __int64* v2; // rsi
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64* v7; // rdi
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64 v14; // r8
	__int64* v15; // r14
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v19; // [rsp+20h] [rbp-59h] BYREF
	int v20; // [rsp+28h] [rbp-51h]
	__int64 v21[4]; // [rsp+30h] [rbp-49h] BYREF
	__int64 v22[12]; // [rsp+50h] [rbp-29h] BYREF

	v22[2] = (__int64)"__gc";
	v22[1] = (__int64)sub_14069E130;
	v22[3] = (__int64)sub_14069E310;
	v22[9] = (__int64)sub_14069E130;
	v22[4] = (__int64)"RecruitmentRequestDetailedGuildInfo";
	v22[5] = (__int64)sub_14069E5C0;
	v22[10] = 0i64;
	v22[6] = (__int64)"RecruitmentGetDetailedGuildInfo";
	v22[11] = 0i64;
	v22[7] = (__int64)sub_14069E630;
	v21[2] = 0i64;
	v22[8] = (__int64)"__eq";
	v21[3] = 0i64;
	v21[0] = (__int64)"is";
	v2 = (unsigned __int64*)"__eq";
	v21[1] = (__int64)sub_14069E1D0;
	v22[0] = (__int64)"__eq";
	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.RecruitmentGuild");
	v3 = a1[2];
	*(_QWORD*)v3 = *(_QWORD*)(v3 - 16);
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(v3 - 8);
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v19 = v5;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v19, v6);
	a1[2] -= 16i64;
	v7 = v22;
	do
	{
		v8 = v7[1];
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[5];
		if (v9 == a1[10])
			v10 = a1[15];
		else
			v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
		v11 = sub_140060AB0((__int64)a1, 0, v10);
		v11[4] = v8;
		v12 = a1[2];
		*(_QWORD*)v12 = v11;
		*(_DWORD*)(v12 + 8) = 6;
		a1[2] += 16i64;
		v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
		v14 = -1i64;
		v15 = v13;
		do
			++v14;
		while (*((_BYTE*)v2 + v14));
		v16 = sub_140062650((__int64)a1, v2, v14);
		v17 = (unsigned int*)(a1[2] - 16i64);
		v19 = v16;
		v20 = 4;
		sub_14005EA50((__int64)a1, v15, (int*)&v19, v17);
		a1[2] -= 16i64;
		v2 = (unsigned __int64*)v7[2];
		v7 += 2;
	} while (v2);
	a1[2] = a1[2];
	sub_140057020(a1, "RecruitmentGuildTypeLib", v21);
	return 1i64;
}

