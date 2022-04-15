//----- (000000014086EE10) ----------------------------------------------------
_QWORD* __fastcall sub_14086EE10(int a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rax
	__int64 v5; // rax

	v2 = sub_1408819F0(dword_140C10F20, 336i64);
	v3 = (_QWORD*)v2;
	if (!v2)
		return 0i64;
	sub_140859300(v2, a1);
	*v3 = off_1409A58D0;
	v4 = (_QWORD*)sub_1408819F0(dword_140C10F20, 8i64);
	v3[13] = v4;
	if (v4)
		*v4 = 0i64;
	v5 = qword_140C628A0;
	if (!qword_140C628A0)
		v5 = (__int64)v3;
	qword_140C628A0 = v5;
	if ((unsigned int)sub_14085AD70((__int64)v3) != 1)
	{
		(*(void(__fastcall**)(_QWORD*))(*v3 + 16i64))(v3);
		return 0i64;
	}
	return v3;
}
// 1409A58D0: using guessed type __int64 (__fastcall *off_1409A58D0[4])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C628A0: using guessed type __int64 qword_140C628A0;

