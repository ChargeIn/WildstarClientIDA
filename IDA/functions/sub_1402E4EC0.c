//----- (00000001402E4EC0) ----------------------------------------------------
void __fastcall sub_1402E4EC0(__int64 a1)
{
	__int64 v2; // r14
	char* v3; // rbx
	__int64 v4; // rsi
	__int64 v5; // r15
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	void(__fastcall * **v9)(_QWORD); // rbx
	bool v10; // zf
	void(__fastcall * *v11)(_QWORD); // rax
	int v12; // esi
	int* v13; // rbx
	unsigned __int64 v14; // r14
	int v15; // eax
	_DWORD* v16; // rbx
	unsigned int v17; // r12d
	unsigned __int64 v18; // r14
	_QWORD* v19; // r13
	int* v20; // r15
	unsigned __int64 v21; // rax
	unsigned __int64 v22; // r15
	int v23; // eax
	unsigned __int64 v24; // r14
	unsigned int* v25; // rbx
	_QWORD* v26; // r12
	char* v27; // rbx
	unsigned __int64 v28; // rdi
	__int64 v29; // rsi
	unsigned __int64 i; // rbx
	__int64 v31; // rcx
	unsigned __int64 v32; // rdi
	__int64 v33; // rsi
	unsigned __int64 j; // rbx
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64 v37; // rcx
	__int64 v38; // rax
	__int64 v39; // rbx
	_QWORD* v40; // rbx
	__int64 v41; // rax
	unsigned __int64 v42; // rbx
	__int64 v43; // rax
	__int64 v44; // rcx
	_QWORD* v45; // rsi
	unsigned __int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rcx
	_QWORD* v49; // rsi
	unsigned __int64 v50; // rbx
	__int64 v51; // rax
	__int64 v52; // rcx
	_QWORD* v53; // rsi
	__int64(__fastcall * *v54)(); // [rsp+40h] [rbp-C0h] BYREF
	const wchar_t* v55; // [rsp+48h] [rbp-B8h]
	LPVOID v56; // [rsp+50h] [rbp-B0h]
	__int64 v57; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v58)(); // [rsp+60h] [rbp-A0h] BYREF
	const wchar_t* v59; // [rsp+68h] [rbp-98h]
	LPVOID lpTlsValue; // [rsp+70h] [rbp-90h]
	__int64 v61; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *TlsValue)(); // [rsp+80h] [rbp-80h] BYREF
	__int64 v63; // [rsp+88h] [rbp-78h]
	LPVOID Value; // [rsp+90h] [rbp-70h]
	__int128 v65; // [rsp+98h] [rbp-68h] BYREF
	LPVOID v66[2]; // [rsp+A8h] [rbp-58h]
	__int64 v67; // [rsp+B8h] [rbp-48h]
	unsigned __int64 v68; // [rsp+C0h] [rbp-40h]
	__int64 v69; // [rsp+C8h] [rbp-38h]
	__int64 v70; // [rsp+D0h] [rbp-30h]
	unsigned __int64 v71; // [rsp+D8h] [rbp-28h]
	__int64 v72; // [rsp+E0h] [rbp-20h]
	__int64 v73[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v74[4]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v75[4]; // [rsp+130h] [rbp+30h] BYREF
	__int128 v76[2]; // [rsp+150h] [rbp+50h] BYREF
	char v77[304]; // [rsp+170h] [rbp+70h] BYREF
	__int64 v78; // [rsp+2A0h] [rbp+1A0h]
	unsigned __int64 v79; // [rsp+2A8h] [rbp+1A8h]
	__int64 v80; // [rsp+2B0h] [rbp+1B0h]
	unsigned __int64 v81; // [rsp+2B8h] [rbp+1B8h]
	__int64 v82; // [rsp+2C0h] [rbp+1C0h]
	__int64 v83; // [rsp+2C8h] [rbp+1C8h]
	__int64 v84; // [rsp+2D0h] [rbp+1D0h]
	__int64 v85; // [rsp+330h] [rbp+230h] BYREF
	void(__fastcall * **v86)(_QWORD); // [rsp+338h] [rbp+238h] BYREF
	unsigned __int64 v87; // [rsp+340h] [rbp+240h]
	__int64 v88; // [rsp+348h] [rbp+248h]

	v2 = 38i64;
	v3 = v77;
	v4 = 38i64;
	v5 = a1 - (_QWORD)v77;
	do
	{
		v6 = *(void(__fastcall****)(_QWORD)) & v3[v5 + 152];
		*(_QWORD*)v3 = v6;
		if (v6)
			(**v6)(v6);
		v3 += 8;
		--v4;
	} while (v4);
	v7 = *(unsigned int*)(a1 + 48);
	v88 = *(_QWORD*)(a1 + 456);
	v78 = v88;
	v68 = *(_QWORD*)(a1 + 464);
	v79 = v68;
	v72 = *(_QWORD*)(a1 + 472);
	v80 = v72;
	v71 = *(_QWORD*)(a1 + 496);
	v81 = v71;
	v70 = *(_QWORD*)(a1 + 504);
	v82 = v70;
	v67 = *(_QWORD*)(a1 + 480);
	v83 = v67;
	v69 = *(_QWORD*)(a1 + 488);
	v84 = v69;
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	v9 = *(void(__fastcall****)(_QWORD))(v8 + 8 * v7 + 3256);
	if (!v9)
		goto LABEL_45;
	v86 = 0i64;
	v10 = *(_DWORD*)(*(_QWORD*)(v8 + 16) + 1576i64) == 0;
	v11 = *v9;
	if (v10)
	{
		(*v11)(v9);
		if (v86)
			(*v86)[1](v86);
		v86 = v9;
		goto LABEL_14;
	}
	v12 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD), void(__fastcall****)(_QWORD)))v11[6])(v9, &v86);
	if (v12 >= 0)
	{
		v9 = v86;
	LABEL_14:
		v13 = (int*)((__int64(__fastcall*)(_QWORD))(*v9)[3])(v9);
		v14 = ((__int64(__fastcall*)(_QWORD))(*v86)[2])(v86);
		if (v14 < 4)
			goto LABEL_65;
		v15 = *v13;
		v16 = v13 + 1;
		v17 = 0;
		v18 = v14 - 4;
		v19 = (_QWORD*)(a1 + 152);
		v20 = &dword_140C4135C;
		LODWORD(v85) = v15;
		do
		{
			if (_bittest(&v15, v17))
			{
				v21 = v20[4] * (v20[2] - *v20);
				v87 = v21;
				if (v18 < v21)
					goto LABEL_65;
				if (*(v20 - 4))
				{
					if (*v19)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v19 + 8i64))(*v19);
						*v19 = 0i64;
					}
					v12 = sub_1402DDC50(v17, (__int64)v16, v86, (int**)(a1 + 8 * (v17 + 19i64)));
					if (v12 < 0)
					{
					LABEL_33:
						if (v86)
							(*v86)[1](v86);
						goto LABEL_68;
					}
					v21 = v87;
				}
				v16 = (_DWORD*)((char*)v16 + v21);
				v18 -= v21;
				v15 = v85;
			}
			++v17;
			++v19;
			v20 += 14;
		} while (v17 < 0x20);
		if (v18)
		{
			while (v18 >= 8)
			{
				v22 = (unsigned int)v16[1];
				v23 = *v16;
				v24 = v18 - 8;
				v25 = v16 + 2;
				if (v24 < v22)
					break;
				switch (v23)
				{
				case 1347571536:
					v26 = (_QWORD*)(a1 + 456);
					if (*(_QWORD*)(a1 + 456))
					{
						v12 = -2147467259;
					LABEL_62:
						if (v86)
							(*v86)[1](v86);
						v2 = 38i64;
						goto LABEL_70;
					}
					v12 = sub_1402E3010((__int64)v25, v22, v86, (int**)(a1 + 456));
					if (v12 < 0)
						goto LABEL_62;
					break;
				case 1463907399:
					v12 = sub_1402E5720(a1, v22, v25, v86);
					if (v12 < 0)
						goto LABEL_33;
					break;
				case 1668641348:
					v12 = sub_1402E59B0(a1, v22, v25, v86);
					if (v12 < 0)
						goto LABEL_33;
					break;
				case 2002940752:
					v12 = sub_1402E5860(a1, (unsigned int)v22, v25, v86);
					if (v12 < 0)
						goto LABEL_33;
					break;
				}
				v16 = (unsigned int*)((char*)v25 + v22);
				v18 = v24 - v22;
				if (!v18)
					goto LABEL_42;
			}
		LABEL_65:
			if (v86)
				(*v86)[1](v86);
			v12 = -2147467259;
		LABEL_68:
			v2 = 38i64;
			goto LABEL_69;
		}
	LABEL_42:
		if (v86)
			(*v86)[1](v86);
		v2 = 38i64;
	LABEL_45:
		v27 = v77;
		do
		{
			if (*(_QWORD*)v27)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v27 + 8i64))(*(_QWORD*)v27);
				*(_QWORD*)v27 = 0i64;
			}
			v27 += 8;
			--v2;
		} while (v2);
		if (v78)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v78 + 8i64))(v78);
		v28 = v79;
		v29 = v80;
		for (i = 0i64; i < v28; ++i)
		{
			v31 = *(_QWORD*)(v29 + 8 * i);
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
				*(_QWORD*)(v29 + 8 * i) = 0i64;
			}
		}
		sub_14018B900(v29, 0);
		v32 = v81;
		v33 = v82;
		for (j = 0i64; j < v32; ++j)
		{
			v35 = *(_QWORD*)(v33 + 8 * j);
			if (v35)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
				*(_QWORD*)(v33 + 8 * j) = 0i64;
			}
		}
		sub_14018B900(v33, 0);
		return;
	}
	if (v86)
		(*v86)[1](v86);
