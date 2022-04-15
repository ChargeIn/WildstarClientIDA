//----- (00000001405212E0) ----------------------------------------------------
void __fastcall sub_1405212E0(__int64 a1)
{
	__int64 v1; // r13
	__int64 v2; // rax
	__int64* v3; // rdi
	int v4; // ebx
	int v5; // r14d
	int i; // ebx
	__int64 v7; // rax
	int v8; // r12d
	__int64 v9; // rbx
	int* v10; // rcx
	int* v11; // r9
	int* v12; // rdx
	__int64 v13; // rax
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm0
	__int128 v19; // xmm1
	__int128 v20; // xmm0
	__int128 v21; // xmm1
	__int128 v22; // xmm1
	__int64 v23; // rax
	__int128 v24; // xmm0
	__int128 v25; // xmm1
	__int128 v26; // xmm0
	__int128 v27; // xmm1
	__int128 v28; // xmm0
	unsigned int v29; // esi
	int* v30; // rax
	int* v31; // rbx
	int v32; // ebx
	int* v33; // rdx
	int* v34; // rcx
	__int64 v35; // rax
	__int128 v36; // xmm0
	__int64 v37; // rcx
	int v38; // r11d
	int v39; // edx
	int v40; // ecx
	int v41; // esi
	int v42; // eax
	int v43; // eax
	int v44; // eax
	__int64 v45; // rax
	__int64 v46; // rax
	__int64 v47; // rbx
	int v48; // eax
	int v49; // edx
	__int64 v50; // rbx
	__int64 v51; // rax
	int v52; // [rsp+30h] [rbp-D0h]
	int v53; // [rsp+34h] [rbp-CCh]
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-C8h] BYREF
	__int128 v55; // [rsp+40h] [rbp-C0h]
	__int64 v56; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v57; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v58)(); // [rsp+60h] [rbp-A0h] BYREF
	__int128 v59; // [rsp+68h] [rbp-98h]
	__int64 v60; // [rsp+80h] [rbp-80h] BYREF
	int v61[39]; // [rsp+90h] [rbp-70h] BYREF
	int v62; // [rsp+12Ch] [rbp+2Ch]
	int v63; // [rsp+130h] [rbp+30h]
	unsigned int v64; // [rsp+134h] [rbp+34h]
	int v65; // [rsp+148h] [rbp+48h]
	int v66; // [rsp+14Ch] [rbp+4Ch]
	unsigned int v67; // [rsp+150h] [rbp+50h]
	int v68; // [rsp+164h] [rbp+64h]
	int v69; // [rsp+168h] [rbp+68h]
	unsigned int v70; // [rsp+16Ch] [rbp+6Ch]
	int v71[17]; // [rsp+210h] [rbp+110h] BYREF
	char v72[88]; // [rsp+254h] [rbp+154h] BYREF
	int v73; // [rsp+2ACh] [rbp+1ACh]
	int v74; // [rsp+2B0h] [rbp+1B0h]
	unsigned int v75; // [rsp+2B4h] [rbp+1B4h]
	int v76; // [rsp+2B8h] [rbp+1B8h]
	int v77; // [rsp+2BCh] [rbp+1BCh]
	int v78; // [rsp+2C0h] [rbp+1C0h]
	int v79; // [rsp+2C8h] [rbp+1C8h]
	int v80; // [rsp+2CCh] [rbp+1CCh]
	unsigned int v81; // [rsp+2D0h] [rbp+1D0h]
	int v82; // [rsp+2D4h] [rbp+1D4h]
	int v83; // [rsp+2D8h] [rbp+1D8h]
	int v84; // [rsp+2DCh] [rbp+1DCh]
	int v85; // [rsp+2E4h] [rbp+1E4h]
	int v86; // [rsp+2E8h] [rbp+1E8h]
	unsigned int v87; // [rsp+2ECh] [rbp+1ECh]
	int v88; // [rsp+2F0h] [rbp+1F0h]
	int v89; // [rsp+2F4h] [rbp+1F4h]
	int v90; // [rsp+2F8h] [rbp+1F8h]

	v1 = a1;
	v57 = a1;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2 && *(_DWORD*)(v2 + 684))
		return;
	v3 = *(__int64**)(qword_140C65898 + 30088);
	if (!v3)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v55 = 0i64;
		*((_QWORD*)&v55 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v58 = TlsValue;
		v56 = 0x141E66530i64;
		v59 = v55;
		v4 = sub_1401971E0(&dword_140C8AD70, 13, &v56, &v58);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v55 + 1));
		if (v4)
			DebugBreak();
		return;
	}
	(*(void(__fastcall**)(__int64*))(*v3 + 24))(v3);
	v5 = 0;
	for (i = 0; i < (*(int(__fastcall**)(__int64*))(*v3 + 312))(v3); ++i)
	{
		v7 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*v3 + 328))(v3, (unsigned int)i, 0i64);
		if (*(_DWORD*)(v7 + 132) == 1)
			(*(void(__fastcall**)(__int64*, __int64, __int64))(*v3 + 80))(v3, 1i64, v7);
	}
	v8 = 0;
	v53 = 0;
	v52 = 0;
	if ((*(int(__fastcall**)(__int64*))(*v3 + 320))(v3) <= 0)
		goto LABEL_75;
	v9 = 0i64;
	v56 = 0i64;
	do
	{
		v10 = v61;
		v11 = v61;
		v12 = (int*)(v9 + *(_QWORD*)(v1 + 16));
		if ((((unsigned __int8)v61 | (unsigned __int8)(v9 + *(_BYTE*)(v1 + 16))) & 0xF) != 0)
		{
			sub_1407DB590(v61, v12, 0x17Cui64);
		}
		else
		{
			v13 = 2i64;
			do
			{
				v14 = *(_OWORD*)v12;
				v15 = *((_OWORD*)v12 + 1);
				v10 += 32;
				v12 += 32;
				*((_OWORD*)v10 - 8) = v14;
				v16 = *((_OWORD*)v12 - 6);
				*((_OWORD*)v10 - 7) = v15;
				v17 = *((_OWORD*)v12 - 5);
				*((_OWORD*)v10 - 6) = v16;
				v18 = *((_OWORD*)v12 - 4);
				*((_OWORD*)v10 - 5) = v17;
				v19 = *((_OWORD*)v12 - 3);
				*((_OWORD*)v10 - 4) = v18;
				v20 = *((_OWORD*)v12 - 2);
				*((_OWORD*)v10 - 3) = v19;
				v21 = *((_OWORD*)v12 - 1);
				*((_OWORD*)v10 - 2) = v20;
				*((_OWORD*)v10 - 1) = v21;
				--v13;
			} while (v13);
			v22 = *((_OWORD*)v12 + 1);
			v23 = *((_QWORD*)v12 + 14);
			*(_OWORD*)v10 = *(_OWORD*)v12;
			v24 = *((_OWORD*)v12 + 2);
			*((_OWORD*)v10 + 1) = v22;
			v25 = *((_OWORD*)v12 + 3);
			*((_OWORD*)v10 + 2) = v24;
			v26 = *((_OWORD*)v12 + 4);
			*((_OWORD*)v10 + 3) = v25;
			v27 = *((_OWORD*)v12 + 5);
			*((_OWORD*)v10 + 4) = v26;
			v28 = *((_OWORD*)v12 + 6);
			*((_OWORD*)v10 + 5) = v27;
			*((_OWORD*)v10 + 6) = v28;
			*((_QWORD*)v10 + 14) = v23;
			v10[30] = v12[30];
		}
		v29 = v61[0];
		v30 = (int*)(*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, int*))(*v3 + 336))(
			v3,
			(unsigned int)v61[0],
			0i64,
			v11);
		v31 = v30;
		if (!v30)
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v55 = 0i64;
			*((_QWORD*)&v55 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v58 = TlsValue;
			v60 = 0x141E666F0i64;
			v59 = v55;
			v32 = sub_1401971E0(&dword_140C8AD74, 13, &v60, v29, &v58);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v55 + 1));
			if (v32)
				DebugBreak();
			goto LABEL_66;
		}
		v33 = v30;
		v34 = v71;
		if ((((unsigned __int8)v71 | (unsigned __int8)v30) & 0xF) != 0)
		{
			sub_1407DB590(v71, v30, 0x17Cui64);
		}
		else
		{
			v35 = 2i64;
			do
			{
				v36 = *(_OWORD*)v33;
				v34 += 32;
				v33 += 32;
				*((_OWORD*)v34 - 8) = v36;
				*((_OWORD*)v34 - 7) = *((_OWORD*)v33 - 7);
				*((_OWORD*)v34 - 6) = *((_OWORD*)v33 - 6);
				*((_OWORD*)v34 - 5) = *((_OWORD*)v33 - 5);
				*((_OWORD*)v34 - 4) = *((_OWORD*)v33 - 4);
				*((_OWORD*)v34 - 3) = *((_OWORD*)v33 - 3);
				*((_OWORD*)v34 - 2) = *((_OWORD*)v33 - 2);
				*((_OWORD*)v34 - 1) = *((_OWORD*)v33 - 1);
				--v35;
			} while (v35);
			*(_OWORD*)v34 = *(_OWORD*)v33;
			*((_OWORD*)v34 + 1) = *((_OWORD*)v33 + 1);
			*((_OWORD*)v34 + 2) = *((_OWORD*)v33 + 2);
			*((_OWORD*)v34 + 3) = *((_OWORD*)v33 + 3);
			*((_OWORD*)v34 + 4) = *((_OWORD*)v33 + 4);
			*((_OWORD*)v34 + 5) = *((_OWORD*)v33 + 5);
			*((_OWORD*)v34 + 6) = *((_OWORD*)v33 + 6);
			*((_QWORD*)v34 + 14) = *((_QWORD*)v33 + 14);
			v34[30] = v33[30];
		}
		if (v61[33] == 1 || v29 == 33)
		{
			v39 = v65;
			v38 = v62;
		}
		else
		{
			v37 = 0x160040030000000i64;
			if (v64 <= 0x38 && _bittest64(&v37, (int)v64) || v64 == 285 || v64 == 312 || v63 == 4 && v64 == 62)
			{
				v38 = 0;
				v62 = 0;
			}
			else
			{
				v38 = v62;
			}
			if (v67 <= 0x38 && _bittest64(&v37, (int)v67) || v67 == 285 || v67 == 312 || v66 == 4 && v67 == 62)
			{
				v39 = 0;
				v65 = 0;
			}
			else
			{
				v39 = v65;
			}
			if (v70 <= 0x38 && _bittest64(&v37, (int)v70) || v70 == 285 || v70 == 312 || v69 == 4 && v70 == 62)
			{
				v40 = 0;
				v68 = 0;
				goto LABEL_52;
			}
		}
		v40 = v68;
	LABEL_52:
		if (v38 != v31[39]
			|| v64 != v31[41]
			|| v63 != v31[40]
			|| v39 != v31[46]
			|| v67 != v31[48]
			|| v66 != v31[47]
			|| v40 != v31[53]
			|| v70 != v31[55]
			|| (v41 = 0, v69 != v31[54]))
		{
			v41 = 1;
		}
		v73 = v38;
		v42 = v31[42];
		v77 &= ~0x1000u;
		v78 &= ~0x1000u;
		v76 = v42;
		v75 = v64;
		v79 = v39;
		v74 = v63;
		v43 = v31[49];
		v83 &= ~0x1000u;
		v84 |= 0x1000u;
		v81 = v67;
		v82 = v43;
		v85 = v40;
		v80 = v66;
		v44 = v31[56];
		v89 |= 0x1000u;
		v90 |= 0x1000u;
		v88 = v44;
		v45 = *v3;
		v87 = v70;
		v86 = v69;
		(*(void(__fastcall**)(__int64*, __int64, int*))(v45 + 80))(v3, 1i64, v71);
		if (v41)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "KeyBindingKeyChanged", byte_1409EC1D4, v72);
			v8 = 1;
			v53 = 1;
		}
		else
		{
			v8 = v53;
		}
		v1 = v57;
	LABEL_66:
		v46 = *v3;
		v9 = v56 + 380;
		++v52;
		v56 += 380i64;
	} while (v52 < (*(int(__fastcall**)(__int64*))(v46 + 320))(v3));
	if (v8)
	{
		v47 = qword_140C65898;
		v48 = *(_DWORD*)(qword_140C65898 + 30096);
		if (v48 == 4)
		{
			v49 = 0;
			goto LABEL_72;
		}
		if (v48 == 3)
		{
			v49 = 1;
		LABEL_72:
			sub_1404DB030(qword_140C65898, v49);
			v47 = qword_140C65898;
		}
		v50 = *(_QWORD*)(v47 + 30088);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v50 + 24i64))(v50);
		if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v50 + 312i64))(v50) > 0)
		{
			do
			{
				v51 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v50 + 328i64))(
					v50,
					(unsigned int)v5,
					0i64);
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v50 + 80i64))(v50, 1i64, v51);
				++v5;
			} while (v5 < (*(int(__fastcall**)(__int64))(*(_QWORD*)v50 + 312i64))(v50));
		}
	}
LABEL_75:
	sub_1400D4040(*(_QWORD*)(v1 + 8), "KeyBindingSaved", *(char**)(v1 + 8), &byte_140B7B700);
}
// 140521584: variable 'v11' is possibly undefined
// 1409EC1D4: using guessed type _BYTE byte_1409EC1D4[24];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AD70: using guessed type _DWORD dword_140C8AD70;
// 140C8AD74: using guessed type _DWORD dword_140C8AD74;
// 1405212E0: using guessed type int var_1B0[17];
// 1405212E0: using guessed type char var_16C[88];

