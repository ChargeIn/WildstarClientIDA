//----- (0000000140049F50) ----------------------------------------------------
__int64 __fastcall sub_140049F50(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rax
	_QWORD* v3; // rbx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v2 = (_QWORD*)sub_140056AB0(a1, 1u);
		v3 = v2;
		if (v2 && *v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v3 = 0i64;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

