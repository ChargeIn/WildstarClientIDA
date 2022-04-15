//----- (000000014026C5F0) ----------------------------------------------------
__int64 __fastcall sub_14026C5F0(const __m128i* a1, __int64* a2)
{
	const __m128i* v4; // rax
	_DWORD* v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rax
	unsigned int v8; // eax
	__int64 v9; // rdx
	unsigned int v10; // r15d
	__int64 result; // rax
	unsigned int v12; // r13d
	int v13; // ecx
	__int64 v14; // rax
	int v15; // eax
	int* v16; // rdi
	int v17; // r14d
	unsigned __int64 v18; // r14
	int* v19; // rax
	_OWORD* v20; // rax
	__int128 v21; // xmm1
	__int128 v22; // xmm0
	__int128 v23; // xmm1
	__int128 v24; // xmm0
	__int128 v25; // xmm1
	__int128 v26; // xmm0
	__int64 v27; // rcx
	__int64 v28; // r8
	int* v29; // r12
	__int64 v30; // rcx
	int* v31; // r14
	_DWORD* v32; // r9
	int v33; // edx
	int v34; // ecx
	unsigned int v35; // edx
	int v36; // ecx
	int v37; // eax
	int v38; // edx
	unsigned int v39; // eax
	int v40; // ecx
	unsigned int v41; // eax
	int v42; // edx
	unsigned int v43; // r15d
	__int64 v44; // rax
	__int64 v45; // rdx
	int v46; // ecx
	int v47; // edx
	unsigned int v48; // edx
	int v49; // ecx
	int v50; // eax
	int v51; // ecx
	int* v52; // r9
	int v53; // eax
	int* v54; // rax
	int v55; // ecx
	int v56; // edx
	unsigned int v57; // edx
	int v58; // ecx
	int v59; // eax
	unsigned int v60; // r13d
	int v61; // edi
	_DWORD* v62; // rbx
	unsigned int v63; // edi
	__int64 v64; // rax
	int v65; // eax
	__int64 v66; // rcx
	__int64 v67; // r8
	int* v68; // rbx
	_DWORD* v69; // [rsp+38h] [rbp-D0h] BYREF
	int* v70; // [rsp+40h] [rbp-C8h] BYREF
	unsigned int v71; // [rsp+48h] [rbp-C0h]
	unsigned int v72; // [rsp+4Ch] [rbp-BCh]
	unsigned int v73; // [rsp+50h] [rbp-B8h]
	unsigned int v74; // [rsp+54h] [rbp-B4h]
	unsigned int v75; // [rsp+58h] [rbp-B0h]
	unsigned int v76; // [rsp+5Ch] [rbp-ACh]
	int v77[4]; // [rsp+60h] [rbp-A8h] BYREF
	unsigned int v78[3]; // [rsp+70h] [rbp-98h] BYREF
	int v79; // [rsp+80h] [rbp-88h]
	unsigned int v80[3]; // [rsp+84h] [rbp-84h] BYREF
	int v81[3]; // [rsp+90h] [rbp-78h] BYREF
	int v82[3]; // [rsp+9Ch] [rbp-6Ch] BYREF
	int v83; // [rsp+A8h] [rbp-60h] BYREF
	int v84; // [rsp+ACh] [rbp-5Ch]
	int* v85; // [rsp+B0h] [rbp-58h]
	const __m128i* v86; // [rsp+B8h] [rbp-50h]
	int* v87; // [rsp+C0h] [rbp-48h]
	unsigned int v88; // [rsp+C8h] [rbp-40h] BYREF
	int* v89; // [rsp+D0h] [rbp-38h]
	__int128 v90; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v91; // [rsp+E8h] [rbp-20h]
	__int128 v92; // [rsp+F8h] [rbp-10h]
	__int128 v93; // [rsp+108h] [rbp+0h]
	__int128 v94; // [rsp+118h] [rbp+10h]
	__int128 v95; // [rsp+128h] [rbp+20h]
	__int128 v96; // [rsp+138h] [rbp+30h]
	int v97; // [rsp+148h] [rbp+40h] BYREF
	int* v98; // [rsp+150h] [rbp+48h]
	__int64 v99; // [rsp+158h] [rbp+50h]
	int v100; // [rsp+160h] [rbp+58h]
	int v101[6]; // [rsp+168h] [rbp+60h] BYREF
	__int64 v102; // [rsp+180h] [rbp+78h]
	char v103[32]; // [rsp+188h] [rbp+80h] BYREF
	char v104[32]; // [rsp+1A8h] [rbp+A0h] BYREF

	v86 = a1;
	if (!a1 || !a2 || !a1->m128i_i16[0])
		return 2147942487i64;
	v4 = sub_1407DD8D8(a1, 0x2Eu);
	v5 = 0i64;
	v6 = (__int64)v4;
	if (!v4)
	{
		v60 = 4;
		goto LABEL_58;
	}
	if ((unsigned int)sub_14018E2C0((__int64)v4, L".tex"))
	{
		if ((unsigned int)sub_14018E2C0(v6, L".bmp"))
		{
			if ((unsigned int)sub_14018E2C0(v6, L".jpg"))
			{
				if ((unsigned int)sub_14018E2C0(v6, L".tga"))
				{
					if ((unsigned int)sub_14018E2C0(v6, L".png"))
					{
						v60 = 4;
						if (!(unsigned int)sub_14018E2C0(v6, L".hdr"))
							v60 = 7;
					}
					else
					{
						v60 = 3;
					}
				}
				else
				{
					v60 = 2;
				}
			}
			else
			{
				v60 = 1;
			}
		}
		else
		{
			v60 = 0;
		}
	LABEL_58:
		v69 = 0i64;
		if (D3DXSaveTextureToFileInMemory)
		{
			v61 = D3DXSaveTextureToFileInMemory(&v69, v60, a2, 0i64);
			if (v61 >= 0)
			{
				v70 = 0i64;
				v62 = v69;
				v63 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v69 + 32i64))(v69);
				v64 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v62 + 24i64))(v62);
				v65 = sub_1401C5810(v64, v63, &v70);
				v68 = v70;
				v61 = v65;
				if (v65 >= 0)
				{
					v61 = sub_1401B6F30(v66, a1, v67, (__int64)v70);
					if (v61 >= 0)
					{
						if (v68)
							(*(void(__fastcall**)(int*))(*(_QWORD*)v68 + 8i64))(v68);
						if (v69)
							(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v69 + 16i64))(v69);
						return 0i64;
					}
				}
				if (v68)
					(*(void(__fastcall**)(int*))(*(_QWORD*)v68 + 8i64))(v68);
			}
			v5 = v69;
		}
		else
		{
			v61 = -2147024809;
		}
		if (v5)
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 16i64))(v5);
		return (unsigned int)v61;
	}
	sub_1407E4830((int*)&v90, 0i64, 0x70ui64);
	v7 = *a2;
	*(_QWORD*)&v90 = 0x300474658i64;
	v8 = (*(__int64(__fastcall**)(__int64*))(v7 + 104))(a2);
	v9 = *a2;
	v10 = v8;
	DWORD2(v91) = v8;
	LODWORD(v92) = 0;
	v79 = (*(__int64(__fastcall**)(__int64*))(v9 + 80))(a2);
	switch (v79)
	{
	case 3:
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(*a2 + 136))(a2, 0i64, v101);
		if ((int)result < 0)
			return result;
		v12 = 1;
		LODWORD(v91) = 1;
		break;
	case 4:
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(*a2 + 136))(a2, 0i64, &v97);
		if ((int)result < 0)
			return result;
		v13 = v97;
		v12 = 1;
		v73 = v99;
		*((_QWORD*)&v90 + 1) = v99;
		v72 = HIDWORD(v99);
		LODWORD(v91) = v100;
		goto LABEL_17;
	case 5:
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(*a2 + 136))(a2, 0i64, v101);
		if ((int)result < 0)
			return result;
		LODWORD(v91) = 1;
		v12 = 6;
		break;
	default:
		v12 = DWORD1(v91);
		v72 = HIDWORD(v90);
		v73 = DWORD2(v90);
		goto LABEL_18;
	}
	v13 = v101[0];
	v73 = v102;
	*((_QWORD*)&v90 + 1) = v102;
	v72 = HIDWORD(v102);
