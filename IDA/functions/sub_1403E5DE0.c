//----- (00000001403E5DE0) ----------------------------------------------------
__int64 __fastcall sub_1403E5DE0(__int64 a1)
{
	char v2; // si
	__int64 result; // rax
	__int64 v4; // rcx
	int v5; // r15d
	__int64 v6; // rcx
	int* v7; // r14
	int v8; // eax
	unsigned int v9; // r13d
	int v10; // eax
	__int64 v11; // rcx
	int* v12; // r15
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int v15; // eax
	unsigned int v16; // r15d
	int v17; // eax
	int* v18; // r12
	int* v19; // r13
	__int64 v20; // rcx
	int* v21; // r14
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	int v24; // eax
	unsigned int v25; // r15d
	int v26; // eax
	__int64 v27; // rcx
	int* v28; // r14
	__int64 v29; // rbx
	unsigned __int64 v30; // rbx
	int* v31; // r14
	int v32; // ecx
	int v33; // eax
	int v34; // eax
	__int64 v35; // rcx
	int* v36; // r15
	__int64 v37; // rbx
	unsigned __int64 v38; // rbx
	char v39; // bl
	int v40; // ebx
	int v41; // esi
	_QWORD* v42; // rax
	unsigned int v43; // r15d
	__int64 v44; // rbx
	void(__fastcall * **v45)(_QWORD); // rax
	void(__fastcall * **v46)(_QWORD); // rax
	void(__fastcall * **v47)(_QWORD); // rax
	__int64 v48; // rsi
	void(__fastcall * **v49)(_QWORD); // rsi
	__int64 v50; // r8
	unsigned int v52; // eax
	__int64 v53; // rcx
	unsigned int v54; // esi
	unsigned __int64 i; // r14
	__int64 v56; // rbx
	__int64 v57; // rax
	unsigned int v58; // edx
	__int64 v59; // rax
	__int64 v60; // rcx
	int* v61; // rax
	_QWORD* v62; // rbx
	int v63; // edi
	int v64; // ebx
	int v65; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-49h] BYREF
	__int64 v67; // [rsp+38h] [rbp-41h]
	LPVOID Value; // [rsp+40h] [rbp-39h]
	__int128 v69; // [rsp+48h] [rbp-31h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+58h] [rbp-21h]
	__int64(__fastcall * *v71)(); // [rsp+70h] [rbp-9h] BYREF
	__int64 v72; // [rsp+78h] [rbp-1h]
	LPVOID v73; // [rsp+80h] [rbp+7h]
	__int128 v74; // [rsp+90h] [rbp+17h] BYREF
	__int128 v75; // [rsp+A0h] [rbp+27h]
	__int64 v76; // [rsp+E0h] [rbp+67h] BYREF

	v2 = 0;
	v76 = 0x141DF1EC0i64;
	sub_1401A3130(5, 2, &v76, a1);
	sub_140333CE0(a1 + 80);
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65808 + 88i64))(
		qword_140C65808,
		a1 + 31072);
	if ((int)result < 0)
		return result;
	sub_1403FC4A0(a1 + 29016);
	result = sub_14000B690(v4, 4i64);
	if ((int)result < 0)
		return result;
	v5 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
		qword_140C65680,
		L"Arial Unicode MS",
		7i64);
	if (v5 < 0)
		goto LABEL_43;
	v6 = *(_QWORD*)(a1 + 31568);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 31568) = 0i64;
	}
	v7 = 0i64;
	*((_QWORD*)&v69 + 1) = 0i64;
	*(_QWORD*)(a1 + 31568) = v76;
	v8 = dword_140C44ED0;
	v2 = 1;
	if (*(_DWORD*)qword_140C63750 < dword_140C44ED0)
		v8 = *(_DWORD*)qword_140C63750;
	v9 = dword_140C44EE0[v8];
	v10 = dword_140C7AEF0;
	if (*(_DWORD*)qword_140C63750 < dword_140C7AEF0)
		v10 = *(_DWORD*)qword_140C63750;
	v11 = 32i64 * v10;
	v12 = *(int**)((char*)&unk_140C7AF00 + v11 + 8);
	v13 = (__int64)(*(_QWORD*)((char*)&unk_140C7AF00 + v11 + 16) - (_QWORD)v12) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = sub_14018B280(2 * (v13 + 1), 0);
		*((_QWORD*)&v69 + 1) = v7;
	}
	v14 = 2 * v13;
	sub_1407DB590(v7, v12, v14);
	if ((int*)((char*)v7 + v14))
		*(_WORD*)((char*)v7 + v14) = 0;
	v5 = sub_1403F7130(a1, (__int64)v7, v9, 1);
	if (v5 < 0)
	{
	LABEL_43:
		v19 = (int*)*((_QWORD*)&v74 + 1);
	LABEL_44:
		v18 = (int*)*((_QWORD*)&v69 + 1);
	LABEL_45:
		v31 = (int*)*((_QWORD*)&v69 + 1);
		goto LABEL_46;
	}
	v2 = 3;
	v15 = dword_140C44F90;
	if (*(_DWORD*)qword_140C63750 < dword_140C44F90)
		v15 = *(_DWORD*)qword_140C63750;
	v16 = dword_140C44FA0[v15];
	v17 = dword_140C7B030;
	if (*(_DWORD*)qword_140C63750 < dword_140C7B030)
		v17 = *(_DWORD*)qword_140C63750;
	v18 = 0i64;
	v19 = 0i64;
	v20 = 32i64 * v17;
	v21 = *(int**)((char*)&unk_140C7B040 + v20 + 8);
	v22 = (__int64)(*(_QWORD*)((char*)&unk_140C7B040 + v20 + 16) - (_QWORD)v21) >> 1;
	if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v19 = sub_14018B280(2 * (v22 + 1), 0);
	v23 = 2 * v22;
	sub_1407DB590(v19, v21, v23);
	if ((int*)((char*)v19 + v23))
		*(_WORD*)((char*)v19 + v23) = 0;
	v5 = sub_1403F7130(a1, (__int64)v19, v16, 2);
	if (v5 < 0)
		goto LABEL_44;
	v2 = 7;
	v24 = dword_140C44FF0;
	if (*(_DWORD*)qword_140C63750 < dword_140C44FF0)
		v24 = *(_DWORD*)qword_140C63750;
	v25 = dword_140C45000[v24];
	v26 = dword_140C7B170;
	if (*(_DWORD*)qword_140C63750 < dword_140C7B170)
		v26 = *(_DWORD*)qword_140C63750;
	v27 = 32i64 * v26;
	v28 = *(int**)((char*)&unk_140C7B180 + v27 + 8);
	v29 = (__int64)(*(_QWORD*)((char*)&unk_140C7B180 + v27 + 16) - (_QWORD)v28) >> 1;
	if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v18 = sub_14018B280(2 * (v29 + 1), 0);
	v30 = 2 * v29;
	sub_1407DB590(v18, v28, v30);
	if ((int*)((char*)v18 + v30))
		*(_WORD*)((char*)v18 + v30) = 0;
	v5 = sub_1403F7130(a1, (__int64)v18, v25, 3);
	if (v5 < 0)
		goto LABEL_45;
	v31 = 0i64;
	v32 = *(_DWORD*)qword_140C63750;
	v33 = dword_140C45050;
	v2 = 15;
	if (*(_DWORD*)qword_140C63750 < dword_140C45050)
		v33 = *(_DWORD*)qword_140C63750;
	LODWORD(v76) = dword_140C45060[v33];
	v34 = dword_140C7B170;
	if (v32 < dword_140C7B170)
		v34 = v32;
	v35 = 32i64 * v34;
	v36 = *(int**)((char*)&unk_140C7B180 + v35 + 8);
	v37 = (__int64)(*(_QWORD*)((char*)&unk_140C7B180 + v35 + 16) - (_QWORD)v36) >> 1;
	if ((unsigned __int64)(v37 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v31 = sub_14018B280(2 * (v37 + 1), 0);
	v38 = 2 * v37;
	sub_1407DB590(v31, v36, v38);
	if ((int*)((char*)v31 + v38))
		*(_WORD*)((char*)v31 + v38) = 0;
	v5 = sub_1403F7130(a1, (__int64)v31, (unsigned int)v76, 4);
	if (v5 >= 0)
	{
		v39 = 0;
		goto LABEL_47;
	}
LABEL_46:
	v39 = 1;
LABEL_47:
	if ((v2 & 8) != 0)
	{
		v2 &= ~8u;
		if (v31)
			sub_14018B900((__int64)v31, 0);
	}
	if ((v2 & 4) != 0)
	{
		v2 &= ~4u;
		if (v18)
			sub_14018B900((__int64)v18, 0);
	}
	if ((v2 & 2) != 0)
	{
		v2 &= ~2u;
		if (v19)
			sub_14018B900((__int64)v19, 0);
	}
	if ((v2 & 1) != 0 && *((_QWORD*)&v69 + 1))
		sub_14018B900(*((__int64*)&v69 + 1), 0);
	if (v39)
	{
		TlsValue = &off_140B5E648;
		v67 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v71 = TlsValue;
		v72 = v67;
		*(_QWORD*)&v69 = &off_140B5E648;
		*((_QWORD*)&v69 + 1) = L"Result";
		v73 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v69);
		LODWORD(lpTlsValue[1]) = v5;
		*(_QWORD*)&v69 = &off_140B5E640;
		v75 = *(_OWORD*)lpTlsValue;
		v76 = 0x141DF1948i64;
		v74 = v69;
		v40 = sub_1401971E0(&dword_140C8A79C, 5, &v76, &v74, &v71);
		*(_QWORD*)&v69 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v40)
			DebugBreak();
		return (unsigned int)v5;
	}
	else
	{
		v41 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\SimplePS.sho",
			a1 + 31616);
		if (v41 < 0
			|| (v41 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\SimpleCbPS.sho",
				a1 + 31632),
				v41 < 0)
			|| (v41 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
				qword_140C65670,
				L"Shaders\\SimpleVS.sho",
				a1 + 31640),
				v41 < 0)
			|| (v41 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\GoofyPS.sho",
				a1 + 31624),
				v41 < 0))
		{
			TlsValue = &off_140B5E648;
			v67 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v71 = TlsValue;
			v72 = v67;
			*(_QWORD*)&v69 = &off_140B5E648;
			*((_QWORD*)&v69 + 1) = L"Result";
			v73 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v69);
			LODWORD(lpTlsValue[1]) = v41;
			*(_QWORD*)&v69 = &off_140B5E640;
			v75 = *(_OWORD*)lpTlsValue;
			v76 = 0x141DF23F8i64;
			v74 = v69;
			v65 = sub_1401971E0(&dword_140C8A790, 5, &v76, &v74, &v71);
			*(_QWORD*)&v69 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v65)
				DebugBreak();
			return (unsigned int)v41;
		}
		else
		{
			(*(void(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
				qword_140C65670,
				L"UI\\Cursors\\UI_CRB_Cursor_Target.tga",
				a1 + 32456);
			GetCursorPos((LPPOINT)(a1 + 30100));
			ScreenToClient(*(HWND*)(qword_140C635F0 + 8), (LPPOINT)(a1 + 30100));
			sub_1403C2230(a1);
			result = sub_1403E68F0(a1);
			if ((int)result >= 0)
			{
				result = sub_14062B830(a1 + 29088);
				if ((int)result >= 0)
				{
					v42 = *(_QWORD**)(a1 + 29080);
					*(_DWORD*)(a1 + 29232) = 2;
					*(_QWORD*)(a1 + 29216) = 0i64;
					v43 = 1;
					*(_DWORD*)(a1 + 29236) = 1;
					*v42 = a1 + 29088;
					sub_14043ADD0();
					v44 = *(_QWORD*)(a1 + 29504) + 240i64;
					v45 = (void(__fastcall***)(_QWORD))sub_140108E80(v44, (const __m128i*)L"NPCDialogBkgdRight");
					sub_1401097F0((_QWORD*)(a1 + 31664), v45);
					v46 = (void(__fastcall***)(_QWORD))sub_140108E80(v44, (const __m128i*)L"Dialog:sprHolo_Speech_NPC_Minimal");
					sub_1401097F0((_QWORD*)(a1 + 31712), v46);
					v47 = (void(__fastcall***)(_QWORD))sub_140108E80(v44, (const __m128i*)L"NPCDialogBkgdLeft");
					sub_1401097F0((_QWORD*)(a1 + 31760), v47);
					v48 = *(_QWORD*)(a1 + 29504);
					if (v48 && (!*(_QWORD*)(a1 + 31024) || !sub_14002C740(a1 + 31040, L"UI_Disconnect_Icon")))
					{
						v49 = (void(__fastcall***)(_QWORD))sub_140108E80(v48 + 240, (const __m128i*)L"UI_Disconnect_Icon");
						if (v49)
						{
							v50 = 0i64;
							while (aUiDisconnectIc[++v50] != 0)
								;
							sub_14001C480(a1 + 31040, (int*)L"UI_Disconnect_Icon", (int*)&aUiDisconnectIc[v50]);
						}
						sub_1401097F0((_QWORD*)(a1 + 31024), v49);
					}
					sub_140249520();
					sub_14024D4E0();
					sub_14024C3E0();
					sub_140216DA0();
					sub_14022D6E0();
					sub_14022DB20();
					sub_14021F160();
					sub_140231F20();
					sub_1402327A0();
					sub_1401F4900();
					sub_140240060();
					sub_1401FF740();
					sub_140225BA0();
					v52 = sub_1401FE410();
					v54 = 0;
					for (i = v52; v54 < i; *(_QWORD*)sub_1403FADA0(a1 + 28536, (int*)&TlsValue) = v56)
					{
						v56 = sub_1401FE4C0(v54);
						TlsValue = *(__int64(__fastcall***)())(v56 + 8);
						LODWORD(v67) = *(_DWORD*)(v56 + 4);
						++v54;
					}
					result = sub_1402EC590(v53, (__int64*)(a1 + 29624));
					if ((int)result >= 0)
					{
						v57 = sub_140200220(0x25Du);
						if (v57)
							v58 = *(_DWORD*)(v57 + 4);
						else
							v58 = 1;
						sub_1403EB430(a1, v58, 0, 0, 0);
						v59 = sub_140200220(0x426u);
						if (v59)
							v43 = *(_DWORD*)(v59 + 4);
						sub_1403EB430(a1, v43, 0, 0, 0);
						sub_140198D60(v60, (int*)L"reloadui", (__int64)sub_14053B4A0, a1);
						v61 = sub_14018B280(576i64, 0);
						if (v61)
							v62 = (_QWORD*)sub_140434560((__int64)v61);
						else
							v62 = 0i64;
						*(_QWORD*)(a1 + 32736) = v62;
						v63 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 160i64))(
							qword_140C65670,
							L"UI\\Cursors\\Point.tex",
							v62 + 11);
						if (v63 < 0 || (v63 = sub_140434A00(v62), v63 < 0))
						{
							v67 = 0i64;
							TlsValue = &off_140B5E648;
							Value = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &TlsValue);
							v71 = TlsValue;
							v72 = v67;
							*(_QWORD*)&v69 = &off_140B5E648;
							*((_QWORD*)&v69 + 1) = L"Result";
							v73 = Value;
							lpTlsValue[0] = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &v69);
							LODWORD(lpTlsValue[1]) = v63;
							*(_QWORD*)&v69 = &off_140B5E640;
							v75 = *(_OWORD*)lpTlsValue;
							v76 = 0x141DF1D68i64;
							v74 = v69;
							v64 = sub_1401971E0(&dword_140C8A794, 22, &v76, &v74, &v71);
							*(_QWORD*)&v69 = &off_140B5E648;
							TlsSetValue(dwTlsIndex, lpTlsValue[0]);
							TlsValue = &off_140B5E648;
							TlsSetValue(dwTlsIndex, Value);
							if (v64)
								DebugBreak();
							return (unsigned int)v63;
						}
						else
						{
							return 0i64;
						}
					}
				}
			}
		}
	}
	return result;
}
// 1403E5E4C: variable 'v4' is possibly undefined
// 1403E65EF: variable 'v53' is possibly undefined
// 1403E6660: variable 'v60' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AF7288: using guessed type wchar_t aArialUnicodeMs_3[17];
// 140AF7538: using guessed type wchar_t aReloadui_1[9];
// 140AF7AF0: using guessed type wchar_t aNpcdialogbkgdl[18];
// 140AF7B18: using guessed type wchar_t aUiDisconnectIc[19];
// 140AF7C58: using guessed type wchar_t aShadersSimplev_3[21];
// 140AF7C88: using guessed type wchar_t aShadersGoofyps[20];
// 140AF7CB0: using guessed type wchar_t aShadersSimplep_8[21];
// 140AF7CE0: using guessed type wchar_t aShadersSimplec[23];
// 140AF7D10: using guessed type wchar_t aNpcdialogbkgdr[19];
// 140AF7D70: using guessed type wchar_t aDialogSprholoS[34];
// 140AF7DF0: using guessed type wchar_t aUiCursorsUiCrb[36];
// 140B019F8: using guessed type wchar_t aUiCursorsPoint_5[21];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C44ED0: using guessed type int dword_140C44ED0;
// 140C44EE0: using guessed type int dword_140C44EE0[12];
// 140C44F90: using guessed type int dword_140C44F90;
// 140C44FA0: using guessed type int dword_140C44FA0[12];
// 140C44FF0: using guessed type int dword_140C44FF0;
// 140C45000: using guessed type int dword_140C45000[12];
// 140C45050: using guessed type int dword_140C45050;
// 140C45060: using guessed type int dword_140C45060[12];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C7AEF0: using guessed type int dword_140C7AEF0;
// 140C7B030: using guessed type int dword_140C7B030;
// 140C7B170: using guessed type int dword_140C7B170;
// 140C8A790: using guessed type _DWORD dword_140C8A790;
// 140C8A794: using guessed type _DWORD dword_140C8A794;
// 140C8A79C: using guessed type _DWORD dword_140C8A79C;

