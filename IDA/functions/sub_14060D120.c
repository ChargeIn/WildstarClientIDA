//----- (000000014060D120) ----------------------------------------------------
void __fastcall sub_14060D120(int* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	unsigned __int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	unsigned int v7; // r14d
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	int v34; // r11d
	int v35; // r15d
	_QWORD* v36; // rax
	__int64 v37; // r10
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // rdi
	int v40; // esi
	unsigned __int64 v41; // r8
	_DWORD* v42; // rcx
	__int64* v43; // rax
	int v44; // r15d
	_QWORD* v45; // rax
	__int64 v46; // r10
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	_DWORD* v49; // rcx
	__int64* v50; // rax
	int v51; // ebp
	_QWORD* v52; // rax
	__int64 v53; // r10
	unsigned __int64* v54; // rdx
	_DWORD* v55; // rax
	__int64* v56; // rax
	__int64 v57; // rcx
	__int64 v58; // rdx
	__int64(__fastcall * *v59)(); // [rsp+20h] [rbp-38h] BYREF
	__int64 v60; // [rsp+28h] [rbp-30h]
	__int64 v61; // [rsp+30h] [rbp-28h]
	int v62; // [rsp+38h] [rbp-20h]

	if (a1[6])
	{
		v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
		v59 = off_140B569F0;
		v3 = *(_QWORD*)(v2 + 32);
		v61 = v2;
		v4 = *(_QWORD*)(v3 + 112);
		v62 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(v2);
		v5 = *(_QWORD*)(v2 + 16);
		v6 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(v2 + 16) += 16i64;
		v7 = sub_1400578C0(v2);
		LODWORD(v60) = v7;
		sub_14060B380(a1, (__int64)&v59);
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		v9 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v9, L"nDamageAmount", v10);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v12 = *v11;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v13, L"nRawDamage", v14);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v17, L"eDamageType", v18);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v21, L"nShield", v22);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v25, L"nAbsorption", v26);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v29, L"nGlanceAmount", v30);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v33, L"nOverKill", v34);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v35 = a1[15];
		v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v37 = *v36;
		*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v38 = (unsigned __int64*)sub_14018F0E0(&v59, L"bTargetKilled")[1];
		v39 = -1i64;
		v40 = 0;
		if (v38)
		{
			v41 = -1i64;
			do
				++v41;
			while (*((_BYTE*)v38 + v41));
			sub_140058710(v2, v38, v41);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v60)
			sub_14018B900(v60, 0);
		v42 = *(_DWORD**)(v2 + 16);
		v42[2] = 1;
		*v42 = v35 != 0;
		*(_QWORD*)(v2 + 16) += 16i64;
		v43 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v43, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
		v44 = a1[16];
		v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v46 = *v45;
		*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v47 = (unsigned __int64*)sub_14018F0E0(&v59, L"bPeriodic")[1];
		if (v47)
		{
			v48 = -1i64;
			do
				++v48;
			while (*((_BYTE*)v47 + v48));
			sub_140058710(v2, v47, v48);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v60)
			sub_14018B900(v60, 0);
		v49 = *(_DWORD**)(v2 + 16);
		v49[2] = 1;
		*v49 = v44 != 0;
		*(_QWORD*)(v2 + 16) += 16i64;
		v50 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v50, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
		v51 = a1[14];
		v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
		*(_QWORD*)v53 = *v52;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v54 = (unsigned __int64*)sub_14018F0E0(&v59, L"btargetVulnerable")[1];
		if (v54)
		{
			do
				++v39;
			while (*((_BYTE*)v54 + v39));
			sub_140058710(v2, v54, v39);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v60)
			sub_14018B900(v60, 0);
		v55 = *(_DWORD**)(v2 + 16);
		LOBYTE(v40) = v51 != 0;
		v55[2] = 1;
		*v55 = v40;
		*(_QWORD*)(v2 + 16) += 16i64;
		v56 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v56, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		v57 = qword_140C65898;
		*(_QWORD*)(v2 + 16) -= 48i64;
		sub_1400EA3E0(*(_QWORD*)(v57 + 29504), "CombatLogMultiHitShields", "T", v7, v59);
		sub_1400579E0(v2, v58, v7);
	}
}
// 14060D200: variable 'v10' is possibly undefined
// 14060D232: variable 'v12' is possibly undefined
// 14060D244: variable 'v13' is possibly undefined
// 14060D244: variable 'v14' is possibly undefined
// 14060D276: variable 'v16' is possibly undefined
// 14060D288: variable 'v17' is possibly undefined
// 14060D288: variable 'v18' is possibly undefined
// 14060D2BA: variable 'v20' is possibly undefined
// 14060D2CC: variable 'v21' is possibly undefined
// 14060D2CC: variable 'v22' is possibly undefined
// 14060D2FE: variable 'v24' is possibly undefined
// 14060D310: variable 'v25' is possibly undefined
// 14060D310: variable 'v26' is possibly undefined
// 14060D342: variable 'v28' is possibly undefined
// 14060D354: variable 'v29' is possibly undefined
// 14060D354: variable 'v30' is possibly undefined
// 14060D386: variable 'v32' is possibly undefined
// 14060D398: variable 'v33' is possibly undefined
// 14060D398: variable 'v34' is possibly undefined
// 14060D3C7: variable 'v37' is possibly undefined
// 14060D48A: variable 'v46' is possibly undefined
// 14060D549: variable 'v53' is possibly undefined
// 14060D615: variable 'v58' is possibly undefined
// 140B267B0: using guessed type wchar_t aNabsorption_4[12];
// 140B267C8: using guessed type wchar_t aNglanceamount_3[14];
// 140B267E8: using guessed type wchar_t aEdamagetype_3[12];
// 140B26800: using guessed type wchar_t aNshield_4[8];
// 140B26810: using guessed type wchar_t aNdamageamount_3[14];
// 140B26830: using guessed type wchar_t aNrawdamage_3[11];
// 140B26AC0: using guessed type wchar_t aBperiodic_2[10];
// 140B26AD8: using guessed type wchar_t aBtargetvulnera_2[18];
// 140B26B00: using guessed type wchar_t aNoverkill_3[10];
// 140B26B18: using guessed type wchar_t aBtargetkilled_3[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
