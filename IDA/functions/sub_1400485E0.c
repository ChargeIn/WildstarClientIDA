//----- (00000001400485E0) ----------------------------------------------------
void __fastcall sub_1400485E0(__int64* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx

	*(_QWORD*)(*a1 + 16) = 0i64;
	v2 = *a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*a1 = 0i64;
	}
	sub_1400490B0((__m128*)a1);
	sub_1401429A0(qword_140C63678, *((_DWORD*)a1 + 1275));
	v3 = (_QWORD*)a1[632];
	if (v3)
		*v3 = a1[633];
	v4 = a1[633];
	if (v4)
		*(_QWORD*)(v4 + 5056) = a1[632];
	a1[632] = 0i64;
	a1[633] = 0i64;
	if (a1[631])
		sub_1401A4A00((const void***)a1 + 631);
	v5 = a1[614];
	if (v5)
		sub_14018B900(v5, 0);
	sub_14002EA60((__int64)(a1 + 4));
	v6 = a1[607];
	if (v6)
		sub_14018B900(v6, 0);
	sub_140008410((__int64)(a1 + 602));
	sub_14018B900(a1[603], 0);
	sub_14002E4A0(a1 + 591);
	v7 = a1[3];
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	v8 = a1[2];
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = a1[1];
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
}
// 140C63678: using guessed type __int64 qword_140C63678;

