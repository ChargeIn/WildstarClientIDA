//----- (00000001400360F0) ----------------------------------------------------
__int64 __fastcall sub_1400360F0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned __int64 v5; // rcx
	__int64 v6; // r8
	__m128i* v7; // rbx
	__int64 v8; // rax
	const __m128i* v9; // rdi
	unsigned __int64 v10; // rax
	__int64 v11; // rcx
	__int16* v12; // rax
	__int64 v13; // r14
	int* v14; // rbp
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	__int64 v19; // [rsp+28h] [rbp-40h]

	result = sub_14000B690(a1, 3i64);
	if ((int)result >= 0)
	{
		v19 = a1 + 224;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65680 + 32i64))(
			qword_140C65680,
			L"Trebuchet MS",
			10i64) < 0)
			goto LABEL_34;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\SimplePS.sho",
			a1 + 232) < 0)
			goto LABEL_34;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			L"UI\\Cursors\\Hourglass.tex",
			a1 + 216) < 0)
			goto LABEL_34;
		LODWORD(v19) = 256;
		if ((*(int(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, __int64, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			L"UI\\Textures\\UI_CRB_LoadingProgress.tex",
			0i64,
			1i64,
			1,
			v19,
			0,
			0,
			a1 + 248) < 0
			|| (*(int(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				L"UI\\Textures\\UI_CRB_LoadingTipBack.tex",
				0i64,
				1i64,
				1,
				256,
				0,
				0,
				a1 + 256) < 0)
		{
			goto LABEL_34;
		}
		v7 = 0i64;
		if (*(_DWORD*)(qword_140C635F0 + 5704))
			goto LABEL_17;
		v8 = sub_14024ACC0(a2);
		if (!v8)
			goto LABEL_17;
		v5 = *(_QWORD*)(v8 + 24);
		v6 = qword_140C3FE68;
		v9 = 0i64;
		if (v5 && v5 <= qword_140C3FE70)
			v9 = (const __m128i*)(qword_140C3FE68 + v5);
		v10 = *(_QWORD*)(v8 + 32);
		if (v10 && v10 <= qword_140C3FE70)
			v7 = (__m128i*)(qword_140C3FE68 + v10);
		if (!v9 || !(unsigned int)sub_1401B58D0(v5, v9, qword_140C3FE68))
			LABEL_17:
		v9 = (const __m128i*)L"UI\\Screens\\UI_CRB_WorldID51_LoadScreen.tex";
		if (!v7 || !(unsigned int)sub_1401B58D0(v5, v7, v6))
			v7 = (__m128i*)L"Art\\Prop\\Character_Creation\\Loading\\PRP_Loading_Temp_000.m3";
		if ((*(int(__fastcall**)(__int64, const __m128i*, _QWORD, __int64, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v9,
			0i64,
			1i64,
			1,
			256,
			0,
			0,
			a1 + 240) < 0
			|| (int)sub_1400364B0(a1, v7) < 0)
		{
		LABEL_34:
			*(_QWORD*)(a1 + 72) = 1i64;
		}
		else
		{
			v12 = sub_14034BDD0(v11, 474114);
			v13 = *(_QWORD*)(a1 + 120);
			v14 = (int*)v12;
			if (v12)
			{
				v15 = 0i64;
				if (*v12)
				{
					do
						++v15;
					while (v12[v15]);
				}
				v16 = sub_14018B280(2 * v15 + 18, 0);
				if (v16)
				{
					*((_QWORD*)v16 + 1) = v15;
					*(_QWORD*)v16 = off_140B55060;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = v16 + 4;
				v18 = 2 * v15;
				sub_1407DB590(v16 + 4, v14, v18);
				*(_WORD*)((char*)v17 + v18) = 0;
				*(_QWORD*)(a1 + 120) = v17;
			}
			else
			{
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			sub_140036600(a1);
			*(_DWORD*)(a1 + 72) = 0;
			*(_DWORD*)(a1 + 76) = 1;
			sub_140051AF0(2, 127);
		}
		*(_DWORD*)(a1 + 80) = 0;
		return 0i64;
	}
	return result;
}
// 1400362AD: variable 'v5' is possibly undefined
// 1400362AD: variable 'v6' is possibly undefined
// 14003632A: variable 'v11' is possibly undefined
// 1409DE788: using guessed type wchar_t aTrebuchetMs[13];
// 1409F5480: using guessed type wchar_t aArtPropCharact[60];
// 1409F54F8: using guessed type wchar_t aUiCursorsHourg[25];
// 1409F5530: using guessed type wchar_t aUiScreensUiCrb[43];
// 1409F5588: using guessed type wchar_t aShadersSimplep[21];
// 1409F55C0: using guessed type wchar_t aUiTexturesUiCr_0[38];
// 1409F5610: using guessed type wchar_t aUiTexturesUiCr[39];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;

