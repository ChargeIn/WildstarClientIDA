#include "../winhttp.h"

//----- (000000014065F740) ----------------------------------------------------
__int64 __fastcall sub_14065F740(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // r12
	__int64 v10; // r15
	unsigned __int64 v11; // r14
	__int64 v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // eax
	void(__fastcall * *v18)(_QWORD); // r8
	int v19; // ebx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	int v22; // r10d
	_QWORD* v23; // rax
	__int64 v24; // r11
	__int64 v25; // rdx
	int v26; // r10d
	_QWORD* v27; // rax
	__int64 v28; // r11
	__int64 v29; // rdx
	int v30; // r10d
	_QWORD* v31; // rax
	__int64 v32; // r11
	__int64 v33; // rdx
	int v34; // r10d
	_QWORD* v35; // rax
	__int64 v36; // r10
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	_DWORD* v39; // rax
	__int64* v40; // rax
	__int64 v41; // rcx
	__int64 v42; // r8
	_QWORD* v43; // rax
	__int64 v44; // rdx
	unsigned __int16* v45; // r10
	int* v46; // rax
	int* v47; // rax
	_QWORD* v48; // rax
	_QWORD* v49; // rax
	__int64 v50; // rdx
	unsigned __int16* v51; // r10
	__int64 v52; // rdx
	_QWORD* v53; // rax
	__int64 v54; // rdx
	_QWORD* v55; // rax
	__int64 v56; // r8
	__int64 v58; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v59; // [rsp+28h] [rbp-D8h]
	__int64 v60; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v61; // [rsp+38h] [rbp-C8h]
	__int64 v62; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v63)(); // [rsp+50h] [rbp-B0h] BYREF
	int v64; // [rsp+58h] [rbp-A8h]
	_QWORD* v65; // [rsp+60h] [rbp-A0h]
	int v66; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v67)(); // [rsp+70h] [rbp-90h] BYREF
	int v68; // [rsp+78h] [rbp-88h]
	_QWORD* v69; // [rsp+80h] [rbp-80h]
	int v70; // [rsp+88h] [rbp-78h]
	__int64 v71[24]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v72; // [rsp+150h] [rbp+50h]
	int* v73; // [rsp+160h] [rbp+60h]
	__int64 v74[6]; // [rsp+170h] [rbp+70h] BYREF

	v1 = (_QWORD*)a1;
	v65 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v63 = off_140B569F0;
	v66 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v64 = v5;
	v6 = (int*)sub_1406622C0((__int64)v1, 1);
	if (v6 && (v7 = sub_1403D90D0(qword_140C65898, *v6)) != 0 && *(_DWORD*)(v7 + 14040))
	{
		v8 = qword_140C65898;
		v59 = 0i64;
		v58 = 0i64;
		sub_1403D6710(qword_140C65898 + 160, &v58);
		sub_1403D6710(v8 + 184, &v58);
		sub_1403D6710(v8 + 280, &v58);
		sub_1403D6710(v8 + 304, &v58);
		v9 = v59;
		v10 = v58;
		v11 = 0i64;
		if (v59)
		{
			do
			{
				v12 = *(_QWORD*)(v10 + 8 * v11);
				if (v12 && (unsigned int)sub_140569F10(*(_QWORD*)(v10 + 8 * v11)))
				{
					v13 = v1[4];
					v69 = v1;
					v67 = off_140B569F0;
					v14 = *(_QWORD*)(v13 + 112);
					v70 = 1;
					if (*(_QWORD*)(v13 + 120) >= v14)
						sub_14005E2C0((__int64)v1);
					v15 = v1[2];
					v16 = sub_14005C1B0((__int64)v1, 0, 0);
					*(_DWORD*)(v15 + 8) = 5;
					*(_QWORD*)v15 = v16;
					v1[2] += 16i64;
					v17 = sub_1400578C0((__int64)v1);
					v18 = *(void(__fastcall***)(_QWORD))v12;
					v19 = v17;
					v68 = v17;
					((void(__fastcall*)(__int64, __int64*))v18[4])(v12, &v58);
					v20 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					v21 = v1[2];
					*(_QWORD*)v21 = *v20;
					*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v21, L"idLocation", v22);
					v1[2] -= 16i64;
					v23 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					*(_QWORD*)v24 = *v23;
					*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v25, L"idItem", v26);
					v1[2] -= 16i64;
					v27 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					*(_QWORD*)v28 = *v27;
					*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v29, L"nStackSize", v30);
					v1[2] -= 16i64;
					v31 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v33, L"nStockCount", v34);
					v1[2] -= 16i64;
					v35 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					*(_QWORD*)v36 = *v35;
					*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
					v1[2] += 16i64;
					v37 = (unsigned __int64*)sub_14018F0E0(&v60, L"bMeetsPreq")[1];
					if (v37)
					{
						v38 = -1i64;
						do
							++v38;
						while (*((_BYTE*)v37 + v38));
						sub_140058710((__int64)v1, v37, v38);
					}
					else
					{
						*(_DWORD*)(v1[2] + 8i64) = 0;
						v1[2] += 16i64;
					}
					if (v61)
						sub_14018B900(v61, 0);
					v39 = (_DWORD*)v1[2];
					*v39 = 1;
					v39[2] = 1;
					v1[2] += 16i64;
					v40 = (__int64*)sub_1400580E0((__int64)v1, -3);
					sub_14005EA50((__int64)v1, v40, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
					v1[2] -= 48i64;
					v42 = *(_QWORD*)(v12 + 72);
					if (!v42)
						v42 = *(_QWORD*)(v12 + 64) + 8i64;
					v74[0] = sub_1403B54A0(v41, *(_QWORD*)(v12 + 64), v42, *(float*)(v12 + 132));
					v61 = 1i64;
					v74[1] = 1i64;
					v74[2] = 0i64;
					v74[4] = 1i64;
					v62 = 0i64;
					v74[3] = 0i64;
					v74[5] = 0i64;
					sub_140659EB0((__int64)&v67, (__int64)L"tPriceInfo", v74);
					if ((unsigned int)sub_140415D60(v1, (void(__fastcall***)(_QWORD))v12))
					{
						sub_1400FB540((__int64)&v67);
						v1[2] -= 16i64;
					}
					v43 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					v44 = v1[2];
					*(_QWORD*)v44 = *v43;
					*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v44, L"strIcon", v45);
					v1[2] -= 16i64;
					sub_1400B7210((__int64)v71, (int*)L"$1n");
					v71[0] = (__int64)off_140B69230;
					v73 = 0i64;
					v72 = 0i64;
					v46 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v72 = v46;
					*((_QWORD*)&v72 + 1) = v46;
					v73 = v46 + 4;
					if (v46)
						*(_WORD*)v46 = 0;
					v47 = sub_14018B280(96i64, 0);
					if (v47)
						v48 = (_QWORD*)sub_1404DDAF0((__int64)v47, *(_DWORD*)(*(_QWORD*)(v12 + 64) + 476i64));
					else
						v48 = 0i64;
					sub_1400B7480((__int64)v71, v48);
					sub_1400B7660(v71);
					v49 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v19);
					v50 = v1[2];
					*(_QWORD*)v50 = *v49;
					*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v50, L"strName", v51);
					v1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v63);
					if ((_QWORD)v72)
						sub_14018B900(v72, 0);
					sub_1400B7390(v71);
					sub_1400579E0((__int64)v1, v52, v19);
				}
				++v11;
			} while (v11 < v9);
			v1 = v65;
			v5 = v64;
		}
		v53 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v54 = v1[2];
		*(_QWORD*)v54 = *v53;
		*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
		v1[2] += 16i64;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	}
	else
	{
		v55 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v56 = v1[2];
		*(_QWORD*)v56 = *v55;
		v54 = *((unsigned int*)v55 + 2);
		*(_DWORD*)(v56 + 8) = v54;
		v1[2] += 16i64;
	}
	sub_1400579E0((__int64)v1, v54, v5);
	return 1i64;
}
// 14065F96A: variable 'v22' is possibly undefined
// 14065F99E: variable 'v24' is possibly undefined
// 14065F9B0: variable 'v25' is possibly undefined
// 14065F9B0: variable 'v26' is possibly undefined
// 14065F9EC: variable 'v28' is possibly undefined
// 14065F9FE: variable 'v29' is possibly undefined
// 14065F9FE: variable 'v30' is possibly undefined
// 14065FA3A: variable 'v32' is possibly undefined
// 14065FA4C: variable 'v33' is possibly undefined
// 14065FA4C: variable 'v34' is possibly undefined
// 14065FA76: variable 'v36' is possibly undefined
// 14065FB2E: variable 'v41' is possibly undefined
// 14065FBFC: variable 'v45' is possibly undefined
// 14065FCC3: variable 'v51' is possibly undefined
// 14065FCF8: variable 'v52' is possibly undefined
// 14065FD91: variable 'v54' is possibly undefined
// 140B2D8D0: using guessed type wchar_t aIdlocation_0[11];
// 140B2DAF8: using guessed type wchar_t aStrname_55[8];
// 140B2DB08: using guessed type wchar_t aStricon_10[8];
// 140B2DB18: using guessed type wchar_t a1n_12[4];
// 140B2DB20: using guessed type wchar_t aTpriceinfo_2[11];
// 140B2DB50: using guessed type wchar_t aNstockcount_1[12];
// 140B2DB68: using guessed type wchar_t aBmeetspreq_1[11];
// 140B2DB80: using guessed type wchar_t aIditem_1[7];
// 140B2DB90: using guessed type wchar_t aNstacksize_1[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;

