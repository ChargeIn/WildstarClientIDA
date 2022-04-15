//----- (0000000140052D10) ----------------------------------------------------
void __fastcall sub_140052D10(__int64 a1, __int64 a2, __int64 a3)
{
	int* v4; // rax
	__int64 v5; // rdi
	int v6; // edx

	if (a1)
	{
		switch (a3)
		{
		case 1i64:
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(), __int64))(*(_QWORD*)a1 + 104i64))(
				a1,
				sub_140052D10,
				2i64);
			sub_14001CA90(a1, 1u);
			break;
		case 2i64:
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(), __int64))(*(_QWORD*)a1 + 104i64))(
				a1,
				sub_140052D10,
				3i64);
			sub_14001CA90(a1, 3u);
			break;
		case 3i64:
			v4 = sub_14018B280(264i64, 0);
			if (v4)
				v5 = sub_1400367F0((__int64)v4);
			else
				v5 = 0i64;
			if ((int)sub_140036BF0(v5) >= 0)
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, v5, 1i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 104i64))(a1, 0i64, 0i64);
			v6 = dword_140C3B9B0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B9B0)
				v6 = *(_DWORD*)qword_140C63750;
			sub_14001A6C0((__int64)&off_140C3B9A0, v6, 1);
			break;
		}
	}
}
// 140C3B9A0: using guessed type __int64 (__fastcall *off_140C3B9A0)();
// 140C3B9B0: using guessed type int dword_140C3B9B0;
// 140C63750: using guessed type __int64 qword_140C63750;

