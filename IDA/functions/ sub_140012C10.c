//----- (0000000140012C10) ----------------------------------------------------
__int64 __fastcall sub_140012C10(__int64 a1)
{
	__int64* v2; // rcx
	_QWORD* v3; // rdx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rsi
	unsigned __int64 i; // rbx
	void(__fastcall * **v13)(_QWORD, __int64); // rcx
	__int64 v14; // rbx
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rbx
	int* v18; // rsi
	__int64 v19; // rbx
	__int64 v20; // rbx
	int v21; // ebx
	int v22; // ebx
	__int64 v23; // rbx
	__int64 v24; // rbx
	__int64 v25; // rbx
	__int64 v26; // rbx
	void(__fastcall * **v27)(_QWORD, __int64); // rcx
	__int64 v28; // rbx
	__int64 v29; // rbx
	__int64 v30; // rbx
	__int64 v31; // rbx
	__int64 v32; // rbx
	__int64 v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rbx
	__int64 v36; // rbx
	__int64 v37; // rbx
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rbx
	bool v41; // zf
	__int64 v42; // rbx
	__int64* v43; // rbx
	__int64 v44; // rcx
	int v45; // eax
	__int64 v46; // rcx
	__int64 v47; // rbx
	int v48; // ebx
	__int64 v49; // rbx
	__int64 v50; // rbx
	__int64 v51; // rbx
	int v52; // ebx
	int v54; // esi
	int v55; // ebx
	_QWORD* v56; // rbx
	__int64 v57; // rcx
	__int64 v58; // rcx
	__int64 v59; // rcx
	__int64 v60; // rbx
	int v61; // ebx
	int v62; // ebx
	int v63; // ebx
	int v64; // ebx
	void(__fastcall * **v65)(_QWORD, __int64); // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-49h] BYREF
	__int64 v67; // [rsp+38h] [rbp-41h]
	LPVOID Value; // [rsp+40h] [rbp-39h]
	__int64(__fastcall * *v69)(); // [rsp+50h] [rbp-29h] BYREF
	__int64 v70; // [rsp+58h] [rbp-21h]
	LPVOID v71; // [rsp+60h] [rbp-19h]
	__int128 v72; // [rsp+70h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+7h]
	__int128 v74; // [rsp+90h] [rbp+17h] BYREF
	__int128 v75; // [rsp+A0h] [rbp+27h]
	__int64 v76; // [rsp+E0h] [rbp+67h] BYREF

	while (*(_QWORD*)(a1 + 5552))
	{
		v2 = *(__int64**)(a1 + 5552);
		v3 = (_QWORD*)v2[3];
		if (v3)
			*v3 = v2[4];
		v4 = v2[4];
		if (v4)
			*(_QWORD*)(v4 + 24) = v2[3];
		v5 = *v2;
		v2[3] = 0i64;
		v2[4] = 0i64;
		(*(void (**)(void))(v5 + 8))();
	}
	v6 = *(_QWORD*)(a1 + 5624);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 5624) = 0i64;
	}
	v7 = (_QWORD*)(a1 + 5632);
	v8 = 3i64;
	do
	{
		if (*v7)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
			*v7 = 0i64;
		}
		++v7;
		--v8;
	} while (v8);
	if (*(int*)(a1 + 304) >= 4)
	{
		v9 = qword_140C65A50;
		if (qword_140C65A50)
		{
			sub_1404D6380((_QWORD*)qword_140C65A50);
			sub_14018B900(v9, 0);
		}
		v10 = *(_QWORD*)(a1 + 5544);
		qword_140C65A50 = 0i64;
		if (v10)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			*(_QWORD*)(a1 + 5544) = 0i64;
		}
		v11 = qword_140C65A40;
		if (qword_140C65A40)
		{
			for (i = 0i64; i < 0xA; ++i)
			{
				v13 = *(void(__fastcall****)(_QWORD, __int64))(v11 + 8 * i);
				if (v13)
					(**v13)(v13, 1i64);
			}
			sub_14018B900(v11, 0);
			qword_140C65A40 = 0i64;
		}
		if (qword_140C65A38)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A38)(qword_140C65A38, 1i64);
		v14 = qword_140C65A28;
		qword_140C65A38 = 0i64;
		if (qword_140C65A28)
		{
			sub_1404CF7A0(qword_140C65A28);
			sub_14018B900(v14, 0);
		}
		qword_140C65A28 = 0i64;
		sub_1404C8C20();
		v15 = qword_140C659F8;
		if (qword_140C659F8)
		{
			sub_1404C88A0(qword_140C659F8);
			sub_14018B900(v15, 0);
		}
		qword_140C659F8 = 0i64;
		sub_140019490(&qword_140C7DFE8);
		v16 = (int*)*((_QWORD*)&xmmword_140C7DFC0 + 1);
		v17 = (int*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
			v18 = (int*)(xmmword_140C7DFC0 + 8);
			do
			{
				if (*(_QWORD*)v17)
				{
					(***(void(__fastcall****)(_QWORD, __int64))v17)(*(_QWORD*)v17, 1i64);
					v16 = (int*)*((_QWORD*)&xmmword_140C7DFC0 + 1);
				}
				if (v18 != v16)
				{
					sub_1407DB590(v17, v17 + 2, ((char*)v16 - (char*)v18) & 0xFFFFFFFFFFFFFFF8ui64);
					v16 = (int*)*((_QWORD*)&xmmword_140C7DFC0 + 1);
				}
				v16 -= 2;
				*((_QWORD*)&xmmword_140C7DFC0 + 1) = v16;
			} while (v17 != v16);
		}
		qword_140C7DFD8 = 0i64;
		qword_140C7DFE0 = 0i64;
		sub_1404B4AE0(qword_140C659F0);
		sub_1404B4C40((_QWORD*)qword_140C659F0);
		v19 = qword_140C659F0;
		if (qword_140C659F0)
		{
			sub_1404B4610(qword_140C659F0);
			sub_14018B900(v19, 0);
		}
		v20 = qword_140C65C28;
		qword_140C659F0 = 0i64;
		if (qword_140C65C28)
		{
			sub_140642F40((_QWORD*)qword_140C65C28);
			sub_14018B900(v20, 0);
		}
		qword_140C65C28 = 0i64;
		if (qword_140C65948)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65948)(qword_140C65948, 1i64);
		qword_140C65948 = 0i64;
		v21 = sub_140492850();
		if (v21 < 0)
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v69 = TlsValue;
			v70 = v67;
			*(_QWORD*)&v72 = &off_140B5E648;
			*((_QWORD*)&v72 + 1) = L"Result";
			v71 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v72);
			*(_QWORD*)&v72 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v21;
			v76 = 0x141CDA358i64;
			v74 = v72;
			v75 = *(_OWORD*)lpTlsValue;
			v22 = sub_1401971E0(&dword_140C89F04, 22, &v76, &v74, &v69);
			*(_QWORD*)&v72 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v22)
				DebugBreak();
		}
		if (qword_140C65980)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65980 + 16i64))(qword_140C65980, 1i64);
		if (qword_140C65988)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65988)(qword_140C65988, 1i64);
		qword_140C65980 = 0i64;
		qword_140C65988 = 0i64;
		if (qword_140C65998)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65998)(qword_140C65998, 1i64);
		if (qword_140C65990)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65990)(qword_140C65990, 1i64);
		v23 = qword_140C665D8;
		qword_140C65998 = 0i64;
		qword_140C65990 = 0i64;
		if (qword_140C665D8)
		{
			sub_140723B70(qword_140C665D8);
			sub_14018B900(v23, 0);
		}
		v24 = qword_140C65B80;
		qword_140C665D8 = 0i64;
		if (qword_140C65B80)
		{
			sub_1405A7A30(qword_140C65B80);
			sub_14018B900(v24, 0);
			qword_140C65B80 = 0i64;
		}
		v25 = qword_140C65928;
		if (qword_140C65928)
		{
			sub_1404874B0(qword_140C65928);
			sub_14018B900(v25, 0);
		}
		qword_140C65928 = 0i64;
		if (qword_140C65930)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65930)(qword_140C65930, 1i64);
		qword_140C65930 = 0i64;
		if (qword_140C65918)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65918)(qword_140C65918, 1i64);
		v26 = qword_140C65920;
		qword_140C65918 = 0i64;
		if (qword_140C65920)
		{
			if (*(_DWORD*)qword_140C65920)
			{
				*(_DWORD*)qword_140C65920 = 0;
				while (*(_QWORD*)(v26 + 8))
				{
					v27 = *(void(__fastcall****)(_QWORD, __int64))(v26 + 8);
					if (v27)
						(**v27)(v27, 1i64);
				}
			}
			if (*(_QWORD*)(v26 + 8))
				sub_1401A4A00((const void***)(v26 + 8));
			sub_14018B900(v26, 0);
		}
		qword_140C65920 = 0i64;
		if (qword_140C659A0)
			(**(void(__fastcall***)(__int64, __int64))qword_140C659A0)(qword_140C659A0, 1i64);
		qword_140C659A0 = 0i64;
		if (qword_140C659A8)
			(**(void(__fastcall***)(__int64, __int64))qword_140C659A8)(qword_140C659A8, 1i64);
		qword_140C659A8 = 0i64;
		if (qword_140C659B0)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C659B0 + 8i64))(qword_140C659B0, 1i64);
		v28 = qword_140C659B8;
		qword_140C659B0 = 0i64;
		if (qword_140C659B8)
		{
			sub_1404AA140((_QWORD*)qword_140C659B8);
			sub_14018B900(v28, 0);
		}
		qword_140C659B8 = 0i64;
		if (qword_140C659C0)
			(**(void(__fastcall***)(__int64, __int64))qword_140C659C0)(qword_140C659C0, 1i64);
		v29 = qword_140C659C8;
		qword_140C659C0 = 0i64;
		if (qword_140C659C8)
		{
			sub_1404AB910((_QWORD*)qword_140C659C8);
			sub_14018B900(v29, 0);
		}
		qword_140C659C8 = 0i64;
		sub_1404AC840();
		v30 = qword_140C659D0;
		if (qword_140C659D0)
		{
			sub_1404ABF70((_QWORD*)qword_140C659D0);
			sub_14018B900(v30, 0);
		}
		v31 = qword_140C658D8;
		qword_140C659D0 = 0i64;
		if (qword_140C658D8)
		{
			sub_140437660((__int64*)qword_140C658D8);
			sub_14018B900(v31, 0);
		}
		v32 = qword_140C659D8;
		if (qword_140C659D8)
		{
			sub_1404B0A00((__int64*)qword_140C659D8);
			sub_14018B900(v32, 0);
		}
		v33 = qword_140C659E0;
		qword_140C659D8 = 0i64;
		if (qword_140C659E0)
		{
			v34 = *(_QWORD*)(qword_140C659E0 + 8);
			if (v34)
				sub_14018B900(v34, 0);
			sub_14018B900(v33, 0);
		}
		v35 = qword_140C659E8;
		if (qword_140C659E8)
		{
			sub_1404B4360(qword_140C659E8);
			sub_14018B900(v35, 0);
		}
		qword_140C659E8 = 0i64;
		sub_1404CBED0();
		if (qword_140C65A00)
			sub_1404CBBE0(qword_140C65A00);
		qword_140C65A00 = 0i64;
		if (qword_140C65A08)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A08)(qword_140C65A08, 1i64);
		qword_140C65A08 = 0i64;
		if (qword_140C65A10)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A10)(qword_140C65A10, 1i64);
		qword_140C65A10 = 0i64;
		if (qword_140C65BC0)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65BC0)(qword_140C65BC0, 1i64);
		qword_140C65BC0 = 0i64;
		if (qword_140C65BB8)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65BB8)(qword_140C65BB8, 1i64);
		qword_140C65BB8 = 0i64;
		if (qword_140C65A18)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A18)(qword_140C65A18, 1i64);
		qword_140C65A18 = 0i64;
		if (qword_140C65A20)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A20)(qword_140C65A20, 1i64);
		qword_140C65A20 = 0i64;
		if (qword_140C65A30)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65A30)(qword_140C65A30, 1i64);
		qword_140C65A30 = 0i64;
	}
	if (*(int*)(a1 + 304) >= 3)
	{
		v36 = qword_140C65910;
		if (qword_140C65910)
		{
			if (*(_QWORD*)(qword_140C65910 + 16))
			{
				sub_140032150(qword_140C65910, *(_QWORD**)(*(_QWORD*)(qword_140C65910 + 8) + 8i64));
				*(_QWORD*)(*(_QWORD*)(v36 + 8) + 16i64) = *(_QWORD*)(v36 + 8);
				*(_QWORD*)(*(_QWORD*)(v36 + 8) + 8i64) = 0i64;
				*(_QWORD*)(*(_QWORD*)(v36 + 8) + 24i64) = *(_QWORD*)(v36 + 8);
				*(_QWORD*)(v36 + 16) = 0i64;
			}
			sub_14018B900(*(_QWORD*)(v36 + 8), 0);
			sub_14018B900(v36, 0);
		}
		qword_140C65910 = 0i64;
		if (qword_140C658D0)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C658D0 + 32i64))(qword_140C658D0, 1i64);
		qword_140C658D0 = 0i64;
		if (qword_140C658C8)
			sub_1404368F0((_QWORD*)qword_140C658C8);
		v37 = qword_140C63610;
		qword_140C658C8 = 0i64;
		if (qword_140C63610)
		{
			sub_14002CD00((__int64*)qword_140C63610);
			sub_14018B900(v37, 0);
		}
		v38 = *(_QWORD*)(a1 + 5536);
		qword_140C63610 = 0i64;
		if (v38)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
			*(_QWORD*)(a1 + 5536) = 0i64;
		}
		v39 = *(_QWORD*)(a1 + 5528);
		if (v39)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
			*(_QWORD*)(a1 + 5528) = 0i64;
		}
		v40 = *(_QWORD*)(a1 + 328);
		if (v40)
		{
			sub_1400E1D20(*(_QWORD*)(a1 + 328));
			sub_14018B900(v40, 0);
		}
		v41 = dword_140C65900-- == 1;
		*(_QWORD*)(a1 + 328) = 0i64;
		if (v41)
		{
			v42 = qword_140C658F8;
			if (qword_140C658F8)
			{
				sub_140445D00((_QWORD*)qword_140C658F8);
				sub_14018B900(v42, 0);
			}
			qword_140C658F8 = 0i64;
		}
		if (qword_140C65890)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65890)(qword_140C65890, 1i64);
		qword_140C65890 = 0i64;
		if (qword_140C63648)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C63648 + 16i64))(qword_140C63648, 1i64);
		qword_140C63648 = 0i64;
		if (qword_140C658F0)
			(**(void(__fastcall***)(__int64, __int64))qword_140C658F0)(qword_140C658F0, 1i64);
		v43 = (__int64*)qword_140C658E8;
		qword_140C658F0 = 0i64;
		if (qword_140C658E8)
		{
			sub_1404409D0(*(__int64**)(qword_140C658E8 + 88), *(__int64**)(qword_140C658E8 + 96));
			v44 = v43[11];
			if (v44)
				sub_14018B900(v44, 0);
			sub_1404400D0(v43);
			sub_14018B900((__int64)v43, 0);
		}
		qword_140C658E8 = 0i64;
		if (qword_140C63798)
		{
			v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63798 + 8i64))(qword_140C63798);
			v46 = qword_140C63798;
			if (!v45)
				v46 = 0i64;
			qword_140C63798 = v46;
		}
		v47 = qword_140C63600;
		if (qword_140C63600)
		{
			sub_14001D3B0((__int64*)qword_140C63600);
			sub_14018B900(v47, 0);
		}
		qword_140C63600 = 0i64;
		if (qword_140C65878)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65878 + 8i64))(qword_140C65878);
		if (qword_140C657F8)
		{
			if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C657F8 + 8i64))(qword_140C657F8))
				qword_140C657F8 = 0i64;
		}
		else
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v69 = TlsValue;
			v70 = v67;
			*(_QWORD*)&v72 = &off_140B5E648;
			*((_QWORD*)&v72 + 1) = L"Result";
			v71 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v72);
			*(_QWORD*)&v72 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = -2147467259;
			v76 = 0x141CDA768i64;
			v74 = v72;
			v75 = *(_OWORD*)lpTlsValue;
			v48 = sub_1401971E0(&dword_140C89F00, 22, &v76, &v74, &v69);
			*(_QWORD*)&v72 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v48)
				DebugBreak();
		}
		v49 = qword_140C657F0;
		if (qword_140C657F0)
		{
			sub_1402C7C50(qword_140C657F0);
			sub_14018B900(v49, 0);
		}
		v50 = qword_140C65800;
		qword_140C657F0 = 0i64;
		if (qword_140C65800)
		{
			sub_1402EAE60(qword_140C65800);
			sub_14018B900(v50, 0);
			qword_140C65800 = 0i64;
		}
		v51 = qword_140C65908;
		if (qword_140C65908)
		{
			sub_14044A9B0(qword_140C65908);
			sub_14018B900(v51, 0);
		}
		qword_140C65908 = 0i64;
		if (qword_140C65688)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 8i64))(qword_140C65688);
			qword_140C65688 = 0i64;
		}
		v52 = sub_1400B1260();
		if (v52 < 0)
			goto LABEL_173;
		if (FinalizeStsConnLib)
		{
			FinalizeStsConnLib();
			v52 = 0;
		}
		else
		{
			v52 = -2147467259;
		}
		if (hModule)
		{
			FreeLibrary(hModule);
			hModule = 0i64;
		}
		if (v52 < 0)
		{
		LABEL_173:
			v76 = 0x141CDAA30i64;
			sub_1401A3130(22, 1, &v76, (unsigned int)v52);
			return (unsigned int)v52;
		}
	}
	if (*(int*)(a1 + 304) >= 2)
	{
		v54 = sub_1400FCC70();
		if (v54 < 0)
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v69 = TlsValue;
			v70 = v67;
			*(_QWORD*)&v72 = &off_140B5E648;
			*((_QWORD*)&v72 + 1) = L"Result";
			v71 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v72);
			*(_QWORD*)&v72 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v54;
			v76 = 0x141CDAA90i64;
			v74 = v72;
			v75 = *(_OWORD*)lpTlsValue;
			v55 = sub_1401971E0(&dword_140C89EFC, 22, &v76, &v74, &v69);
			*(_QWORD*)&v72 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v55)
				DebugBreak();
			return (unsigned int)v54;
		}
		if (qword_140C7F950)
		{
			sub_1400563B0(qword_140C7F950);
			qword_140C7F950 = 0i64;
		}
		v56 = *(_QWORD**)(a1 + 336);
		if (v56)
		{
			if (*v56)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v56 + 8i64))(*v56);
				*v56 = 0i64;
			}
			v57 = v56[1];
			if (v57)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v57 + 8i64))(v57);
				v56[1] = 0i64;
			}
			v58 = v56[2];
			if (v58)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v58 + 8i64))(v58);
				v56[2] = 0i64;
			}
			sub_14018B900((__int64)v56, 0);
		}
		v59 = *(_QWORD*)(a1 + 5576);
		*(_QWORD*)(a1 + 336) = 0i64;
		if (v59)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v59 + 16i64))(v59, 1i64);
			*(_QWORD*)(a1 + 5576) = 0i64;
		}
		v60 = *(_QWORD*)(a1 + 5584);
		if (v60)
		{
			sub_140003AB0(*(_QWORD*)(a1 + 5584));
			sub_14018B900(v60, 0);
			*(_QWORD*)(a1 + 5584) = 0i64;
		}
		if (qword_140C65680)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 8i64))(qword_140C65680);
			qword_140C65680 = 0i64;
		}
		v61 = sub_140333A50();
		if (v61 < 0)
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v69 = TlsValue;
			v70 = v67;
			*(_QWORD*)&v72 = &off_140B5E648;
			*((_QWORD*)&v72 + 1) = L"Result";
			v71 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v72);
			*(_QWORD*)&v72 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v61;
			v76 = 0x141CDAAD0i64;
			v74 = v72;
			v75 = *(_OWORD*)lpTlsValue;
			v62 = sub_1401971E0(&dword_140C89EF8, 22, &v76, &v74, &v69);
			*(_QWORD*)&v72 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v62)
				DebugBreak();
		}
		v63 = sub_140051620();
		if (v63 < 0)
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v69 = TlsValue;
			v70 = v67;
			*(_QWORD*)&v72 = &off_140B5E648;
			*((_QWORD*)&v72 + 1) = L"Result";
			v71 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v72);
			*(_QWORD*)&v72 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v63;
			v76 = 0x141CDAB00i64;
			v74 = v72;
			v75 = *(_OWORD*)lpTlsValue;
			v64 = sub_1401971E0(&dword_140C89EF4, 22, &v76, &v74, &v69);
			*(_QWORD*)&v72 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v64)
				DebugBreak();
		}
		if (qword_140C891F0)
		{
			sub_1401A4970(qword_140C891F0);
			qword_140C891F0 = 0i64;
		}
		if (qword_140C7AAB8 && qword_140C7AAC0)
		{
			qword_140C7AAC0 = 0i64;
			(*(void (**)(void))(*(_QWORD*)qword_140C7AAB8 + 8i64))();
			qword_140C7AAB8 = 0i64;
			if (qword_140C7AAC8)
				sub_1407DCC5C((__int64*)qword_140C7AAC8);
			dword_140C6586C = 0;
		}
		if (qword_140C63970)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63970 + 8i64))(qword_140C63970);
			qword_140C63970 = 0i64;
		}
		sub_1407C0F60();
		sub_14024E5E0();
		dword_140C64D88 = 0;
	}
	v65 = (void(__fastcall***)(_QWORD, __int64))qword_140C63630;
	*(_DWORD*)(a1 + 304) = 0;
	if (v65)
		(**v65)(v65, 1i64);
	qword_140C63630 = 0i64;
	sub_140016E90((_QWORD*)a1);
	sub_14018B900(*(_QWORD*)(a1 + 5776), 0);
	*(_QWORD*)(a1 + 5776) = 0i64;
	*(_QWORD*)(a1 + 5792) = 0i64;
	sub_140011800(a1, 0i64);
	*(_DWORD*)(a1 + 5760) = 0;
	sub_1400114E0(a1, 0i64);
	sub_140017130();
	return 0i64;
}
// 140C3BEC0: invalid function type has been ignored
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C3BEC0: using guessed type __int64 (*FinalizeStsConnLib)(void);
// 140C63600: using guessed type __int64 qword_140C63600;
// 140C63610: using guessed type __int64 qword_140C63610;
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C63798: using guessed type __int64 qword_140C63798;
// 140C63970: using guessed type __int64 qword_140C63970;
// 140C64D88: using guessed type int dword_140C64D88;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 140C657F8: using guessed type __int64 qword_140C657F8;
// 140C65800: using guessed type __int64 qword_140C65800;
// 140C6586C: using guessed type int dword_140C6586C;
// 140C65878: using guessed type __int64 qword_140C65878;
// 140C65890: using guessed type __int64 qword_140C65890;
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140C658D0: using guessed type __int64 qword_140C658D0;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65900: using guessed type int dword_140C65900;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65928: using guessed type __int64 qword_140C65928;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C65988: using guessed type __int64 qword_140C65988;
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C659A8: using guessed type __int64 qword_140C659A8;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 140C659B8: using guessed type __int64 qword_140C659B8;
// 140C659C0: using guessed type __int64 qword_140C659C0;
// 140C659C8: using guessed type __int64 qword_140C659C8;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 140C659D8: using guessed type __int64 qword_140C659D8;
// 140C659E0: using guessed type __int64 qword_140C659E0;
// 140C659E8: using guessed type __int64 qword_140C659E8;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C65A00: using guessed type __int64 qword_140C65A00;
// 140C65A08: using guessed type __int64 qword_140C65A08;
// 140C65A10: using guessed type __int64 qword_140C65A10;
// 140C65A18: using guessed type __int64 qword_140C65A18;
// 140C65A20: using guessed type __int64 qword_140C65A20;
// 140C65A28: using guessed type __int64 qword_140C65A28;
// 140C65A30: using guessed type __int64 qword_140C65A30;
// 140C65A38: using guessed type __int64 qword_140C65A38;
// 140C65A40: using guessed type __int64 qword_140C65A40;
// 140C65A50: using guessed type __int64 qword_140C65A50;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65BB8: using guessed type __int64 qword_140C65BB8;
// 140C65BC0: using guessed type __int64 qword_140C65BC0;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140C665D8: using guessed type __int64 qword_140C665D8;
// 140C7AAB8: using guessed type __int64 qword_140C7AAB8;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 140C7DFE8: using guessed type _QWORD qword_140C7DFE8;
// 140C7F950: using guessed type __int64 qword_140C7F950;
// 140C891F0: using guessed type __int64 qword_140C891F0;
// 140C89EF4: using guessed type _DWORD dword_140C89EF4;
// 140C89EF8: using guessed type _DWORD dword_140C89EF8;
// 140C89EFC: using guessed type _DWORD dword_140C89EFC;
// 140C89F00: using guessed type _DWORD dword_140C89F00;
// 140C89F04: using guessed type _DWORD dword_140C89F04;

