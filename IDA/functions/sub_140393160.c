//----- (0000000140393160) ----------------------------------------------------
__int64 __fastcall sub_140393160(_QWORD* a1)
{
	float* v2; // rax
	__int64 v3; // rcx
	_DWORD* v4; // rax

	v2 = (float*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			16i64,
			1i64,
			7i64,
			0);
	if (v2)
	{
		v3 = a1[5];
		if (v3)
			*v2 = (float)*(int*)(v3 + 36);
		else
			*v2 = 0.0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v4 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			16i64,
			1i64,
			5i64,
			0);
	if (v4)
	{
		*v4 = *(_DWORD*)(a1[4] + 52i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, a1[11]);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		a1[12],
		17i64);
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
		+ 656i64))(
			qword_140C65670,
			3i64,
			0i64,
			*(unsigned int*)(a1[4] + 64i64),
			0,
			*(_DWORD*)(a1[4] + 68i64),
			0,
			1);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

