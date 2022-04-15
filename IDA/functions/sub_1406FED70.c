#include "../winhttp.h"

//----- (00000001406FED70) ----------------------------------------------------
__int64 __fastcall sub_1406FED70(__int64 a1, unsigned int a2, int a3, _QWORD* a4)
{
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rdi
	__int64 v20; // rcx
	int v21; // edi
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v25; // rbx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rcx
	__int64* v29; // rax
	_QWORD* v30; // rdi
	__int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // eax
	__int64 v36; // rsi
	int v37; // r12d
	__int64 v38; // rdx
	unsigned __int64 v39; // rcx
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned __int64 v42; // rbx
	int v43; // r14d
	__int64 v44; // rsi
	int* v45; // r14
	int v46; // eax
	__int64 v47; // rcx
	__int64 v48; // rdx
	__int64 v50; // [rsp+40h] [rbp-C0h]
	int v51; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v52)(); // [rsp+48h] [rbp-B8h] BYREF
	__int64 v53; // [rsp+50h] [rbp-B0h]
	__int64 v54; // [rsp+58h] [rbp-A8h]
	int v55; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v56)(); // [rsp+68h] [rbp-98h] BYREF
	int v57; // [rsp+70h] [rbp-90h]
	_QWORD* v58; // [rsp+78h] [rbp-88h]
	int v59; // [rsp+80h] [rbp-80h]
	__int64 v60[2]; // [rsp+88h] [rbp-78h] BYREF
	char v61[1224]; // [rsp+98h] [rbp-68h] BYREF
	__int64 v62[96]; // [rsp+560h] [rbp+460h] BYREF
	__int64 v63; // [rsp+860h] [rbp+760h]
	__int16 v64[40]; // [rsp+A20h] [rbp+920h] BYREF

	v8 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < a2)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v50 = v9, a2 < *(_DWORD*)(v9 + 32)))
		v50 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v50 == v8 || v50 == -40 || !*(_QWORD*)(v50 + 56))
		return 0i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v13, L"nLootId", v14);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (a3)
	{
		v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v17 = *(_QWORD*)(v16 + 16);
		*(_QWORD*)v17 = *v15;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
		*(_QWORD*)(v16 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v17, L"nTimeLeft", v18);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	sub_14040FAE0((__int64)v62);
	sub_1404111E0((__int64)v62, v50 + 40, 1);
	v19 = (_QWORD*)sub_14040FC60((__int64)v61, (__int64)v62);
	if ((unsigned int)sub_140415BB0(*(_QWORD**)(a1 + 16), (__int64)v19))
	{
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	if (*v19)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v19 + 8i64))(*v19);
		*v19 = 0i64;
	}
	v20 = v19[96];
	if (v20)
		sub_14018B900(v20, 0);
	if (a4 && a4[1])
	{
		v21 = *(_DWORD*)(v50 + 120);
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v24 = *(_QWORD*)(v23 + 16);
		*(_QWORD*)v24 = *v22;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(v23 + 16) += 16i64;
		v25 = *(_QWORD*)(a1 + 16);
		v26 = (unsigned __int64*)sub_14018F0E0(&v52, L"bIsMaster")[1];
		if (v26)
		{
			v27 = -1i64;
			do
				++v27;
			while (*((_BYTE*)v26 + v27));
			sub_140058710(v25, v26, v27);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
			*(_QWORD*)(v25 + 16) += 16i64;
		}
		if (v53)
			sub_14018B900(v53, 0);
		v28 = *(_DWORD**)(v25 + 16);
		v28[2] = 1;
		*v28 = v21 != 0;
		*(_QWORD*)(v25 + 16) += 16i64;
		v29 = (__int64*)sub_1400580E0(v25, -3);
		sub_14005EA50(v25, v29, (int*)(*(_QWORD*)(v25 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v25 + 16) - 16i64));
		*(_QWORD*)(v25 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v30 = *(_QWORD**)(a1 + 16);
		v31 = v30[4];
		v56 = off_140B569F0;
		v58 = v30;
		v32 = *(_QWORD*)(v31 + 112);
		v59 = 1;
		if (*(_QWORD*)(v31 + 120) >= v32)
			sub_14005E2C0((__int64)v30);
		v33 = v30[2];
		v34 = sub_14005C1B0((__int64)v30, 0, 0);
		*(_DWORD*)(v33 + 8) = 5;
		*(_QWORD*)v33 = v34;
		v30[2] += 16i64;
		v35 = sub_1400578C0((__int64)v30);
		v36 = *(_QWORD*)(a1 + 16);
		v37 = v35;
		v57 = v35;
		v38 = *(_QWORD*)(v36 + 32);
		v52 = off_140B569F0;
		v55 = 1;
		v39 = *(_QWORD*)(v38 + 112);
		v54 = v36;
		if (*(_QWORD*)(v38 + 120) >= v39)
			sub_14005E2C0(v36);
		v40 = *(_QWORD*)(v36 + 16);
		v41 = sub_14005C1B0(v36, 0, 0);
		*(_DWORD*)(v40 + 8) = 5;
		*(_QWORD*)v40 = v41;
		*(_QWORD*)(v36 + 16) += 16i64;
		v42 = 0i64;
		v43 = sub_1400578C0(v36);
		LODWORD(v53) = v43;
		v51 = 0;
		if (a4[1])
		{
			v44 = 0i64;
			do
			{
				v45 = (int*)(v44 + *a4);
				v46 = sub_1403D9500(qword_140C65898, v45);
				if (v46)
				{
					if ((unsigned int)sub_140649870(v30, v46))
					{
						sub_1400FB470((__int64)&v56);
						v30 = v58;
						v58[2] -= 16i64;
					}
				}
				else
				{
					v60[1] = 0i64;
					v60[0] = 0i64;
					if ((unsigned int)sub_1403F82F0(v47, 5, (__int64*)v45, v64, 0x21u, v60, 0i64))
					{
						v51 = 1;
						sub_1400FAD30((__int64)&v52);
					}
				}
				++v42;
				v44 += 16i64;
			} while (v42 < a4[1]);
			v37 = v57;
			v36 = v54;
			v43 = v53;
		}
		sub_1400FB2A0(a1, (__int64)L"tLooters", v37);
		if (v51)
			sub_1400FB2A0(a1, (__int64)L"tLootersOutOfRange", v43);
		if (v36)
			sub_1400579E0(v36, v48, v43);
		if (v30)
			sub_1400579E0((__int64)v30, v48, v37);
	}
	if (v62[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v62[0] + 8i64))(v62[0]);
		v62[0] = 0i64;
	}
	if (v63)
		sub_14018B900(v63, 0);
	return 1i64;
}
// 1406FEE37: variable 'v12' is possibly undefined
// 1406FEE5A: variable 'v14' is possibly undefined
// 1406FEE8F: variable 'v16' is possibly undefined
// 1406FEEB2: variable 'v18' is possibly undefined
// 1406FEF8B: variable 'v23' is possibly undefined
// 1406FF18A: variable 'v47' is possibly undefined
// 1406FF202: variable 'v48' is possibly undefined
// 140B41850: using guessed type wchar_t aNtimeleft_0[10];
// 140B41868: using guessed type wchar_t aNlootid_7[8];
// 140B41A98: using guessed type wchar_t aTlootersoutofr[19];
// 140B41AC0: using guessed type wchar_t aTlooters[9];
// 140B41AD8: using guessed type wchar_t aBismaster[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406FED70: using guessed type char var_A18[1224];
// 1406FED70: using guessed type __int16 var_90[40];

