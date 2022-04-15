#include "../winhttp.h"

//----- (0000000140008490) ----------------------------------------------------
int sub_140008490()
{
	__int64 v0; // rbx
	__int64 v1; // rbx
	__int64 v2; // rbx
	__int64 v3; // rbx
	__int64 v4; // rbx
	int result; // eax

	v0 = qword_140C63740;
	if (qword_140C63740)
	{
		sub_140197AE0(qword_140C63740);
		sub_14018B900(v0, 0);
	}
	qword_140C63740 = 0i64;
	if (qword_140C63748)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63748 + 8i64))(qword_140C63748);
		qword_140C63748 = 0i64;
	}
	v1 = qword_140C63750;
	if (qword_140C63750)
	{
		sub_14019C3A0((__int64*)qword_140C63750);
		sub_14018B900(v1, 0);
		qword_140C63750 = 0i64;
	}
	v2 = *(_QWORD*)&qword_140C63788;
	if (*(_QWORD*)&qword_140C63788)
	{
		sub_1401B4000(*(__int64*)&qword_140C63788);
		sub_14018B900(v2, 0);
		*(_QWORD*)&qword_140C63788 = 0i64;
	}
	v3 = qword_140C63758;
	if (qword_140C63758 && !_InterlockedDecrement((volatile signed __int32*)qword_140C63758) && v3)
	{
		sub_1401C8010(v3);
		sub_14018B900(v3, 0);
	}
	v4 = qword_140C63728;
	if (qword_140C63728)
	{
		sub_140195230(qword_140C63728);
		sub_14018B900(v4, 0);
		qword_140C63728 = 0i64;
	}
	if (qword_140C63760)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C63760 + 8i64))(qword_140C63760);
	sub_1401A0CC0();
	sub_1401A1360();
	sub_14018A160();
	result = (int)hObject;
	if (hObject)
		return CloseHandle(hObject);
	return result;
}
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C63760: using guessed type __int64 qword_140C63760;

