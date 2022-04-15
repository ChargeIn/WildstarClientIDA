//----- (000000014002A3D0) ----------------------------------------------------
__int64 __fastcall sub_14002A3D0(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rax
	__int64 v4; // rax
	int v5; // r13d
	__int64 v6; // rax
	_DWORD* v7; // rcx
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	int v11; // ebx
	int v12; // ebx
	__int64 v13; // rdx
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rsi
	_QWORD* v17; // rax
	__int64 v18; // rcx
	unsigned __int16 v19; // bx
	__int64 v20; // r8
	const wchar_t* v21; // rcx
	unsigned __int16 v22; // r9
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // r8
	const wchar_t* v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rdx
	_QWORD* v38; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-49h] BYREF
	char(__fastcall * v40)(__int64, int*); // [rsp+38h] [rbp-41h]
	LPVOID Value; // [rsp+40h] [rbp-39h]
	__int64(__fastcall * *v42)(); // [rsp+50h] [rbp-29h] BYREF
	char(__fastcall * v43)(__int64, int*); // [rsp+58h] [rbp-21h]
	LPVOID v44; // [rsp+60h] [rbp-19h]
	__int128 v45; // [rsp+70h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp+7h]
	__int128 v47; // [rsp+90h] [rbp+17h] BYREF
	__int128 v48; // [rsp+A0h] [rbp+27h]
	__int64 v49; // [rsp+E8h] [rbp+6Fh] BYREF

	result = sub_14000B690(qword_140C635F0, 3i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Point.tex",
			a1 + 80);
		if ((int)result >= 0)
		{
			v3 = sub_14018B280(3632i64, 0);
			if (v3)
				v4 = sub_1400E2EF0(
					(__int64)v3,
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
					(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
					0i64,
					0i64);
			else
				v4 = 0i64;
			*(_QWORD*)(a1 + 88) = v4;
			v5 = sub_140109290((__int64*)(v4 + 240), L"UI\\ClientSprites.xml", 0i64);
			if (v5 < 0)
			{
				v40 = 0i64;
				TlsValue = &off_140B5E648;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v42 = TlsValue;
				v43 = v40;
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				v44 = Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				v6 = 0x141CE8A30i64;
				v7 = &unk_140C8A000;
				goto LABEL_18;
			}
			v5 = sub_140109290(
				(__int64*)(*(_QWORD*)(a1 + 88) + 240i64),
				L"UI\\Assets\\Docs\\Sprites\\BasicSprites.xml",
				0i64);
			if (v5 < 0)
			{
				v40 = 0i64;
				TlsValue = &off_140B5E648;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v42 = TlsValue;
				v43 = v40;
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				v44 = Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				v6 = 0x141CE88C8i64;
				v7 = &unk_140C89FFC;
				goto LABEL_18;
			}
			v8 = sub_140109290((__int64*)(*(_QWORD*)(a1 + 88) + 240i64), L"UI\\Assets\\Docs\\Sprites\\BK3.xml", 0i64);
			if (v8 < 0)
			{
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				*(_QWORD*)&v45 = &off_140B5E640;
				LODWORD(lpTlsValue[1]) = v8;
				v47 = v45;
				v48 = *(_OWORD*)lpTlsValue;
				v49 = 0x141CE89F8i64;
				v9 = sub_140196D80(&dword_140C89FF8, 22, &v49, &v47);
				*(_QWORD*)&v45 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				if (v9)
					DebugBreak();
			}
			v10 = sub_140109290((__int64*)(*(_QWORD*)(a1 + 88) + 240i64), L"UI\\SpriteDocs\\CRB_Basekit.xml", 0i64);
			if (v10 < 0)
			{
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				*(_QWORD*)&v45 = &off_140B5E640;
				LODWORD(lpTlsValue[1]) = v10;
				v47 = v45;
				v48 = *(_OWORD*)lpTlsValue;
				v49 = 0x141CE8B30i64;
				v11 = sub_140196D80(&dword_140C89FF4, 22, &v49, &v47);
				*(_QWORD*)&v45 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				if (v11)
					DebugBreak();
			}
			v5 = sub_14010DD80(
				*(_QWORD***)(*(_QWORD*)(a1 + 88) + 368i64),
				(__m128i*)L"UI\\Assets\\Docs\\General\\WindowTemplates.xml");
			if (v5 < 0)
			{
				TlsValue = &off_140B5E648;
				v40 = 0i64;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v42 = TlsValue;
				v43 = v40;
				*(_QWORD*)&v45 = &off_140B5E648;
				*((_QWORD*)&v45 + 1) = L"Result";
				v44 = Value;
				lpTlsValue[0] = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v45);
				v6 = 0x141CE8BB0i64;
				v7 = &unk_140C89FF0;
			LABEL_18:
				*(_QWORD*)&v45 = &off_140B5E640;
				LODWORD(lpTlsValue[1]) = v5;
				v49 = v6;
				v47 = v45;
				v48 = *(_OWORD*)lpTlsValue;
				v12 = sub_1401971E0(v7, 22, &v49, &v47, &v42);
				*(_QWORD*)&v45 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue[0]);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if (v12)
				{
					DebugBreak();
					return (unsigned int)v5;
				}
				return (unsigned int)v5;
			}
			v13 = *(_QWORD*)(a1 + 88);
			v14 = **(_QWORD**)(*(_QWORD*)(v13 + 368) + 16i64);
			if (!v14)
			{
				TlsValue = &off_140B5E648;
				v40 = 0i64;
				Value = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v42 = TlsValue;
				v43 = v40;
				v44 = Value;
				v49 = 0x141CE8918i64;
				v15 = sub_1401971E0(&dword_140C89FEC, 22, &v49, &v42);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, Value);
				if (v15)
					DebugBreak();
				return (unsigned int)v5;
			}
			*(_QWORD*)(v13 + 2928) = v14;
			v16 = sub_1400E58C0(*(_QWORD*)(a1 + 88), (int*)L"Courier");
			if (!v16)
				return 2147500037i64;
			v17 = sub_1400F52E0(
				*(_QWORD*)(a1 + 88) + 2688i64,
				(__m128i*)L"UI\\ConsoleForm.xml",
				(int*)L"ConsoleWindow",
				0i64,
				0i64,
				-2);
			*(_QWORD*)(a1 + 96) = v17;
			if (!v17)
				return 2147500037i64;
			v18 = v17[86];
			v17[87] = v16;
			if (v18)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 40i64))(v18, *(_QWORD*)(v16 + 96));
			v19 = 67;
			v20 = 0i64;
			v21 = L"ConsoleInput";
			v22 = 67;
			do
			{
				v23 = v22;
				v22 = v21[1];
				++v21;
				v20 = v23 + 2860486313i64 * v20;
			} while (v22);
			v24 = sub_1400D3940(*(_QWORD**)(a1 + 96), L"ConsoleInput", v20);
			*(_QWORD*)(a1 + 104) = v24;
			if (!v24)
				return 2147500037i64;
			v25 = *(_QWORD*)(v24 + 688);
			*(_QWORD*)(v24 + 696) = v16;
			if (v25)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v25 + 40i64))(v25, *(_QWORD*)(v16 + 96));
			*(_QWORD*)(*(_QWORD*)(a1 + 104) + 664i64) |= 0x10ui64;
			sub_1400D3410(*(_QWORD*)(a1 + 104), (int*)off_140C2C610[0], (int*)"OnConsoleInputReturn");
			sub_1400D3410(*(_QWORD*)(a1 + 104), (int*)off_140C2C618[0], (int*)"OnConsoleInputTab");
			sub_140110EE0(*(_QWORD**)(a1 + 104), (int*)L"reloadui");
			sub_1400F2390(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"OnConsoleInputReturn", (__int64)sub_14002B110);
			sub_1400F2390(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"OnConsoleInputTab", (__int64)sub_14002AE30);
			sub_1400F2390(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"OnConsoleFloatValueChange", (__int64)sub_14002B2D0);
			sub_1400F2390(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"OnConsoleColorValueChange", (__int64)sub_14002BAC0);
			sub_1400F2390(*(_QWORD*)(a1 + 88) + 384i64, (__int64)"OnConsoleIntValueChange", (__int64)sub_14002B690);
			sub_1400D5450(*(_QWORD**)(*(_QWORD*)(a1 + 88) + 400i64));
			sub_140198D60(v26, (int*)L"showslider", (__int64)sub_14002BEA0, a1);
			sub_140198D60(v27, (int*)L"ss", (__int64)sub_14002BEA0, a1);
			sub_140198D60(v28, (int*)L"clear", (__int64)sub_14002C600, a1);
			sub_140198D60(v29, (int*)L"cls", (__int64)sub_14002C600, a1);
			sub_140198D60(v30, (int*)L"help", (__int64)sub_140199F70, a1);
			sub_140198D60(v31, (int*)"?", (__int64)sub_140199F70, a1);
			v32 = 0i64;
			v33 = L"ConsoleOutput";
			do
			{
				v34 = v19;
				v19 = v33[1];
				++v33;
				v32 = v34 + 2860486313i64 * v32;
			} while (v19);
			v35 = sub_1400D3940(*(_QWORD**)(a1 + 96), L"ConsoleOutput", v32);
			*(_QWORD*)(a1 + 112) = v35;
			if (v35)
			{
				v36 = *(_QWORD*)(v35 + 688);
				*(_QWORD*)(v35 + 696) = v16;
				if (v36)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v36 + 40i64))(v36, *(_QWORD*)(v16 + 96));
				TlsValue = (__int64(__fastcall**)())a1;
				v37 = *(_QWORD*)(qword_140C63748 + 64);
				v38 = (_QWORD*)(qword_140C63748 + 48);
				v40 = sub_14002B2B0;
				if (v37 == *(_QWORD*)(qword_140C63748 + 72))
				{
					sub_14019A0B0(v38, (char*)v37, &TlsValue);
				}
				else
				{
					if (v37)
					{
						*(_QWORD*)(v37 + 8) = sub_14002B2B0;
						*(_QWORD*)v37 = a1;
					}
					v38[2] += 16i64;
				}
				sub_1400E74A0(*(_QWORD*)(a1 + 88), 0.0);
				*(_DWORD*)(a1 + 72) = 0;
				return 0i64;
			}
			else
			{
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 14002AB08: variable 'v26' is possibly undefined
// 14002AB1E: variable 'v27' is possibly undefined
// 14002AB34: variable 'v28' is possibly undefined
// 14002AB4A: variable 'v29' is possibly undefined
// 14002AB60: variable 'v30' is possibly undefined
// 14002AB76: variable 'v31' is possibly undefined
// 14000B690: using guessed type __int64 __fastcall sub_14000B690(_QWORD, _QWORD);
// 140199F70: using guessed type __int64 __fastcall sub_140199F70();
// 1409D1E3C: using guessed type wchar_t aSs[3];
// 1409EE258: using guessed type wchar_t aUiCursorsPoint_0[21];
// 1409EE2C8: using guessed type wchar_t aCourier[8];
// 1409EE310: using guessed type wchar_t aUiAssetsDocsGe_0[39];
// 1409EE360: using guessed type wchar_t aUiAssetsDocsGe[41];
// 1409EE430: using guessed type wchar_t aUiClientsprite[21];
// 1409EE460: using guessed type wchar_t aUiAssetsDocsSp[40];
// 1409EE4B0: using guessed type wchar_t aUiAssetsDocsSp_0[31];
// 1409EE530: using guessed type wchar_t aUiSpritedocsCr[30];
// 1409EE5C0: using guessed type wchar_t aUiAssetsDocsGe_1[43];
// 1409EE618: using guessed type wchar_t aUiConsoleformX[19];
// 1409EE640: using guessed type wchar_t aConsolewindow[14];
// 1409EE678: using guessed type wchar_t aConsoleinput[13];
// 1409EE698: using guessed type wchar_t aReloadui[9];
// 1409EE738: using guessed type wchar_t aShowslider[11];
// 1409EE768: using guessed type wchar_t aClear[6];
// 1409EE778: using guessed type wchar_t aHelp[5];
// 1409EE788: using guessed type wchar_t aCls[4];
// 1409EE790: using guessed type wchar_t aConsoleoutput[14];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C2C610: using guessed type char *off_140C2C610[40];
// 140C2C618: using guessed type char *off_140C2C618[39];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C89FEC: using guessed type _DWORD dword_140C89FEC;
// 140C89FF4: using guessed type _DWORD dword_140C89FF4;
// 140C89FF8: using guessed type _DWORD dword_140C89FF8;