LABEL_69:
	v26 = (_QWORD*)(a1 + 456);
LABEL_70:
	TlsValue = &off_140B5E648;
	v63 = 0i64;
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v73[0] = (__int64)TlsValue;
	v73[1] = v63;
	*(_QWORD*)&v65 = &off_140B5E648;
	*((_QWORD*)&v65 + 1) = L"Result";
	v73[2] = (__int64)Value;
	v66[0] = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v65);
	v36 = *(unsigned int*)(a1 + 48);
	LODWORD(v66[1]) = v12;
	v54 = &off_140B5E648;
	*(_QWORD*)&v65 = &off_140B5E640;
	v76[1] = *(_OWORD*)v66;
	v55 = L"RecordId";
	v76[0] = v65;
	v56 = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v54);
	v37 = *(_QWORD*)(a1 + 16);
	v57 = v36;
	v75[1] = (__int64)v55;
	v75[3] = v36;
	v54 = off_140B5E630;
	v75[0] = (__int64)off_140B5E630;
	v75[2] = (__int64)v56;
	v38 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v37 + 24i64))(v37);
	v58 = &off_140B5E648;
	v39 = v38 + 584;
	v59 = L"FileName";
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v58);
	v61 = v39;
	v74[1] = (__int64)v59;
	v58 = &off_140B5E638;
	v74[3] = v39;
	v85 = 0x141DEB590i64;
	v74[0] = (__int64)&off_140B5E638;
	v74[2] = (__int64)lpTlsValue;
	LODWORD(v39) = sub_1401971E0(dword_140C8A580, 36, &v85, v74, v75, v76, v73);
	v58 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	v54 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v56);
	*(_QWORD*)&v65 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, v66[0]);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if ((_DWORD)v39)
		DebugBreak();
	v40 = (_QWORD*)(a1 + 152);
	do
	{
		if (*v40)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v40 + 8i64))(*v40);
			*v40 = 0i64;
		}
		v41 = *(_QWORD*)&v77[(_QWORD)v40++ - a1 - 152];
		*(v40 - 1) = v41;
		--v2;
	} while (v2);
	if (*v26)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v26 + 8i64))(*v26);
		*v26 = 0i64;
	}
	v42 = 0i64;
	for (*v26 = v88; v42 < *(_QWORD*)(a1 + 464); ++v42)
	{
		v43 = *(_QWORD*)(a1 + 472);
		v44 = *(_QWORD*)(v43 + 8 * v42);
		v45 = (_QWORD*)(v43 + 8 * v42);
		if (v44)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
			*v45 = 0i64;
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 472), 0);
	v46 = 0i64;
	*(_QWORD*)(a1 + 464) = v68;
	for (*(_QWORD*)(a1 + 472) = v72; v46 < *(_QWORD*)(a1 + 496); ++v46)
	{
		v47 = *(_QWORD*)(a1 + 504);
		v48 = *(_QWORD*)(v47 + 8 * v46);
		v49 = (_QWORD*)(v47 + 8 * v46);
		if (v48)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
			*v49 = 0i64;
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	v50 = 0i64;
	*(_QWORD*)(a1 + 496) = v71;
	for (*(_QWORD*)(a1 + 504) = v70; v50 < *(_QWORD*)(a1 + 480); ++v50)
	{
		v51 = *(_QWORD*)(a1 + 488);
		v52 = *(_QWORD*)(v51 + 8 * v50);
		v53 = (_QWORD*)(v51 + 8 * v50);
		if (v52)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v52 + 8i64))(v52);
			*v53 = 0i64;
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 488), 0);
	*(_QWORD*)(a1 + 480) = v67;
	*(_QWORD*)(a1 + 488) = v69;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C08: using guessed type wchar_t aRecordid[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E630: using guessed type __int64 (__fastcall *off_140B5E630[2])();
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C4135C: using guessed type int dword_140C4135C;
// 140C8A580: using guessed type _DWORD dword_140C8A580[2];

