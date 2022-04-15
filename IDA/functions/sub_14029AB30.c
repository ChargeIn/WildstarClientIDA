//----- (000000014029AB30) ----------------------------------------------------
__int64 __fastcall sub_14029AB30(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	signed int v5; // ebx
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // rax
	signed int v10; // ebx
	unsigned int v11; // r8d
	int v12; // edx
	int v13; // ecx
	unsigned int v14; // edx
	__int64 v15; // rdi
	__int64 v16; // r12
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // r14
	unsigned int v20; // r15d
	__int64 v21; // rax
	int v22; // ebx
	int v23; // edi
	__int64* v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rax
	__int64 v27; // rdi
	__int64 v28; // r15
	__int64 v29; // rax
	__int64 v30; // rsi
	__int64 v31; // r14
	unsigned int v32; // r12d
	__int64 v33; // rax
	int v34; // ebx
	int v35; // edi
	__int64* v36; // rcx
	__int64 v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rdi
	__int64 v40; // r12
	__int64 v41; // rax
	__int64 v42; // rsi
	__int64 v43; // r14
	unsigned int v44; // r15d
	__int64 v45; // rax
	int v46; // ebx
	int v47; // edi
	__int64* v48; // rcx
	__int64 v49; // rdx
	__int64 v50; // rax
	__int64 v51; // [rsp+20h] [rbp-69h]
	__int64 v52; // [rsp+20h] [rbp-69h]
	__int64 v53; // [rsp+20h] [rbp-69h]
	__int64 v54; // [rsp+28h] [rbp-61h]
	__int64 v55; // [rsp+28h] [rbp-61h]
	__int64 v56; // [rsp+30h] [rbp-59h]
	__int64 v57; // [rsp+30h] [rbp-59h]
	__int64 v58; // [rsp+38h] [rbp-51h]
	__int64 v59; // [rsp+38h] [rbp-51h]
	__int64 v60; // [rsp+40h] [rbp-49h]
	__int64 v61; // [rsp+40h] [rbp-49h]
	__int64 v62; // [rsp+40h] [rbp-49h]
	__int64 v63; // [rsp+48h] [rbp-41h]
	__int64 v64; // [rsp+48h] [rbp-41h]
	__int64 v65; // [rsp+48h] [rbp-41h]
	__int64 v66; // [rsp+50h] [rbp-39h]
	__int64 v67; // [rsp+50h] [rbp-39h]
	__int64 v68; // [rsp+58h] [rbp-31h]
	__int64 v69; // [rsp+80h] [rbp-9h] BYREF
	int v70; // [rsp+88h] [rbp-1h]
	unsigned int v71; // [rsp+90h] [rbp+7h] BYREF
	unsigned int v72; // [rsp+94h] [rbp+Bh]
	unsigned int v73; // [rsp+98h] [rbp+Fh]
	unsigned int v74; // [rsp+9Ch] [rbp+13h]
	int v75; // [rsp+A0h] [rbp+17h]
	int v76; // [rsp+A4h] [rbp+1Bh]
	int v77; // [rsp+A8h] [rbp+1Fh]

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
	{
		v69 = 0x141DE52F0i64;
		sub_1401A3130(14, 2, &v69, (unsigned int)v5);
		return sub_14029B080(a1, v5);
	}
	v7 = *(_QWORD*)(a1 + 104);
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
	v10 = D3DXGetImageInfoFromFileInMemory(v9, v8, &v71);
	if (v10 < 0)
	{
		v69 = 0x141DE52E0i64;
		sub_1401A3130(14, 2, &v69, (unsigned int)v10);
		return sub_14029B080(a1, v10);
	}
	v11 = *(_DWORD*)(a1 + 68);
	if (v11 >= v74)
		v11 = v74 - 1;
	v71 = (v71 >> v11 == 0) + (v71 >> v11);
	v72 = (v72 >> v11 == 0) + (v72 >> v11);
	v73 = (v73 >> v11 == 0) + (v73 >> v11);
	v12 = *(_DWORD*)(a1 + 76);
	if ((v12 & 0x100) != 0)
	{
		v74 = 1;
	}
	else if ((v12 & 0x200) != 0)
	{
		v74 -= v11;
	}
	else
	{
		v74 = 0;
	}
	v13 = 4;
	if ((v12 & 3) != 1)
		v13 = 65540;
	v70 = v13;
	if ((v12 & 0xC) != 4)
	{
		v13 |= 0x20000u;
		v70 = v13;
	}
	if ((v12 & 0x30) != 16)
		v70 = v13 | 0x40000;
	LODWORD(v69) = 5;
	if (v77 == 4)
		LODWORD(v69) = ((v11 & 0x1F) << 26) | 5;
	switch (v76)
	{
	case 3:
		v39 = *(_QWORD*)(a1 + 104);
		v40 = 4i64 * *(int*)(a1 + 72);
		v41 = *(_QWORD*)(a1 + 48);
		v42 = *(_QWORD*)(v41 + 7040);
		v43 = *(_QWORD*)(v41 + 7032);
		v44 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
		v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 32i64))(v39);
		v46 = v69;
		v47 = D3DXCreateTextureFromFileInMemoryEx(
			*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
			v45,
			v44,
			v71,
			v72,
			v74,
			*(_DWORD*)(v43 + v40),
			v75,
			*(_DWORD*)(v42 + v40),
			v70,
			v69,
			0,
			0i64,
			0i64,
			a1 + 56);
		if (v47 < 0)
		{
			v48 = *(__int64**)(a1 + 104);
			v49 = *v48;
			v69 = 0x141DE52A0i64;
			v50 = (*(__int64(__fastcall**)(__int64*))(v49 + 16))(v48);
			LODWORD(v67) = v46;
			LODWORD(v65) = v75;
			LODWORD(v62) = *(_DWORD*)(a1 + 72);
			LODWORD(v59) = v74;
			LODWORD(v55) = v72;
			LODWORD(v53) = v71;
			sub_1401A3130(14, 2, &v69, (unsigned int)v47, v53, v55, v50, v59, v62, v65, v67);
			v14 = v47;
			return sub_14029B080(a1, v14);
		}
		goto LABEL_35;
	case 4:
		v27 = *(_QWORD*)(a1 + 104);
		v28 = 4i64 * *(int*)(a1 + 72);
		v29 = *(_QWORD*)(a1 + 48);
		v30 = *(_QWORD*)(v29 + 7040);
		v31 = *(_QWORD*)(v29 + 7032);
		v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
		v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 32i64))(v27);
		v34 = v69;
		v35 = D3DXCreateVolumeTextureFromFileInMemoryEx(
			*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
			v33,
			v32,
			v71,
			v72,
			v73,
			v74,
			*(_DWORD*)(v31 + v28),
			v75,
			*(_DWORD*)(v30 + v28),
			v70,
			v69,
			0,
			0i64,
			0i64,
			a1 + 56);
		if (v35 < 0)
		{
			v36 = *(__int64**)(a1 + 104);
			v37 = *v36;
			v69 = 0x141DE5350i64;
			v38 = (*(__int64(__fastcall**)(__int64*))(v37 + 16))(v36);
			LODWORD(v68) = v34;
			LODWORD(v66) = v75;
			LODWORD(v64) = *(_DWORD*)(a1 + 72);
			LODWORD(v61) = v74;
			LODWORD(v57) = v73;
			LODWORD(v54) = v72;
			LODWORD(v52) = v71;
			sub_1401A3130(14, 2, &v69, (unsigned int)v35, v52, v54, v57, v38, v61, v64, v66, v68);
			v14 = v35;
			return sub_14029B080(a1, v14);
		}
		goto LABEL_35;
	case 5:
		v15 = *(_QWORD*)(a1 + 104);
		v16 = 4i64 * *(int*)(a1 + 72);
		v17 = *(_QWORD*)(a1 + 48);
		v18 = *(_QWORD*)(v17 + 7040);
		v19 = *(_QWORD*)(v17 + 7032);
		v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
		v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
		v22 = v69;
		v23 = D3DXCreateCubeTextureFromFileInMemoryEx(
			*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
			v21,
			v20,
			v71,
			v74,
			*(_DWORD*)(v19 + v16),
			v75,
			*(_DWORD*)(v18 + v16),
			v70,
			v69,
			0,
			0i64,
			0i64,
			a1 + 56);
		if (v23 < 0)
		{
			v24 = *(__int64**)(a1 + 104);
			v25 = *v24;
			v69 = 0x141DE46C8i64;
			v26 = (*(__int64(__fastcall**)(__int64*))(v25 + 16))(v24);
			LODWORD(v63) = v22;
			LODWORD(v60) = v75;
			LODWORD(v58) = *(_DWORD*)(a1 + 72);
			LODWORD(v56) = v74;
			LODWORD(v51) = v71;
			sub_1401A3130(14, 2, &v69, (unsigned int)v23, v51, v26, v56, v58, v60, v63);
			v14 = v23;
			return sub_14029B080(a1, v14);
		}
	LABEL_35:
		v14 = 0;
		return sub_14029B080(a1, v14);
	}
	v14 = -2147467259;
	return sub_14029B080(a1, v14);
}
// 140C65700: invalid function type has been ignored
// 140C65760: invalid function type has been ignored
// 140C656F0: invalid function type has been ignored
// 140C65750: invalid function type has been ignored
// 14029AE10: variable 'v51' is possibly undefined
// 14029AE10: variable 'v56' is possibly undefined
// 14029AE10: variable 'v58' is possibly undefined
// 14029AE10: variable 'v60' is possibly undefined
// 14029AE10: variable 'v63' is possibly undefined
// 14029AF26: variable 'v52' is possibly undefined
// 14029AF26: variable 'v54' is possibly undefined
// 14029AF26: variable 'v57' is possibly undefined
// 14029AF26: variable 'v61' is possibly undefined
// 14029AF26: variable 'v64' is possibly undefined
// 14029AF26: variable 'v66' is possibly undefined
// 14029AF26: variable 'v68' is possibly undefined
// 14029B02A: variable 'v53' is possibly undefined
// 14029B02A: variable 'v55' is possibly undefined
// 14029B02A: variable 'v59' is possibly undefined
// 14029B02A: variable 'v62' is possibly undefined
// 14029B02A: variable 'v65' is possibly undefined
// 14029B02A: variable 'v67' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C656F0: using guessed type __int64 (__fastcall *D3DXCreateVolumeTextureFromFileInMemoryEx)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD);
// 140C65700: using guessed type __int64 (__fastcall *D3DXGetImageInfoFromFileInMemory)(_QWORD, _QWORD, _QWORD);
// 140C65750: using guessed type __int64 (__fastcall *D3DXCreateTextureFromFileInMemoryEx)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD);
// 140C65760: using guessed type __int64 (__fastcall *D3DXCreateCubeTextureFromFileInMemoryEx)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD);