LABEL_17:
	DWORD1(v91) = v12;
	HIDWORD(v91) = sub_14026C430(v13);
LABEL_18:
	v14 = sub_14029BDC0(&v90);
	v70 = 0i64;
	v15 = sub_1401C5690(v14, &v70, 0);
	v16 = v70;
	v17 = v15;
	if (v15 < 0)
		goto LABEL_42;
	v18 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v70 + 16i64))(v70);
	v19 = (int*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v16 + 32i64))(v16);
	sub_1407E4830(v19, 0i64, v18);
	v20 = (_OWORD*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v16 + 32i64))(v16);
	v21 = v91;
	*v20 = v90;
	v22 = v92;
	v20[1] = v21;
	v23 = v93;
	v20[2] = v22;
	v24 = v94;
	v20[3] = v23;
	v25 = v95;
	v20[4] = v24;
	v26 = v96;
	v20[5] = v25;
	v20[6] = v26;
	v29 = (int*)((*(__int64(__fastcall**)(int*))(*(_QWORD*)v16 + 32i64))(v16) + 112);
	if (v10)
	{
		v77[3] = HIDWORD(v91);
		v30 = 44i64 * SHIDWORD(v91);
		v31 = (int*)((char*)&unk_140AE5224 + v30);
		v32 = (_DWORD*)((char*)&unk_140AE5200 + v30);
		v69 = (_DWORD*)((char*)&unk_140AE5200 + v30);
		v70 = (int*)((char*)&unk_140AE5224 + v30);
		while (1)
		{
			v33 = v32[1];
			v71 = --v10;
			v28 = (v73 >> v10 == 0) + (v73 >> v10);
			v34 = v32[2];
			v77[0] = v28;
			v35 = (unsigned int)(v28 + v33) >> v34;
			v36 = v32[5];
			v37 = v32[4];
			v76 = (v72 >> v10 == 0) + (v72 >> v10);
			v77[1] = v76;
			v38 = *v31 * v35 + 3;
			v75 = ((unsigned int)v91 >> v10 == 0) + ((unsigned int)v91 >> v10);
			v39 = (v76 + v37) >> v36;
			v40 = v32[8];
			v78[0] = v38 & 0xFFFFFFFC;
			v77[2] = v75;
			v41 = (v38 & 0xFFFFFFFC) * v39;
			v42 = v32[7];
			v78[1] = v41;
			v74 = v41 * ((v75 + v42) >> v40);
			v78[2] = v74;
			if (v79 == 3)
				break;
			if (v79 == 4)
			{
				v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(*a2 + 136))(a2, v10, v101);
				if (v17 < 0)
					goto LABEL_42;
				v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, int*, _QWORD, int))(*a2 + 152))(a2, v10, &v83, 0i64, 16);
				if (v17 < 0)
					goto LABEL_42;
				v51 = v69[8];
				v52 = v85;
				v82[0] = v83;
				v53 = v69[7];
				v82[1] = v84;
				v82[2] = v84 * ((v75 + v53) >> v51);
				v54 = v82;
			LABEL_37:
				sub_1402645D0(v29, v77, v78, v52, v77, (unsigned int*)v54);
				v17 = (*(__int64(__fastcall**)(__int64*, _QWORD))(*a2 + 160))(a2, v10);
				if (v17 < 0)
					goto LABEL_42;
				v29 = (int*)((char*)v29 + v74);
			LABEL_30:
				v31 = v70;
				v32 = v69;
				goto LABEL_31;
			}
			v27 = (unsigned int)(v79 - 5);
			if (v79 == 5)
			{
				v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, char*))(*a2 + 136))(a2, v10, v104);
				if (v17 < 0)
					goto LABEL_42;
				v43 = 0;
				if (v12)
				{
					while (1)
					{
						v44 = *a2;
						v45 = (unsigned int)dword_140AE7B00[v43];
						v87 = &dword_140AE7B00[v43];
						v17 = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, unsigned int*, _QWORD, int))(v44 + 152))(
							a2,
							v45,
							v71,
							&v88,
							0i64,
							16);
						if (v17 < 0)
							break;
						v46 = v69[5];
						v47 = v69[4];
						v80[0] = v88;
						v48 = (v76 + v47) >> v46;
						v49 = v69[8];
						v50 = v69[7];
						v80[1] = v88 * v48;
						v80[2] = v88 * v48 * ((v75 + v50) >> v49);
						sub_1402645D0(v29, v77, v78, v89, v77, v80);
						v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*a2 + 160))(a2, (unsigned int)*v87, v71);
						if (v17 < 0)
							break;
						++v43;
						v29 = (int*)((char*)v29 + v74);
						if (v43 >= v12)
							goto LABEL_29;
					}
				LABEL_42:
					if (v16)
						(*(void(__fastcall**)(int*))(*(_QWORD*)v16 + 8i64))(v16);
					return (unsigned int)v17;
				}
			LABEL_29:
				v10 = v71;
				goto LABEL_30;
			}
		LABEL_31:
			if (!v10)
				goto LABEL_32;
		}
		v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, char*))(*a2 + 136))(a2, v10, v103);
		if (v17 < 0)
			goto LABEL_42;
		v17 = (*(__int64(__fastcall**)(__int64*, _QWORD, int*, _QWORD, int))(*a2 + 152))(a2, v10, &v97, 0i64, 16);
		if (v17 < 0)
			goto LABEL_42;
		v52 = v98;
		v55 = v69[5];
		v56 = v69[4];
		v81[0] = v97;
		v57 = (v76 + v56) >> v55;
		v58 = v69[8];
		v59 = v69[7];
		v81[1] = v97 * v57;
		v81[2] = v97 * v57 * ((v75 + v59) >> v58);
		v54 = v81;
		goto LABEL_37;
	}
LABEL_32:
	v17 = sub_1401B6F30(v27, v86, v28, (__int64)v16);
	if (v17 < 0)
		goto LABEL_42;
	(*(void(__fastcall**)(int*))(*(_QWORD*)v16 + 8i64))(v16);
	return 0i64;
}
// 140C656E8: invalid function type has been ignored
// 14026CA6E: variable 'v27' is possibly undefined
// 14026CA6E: variable 'v28' is possibly undefined
// 14026CD0F: variable 'v66' is possibly undefined
// 14026CD0F: variable 'v67' is possibly undefined
// 140AE68F0: using guessed type wchar_t aHdr[5];
// 140AE6900: using guessed type wchar_t aPng_0[5];
// 140AE6910: using guessed type wchar_t aTga_0[5];
// 140AE6920: using guessed type wchar_t aJpg[5];
// 140AE6930: using guessed type wchar_t aBmp_0[5];
// 140AE6940: using guessed type wchar_t aTex_3[5];
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140C656E8: using guessed type __int64 (__fastcall *D3DXSaveTextureToFileInMemory)(_QWORD, _QWORD, _QWORD, _QWORD);
// 14026C5F0: using guessed type char var_60[32];
// 14026C5F0: using guessed type char var_80[32];

