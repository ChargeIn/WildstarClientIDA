//----- (0000000140038BD0) ----------------------------------------------------
_WORD* __fastcall sub_140038BD0(__int64 a1)
{
	_WORD* v1; // r8
	__int64 v3; // rdi
	int* v4; // rax
	_WORD* result; // rax

	v1 = *(_WORD**)(a1 + 192);
	if (v1 && v1 < &v1[*((_QWORD*)v1 - 1)])
	{
		do
			*v1++ = 45;
		while ((unsigned __int64)v1 < *(_QWORD*)(a1 + 192) + 2i64 * *(_QWORD*)(*(_QWORD*)(a1 + 192) - 8i64));
	}
	v3 = *(_QWORD*)(a1 + 192);
	v4 = sub_14018B280(18i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = off_140B55060;
		*((_QWORD*)v4 + 1) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	result = v4 + 4;
	*result = 0;
	*(_QWORD*)(a1 + 192) = result;
	if (v3)
		return (_WORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

