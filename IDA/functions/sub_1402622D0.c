//----- (00000001402622D0) ----------------------------------------------------
__int64 __fastcall sub_1402622D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 result; // rax
	int v6; // [rsp+30h] [rbp-28h] BYREF
	__int64 v7; // [rsp+38h] [rbp-20h]
	int v8; // [rsp+44h] [rbp-14h]

	if (*(_DWORD*)(a1 + 2408))
	{
		v4 = *(_QWORD*)(a1 + 2352);
		v6 = 1;
		v7 = v4;
		v8 = 0;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v6,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			4i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
		sub_14025ED60(a1, a2, 0, 0);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			*(_QWORD*)qword_140C65670,
			a1 + 1736,
			a1 + 1744,
			0i64);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

