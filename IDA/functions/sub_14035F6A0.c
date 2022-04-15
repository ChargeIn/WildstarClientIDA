//----- (000000014035F6A0) ----------------------------------------------------
__int64 __fastcall sub_14035F6A0(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rax
	__int64 v4; // rdi
	_OWORD* v5; // rax
	double v6; // xmm6_8
	double v7; // xmm0_8

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 72i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 119i64);
	(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 4i64, 5i64);
	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(v2 + 40),
		0i64,
		0i64);
	v3 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		48i64,
		0i64);
	v4 = v3;
	if (v3)
	{
		*(_OWORD*)(v3 + 16) = *(_OWORD*)(a1 + 976);
		v5 = (_OWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 232i64))(qword_140C65688);
		*(_QWORD*)&v6 = (unsigned int)dword_140C3B438;
		*(float*)&v6 = *(float*)&dword_140C3B438 * 0.0055555557;
		*(_OWORD*)v4 = *v5;
		HIDWORD(v7) = HIDWORD(v6);
		*(float*)&v7 = *(float*)&v6 * *(float*)(a1 + 640);
		*(float*)(v4 + 32) = sub_1408FC950(v7);
		*(float*)&v6 = *(float*)&v6 * *(float*)(a1 + 644);
		*(float*)(v4 + 36) = sub_1408FC950(v6);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 256i64),
		0i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		*(_QWORD*)qword_140C65670,
		v2 + 88,
		v2 + 96,
		0i64);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	return 0i64;
}
// 140C3B438: using guessed type int dword_140C3B438;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

