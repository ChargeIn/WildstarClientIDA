#include "../winhttp.h"

//----- (0000000140052E10) ----------------------------------------------------
void __fastcall sub_140052E10(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // eax
	int v5; // ebp
	int* v6; // rax
	_DWORD* v7; // rbx
	int* v8; // rax
	__int64 v9; // rdi
	int v10; // edx
	int* v11; // rax
	__int64 v12; // rdi
	__int64 v13; // r8
	int* v14; // rax
	int* v15; // rax
	__int64 v16; // rbx

	if (!a1)
		return;
	v3 = dword_140C3B9B0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B9B0)
		v3 = *(_DWORD*)qword_140C63750;
	v5 = *((unsigned __int8*)&off_140C3B9A0 + v3 + 32);
	switch (a3)
	{
	case 21i64:
		if (!*((_BYTE*)&off_140C3B9A0 + v3 + 32))
		{
			v6 = sub_14018B280(616i64, 0);
			if (v6)
				v7 = (_DWORD*)sub_14001C590((__int64)v6);
			else
				v7 = 0i64;
			sub_14001C730(v7);
			(*(void(__fastcall**)(_DWORD*, __int64(__fastcall*)(), __int64))(*(_QWORD*)v7 + 104i64))(
				v7,
				sub_140052E10,
				22i64);
			sub_14001CA90((__int64)v7, 3u);
			(*(void(__fastcall**)(__int64, _DWORD*, __int64))(*(_QWORD*)a1 + 112i64))(a1, v7, 1i64);
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v7 + 8i64))(v7);
			return;
		}
		goto LABEL_11;
	case 22i64:
	LABEL_11:
		v8 = sub_14018B280(144i64, 0);
		v9 = (__int64)v8;
		if (v8)
		{
			*(_QWORD*)v8 = off_140B55048;
			v8[2] = 1;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			v8[14] = 0;
			*((_QWORD*)v8 + 2) = 0i64;
			v8[10] = 0;
			*((_QWORD*)v8 + 9) = 0i64;
			*(_QWORD*)v8 = off_140B55E10;
			*((_QWORD*)v8 + 10) = 0i64;
			*((_QWORD*)v8 + 11) = 0i64;
			*((_QWORD*)v8 + 12) = 0i64;
			v8[26] = -1;
			*((_QWORD*)v8 + 14) = 0i64;
			*((_QWORD*)v8 + 15) = 0i64;
			*((_QWORD*)v8 + 16) = 0i64;
			*((_QWORD*)v8 + 17) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		sub_140052860(v9, (int*)L"UI\\Screens\\UI_CRB_CarbineSplashScreen.tex", 4i64, 3250);
		(*(void(__fastcall**)(__int64, __int64(__fastcall*)(), __int64))(*(_QWORD*)v9 + 104i64))(
			v9,
			sub_140052E10,
			23i64);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, v9, 1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		if (!v5)
		{
			v10 = dword_140C3B9B0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B9B0)
				v10 = *(_DWORD*)qword_140C63750;
			sub_14001A6C0((__int64)&off_140C3B9A0, v10, 1);
		}
		return;
	case 23i64:
		v11 = sub_14018B280(144i64, 0);
		v12 = (__int64)v11;
		if (v11)
		{
			*(_QWORD*)v11 = off_140B55048;
			v11[2] = 1;
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 4) = 0i64;
			*((_QWORD*)v11 + 6) = 0i64;
			v11[14] = 0;
			*((_QWORD*)v11 + 2) = 0i64;
			v11[10] = 0;
			*((_QWORD*)v11 + 9) = 0i64;
			*(_QWORD*)v11 = off_140B55E10;
			*((_QWORD*)v11 + 10) = 0i64;
			*((_QWORD*)v11 + 11) = 0i64;
			*((_QWORD*)v11 + 12) = 0i64;
			v11[26] = -1;
			*((_QWORD*)v11 + 14) = 0i64;
			*((_QWORD*)v11 + 15) = 0i64;
			*((_QWORD*)v11 + 16) = 0i64;
			*((_QWORD*)v11 + 17) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		sub_140052860(v12, (int*)L"UI\\Screens\\UI_CRB_NCSoftSplashScreen.tex", 4i64, 3250);
		v13 = 24i64;
	LABEL_28:
		(*(void(__fastcall**)(__int64, __int64(__fastcall*)(), __int64))(*(_QWORD*)v12 + 104i64))(
			v12,
			sub_140052E10,
			v13);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, v12, 1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		return;
	case 24i64:
		v14 = sub_14018B280(144i64, 0);
		v12 = (__int64)v14;
		if (v14)
		{
			*(_QWORD*)v14 = off_140B55048;
			v14[2] = 1;
			*((_QWORD*)v14 + 3) = 0i64;
			*((_QWORD*)v14 + 4) = 0i64;
			*((_QWORD*)v14 + 6) = 0i64;
			v14[14] = 0;
			*((_QWORD*)v14 + 2) = 0i64;
			v14[10] = 0;
			*((_QWORD*)v14 + 9) = 0i64;
			*(_QWORD*)v14 = off_140B55E10;
			*((_QWORD*)v14 + 10) = 0i64;
			*((_QWORD*)v14 + 11) = 0i64;
			*((_QWORD*)v14 + 12) = 0i64;
			v14[26] = -1;
			*((_QWORD*)v14 + 14) = 0i64;
			*((_QWORD*)v14 + 15) = 0i64;
			*((_QWORD*)v14 + 16) = 0i64;
			*((_QWORD*)v14 + 17) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		sub_140052860(v12, (int*)L"UI\\Screens\\UI_CRB_GiantSplashScreen.tex", 4i64, 3250);
		v13 = 25i64;
		goto LABEL_28;
	case 25i64:
		v15 = sub_14018B280(264i64, 0);
		if (v15)
			v16 = sub_1400367F0((__int64)v15);
		else
			v16 = 0i64;
		if ((int)sub_140036BF0(v16) >= 0)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, v16, 1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 104i64))(a1, 0i64, 0i64);
		break;
	}
}
// 140A0B4A0: using guessed type wchar_t aUiScreensUiCrb_2[40];
// 140A0B550: using guessed type wchar_t aUiScreensUiCrb_0[42];
// 140A0B5B0: using guessed type wchar_t aUiScreensUiCrb_1[41];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55E10: using guessed type __int64 (__fastcall *off_140B55E10[9])();
// 140C3B9A0: using guessed type __int64 (__fastcall *off_140C3B9A0)();
// 140C3B9B0: using guessed type int dword_140C3B9B0;
// 140C63750: using guessed type __int64 qword_140C63750;

