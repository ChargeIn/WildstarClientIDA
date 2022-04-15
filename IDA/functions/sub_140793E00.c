//----- (0000000140793E00) ----------------------------------------------------
__int64 __fastcall sub_140793E00(_QWORD* a1)
{
	_DWORD* v1; // rax
	char* v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned __int64 v6; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0i64;
	else
		v3 = (char*)sub_140056BB0(a1, 1u, 0i64);
	v4 = (__int64)(a1[2] - a1[3]) >> 4;
	if ((unsigned int)sub_140057C60(a1, v3))
		sub_14005AB30((__int64)a1);
	sub_140061D30((__int64)a1, (char*)(a1[2] - 16i64), -1);
	v5 = a1[5];
	v6 = a1[2];
	if (v6 >= *(_QWORD*)(v5 + 16))
		*(_QWORD*)(v5 + 16) = v6;
	return (unsigned int)((__int64)(a1[2] - a1[3]) >> 4) - (unsigned int)v4;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

