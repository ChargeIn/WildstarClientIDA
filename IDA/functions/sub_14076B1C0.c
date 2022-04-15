//----- (000000014076B1C0) ----------------------------------------------------
void __fastcall sub_14076B1C0(__int64 a1, int a2)
{
	int* v4; // rax
	int v5; // ebp
	int* v6; // rsi
	__int64 v7; // r14
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // r12
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // edi
	__int64 v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rdx
	int v17; // r10d
	_QWORD* v18; // rax
	__int64 v19; // r11
	__int64 v20; // rdx
	int v21; // r10d
	_QWORD* v22; // rax
	__int64 v23; // r11
	__int64 v24; // rdx
	int v25; // r10d
	_QWORD* v26; // rax
	__int64 v27; // r11
	__int64 v28; // rdx
	int v29; // r10d
	_QWORD* v30; // rax
	__int64 v31; // r11
	__int64 v32; // rdx
	int v33; // r10d
	int v34; // esi
	_QWORD* v35; // rax
	__int64 v36; // r10
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	_DWORD* v39; // rax
	__int64* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // rdx
	unsigned __int16* v43; // r9
	__int64 v44; // r10
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	__int64 v48; // [rsp+20h] [rbp-38h] BYREF
	__int64 v49; // [rsp+28h] [rbp-30h]

	v4 = (int*)sub_1405BFE80(qword_140C65B98, a2, 0xFFFFFFFF);
	v5 = 0;
	v6 = v4;
	v7 = 0i64;
	if (v4 && (v8 = sub_1405C2E70(qword_140C65B98 + 440, v4), (v7 = v8) != 0))
		v10 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 16));
	else
		v10 = 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = sub_1400578C0(a1);
	if (!v6 && !sub_1405BFE80(qword_140C65B98, a2, 0xFFFFFFFF) && !dword_140C7E0AC)
	{
		dword_140C7E0AC = 1;
		v14 = sub_140200220(0x330u);
		if (v14)
			dword_140C7E0A8 = *(_DWORD*)(v14 + 4);
		else
			dword_140C7E0A8 = 0;
	}
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	v16 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v16, L"nRating", v17);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v20, L"nWins", v21);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v24, L"nLosses", v25);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v28, L"nDraws", v29);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v32, L"nRatingFloor", v33);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (v7)
		v34 = *(_DWORD*)(v7 + 4) & 1;
	else
		v34 = 0;
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v36 = *v35;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v37 = (unsigned __int64*)sub_14018F0E0(&v48, L"bRatingGainOnLoss")[1];
	if (v37)
	{
		v38 = -1i64;
		do
			++v38;
		while (*((_BYTE*)v37 + v38));
		sub_140058710(a1, v37, v38);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v49)
		sub_14018B900(v49, 0);
	v39 = *(_DWORD**)(a1 + 16);
	LOBYTE(v5) = v34 != 0;
	v39[2] = 1;
	*v39 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v40 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v40, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	v43 = (unsigned __int16*)&unk_1409F9834;
	*(_QWORD*)v44 = *v41;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v10)
		v43 = (unsigned __int16*)v10;
	sub_1400F0870(a1, v42, L"strFloorLabel", v43);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
	*(_QWORD*)v46 = *v45;
	*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v47, v13);
}
// 14076B222: variable 'v9' is possibly undefined
// 14076B30C: variable 'v17' is possibly undefined
// 14076B34A: variable 'v19' is possibly undefined
// 14076B35C: variable 'v20' is possibly undefined
// 14076B35C: variable 'v21' is possibly undefined
// 14076B39A: variable 'v23' is possibly undefined
// 14076B3AC: variable 'v24' is possibly undefined
// 14076B3AC: variable 'v25' is possibly undefined
// 14076B3EA: variable 'v27' is possibly undefined
// 14076B3FC: variable 'v28' is possibly undefined
// 14076B3FC: variable 'v29' is possibly undefined
// 14076B43A: variable 'v31' is possibly undefined
// 14076B44C: variable 'v32' is possibly undefined
// 14076B44C: variable 'v33' is possibly undefined
// 14076B489: variable 'v36' is possibly undefined
// 14076B54A: variable 'v44' is possibly undefined
// 14076B563: variable 'v42' is possibly undefined
// 14076B589: variable 'v46' is possibly undefined
// 14076B5B9: variable 'v47' is possibly undefined
// 140B4EA98: using guessed type wchar_t aStrfloorlabel[14];
// 140B4EAB8: using guessed type wchar_t aBratinggainonl[18];
// 140B4EAE0: using guessed type wchar_t aNratingfloor[13];
// 140B4EB00: using guessed type wchar_t aNdraws_1[7];
// 140B4EB10: using guessed type wchar_t aNlosses_1[8];
// 140B4EB20: using guessed type wchar_t aNwins_1[6];
// 140B4EB30: using guessed type wchar_t aNrating_2[8];
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7E0A8: using guessed type int dword_140C7E0A8;
// 140C7E0AC: using guessed type int dword_140C7E0AC;

