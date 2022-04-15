//----- (00000001405F4FC0) ----------------------------------------------------
__int64 __fastcall sub_1405F4FC0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rbx
	__int64 v4; // rax

	v2 = (_QWORD*)qword_140C65980;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
		qword_140C65980,
		*a2,
		0i64);
	if (v4 && (*(int(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v4 + 240i64))(v4, a2) >= 0)
		sub_1405F5670(v2);
	return 0i64;
}
// 140C65980: using guessed type __int64 qword_140C65980;

