//----- (0000000140428E40) ----------------------------------------------------
void __fastcall sub_140428E40(__int64 a1, unsigned __int16* a2, unsigned int a3, int a4)
{
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdx
	_QWORD* v12; // rdi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	unsigned int v17; // ebp
	__int64 v18; // rcx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	_QWORD* v24; // rax
	__int64 v25; // r10
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rcx
	__int64* v29; // rax
	_QWORD* v30; // rbx
	__int64 v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // [rsp+20h] [rbp-A08h]
	__int64(__fastcall * *v34)(); // [rsp+28h] [rbp-A00h] BYREF
	__int64 v35; // [rsp+30h] [rbp-9F8h]
	_QWORD* v36; // [rsp+38h] [rbp-9F0h]
	__int64 v37; // [rsp+40h] [rbp-9E8h]
	__int64 v38; // [rsp+48h] [rbp-9E0h] BYREF
	__int64 v39; // [rsp+50h] [rbp-9D8h]
	char v40[1224]; // [rsp+68h] [rbp-9C0h] BYREF
	__int64 v41[96]; // [rsp+530h] [rbp-4F8h] BYREF
	__int64 v42; // [rsp+830h] [rbp-1F8h]

	sub_14040FAE0((__int64)v41);
	v8 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < a3)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v33 = v9, a3 < *(_DWORD*)(v9 + 32)))
		v33 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v33 == v8)
		v11 = 0i64;
	else
		v11 = v33 + 40;
	sub_1404111E0((__int64)v41, v11, 1);
	v12 = *(_QWORD**)(a1 + 400);
	v13 = v12[4];
	v34 = off_140B569F0;
	v36 = v12;
	v14 = *(_QWORD*)(v13 + 112);
	LODWORD(v37) = 1;
	if (*(_QWORD*)(v13 + 120) >= v14)
		sub_14005E2C0((__int64)v12);
	v15 = v12[2];
	v16 = sub_14005C1B0((__int64)v12, 0, 0);
	*(_DWORD*)(v15 + 8) = 5;
	*(_QWORD*)v15 = v16;
	v12[2] += 16i64;
	v17 = sub_1400578C0((__int64)v12);
	v18 = *(_QWORD*)(v12[4] + 160i64);
	LODWORD(v35) = v17;
	v19 = sub_14005C3C0(v18, v17);
	v20 = v12[2];
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	v12[2] += 16i64;
	sub_1400F06F0((__int64)v12, v20, L"nLootId", a3);
	v12[2] -= 16i64;
	v21 = sub_14005C3C0(*(_QWORD*)(v12[4] + 160i64), v17);
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	v12[2] += 16i64;
	sub_1400F0870((__int64)v12, v23, L"strPlayer", a2);
	v12[2] -= 16i64;
	v24 = sub_14005C3C0(*(_QWORD*)(v12[4] + 160i64), v17);
	*(_QWORD*)v25 = *v24;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
	v12[2] += 16i64;
	v26 = (unsigned __int64*)sub_14018F0E0(&v38, L"bNeed")[1];
	if (v26)
	{
		v27 = -1i64;
		do
			++v27;
		while (*((_BYTE*)v26 + v27));
		sub_140058710((__int64)v12, v26, v27);
	}
	else
	{
		*(_DWORD*)(v12[2] + 8i64) = 0;
		v12[2] += 16i64;
	}
	if (v39)
		sub_14018B900(v39, 0);
	v28 = (_DWORD*)v12[2];
	v28[2] = 1;
	*v28 = a4 != 0;
	v12[2] += 16i64;
	v29 = (__int64*)sub_1400580E0((__int64)v12, -3);
	sub_14005EA50((__int64)v12, v29, (int*)(v12[2] - 32i64), (unsigned int*)(v12[2] - 16i64));
	v12[2] -= 48i64;
	v30 = (_QWORD*)sub_14040FC60((__int64)v40, (__int64)v41);
	if ((unsigned int)sub_140415BB0(v12, (__int64)v30))
	{
		sub_1400FB540((__int64)&v34);
		v12[2] -= 16i64;
	}
	if (*v30)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v30 + 8i64))(*v30);
		*v30 = 0i64;
	}
	v31 = v30[96];
	if (v31)
		sub_14018B900(v31, 0);
	sub_1400EA3E0(a1, "LootRollWon", byte_1409EADDC, v17, v33, v34, v35, v36, v37);
	sub_1400579E0((__int64)v12, v32, v17);
	if (v41[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v41[0] + 8i64))(v41[0]);
		v41[0] = 0i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
}
// 140428FBA: variable 'v22' is possibly undefined
// 140428FCC: variable 'v23' is possibly undefined
// 140428FF6: variable 'v25' is possibly undefined
// 140429117: variable 'v32' is possibly undefined
// 1409EADDC: using guessed type _BYTE byte_1409EADDC[24];
// 140B00C10: using guessed type wchar_t aBneed_1[6];
// 140B00C20: using guessed type wchar_t aStrplayer_2[10];
// 140B00CB0: using guessed type wchar_t aNlootid_3[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140428E40: using guessed type char var_9C0[1224];

