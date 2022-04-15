//----- (00000001400B6DB0) ----------------------------------------------------
void __fastcall sub_1400B6DB0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]

	v4 = sub_14018EFA0(&v5, (__int64)L"%d");
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 160i64))(a1, a2, v4[1]);
	if (v6)
		sub_14018B900(v6, 0);
}
// 1409D3314: using guessed type wchar_t aD_3[3];

