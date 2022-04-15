//----- (0000000140703CE0) ----------------------------------------------------
__int64 __fastcall sub_140703CE0(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = sub_140056D60(a1, 1u);
	if (qword_140C658F8 && (v4 = sub_140448420(v3, v2)) != 0)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 64i64))(v4);
		v6 = (_DWORD*)a1[2];
		v6[2] = 1;
		v7 = ((v5 >> 2) & 1) == 0;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140703CFF: variable 'v3' is possibly undefined
// 140C658F8: using guessed type __int64 qword_140C658F8;

