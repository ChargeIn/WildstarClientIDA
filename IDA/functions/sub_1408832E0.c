//----- (00000001408832E0) ----------------------------------------------------
__int64 __fastcall sub_1408832E0(unsigned int a1)
{
	__int64 v1; // rbx
	__int64 v2; // rcx

	if (a1 >= (unsigned int)((qword_140C62948 - qword_140C62940) >> 3))
		return 31i64;
	v1 = 8i64 * a1;
	v2 = *(_QWORD*)(v1 + qword_140C62940);
	if (!v2)
		return 31i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 40i64))(v2);
	*(_QWORD*)(v1 + qword_140C62940) = 0i64;
	return 1i64;
}
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;

