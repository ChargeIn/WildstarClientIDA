//----- (0000000140880D10) ----------------------------------------------------
__int64 __fastcall sub_140880D10(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rcx
	unsigned int v6; // edi
	int v7; // edi
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF
	unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

	if ((unsigned int)a2 >= *(_DWORD*)(a1 + 40)
		|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, unsigned int*))(*(_QWORD*)a1 + 184i64))(
			a1,
			a2,
			a3,
			&v9) != 1)
	{
		return 2i64;
	}
	v5 = *(_QWORD*)(a1 + 88);
	v6 = v9;
	*(_WORD*)(a1 + 124) = 0;
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)v5 + 112i64))(v5, v6, 0i64, &v8) != 1)
		return 2i64;
	v7 = v6 - v8;
	*(_DWORD*)(a1 + 108) = v8;
	*(_DWORD*)(a1 + 112) = v7;
	sub_140880CA0(a1);
	return 1i64;
}

