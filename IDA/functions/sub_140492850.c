//----- (0000000140492850) ----------------------------------------------------
__int64 sub_140492850()
{
	__int64 v0; // rcx
	__int64 v1; // rbx
	__int64 result; // rax

	if (qword_140C65960)
		sub_140493DF0(qword_140C65960, 0);
	v0 = qword_140C65978;
	if (qword_140C65978)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65978 + 16i64))(qword_140C65978, 0i64);
		v0 = qword_140C65978;
	}
	if (qword_140C65970)
	{
		(**(void(__fastcall***)(__int64, __int64))qword_140C65970)(qword_140C65970, 1i64);
		v0 = qword_140C65978;
	}
	if (qword_140C65968)
	{
		(**(void(__fastcall***)(__int64, __int64))qword_140C65968)(qword_140C65968, 1i64);
		v0 = qword_140C65978;
	}
	if (v0)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v0 + 24i64))(v0, 1i64);
	v1 = qword_140C65958;
	if (qword_140C65958)
	{
		sub_140616D70(qword_140C65958);
		sub_14018B900(v1, 0);
	}
	if (qword_140C65960)
		(**(void(__fastcall***)(__int64, __int64))qword_140C65960)(qword_140C65960, 1i64);
	if (qword_140C65950)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65950 + 8i64))(qword_140C65950, 1i64);
	result = 0i64;
	qword_140C65970 = 0i64;
	qword_140C65968 = 0i64;
	qword_140C65978 = 0i64;
	qword_140C65958 = 0i64;
	qword_140C65960 = 0i64;
	qword_140C65950 = 0i64;
	return result;
}
// 140C65950: using guessed type __int64 qword_140C65950;
// 140C65958: using guessed type __int64 qword_140C65958;
// 140C65960: using guessed type __int64 qword_140C65960;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65978: using guessed type __int64 qword_140C65978;

