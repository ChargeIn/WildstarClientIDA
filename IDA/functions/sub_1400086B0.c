//----- (00000001400086B0) ----------------------------------------------------
__int64 sub_1400086B0()
{
	int* v0; // rax
	int* v1; // rax
	int* v2; // rax
	__int64 result; // rax
	__int64 v4; // rcx

	if (!sub_140193B70(5u, 1u, 3u))
	{
		MessageBoxW(0i64, Text, L"WildStar", 0);
		ExitProcess(1u);
	}
	if (sub_140193B70(5u, 2u, 0) && !sub_140193B70(5u, 2u, 2u))
	{
		MessageBoxW(0i64, aThisVersionOfW_0, L"WildStar", 0);
		ExitProcess(1u);
	}
	sub_140193640();
	qword_140C67400 = 0i64;
	qword_140C67408 = 0i64;
	qword_140C67410 = 0i64;
	hObject = 0i64;
	dword_140C63738 = GetCurrentThreadId();
	sub_140189E90();
	sub_1401A3470();
	sub_14018CC40();
	dword_140C884A4 = 0;
	if (!qword_140C63760)
	{
		v0 = sub_14018B280(80i64, 0);
		if (v0)
		{
			qword_140C63760 = (__int64)v0;
			*(_QWORD*)v0 = off_140B5E718;
			*((_QWORD*)v0 + 2) = 0i64;
			*((_QWORD*)v0 + 3) = 0i64;
			*((_QWORD*)v0 + 4) = 0i64;
			*((_QWORD*)v0 + 5) = 0i64;
			*((_QWORD*)v0 + 7) = 0i64;
			*((_QWORD*)v0 + 8) = 0i64;
			*((_QWORD*)v0 + 9) = 0i64;
			v0[2] = 1;
			*((_QWORD*)v0 + 6) = 0i64;
		}
	}
	if (!qword_140C63728)
	{
		v1 = sub_14018B280(2416i64, 0);
		if (v1)
			qword_140C63728 = sub_140195170((__int64)v1);
		else
			qword_140C63728 = 0i64;
	}
	sub_14019E4A0();
	sub_14018D680();
	if (!qword_140C63750)
	{
		v2 = sub_14018B280(72i64, 0);
		if (v2)
			qword_140C63750 = sub_14019C320((__int64)v2);
		else
			qword_140C63750 = 0i64;
	}
	result = sub_140199E60();
	if (!qword_140C63740)
	{
		result = (__int64)sub_14018B280(80i64, 0);
		v4 = result;
		if (result)
		{
			*(_QWORD*)(result + 16) = 0i64;
			*(_QWORD*)(result + 24) = 0i64;
			*(_QWORD*)(result + 32) = 0i64;
			*(_QWORD*)(result + 40) = 0i64;
			*(_QWORD*)result = 0i64;
			*(_DWORD*)(result + 8) = 0;
			qword_140C63740 = result;
			*(_QWORD*)(result + 48) = 0i64;
			*(_QWORD*)(result + 56) = 0i64;
			*(_QWORD*)(result + 64) = 0i64;
			*(_QWORD*)(result + 72) = 0i64;
			result += 40i64;
			*(_QWORD*)(v4 + 40) = v4;
			*(_QWORD*)(v4 + 32) = v4 + 40;
		}
		else
		{
			qword_140C63740 = 0i64;
		}
	}
	return result;
}
// 140B5E718: using guessed type __int64 (__fastcall *off_140B5E718[4])();
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C63738: using guessed type int dword_140C63738;
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C884A4: using guessed type int dword_140C884A4;

