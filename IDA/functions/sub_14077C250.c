//----- (000000014077C250) ----------------------------------------------------
const void**** __fastcall sub_14077C250(_QWORD* a1)
{
	_QWORD* v1; // rbx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	v1 = a1 + 28;
	*a1 = off_140B766F0;
	sub_140195D70((__int64)(a1 + 28));
	*(_DWORD*)v1 = 0;
	v3 = (_QWORD*)v1[2];
	if (v3)
		*v3 = v1[3];
	v4 = (_QWORD*)v1[3];
	if (v4)
		*v4 = v1[2];
	v1[2] = 0i64;
	v1[3] = 0i64;
	v5 = a1[22];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return sub_140779580((__int64)a1);
}
// 140B766F0: using guessed type __int64 (__fastcall *off_140B766F0[93])();

