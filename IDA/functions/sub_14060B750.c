#include "../winhttp.h"

//----- (000000014060B750) ----------------------------------------------------
void __fastcall sub_14060B750(int* a1)
{
	__int64 v2; // r14
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64 v6; // rax
	unsigned int v7; // ebp
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r11
	__int64 v17; // rdx
	int v18; // r10d
	int v19; // r15d
	_QWORD* v20; // rax
	__int64 v21; // r10
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // r8
	_DWORD* v25; // rcx
	__int64* v26; // rax
	__int64 v27; // rcx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	unsigned __int16* v30; // r10
	signed int v31; // ecx
	__int64 v32; // rax
	__int64 v33; // rcx
	_QWORD* v34; // rax
	__int64 v35; // rdx
	unsigned __int16* v36; // r10
	__int64 v37; // rax
	__int64 v38; // r10
	__int64 v39; // rcx
	int v40; // edx
	int v41; // eax
	_QWORD* v42; // rax
	__int64 v43; // rdx
	unsigned __int64* v44; // rdx
	_DWORD* v45; // rax
	__int64* v46; // rax
	__int64 v47; // rdx
	__int64(__fastcall * *v48)(); // [rsp+20h] [rbp-38h] BYREF
	__int64 v49; // [rsp+28h] [rbp-30h]
	__int64 v50; // [rsp+30h] [rbp-28h]
	int v51; // [rsp+38h] [rbp-20h]

	if (a1[8] < 28)
	{
		v2 = *(_QWORD*)(qword_140C65A08 + 8i64 * a1[8] + 40);
		if (v2)
		{
			v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			v48 = off_140B569F0;
			v4 = *(_QWORD*)(v3 + 32);
			v50 = v3;
			v51 = 1;
			if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
				sub_14005E2C0(v3);
			v5 = *(_QWORD*)(v3 + 16);
			v6 = sub_14005C1B0(v3, 0, 0);
			*(_DWORD*)(v5 + 8) = 5;
			*(_QWORD*)v5 = v6;
			*(_QWORD*)(v3 + 16) += 16i64;
			v7 = sub_1400578C0(v3);
			LODWORD(v49) = v7;
			sub_14060B380(a1, (__int64)&v48);
			v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
			v9 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v9 = *v8;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
			*(_QWORD*)(v3 + 16) += 16i64;
			sub_1400F06F0(v3, v9, L"eState", v10);
			*(_QWORD*)(v3 + 16) -= 16i64;
			v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
			*(_QWORD*)v12 = *v11;
			*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
			*(_QWORD*)(v3 + 16) += 16i64;
			sub_1400F06F0(v3, v13, L"nInterruptArmorHit", v14);
			*(_QWORD*)(v3 + 16) -= 16i64;
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(v3 + 16) += 16i64;
			sub_1400F06F0(v3, v17, L"eResult", v18);
			*(_QWORD*)(v3 + 16) -= 16i64;
			v19 = a1[9];
			v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
			*(_QWORD*)v21 = *v20;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
			*(_QWORD*)(v3 + 16) += 16i64;
			v22 = (unsigned __int64*)sub_14018F0E0(&v48, L"bRemoved")[1];
			v23 = -1i64;
			if (v22)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v22 + v24));
				sub_140058710(v3, v22, v24);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
				*(_QWORD*)(v3 + 16) += 16i64;
			}
			if (v49)
				sub_14018B900(v49, 0);
			v25 = *(_DWORD**)(v3 + 16);
			v25[2] = 1;
			*v25 = v19 != 0;
			*(_QWORD*)(v3 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(v3, -3);
			sub_14005EA50(v3, v26, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
			*(_QWORD*)(v3 + 16) -= 48i64;
			sub_14034BDD0(v27, *(_DWORD*)(v2 + 40));
			v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
			v29 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(v3 + 16) += 16i64;
			sub_1400F0870(v3, v29, L"strState", v30);
			*(_QWORD*)(v3 + 16) -= 16i64;
			v31 = a1[12];
			if (v31 > 0)
			{
				v32 = sub_1401EEDE0(v31);
				if (v32)
				{
					sub_14034BDD0(v33, *(_DWORD*)(v32 + 4));
					v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
					v35 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v35 = *v34;
					*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F0870(v3, v35, L"strTriggerCapCategory", v36);
					*(_QWORD*)(v3 + 16) -= 16i64;
				}
			}
			v37 = sub_1403D90D0(qword_140C65898, a1[2]);
			if (v37)
				v37 = sub_14047DCA0(v37);
			v38 = qword_140C65898;
			v39 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v39)
				v40 = *(_DWORD*)(v39 + 8);
			else
				v40 = 0;
			if (!v37 || *(_DWORD*)(v37 + 8) != v40)
			{
				if ((unsigned int)(a1[11] - 3) <= 1)
					goto LABEL_26;
				v41 = dword_140C4E000;
				if (*(_DWORD*)qword_140C63750 < dword_140C4E000)
					v41 = *(_DWORD*)qword_140C63750;
				if (*((_BYTE*)&dword_140C4E010 + v41))
				{
				LABEL_26:
					v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
					v43 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v43 = *v42;
					*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					v44 = (unsigned __int64*)sub_14018F0E0(&v48, L"bHideFloater")[1];
					if (v44)
					{
						do
							++v23;
						while (*((_BYTE*)v44 + v23));
						sub_140058710(v3, v44, v23);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
						*(_QWORD*)(v3 + 16) += 16i64;
					}
					if (v49)
						sub_14018B900(v49, 0);
					v45 = *(_DWORD**)(v3 + 16);
					*v45 = 1;
					v45[2] = 1;
					*(_QWORD*)(v3 + 16) += 16i64;
					v46 = (__int64*)sub_1400580E0(v3, -3);
					sub_14005EA50(v3, v46, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
					*(_QWORD*)(v3 + 16) -= 48i64;
					v38 = qword_140C65898;
				}
			}
			sub_1400EA3E0(*(_QWORD*)(v38 + 29504), "CombatLogCCState", "T", v7, v48);
			sub_1400579E0(v3, v47, v7);
		}
	}
}
// 14060B849: variable 'v10' is possibly undefined
// 14060B87A: variable 'v12' is possibly undefined
// 14060B88C: variable 'v13' is possibly undefined
// 14060B88C: variable 'v14' is possibly undefined
// 14060B8BD: variable 'v16' is possibly undefined
// 14060B8CF: variable 'v17' is possibly undefined
// 14060B8CF: variable 'v18' is possibly undefined
// 14060B8FD: variable 'v21' is possibly undefined
// 14060B99E: variable 'v27' is possibly undefined
// 14060B9DA: variable 'v30' is possibly undefined
// 14060B9FD: variable 'v33' is possibly undefined
// 14060BA39: variable 'v36' is possibly undefined
// 14060BB9E: variable 'v47' is possibly undefined
// 140B262B8: using guessed type wchar_t aBhidefloater[13];
// 140B262E8: using guessed type wchar_t aStrstate[9];
// 140B26300: using guessed type wchar_t aStrtriggercapc[22];
// 140B26330: using guessed type wchar_t aEresult[8];
// 140B26340: using guessed type wchar_t aBremoved[9];
// 140B26358: using guessed type wchar_t aEstate[7];
// 140B26368: using guessed type wchar_t aNinterruptarmo_1[19];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C4E000: using guessed type int dword_140C4E000;
// 140C4E010: using guessed type int dword_140C4E010;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;

