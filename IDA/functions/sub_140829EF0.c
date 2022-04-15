//----- (0000000140829EF0) ----------------------------------------------------
__int64 __fastcall sub_140829EF0(__int64 a1, int a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
	_DWORD* v6; // rax
	_DWORD* i; // rcx
	_DWORD* v10; // rbx

	v6 = *(_DWORD**)a1;
	for (i = *(_DWORD**)(a1 + 8); v6 != i; v6 += 4)
	{
		if (*v6 == a2)
			break;
	}
	if (v6 == i)
		return 20i64;
	v10 = v6 + 2;
	if (v6 == (_DWORD*)-8i64)
		return 20i64;
	if (sub_14082A8E0((_QWORD*)(*(_QWORD*)v10 + 16i64), __SPAIR64__(a4, a3), a5)
		&& (!a6 || sub_14082A8E0((_QWORD*)(*(_QWORD*)v10 + 16i64), __SPAIR64__(a3, a4), a5)))
	{
		return 1i64;
	}
	return 2i64;
}

