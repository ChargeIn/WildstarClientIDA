//----- (00000001403413D0) ----------------------------------------------------
__int64 __fastcall sub_1403413D0(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	if (a2 == qword_140C7A090)
		qword_140C7A090 = *(_QWORD*)(a2 + 24);
	if (a2 == qword_140C7A098)
		qword_140C7A098 = *(_QWORD*)(a2 + 16);
	v2 = *(_QWORD*)(a2 + 24);
	if (v2)
		*(_QWORD*)(v2 + 16) = *(_QWORD*)(a2 + 16);
	v3 = *(_QWORD*)(a2 + 16);
	if (v3)
		*(_QWORD*)(v3 + 24) = *(_QWORD*)(a2 + 24);
	result = 0i64;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	return result;
}
// 140C7A090: using guessed type __int64 qword_140C7A090;
// 140C7A098: using guessed type __int64 qword_140C7A098;

