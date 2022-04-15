//----- (00000001400531C0) ----------------------------------------------------
__int64 __fastcall sub_1400531C0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	int* v5; // rax
	_DWORD* v6; // rbx
	int v7; // r8d
	int* v8; // rax

	if (*(_DWORD*)(a1 + 20) && !*(_DWORD*)(a1 + 72))
	{
		if (*(_DWORD*)(qword_140C635F0 + 5896) == 1)
		{
			v2 = sub_14018B280(144i64, 0);
			v3 = (__int64)v2;
			if (v2)
			{
				*(_QWORD*)v2 = off_140B55048;
				v2[2] = 1;
				*((_QWORD*)v2 + 3) = 0i64;
				*((_QWORD*)v2 + 4) = 0i64;
				*((_QWORD*)v2 + 6) = 0i64;
				v2[14] = 0;
				*((_QWORD*)v2 + 2) = 0i64;
				v2[10] = 0;
				*((_QWORD*)v2 + 9) = 0i64;
				*(_QWORD*)v2 = off_140B55E10;
				*((_QWORD*)v2 + 10) = 0i64;
				*((_QWORD*)v2 + 11) = 0i64;
				*((_QWORD*)v2 + 12) = 0i64;
				v2[26] = -1;
				*((_QWORD*)v2 + 14) = 0i64;
				*((_QWORD*)v2 + 15) = 0i64;
				*((_QWORD*)v2 + 16) = 0i64;
				*((_QWORD*)v2 + 17) = 0i64;
			}
			else
			{
				v3 = 0i64;
			}
			sub_140052860(v3, (int*)L"UI\\Screens\\UI_CRB_AntiAddictionScreen.tex", 6i64, 3000);
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v3 + 104i64))(v3, sub_140052E10, 21i64);
			sub_140048100(a1, v3, 0);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			goto LABEL_22;
		}
		v4 = dword_140C3B9B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B9B0)
			v4 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C3B9C0 + v4))
		{
			v5 = sub_14018B280(264i64, 0);
			if (v5)
				v6 = (_DWORD*)sub_1400367F0((__int64)v5);
			else
				v6 = 0i64;
			if ((int)sub_140036BF0((__int64)v6) < 0)
				goto LABEL_21;
			v7 = 1;
		}
		else
		{
			v8 = sub_14018B280(616i64, 0);
			if (v8)
				v6 = (_DWORD*)sub_14001C590((__int64)v8);
			else
				v6 = 0i64;
			sub_14001C730(v6);
			(*(void(__fastcall**)(_DWORD*, _QWORD, __int64))(*(_QWORD*)v6 + 104i64))(v6, sub_140052D10, 1i64);
			sub_14001CA90((__int64)v6, 2u);
			v7 = 0;
		}
		sub_140048100(a1, (__int64)v6, v7);
	LABEL_21:
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
	LABEL_22:
		*(_DWORD*)(a1 + 72) = 1;
	}
	return 0i64;
}
// 140A0B4F0: using guessed type wchar_t aUiScreensUiCrb_3[42];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55E10: using guessed type __int64 (__fastcall *off_140B55E10[9])();
// 140C3B9B0: using guessed type int dword_140C3B9B0;
// 140C3B9C0: using guessed type int dword_140C3B9C0;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;

