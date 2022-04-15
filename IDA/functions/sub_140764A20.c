//----- (0000000140764A20) ----------------------------------------------------
void __fastcall sub_140764A20(__int64 a1, __int64 a2)
{
	__int16* v2; // r14
	__int64 v5; // rcx
	__int64 v6; // rdx
	int v7; // eax
	_QWORD* v8; // rcx
	__int64 v9; // rdx
	int v10; // edx
	_QWORD* v11; // rbx
	__int64 v12; // rax
	int v13; // r15d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	__int64 v17; // rsi
	unsigned __int64 v18; // rbx
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	_DWORD* v21; // rcx
	__int64* v22; // rax
	int v23; // r15d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	__int64 v27; // rsi
	unsigned __int64* v28; // rdx
	_DWORD* v29; // rcx
	__int64* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	int v34; // r11d
	int v35; // r15d
	__int64 v36; // rcx
	int v37; // edx
	int v38; // r12d
	float v39; // xmm6_4
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64* v42; // rsi
	double v43; // xmm0_8
	__int64 v44; // rsi
	__int64 v45; // rbx
	__int64 v46; // rax
	_QWORD* v47; // rax
	__int64 v48; // rdx
	_QWORD* v49; // rax
	__int64 v50; // r10
	__int64 v51; // rdx
	__int64* v52; // rax
	__int64 v53; // rdx
	__int64 v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rdx
	__int64 v57; // [rsp+20h] [rbp-58h] BYREF
	__int64 v58; // [rsp+28h] [rbp-50h]
	__int64 v59; // [rsp+30h] [rbp-48h]
	int v60; // [rsp+80h] [rbp+8h] BYREF

	v2 = 0i64;
	if (*(_QWORD*)(a2 + 32))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 7152);
		v6 = v5 ? (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) : 0i64;
		v7 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 128i64))(*(_QWORD*)(a2 + 32), v6);
		if (v7)
		{
			v8 = *(_QWORD**)(a1 + 16);
			v60 = v7;
			if ((unsigned int)sub_1407662A0(v8, &v60))
			{
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
		}
	}
	v9 = *(_QWORD*)(a2 + 32);
	if (v9 && (unsigned int)sub_14072D5B0(*(_QWORD**)(a1 + 16), v9))
	{
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v10 = *(_DWORD*)(a2 + 24);
	v11 = *(_QWORD**)(a1 + 16);
	if (v10)
	{
		v12 = sub_1405A8A40(a1, v10);
		if (v12)
		{
			if ((unsigned int)sub_140663030(v11, v12))
			{
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
		}
	}
	v13 = *(_DWORD*)(a2 + 48);
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	v17 = *(_QWORD*)(a1 + 16);
	v18 = -1i64;
	v19 = (unsigned __int64*)sub_14018F0E0(&v57, L"bCanCall")[1];
	if (v19)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v19 + v20));
		sub_140058710(v17, v19, v20);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v17 + 16) + 8i64) = 0;
		*(_QWORD*)(v17 + 16) += 16i64;
	}
	if (v58)
		sub_14018B900(v58, 0);
	v21 = *(_DWORD**)(v17 + 16);
	v21[2] = 1;
	*v21 = v13 != 0;
	*(_QWORD*)(v17 + 16) += 16i64;
	v22 = (__int64*)sub_1400580E0(v17, -3);
	sub_14005EA50(v17, v22, (int*)(*(_QWORD*)(v17 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v17 + 16) - 16i64));
	*(_QWORD*)(v17 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v23 = *(_DWORD*)(a2 + 40);
	v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v26 = *(_QWORD*)(v25 + 16);
	*(_QWORD*)v26 = *v24;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
	*(_QWORD*)(v25 + 16) += 16i64;
	v27 = *(_QWORD*)(a1 + 16);
	v28 = (unsigned __int64*)sub_14018F0E0(&v57, L"bInProgress")[1];
	if (v28)
	{
		do
			++v18;
		while (*((_BYTE*)v28 + v18));
		sub_140058710(v27, v28, v18);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v27 + 16) + 8i64) = 0;
		*(_QWORD*)(v27 + 16) += 16i64;
	}
	if (v58)
		sub_14018B900(v58, 0);
	v29 = *(_DWORD**)(v27 + 16);
	v29[2] = 1;
	*v29 = v23 != 0;
	*(_QWORD*)(v27 + 16) += 16i64;
	v30 = (__int64*)sub_1400580E0(v27, -3);
	sub_14005EA50(v27, v30, (int*)(*(_QWORD*)(v27 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v27 + 16) - 16i64));
	*(_QWORD*)(v27 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v33 = *(_QWORD*)(v32 + 16);
	*(_QWORD*)v33 = *v31;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v32 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v33, L"nRecommendedGroupSize", v34);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	sub_1400FA3C0((__int64)&v57, *(_QWORD*)(a1 + 16), (float*)a2);
	v35 = v58;
	sub_1400FB2A0(a1, (__int64)L"tLocation", v58);
	v37 = *(_DWORD*)(a2 + 52);
	v38 = 5;
	v39 = 0.0;
	if (v37)
	{
		v40 = *(_QWORD*)(qword_140C65898 + 7152);
		v41 = sub_140717160(v36, v37);
		v42 = (__int64*)v41;
		if (v40)
		{
			if (v41)
			{
				v43 = (*(double(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v40 + 32i64))(v40, *(unsigned int*)(a2 + 52));
				v39 = *(float*)&v43;
				v38 = sub_1407A2A00(*(float*)&v43);
				v2 = sub_14034BDD0(*v42, *(_DWORD*)(*v42 + 12));
			}
		}
	}
	v44 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(*(_QWORD*)(v44 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v44 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(a1 + 16));
	v45 = *(_QWORD*)(v44 + 16);
	v46 = sub_14005C1B0(v44, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	*(_QWORD*)(v44 + 16) += 16i64;
	LODWORD(v45) = sub_1400578C0(v44);
	v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v44 + 32) + 160i64), v45);
	v48 = *(_QWORD*)(v44 + 16);
	*(_QWORD*)v48 = *v47;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
	*(_QWORD*)(v44 + 16) += 16i64;
	sub_1400F0870(v44, v48, L"strName", (unsigned __int16*)v2);
	*(_QWORD*)(v44 + 16) -= 16i64;
	v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v44 + 32) + 160i64), v45);
	*(_QWORD*)v50 = *v49;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
	*(_QWORD*)(v44 + 16) += 16i64;
	sub_1400F06F0(v44, v51, L"nLevel", v38);
	*(_QWORD*)(v44 + 16) -= 16i64;
	v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v44 + 32) + 160i64), v45);
	v53 = *v52;
	*(_QWORD*)v54 = *v52;
	*(_DWORD*)(v54 + 8) = *((_DWORD*)v52 + 2);
	*(_QWORD*)(v44 + 16) += 16i64;
	sub_1400F06F0(v44, v53, L"nCurrent", (int)v39);
	*(_QWORD*)(v44 + 16) -= 16i64;
	sub_1400FB2A0(a1, (__int64)L"tFactionInfo", v45);
	sub_1400579E0(v44, v55, v45);
	if (v59)
		sub_1400579E0(v59, v56, v35);
}
// 140764AE8: variable 'a1' is possibly undefined
// 140764B34: variable 'v15' is possibly undefined
// 140764C0A: variable 'v25' is possibly undefined
// 140764CDD: variable 'v32' is possibly undefined
// 140764D00: variable 'v34' is possibly undefined
// 140764D54: variable 'v36' is possibly undefined
// 140764E31: variable 'v50' is possibly undefined
// 140764E43: variable 'v51' is possibly undefined
// 140764E75: variable 'v54' is possibly undefined
// 140764EA6: variable 'v55' is possibly undefined
// 140764EB8: variable 'v56' is possibly undefined
// 140B4DD80: using guessed type wchar_t aTfactioninfo[13];
// 140B4DDA0: using guessed type wchar_t aNcurrent_5[9];
// 140B4DDB8: using guessed type wchar_t aNlevel_18[7];
// 140B4DDC8: using guessed type wchar_t aStrname_110[8];
// 140B4DDD8: using guessed type wchar_t aTlocation_2[10];
// 140B4DDF0: using guessed type wchar_t aNrecommendedgr[22];
// 140B4DE20: using guessed type wchar_t aBinprogress[12];
// 140B4DE38: using guessed type wchar_t aBcancall[9];
// 140C65898: using guessed type __int64 qword_140C65898;

