//----- (00000001404CE2A0) ----------------------------------------------------
__int64 __fastcall sub_1404CE2A0(_QWORD* a1)
{
	unsigned int v1; // ebx
	unsigned int i; // esi
	__int64(__fastcall * v4)(wchar_t**, __int64); // rax
	unsigned int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int v8; // edx
	unsigned int v9; // eax

	v1 = 0;
	for (i = 0; ; ++i)
	{
		v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6C238, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C65364)
			goto LABEL_20;
		if ((int)sub_140224AA0() < 0)
			break;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A38 + 40i64))(qword_140C64A38);
	LABEL_7:
		if (i >= v5)
			break;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6C238, i, qword_140C63858);
		}
		else
		{
			if (dword_140C65364)
			{
				v7 = 0i64;
				goto LABEL_16;
			}
			if ((int)sub_140224AA0() < 0)
			{
				v7 = 0i64;
				goto LABEL_16;
			}
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A38 + 32i64))(qword_140C64A38, i);
		}
		v7 = v6;
	LABEL_16:
		sub_1404CE560(a1, *(_DWORD*)(v7 + 4), v7);
		v8 = *(_DWORD*)(v7 + 8);
		if (v8)
			sub_1404CE560(a1, v8, v7);
	}
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	while (1)
	{
	LABEL_20:
		if (v4)
		{
			v9 = v4(off_140A6BF60, qword_140C63858);
			goto LABEL_25;
		}
		if (dword_140C63C24 || (int)sub_140221360() < 0)
			return 0i64;
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C640A0 + 40i64))(qword_140C640A0);
	LABEL_25:
		if (v1 >= v9)
			return 0i64;
		if (qword_140C63848)
		{
			qword_140C63848(off_140A6BF60, v1, qword_140C63858);
			v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			++v1;
		}
		else
		{
			if (!dword_140C63C24 && (int)sub_140221360() >= 0)
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640A0 + 32i64))(qword_140C640A0, v1);
			v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
			++v1;
		}
	}
}
// 140A6BF60: using guessed type wchar_t *off_140A6BF60[2];
// 140A6C238: using guessed type wchar_t *off_140A6C238[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C24: using guessed type int dword_140C63C24;
// 140C640A0: using guessed type __int64 qword_140C640A0;
// 140C64A38: using guessed type __int64 qword_140C64A38;
// 140C65364: using guessed type int dword_140C65364;

