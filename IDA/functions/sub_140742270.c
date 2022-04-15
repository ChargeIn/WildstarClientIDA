//----- (0000000140742270) ----------------------------------------------------
__int64 __fastcall sub_140742270(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx

	v1 = (_QWORD*)sub_140056AB0(a1, 1u);
	v2 = v1;
	if (v1 && *v1)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
		*v2 = 0i64;
	}
	return 0i64;
}

