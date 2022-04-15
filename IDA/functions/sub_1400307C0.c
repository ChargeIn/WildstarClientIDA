//----- (00000001400307C0) ----------------------------------------------------
__int64 __fastcall sub_1400307C0(_DWORD* a1, __int64 a2)
{
	unsigned int v2; // edi
	unsigned int v3; // ebx
	unsigned int v6; // eax
	unsigned int v7; // r14d
	__int64 v8; // rax
	_DWORD* v9; // rcx

	v2 = 0;
	v3 = 0;
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A696E8, qword_140C63858);
	}
	else
	{
		if (dword_140C64804 || (int)sub_1401F00C0() < 0)
			return v2;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64370 + 40i64))(qword_140C64370);
	}
	v7 = v6;
	if (v6)
	{
		do
		{
			if (qword_140C63848)
			{
				v8 = qword_140C63848(off_140A696E8, v3, qword_140C63858);
			}
			else
			{
				if (dword_140C64804)
				{
					v9 = 0i64;
					goto LABEL_15;
				}
				if ((int)sub_1401F00C0() < 0)
				{
					v9 = 0i64;
					goto LABEL_15;
				}
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64370 + 32i64))(qword_140C64370, v3);
			}
			v9 = (_DWORD*)v8;
		LABEL_15:
			if (v9[2] == a1[1215] && v9[1] == a1[1213] && v9[3] == a1[1214])
			{
				++v2;
				if (a2)
					sub_1400FAD30(a2);
			}
			++v3;
		} while (v3 < v7);
	}
	return v2;
}
// 140A696E8: using guessed type wchar_t *off_140A696E8[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64370: using guessed type __int64 qword_140C64370;
// 140C64804: using guessed type int dword_140C64804;

