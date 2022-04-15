//----- (00000001402AF030) ----------------------------------------------------
__int64 __fastcall sub_1402AF030(__int64 a1)
{
	unsigned int v1; // r13d
	_QWORD* Value; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	signed int v6; // ebx
	__int64 v7; // rcx
	void* v8; // rax
	_DWORD* v10; // rax
	_DWORD* v11; // r12
	int v12; // r11d
	unsigned int v13; // r10d
	unsigned int v14; // r8d
	char v15; // cl
	unsigned int v16; // ebx
	__int64 v17; // rcx
	_DWORD* v18; // r9
	unsigned int v19; // eax
	unsigned int v20; // ecx
	unsigned __int8 v21; // dl
	unsigned int v22; // ecx
	unsigned int v23; // eax
	unsigned int v24; // ecx
	unsigned __int8 v25; // dl
	unsigned int v26; // ecx
	unsigned int v27; // eax
	unsigned int v28; // ecx
	unsigned __int8 v29; // dl
	unsigned int v30; // ecx
	int v31; // eax
	unsigned int v32; // edx
	int v33; // eax
	unsigned int v34; // edx
	unsigned __int64 v35; // rsi
	int v36; // eax
	int* v37; // rbx
	unsigned int v38; // edi
	__int64 v39; // rcx
	void* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // rcx
	__int64* v43; // rsi
	__int64 v44; // r14
	__int64 v45; // rdi
	__int64 v46; // rax
	int v47; // eax
	__int64 v48; // r8
	__int64 v49; // rcx
	unsigned int v50; // edi
	void* v51; // rax
	unsigned int v52; // edx
	int v53; // eax
	__int64 v54; // rcx
	int v55; // edi
	__int64 v56; // rax
	__int64 v57[2]; // [rsp+30h] [rbp-19h] BYREF
	int v58[2]; // [rsp+40h] [rbp-9h] BYREF
	__int64 v59; // [rsp+48h] [rbp-1h]
	__int64(__fastcall * v60)(__int64); // [rsp+50h] [rbp+7h]
	__int64 v61; // [rsp+58h] [rbp+Fh]
	int v62; // [rsp+60h] [rbp+17h]
	void(__fastcall * **v63)(_QWORD); // [rsp+B8h] [rbp+6Fh] BYREF
	__int64 v64; // [rsp+C0h] [rbp+77h] BYREF

	v1 = 0;
	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v4 = Value[1]) != 0)
		v5 = *(_QWORD*)(v4 + 96);
	else
		v5 = 0i64;
	v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 40i64))(v5, 0i64);
	if (v6 < 0)
	{
		v7 = *(_QWORD*)(a1 + 344);
		if (v7 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7))
			v8 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 16i64))(*(_QWORD*)(a1 + 344));
		else
			v8 = &unk_1409E4254;
		v64 = 0x141DE7160i64;
		LOBYTE(v1) = v6 == -2147024882;
		sub_1401A3130(14, 2, &v64, (unsigned int)v6, v8, v1);
		return sub_1402B1940(a1, v6);
	}
	v10 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 352) + 32i64))(*(_QWORD*)(a1 + 352));
	v11 = v10;
	if (*v10 != 4671064 || v10[1] != 3 || *(_DWORD*)(a1 + 72) == 2 && (v10[2] != v10[3] || v10[5] != 6))
		return sub_1402B1940(a1, 0x80004005);
	v12 = v10[6];
	if (!v12)
		return sub_1402B1940(a1, 0x80004005);
	v13 = v10[2];
	v14 = v12 - 1;
	v15 = v12 - 1;
	if (!(v13 >> (v12 - 1)) && !(v10[3] >> v15) && !(v10[4] >> v15))
		return sub_1402B1940(a1, 0x80004005);
	v16 = v10[8];
	if (v16 > 1)
		return sub_1402B1940(a1, 0x80004005);
	v17 = (int)v10[7];
	if ((unsigned int)v17 > 0x1A)
		return sub_1402B1940(a1, 0x80004005);
	v18 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v17);
	if (*v18 > 1u)
	{
		v19 = v13 / *v18;
		v20 = v19;
		if (v19)
		{
			v21 = 0;
			if (!(_WORD)v19)
			{
				v21 = 16;
				v20 = HIWORD(v19);
			}
			if (!(_BYTE)v20)
			{
				v21 += 8;
				v20 >>= 8;
			}
			if ((v20 & 0xF) == 0)
			{
				v21 += 4;
				v20 >>= 4;
			}
			if ((v20 & 3) == 0)
			{
				v21 += 2;
				v20 >>= 2;
			}
			if ((v20 & 1) == 0)
				++v21;
		}
		else
		{
			v21 = -1;
		}
		if (v21 < v14)
			v14 = v21;
	}
	v22 = v18[3];
	if (v22 > 1)
	{
		v23 = v11[3] / v22;
		v24 = v23;
		if (v23)
		{
			v25 = 0;
			if (!(_WORD)v23)
			{
				v25 = 16;
				v24 = HIWORD(v23);
			}
			if (!(_BYTE)v24)
			{
				v25 += 8;
				v24 >>= 8;
			}
			if ((v24 & 0xF) == 0)
			{
				v25 += 4;
				v24 >>= 4;
			}
			if ((v24 & 3) == 0)
			{
				v25 += 2;
				v24 >>= 2;
			}
			if ((v24 & 1) == 0)
				++v25;
		}
		else
		{
			v25 = -1;
		}
		if (v25 < v14)
			v14 = v25;
	}
	v26 = v18[6];
	if (v26 > 1)
	{
		v27 = v11[4] / v26;
		v28 = v27;
		if (v27)
		{
			v29 = 0;
			if (!(_WORD)v27)
			{
				v29 = 16;
				v28 = HIWORD(v27);
			}
			if (!(_BYTE)v28)
			{
				v29 += 8;
				v28 >>= 8;
			}
			if ((v28 & 0xF) == 0)
			{
				v29 += 4;
				v28 >>= 4;
			}
			if ((v28 & 3) == 0)
			{
				v29 += 2;
				v28 >>= 2;
			}
			if ((v28 & 1) == 0)
				++v29;
		}
		else
		{
			v29 = -1;
		}
		if (v29 < v14)
			v14 = v29;
	}
	v30 = *(_DWORD*)(a1 + 76);
	v31 = 0;
	if (v14 < v30)
		v30 = v14;
	LOBYTE(v31) = v13 >> v30 == 0;
	v32 = v11[3];
	v11[2] = (v13 >> v30) + v31;
	v33 = (v32 >> v30) + (v32 >> v30 == 0);
	v34 = v11[4];
	v11[3] = v33;
	v11[6] = v12 - v30;
	v11[4] = (v34 >> v30) + (v34 >> v30 == 0);
	*(_DWORD*)(a1 + 96) = v16;
	*(_DWORD*)(a1 + 100) = v11[26];
	v35 = sub_14029BDC0(v11);
	if (v35 > (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 24i64))(*(_QWORD*)(a1 + 344)))
		return sub_1402B1940(a1, 0x80004005);
	v64 = 0i64;
	v36 = sub_1401C5690(v35, (int**)&v64, 8);
	v37 = (int*)v64;
	v38 = v36;
	if (v36 >= 0)
	{
		v41 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v64 + 32i64))(v64);
		*v41 = *(_QWORD*)v11;
		v41[1] = *((_QWORD*)v11 + 1);
		v41[2] = *((_QWORD*)v11 + 2);
		v41[3] = *((_QWORD*)v11 + 3);
		v41[4] = *((_QWORD*)v11 + 4);
		v41[5] = *((_QWORD*)v11 + 5);
		v41[6] = *((_QWORD*)v11 + 6);
		v41[7] = *((_QWORD*)v11 + 7);
		v41[8] = *((_QWORD*)v11 + 8);
		v41[9] = *((_QWORD*)v11 + 9);
		v41[10] = *((_QWORD*)v11 + 10);
		v41[11] = *((_QWORD*)v11 + 11);
		v41[12] = *((_QWORD*)v11 + 12);
		v41[13] = *((_QWORD*)v11 + 13);
		if (*(int**)(a1 + 352) != v37)
		{
			(**(void(__fastcall***)(int*))v37)(v37);
			v42 = *(_QWORD*)(a1 + 352);
			if (v42)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
			*(_QWORD*)(a1 + 352) = v37;
		}
		v43 = *(__int64**)(a1 + 344);
		v63 = 0i64;
		v44 = *v43;
		v45 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v37 + 16i64))(v37);
		v46 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v37 + 32i64))(v37);
		v47 = (*(__int64(__fastcall**)(__int64*, __int64, __int64, void(__fastcall****)(_QWORD), _QWORD))(v44 + 80))(
			v43,
			v46 + 112,
			v45 - 112,
			&v63,
			0i64);
		v49 = *(_QWORD*)(a1 + 344);
		v50 = v47;
		if (v47 < 0)
		{
			if (v49 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v49 + 16i64))(v49))
				v51 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 16i64))(*(_QWORD*)(a1 + 344));
			else
				v51 = &unk_1409E41BC;
			v64 = 0x141DE7128i64;
			sub_1401A3130(14, 2, &v64, v50, v51);
			v52 = v50;
			goto LABEL_98;
		}
		if (v49)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v49 + 8i64))(v49);
			*(_QWORD*)(a1 + 344) = 0i64;
		}
		v53 = v11[8];
		if (v53)
		{
			if (v53 != 1)
			{
				v52 = -2147467259;
				goto LABEL_98;
			}
			v60 = sub_1402AFFC0;
			v58[0] = 12;
			v58[1] = 2;
			v59 = a1;
			v61 = 0i64;
			v62 = 1;
			v55 = sub_14019DCA0((__int64)v58, 0, v63, (int**)(a1 + 384));
			if (v55 >= 0)
				goto LABEL_99;
			v56 = 0x141DE7108i64;
		}
		else
		{
			v54 = *(_QWORD*)(a1 + 56);
			v57[1] = (__int64)sub_1402AF660;
			v57[0] = a1;
			v55 = sub_140279D70(v54, v57, v48, v63, (int**)(a1 + 400));
			if (v55 >= 0)
				goto LABEL_99;
			v56 = 0x141DE7118i64;
		}
		v64 = v56;
		sub_1401A3130(14, 2, &v64, (unsigned int)v55);
		v52 = v55;
	LABEL_98:
		v1 = sub_1402B1940(a1, v52);
	LABEL_99:
		if (v63)
			(*v63)[1](v63);
		goto LABEL_101;
	}
	v39 = *(_QWORD*)(a1 + 344);
	if (v39 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39))
		v40 = (void*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 16i64))(*(_QWORD*)(a1 + 344));
	else
		v40 = &unk_1409E41FC;
	v64 = 0x141DE7140i64;
	sub_1401A3130(14, 2, &v64, v38, v35, v40);
	v1 = sub_1402B1940(a1, v38);
LABEL_101:
	if (v37)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v37 + 8i64))(v37);
	return v1;
}
// 1402AF58D: variable 'v48' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;

