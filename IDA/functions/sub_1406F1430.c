//----- (00000001406F1430) ----------------------------------------------------
__int64 __fastcall sub_1406F1430(_QWORD* a1)
{
	__int64 result; // rax
	signed int v3; // eax
	_DWORD* v4; // r8
	int v5; // edx
	unsigned __int8 v6; // cf

	if (!qword_140C65970)
		return 0i64;
	v3 = sub_140056D60(a1, 1u);
	if (v3 >= 4)
		return 0i64;
	v4 = (_DWORD*)a1[2];
	v5 = *(_DWORD*)(qword_140C65970 + 12);
	v4[2] = 1;
	v6 = _bittest(&v5, v3);
	result = 1i64;
	*v4 = v6;
	a1[2] += 16i64;
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;

