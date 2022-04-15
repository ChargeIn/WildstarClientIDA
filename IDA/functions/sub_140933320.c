//----- (0000000140933320) ----------------------------------------------------
__int64 __fastcall sub_140933320(__int64 a1)
{
	_QWORD* v1; // rbx
	_QWORD* v3; // rcx
	_QWORD* v4; // rbx
	_QWORD* v5; // rcx

	v1 = *(_QWORD**)(a1 + 56);
	while (v1)
	{
		v3 = v1;
		v1 = (_QWORD*)*v1;
		off_140C1B1E8(v3);
	}
	v4 = *(_QWORD**)(a1 + 64);
	while (v4)
	{
		v5 = v4;
		v4 = (_QWORD*)*v4;
		off_140C1B1E8(v5);
	}
	return off_140C1B1E8(a1);
}
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

