//----- (00000001408284C0) ----------------------------------------------------
__int64 __fastcall sub_1408284C0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax

	v1 = (_QWORD*)qword_140C61BE0;
	v2 = qword_140C61BE8;
	if (qword_140C61BE0 == qword_140C61BE8)
		return 2i64;
	do
	{
		if (*v1 == a1)
			break;
		++v1;
	} while (v1 != (_QWORD*)qword_140C61BE8);
	if (v1 == (_QWORD*)qword_140C61BE8)
		return 2i64;
	if ((unsigned __int64)v1 < qword_140C61BE8 - 8)
	{
		qmemcpy(v1, v1 + 1, 8 * (((unsigned __int64)(qword_140C61BE8 - 8 - (_QWORD)v1 - 1) >> 3) + 1));
		v2 = qword_140C61BE8;
	}
	qword_140C61BE8 = v2 - 8;
	return 1i64;
}
// 140C61BE0: using guessed type __int64 qword_140C61BE0;
// 140C61BE8: using guessed type __int64 qword_140C61BE8;

