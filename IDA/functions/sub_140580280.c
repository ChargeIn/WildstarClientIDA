//----- (0000000140580280) ----------------------------------------------------
void __fastcall sub_140580280(__int64 a1, __int64 a2, unsigned int* a3)
{
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	int* v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	unsigned __int16* v23; // r11
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	int v31; // r11d
	_QWORD* v32; // rcx
	unsigned __int64 v33; // rdx
	__int64 v34; // rax
	int v35; // r14d
	_QWORD* v36; // rax
	__int64 v37; // r10
	__int64 v38; // rdx
	__int64 v39; // rbx
	unsigned __int64 v40; // rsi
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	_DWORD* v43; // rcx
	__int64* v44; // rax
	__int64 v45; // r14
	__int64 v46; // rcx
	unsigned __int64 v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	unsigned int* v50; // rbx
	__int64 v51; // r14
	int v52; // r14d
	__int64 v53; // r8
	__int64 v54; // rax
	__int64 v55; // rcx
	unsigned int v56; // eax
	_QWORD* v57; // rax
	__int64 v58; // r10
	__int64 v59; // rdx
	__int64 v60; // rbx
	unsigned __int64* v61; // rdx
	__int64 v62; // rax
	double v63; // xmm0_8
	__int64* v64; // rax
	__int64 v65; // rdx
	_QWORD* v66; // rbx
	__int64 v67; // rax
	__int64(__fastcall * *v68)(); // [rsp+28h] [rbp-E0h] BYREF
	__int64 v69; // [rsp+30h] [rbp-D8h]
	__int64 v70; // [rsp+38h] [rbp-D0h]
	int v71; // [rsp+40h] [rbp-C8h]
	__int64 v72; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v73; // [rsp+50h] [rbp-B8h]
	_QWORD v74[24]; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v75; // [rsp+128h] [rbp+20h]
	int* v76; // [rsp+138h] [rbp+30h]
	__int64 v77; // [rsp+188h] [rbp+80h] BYREF

	if (a3 && *(_DWORD*)(a1 + 16) == 1)
	{
		v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v8 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v8 = *v6;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(v7 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v8, L"idPerk", v9);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		sub_14034BDD0(v10, a3[1]);
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v13 = *(_QWORD*)(v12 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v12 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v13, L"strTitle", v14);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		sub_1400B7090((__int64)v74, a3[2]);
		v74[0] = off_140B69230;
		v75 = 0i64;
		v76 = 0i64;
		v15 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v75 = v15;
		*((_QWORD*)&v75 + 1) = v15;
		v76 = v15 + 4;
		if (v15)
			*(_WORD*)v15 = 0;
		sub_1400B7660(v74);
		v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v18 = *(_QWORD*)(v17 + 16);
		*(_QWORD*)v18 = *v16;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
		*(_QWORD*)(v17 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strDescription", v19);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v22 = *(_QWORD*)(v21 + 16);
		*(_QWORD*)v22 = *v20;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(v21 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v22, L"strSprite", v23);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v26 = *(_QWORD*)(v25 + 16);
		*(_QWORD*)v26 = *v24;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v25 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v26, L"nPurchaseInfluenceCost", v27);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v30 = *(_QWORD*)(v29 + 16);
		*(_QWORD*)v30 = *v28;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
		*(_QWORD*)(v29 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v30, L"nActivateInfluenceCost", v31);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		if (a3[10])
		{
			v32 = *(_QWORD**)(a2 + 16);
			LODWORD(v77) = a3[10];
			if ((unsigned int)sub_1403D3470(v32, (int*)&v77))
			{
				sub_1400FB540(a2);
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			}
		}
		if (a1 == -528 || (v33 = (unsigned __int64)*a3 >> 6, v33 >= 2))
		{
			v35 = 0;
		}
		else
		{
			v34 = *(_QWORD*)(a1 + 528 + 8 * v33);
			v35 = _bittest64(&v34, *a3 & 0x3F);
		}
		v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v38 = *(_QWORD*)(v37 + 16);
		*(_QWORD*)v38 = *v36;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v36 + 2);
		*(_QWORD*)(v37 + 16) += 16i64;
		v39 = *(_QWORD*)(a2 + 16);
		v40 = -1i64;
		v41 = (unsigned __int64*)sub_14018F0E0(&v68, L"bIsUnlocked")[1];
		if (v41)
		{
			v42 = -1i64;
			do
				++v42;
			while (*((_BYTE*)v41 + v42));
			sub_140058710(v39, v41, v42);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v39 + 16) + 8i64) = 0;
			*(_QWORD*)(v39 + 16) += 16i64;
		}
		if (v69)
			sub_14018B900(v69, 0);
		v43 = *(_DWORD**)(v39 + 16);
		v43[2] = 1;
		*v43 = v35 != 0;
		*(_QWORD*)(v39 + 16) += 16i64;
		v44 = (__int64*)sub_1400580E0(v39, -3);
		sub_14005EA50(v39, v44, (int*)(*(_QWORD*)(v39 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v39 + 16) - 16i64));
		*(_QWORD*)(v39 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v45 = *(_QWORD*)(a2 + 16);
		v46 = *(_QWORD*)(v45 + 32);
		v68 = off_140B569F0;
		v70 = v45;
		v47 = *(_QWORD*)(v46 + 112);
		v71 = 1;
		if (*(_QWORD*)(v46 + 120) >= v47)
			sub_14005E2C0(v45);
		v48 = *(_QWORD*)(v45 + 16);
		v49 = sub_14005C1B0(v45, 0, 0);
		*(_DWORD*)(v48 + 8) = 5;
		*(_QWORD*)v48 = v49;
		*(_QWORD*)(v45 + 16) += 16i64;
		LODWORD(v69) = sub_1400578C0(v45);
		v50 = a3 + 11;
		v51 = 3i64;
		do
		{
			sub_1400FA9E0((__int64)&v68);
			++v50;
			--v51;
		} while (v51);
		v52 = v69;
		sub_1400FB2A0(a2, (__int64)L"arRequiredIds", v69);
		v53 = *(_QWORD*)(a1 + 584);
		v54 = *(_QWORD*)(v53 + 8);
		v55 = v53;
		while (v54)
		{
			if (*(_DWORD*)(v54 + 32) < *a3)
			{
				v54 = *(_QWORD*)(v54 + 24);
			}
			else
			{
				v55 = v54;
				v54 = *(_QWORD*)(v54 + 16);
			}
		}
		if (v55 == v53 || (v56 = *(_DWORD*)(v55 + 32), v77 = v55, *a3 < v56))
			v77 = v53;
		if (v77 != v53 && (int)sub_1401E83A0((float*)&v77, *(_QWORD*)(v77 + 40)) >= 0)
		{
			v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v59 = *(_QWORD*)(v58 + 16);
			*(_QWORD*)v59 = *v57;
			*(_DWORD*)(v59 + 8) = *((_DWORD*)v57 + 2);
			*(_QWORD*)(v58 + 16) += 16i64;
			v60 = *(_QWORD*)(a2 + 16);
			v61 = (unsigned __int64*)sub_14018F0E0(&v72, L"fDurationInDays")[1];
			if (v61)
			{
				do
					++v40;
				while (*((_BYTE*)v61 + v40));
				sub_140058710(v60, v61, v40);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v60 + 16) + 8i64) = 0;
				*(_QWORD*)(v60 + 16) += 16i64;
			}
			if (v73)
				sub_14018B900(v73, 0);
			v62 = *(_QWORD*)(v60 + 16);
			v63 = *(float*)&v77;
			*(_DWORD*)(v62 + 8) = 3;
			*(double*)v62 = v63;
			*(_QWORD*)(v60 + 16) += 16i64;
			v64 = (__int64*)sub_1400580E0(v60, -3);
			sub_14005EA50(v60, v64, (int*)(*(_QWORD*)(v60 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v60 + 16) - 16i64));
			*(_QWORD*)(v60 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v65 = a3[14];
		if ((_DWORD)v65)
		{
			v66 = *(_QWORD**)(a2 + 16);
			v67 = sub_140643E20(qword_140C65C28, v65);
			if ((unsigned int)sub_1404332A0(v66, v67))
			{
				sub_1400FB540(a2);
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			}
		}
		if (v70)
			sub_1400579E0(v70, v65, v52);
		if ((_QWORD)v75)
			sub_14018B900(v75, 0);
		sub_1400B7390(v74);
	}
}
// 1405802DA: variable 'v7' is possibly undefined
// 1405802FD: variable 'v9' is possibly undefined
// 14058030F: variable 'v10' is possibly undefined
// 14058032E: variable 'v12' is possibly undefined
// 140580351: variable 'v14' is possibly undefined
// 1405803D0: variable 'v17' is possibly undefined
// 1405803F3: variable 'v19' is possibly undefined
// 14058043E: variable 'v21' is possibly undefined
// 140580461: variable 'v23' is possibly undefined
// 14058048A: variable 'v25' is possibly undefined
// 1405804AD: variable 'v27' is possibly undefined
// 1405804D6: variable 'v29' is possibly undefined
// 1405804F9: variable 'v31' is possibly undefined
// 14058058C: variable 'v37' is possibly undefined
// 140580766: variable 'v58' is possibly undefined
// 14058088A: variable 'v65' is possibly undefined
// 140B1F038: using guessed type wchar_t aStrtitle_1[9];
// 140B1F050: using guessed type wchar_t aIdperk[7];
// 140B1F060: using guessed type wchar_t aStrsprite_2[10];
// 140B1F078: using guessed type wchar_t aStrdescription_10[15];
// 140B1F140: using guessed type wchar_t aFdurationinday[16];
// 140B1F160: using guessed type wchar_t aArrequiredids[14];
// 140B1F1A8: using guessed type wchar_t aNactivateinflu[23];
// 140B1F1D8: using guessed type wchar_t aNpurchaseinflu[23];
// 140B1F208: using guessed type wchar_t aBisunlocked[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65C28: using guessed type __int64 qword_140C65C28;

