//----- (000000014043ECB0) ----------------------------------------------------
_QWORD* __fastcall sub_14043ECB0(__int64 a1)
{
	_QWORD* result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	result = (_QWORD*)qword_140C65898;
	v3 = *(_QWORD*)(qword_140C65898 + 28608);
	if (v3)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 88i64))(v3, a1);
		result = (_QWORD*)qword_140C65898;
	}
	v4 = result[3578];
	if (v4)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 88i64))(v4, a1);
		result = (_QWORD*)qword_140C65898;
	}
	v5 = result[3577];
	if (v5)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 88i64))(v5, a1);
		result = (_QWORD*)qword_140C65898;
	}
	v6 = result[3579];
	if (v6)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 88i64))(v6, a1);
		result = (_QWORD*)qword_140C65898;
	}
	v7 = result[3580];
	if (v7)
		return (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 88i64))(v7, a1);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

