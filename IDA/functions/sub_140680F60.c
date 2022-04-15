//----- (0000000140680F60) ----------------------------------------------------
__int64 __fastcall sub_140680F60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	unsigned int v4; // eax
	__int64 v5; // rcx
	int v6; // eax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		v6 = sub_14056F370(v5, v4);
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		*v7 = v6 >= 0;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140680F96: variable 'v5' is possibly undefined

