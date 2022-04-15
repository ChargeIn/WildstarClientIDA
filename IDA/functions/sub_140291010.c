//----- (0000000140291010) ----------------------------------------------------
__int64 __fastcall sub_140291010(
	__int64* a1,
	unsigned int a2,
	int a3,
	int* a4,
	unsigned int a5,
	unsigned int a6,
	int* a7)
{
	__int64 v7; // rax
	__int64 v10; // rcx
	unsigned int v12; // edi
	__int64 v13; // rbx
	int v14; // eax
	int v15; // r14d
	int v16; // r13d
	int v17; // r15d
	int v18; // r12d
	int v19; // edx
	int v20; // r14d
	int v21; // r9d
	int v22; // r8d
	int v23; // r11d
	int v24; // r10d
	__int64 v25; // rcx
	int v26; // r14d
	int v27; // r12d
	_DWORD* v28; // rbx
	int v29; // r15d
	__int64 v30; // rcx
	__int64 v31; // r13
	unsigned int v32; // eax
	unsigned int v33; // edx
	int v34; // eax
	int v35; // ebx
	__int64 v36; // rcx
	int v37; // eax
	__int64 v38; // rcx
	int v39; // eax
	int v40; // ebx
	__int64 v41; // rdx
	int v42; // [rsp+20h] [rbp-E0h]
	int v43; // [rsp+20h] [rbp-E0h]
	__int64 v45; // [rsp+68h] [rbp-98h] BYREF
	__int64 v46; // [rsp+70h] [rbp-90h] BYREF
	int v47; // [rsp+78h] [rbp-88h]
	int v48; // [rsp+7Ch] [rbp-84h]
	int v49; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v50)(); // [rsp+88h] [rbp-78h] BYREF
	const wchar_t* v51; // [rsp+90h] [rbp-70h]
	LPVOID lpTlsValue; // [rsp+98h] [rbp-68h]
	__int64 v53; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *TlsValue)(); // [rsp+A8h] [rbp-58h] BYREF
	__int64 v55; // [rsp+B0h] [rbp-50h]
	LPVOID Value; // [rsp+B8h] [rbp-48h]
	unsigned int v57[4]; // [rsp+C0h] [rbp-40h] BYREF
	unsigned int v58[4]; // [rsp+D0h] [rbp-30h] BYREF
	unsigned int v59[4]; // [rsp+E0h] [rbp-20h] BYREF
	unsigned int v60[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v61; // [rsp+100h] [rbp+0h]
	int v62; // [rsp+108h] [rbp+8h]
	__int64 v63; // [rsp+10Ch] [rbp+Ch]
	int v64; // [rsp+114h] [rbp+14h]
	__int64 v65; // [rsp+118h] [rbp+18h] BYREF
	int v66; // [rsp+120h] [rbp+20h]
	int v67; // [rsp+124h] [rbp+24h]
	int v68[4]; // [rsp+128h] [rbp+28h] BYREF
	__int64 v69; // [rsp+138h] [rbp+38h] BYREF
	int v70; // [rsp+140h] [rbp+40h]
	int v71; // [rsp+144h] [rbp+44h]
	int v72[4]; // [rsp+148h] [rbp+48h] BYREF
	unsigned int v73; // [rsp+158h] [rbp+58h] BYREF
	unsigned int v74; // [rsp+15Ch] [rbp+5Ch]
	int* v75; // [rsp+160h] [rbp+60h]
	unsigned int v76; // [rsp+168h] [rbp+68h] BYREF
	unsigned int v77; // [rsp+16Ch] [rbp+6Ch]
	int* v78; // [rsp+170h] [rbp+70h]
	__int64 v79[4]; // [rsp+180h] [rbp+80h] BYREF
	__int64 v80[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	int v81[4]; // [rsp+1C0h] [rbp+C0h] BYREF
	char v82[12]; // [rsp+1D0h] [rbp+D0h] BYREF
	int v83; // [rsp+1DCh] [rbp+DCh]
	__int64 v84; // [rsp+1E0h] [rbp+E0h]
	int v85; // [rsp+1E8h] [rbp+E8h]
	unsigned __int64 v86; // [rsp+1F0h] [rbp+F0h] BYREF
	int v87; // [rsp+1F8h] [rbp+F8h]
	int v88; // [rsp+1FCh] [rbp+FCh]
	int v89; // [rsp+200h] [rbp+100h]
	int v90; // [rsp+204h] [rbp+104h]
	int v91[6]; // [rsp+208h] [rbp+108h] BYREF
	char v92[24]; // [rsp+220h] [rbp+120h] BYREF

	v7 = *a1;
	v46 = (__int64)a4;
	v81[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v7 + 32))(a1, v81);
	v10 = a1[13];
	if (!v10)
		return 2147942487i64;
	v12 = 0;
	if (a1[9])
	{
		v55 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = a1[9];
		v79[0] = (__int64)TlsValue;
		v79[1] = v55;
		v50 = &off_140B5E648;
		v79[2] = (__int64)Value;
		v51 = L"FileName";
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v50);
		v53 = v13;
		v80[1] = (__int64)v51;
		v50 = &off_140B5E638;
		v80[3] = v13;
		v80[0] = (__int64)&off_140B5E638;
		v46 = 0x141DE4700i64;
		v80[2] = (__int64)lpTlsValue;
		LODWORD(v13) = sub_1401971E0(&dword_140C8A400, 14, &v46, v80, v79);
		v50 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v13)
			DebugBreak();
		return 2147500037i64;
	}
	v45 = 0i64;
	v14 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 144i64))(v10, a2, &v45);
	if (v14 < 0)
		goto LABEL_35;
	v14 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v45 + 64i64))(v45, v82);
	if (v14 < 0)
		goto LABEL_35;
	v15 = v84;
	v16 = qword_140C77780;
	v17 = dword_140C77788;
	v18 = v85;
	v48 = HIDWORD(qword_140C77780);
	v61 = qword_140C77780;
	v62 = dword_140C77788;
	v49 = v84;
	v63 = v84;
	v47 = HIDWORD(v84);
	v64 = v85;
	if (!a7 || *(_QWORD*)a7 == v61 && a7[2] == dword_140C77788 && *(_QWORD*)(a7 + 3) == v63 && a7[5] == v85)
	{
		if (!v83)
			goto LABEL_48;
		if ((*(int(__fastcall**)(__int64, unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v45 + 72i64))(
			v45,
			&v76,
			0i64,
			0i64) < 0)
			goto LABEL_48;
		v36 = *((int*)a1 + 12);
		v60[0] = v76;
		v71 = v36;
		v37 = *((_DWORD*)&unk_140AE5200 + 11 * v36 + 7);
		LODWORD(v36) = *((_DWORD*)&unk_140AE5200 + 11 * v36 + 8);
		v60[1] = v77;
		v59[1] = a6;
		v60[2] = v77 * ((unsigned int)(v85 + v37) >> v36);
		v59[0] = a5;
		v67 = a3;
		v38 = 44i64 * a3;
		v39 = *(_DWORD*)((char*)&unk_140AE5200 + v38 + 28);
		LODWORD(v38) = *(_DWORD*)((char*)&unk_140AE5200 + v38 + 32);
		v69 = v84;
		v70 = v85;
		v65 = v84;
		v66 = v85;
		v59[2] = a6 * ((unsigned int)(v85 + v39) >> v38);
		v40 = sub_1402645D0(v78, (int*)&v69, v60, (int*)v46, &v65, v59);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 80i64))(v45);
		if (v40 < 0)
		{
		LABEL_48:
			v91[1] = v48;
			v91[3] = v47;
			v43 = dword_140AE7B30[a3];
			v91[0] = v16;
			v91[4] = v17;
			v91[2] = v15;
			v91[5] = v18;
			v14 = D3DXLoadVolumeFromMemory(v45, 0i64, v91, v46, v43, a5, a6, 0i64, v91, 1, 0);
			if (v14 < 0)
				goto LABEL_35;
		}
		goto LABEL_45;
	}
	v19 = *a7;
	v20 = a7[3];
	if (*a7 > v20)
		goto LABEL_40;
	v21 = a7[1];
	v22 = a7[4];
	if (v21 > v22)
		goto LABEL_40;
	v23 = a7[2];
	v24 = a7[5];
	if (v23 > v24)
		goto LABEL_40;
	if (v19 < (int)qword_140C77780)
		goto LABEL_40;
	if (v20 > v49)
		goto LABEL_40;
	if (v21 < v48)
		goto LABEL_40;
	if (v22 > v47)
		goto LABEL_40;
	if (v23 < dword_140C77788)
		goto LABEL_40;
	if (v24 > v85)
		goto LABEL_40;
	v25 = 44i64 * *((int*)a1 + 12);
	if (((v19 | v20) & *(_DWORD*)((_BYTE*)&unk_140AE5200 + v25 + 4)) != 0)
		goto LABEL_40;
	if (((v21 | v22) & *(_DWORD*)((_BYTE*)&unk_140AE5200 + v25 + 16)) != 0)
		goto LABEL_40;
	if (((v23 | v24) & *(_DWORD*)((_BYTE*)&unk_140AE5200 + v25 + 28)) != 0)
		goto LABEL_40;
	v87 = a7[3];
	v26 = v20 - v19;
	v27 = v22 - v21;
	v28 = (_DWORD*)((char*)&unk_140AE5200 + 44 * a3);
	v29 = v24 - v23;
	v86 = __PAIR64__(v21, v19);
	v89 = v23;
	v88 = v22;
	v90 = v24;
	if ((v26 & v28[1]) != 0 || (v27 & v28[4]) != 0 || (v29 & v28[7]) != 0)
	{
	LABEL_40:
		v14 = -2147024809;
		goto LABEL_35;
	}
	if (!v83
		|| (*(int(__fastcall**)(__int64, unsigned int*, unsigned __int64*, _QWORD))(*(_QWORD*)v45 + 72i64))(
			v45,
			&v73,
			&v86,
			0i64) < 0)
	{
		v31 = v46;
		goto LABEL_34;
	}
	v30 = *((int*)a1 + 12);
	v58[0] = v73;
	v72[3] = v30;
	v58[1] = v74;
	v72[0] = v26;
	v72[1] = v27;
	v31 = v46;
	v32 = (unsigned int)(v29 + *((_DWORD*)&unk_140AE5200 + 11 * v30 + 7)) >> *((_DWORD*)&unk_140AE5200 + 11 * v30 + 8);
	v33 = (unsigned int)(v27 + v28[4]) >> v28[5];
	LODWORD(v30) = v28[8];
	v72[2] = v29;
	v58[2] = v74 * v32;
	v68[3] = a3;
	v68[0] = v26;
	v57[0] = a5;
	v68[1] = v27;
	v68[2] = v29;
	v34 = v28[7];
	v57[1] = a5 * v33;
	v57[2] = a5 * v33 * ((unsigned int)(v29 + v34) >> v30);
	v35 = sub_1402645D0(v75, v72, v58, (int*)v46, v68, v57);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 80i64))(v45);
	if (v35 >= 0)
	{
	LABEL_45:
		v41 = a1[2] + 48i64 * *((int*)a1 + 13);
		_InterlockedIncrement((volatile signed __int32*)(v41 + 756));
		_InterlockedExchangeAdd((volatile signed __int32*)(v41 + 760), *((_DWORD*)a1 + 32));
		*((_DWORD*)a1 + 24) = 1;
		goto LABEL_36;
	}
LABEL_34:
	v42 = dword_140AE7B30[a3];
	v86 = 0i64;
	v89 = 0;
	v87 = v26;
	v88 = v27;
	v90 = v29;
	v14 = D3DXLoadVolumeFromMemory(v45, 0i64, &v86, v31, v42, a5, a6, 0i64, v92, 1, 0);
	if (v14 >= 0)
		goto LABEL_45;
LABEL_35:
	v12 = v14;
LABEL_36:
	if (v45)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 16i64))(v45);
	return v12;
}
// 140C65718: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65718: using guessed type __int64 (__fastcall *D3DXLoadVolumeFromMemory)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C77780: using guessed type __int64 qword_140C77780;
// 140C77788: using guessed type int dword_140C77788;
// 140C8A400: using guessed type _DWORD dword_140C8A400;
// 140291010: using guessed type int var_C0[4];
// 140291010: using guessed type char var_B0[12];
// 140291010: using guessed type char var_60[24];

