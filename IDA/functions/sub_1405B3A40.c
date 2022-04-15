//----- (00000001405B3A40) ----------------------------------------------------
__int64 sub_1405B3A40()
{
	__int64* v0; // rbx
	__int64 v1; // rdi

	v0 = &qword_140C89D80;
	v1 = 36i64;
	do
	{
		if (*v0)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*v0 + 48i64))(*v0);
		++v0;
		--v1;
	} while (v1);
	return 0i64;
}
// 140C89D80: using guessed type __int64 qword_140C89D80;

