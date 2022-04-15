//----- (0000000140060D90) ----------------------------------------------------
_QWORD* __fastcall sub_140060D90(__int64 a1)
{
	__int64 v1; // rdi
	_QWORD* v3; // rax
	_QWORD* v4; // rdx
	__int64 v5; // rcx
	char v6; // al

	v1 = *(_QWORD*)(a1 + 32);
	v3 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v1 + 16))(
		*(_QWORD*)(v1 + 24),
		0i64,
		0i64,
		120i64);
	v4 = v3;
	if (!v3)
		sub_140061040(a1, 4);
	*(_QWORD*)(v1 + 120) += 120i64;
	v5 = *(_QWORD*)(a1 + 32);
	*v3 = *(_QWORD*)(v5 + 40);
	v6 = *(_BYTE*)(v5 + 32);
	*(_QWORD*)(v5 + 40) = v4;
	*((_BYTE*)v4 + 8) = 9;
	*((_BYTE*)v4 + 9) = v6 & 3;
	v4[2] = 0i64;
	*(_QWORD*)((char*)v4 + 76) = 0i64;
	v4[4] = 0i64;
	*(_QWORD*)((char*)v4 + 84) = 0i64;
	v4[3] = 0i64;
	*((_DWORD*)v4 + 18) = 0;
	*((_DWORD*)v4 + 28) = 0;
	v4[7] = 0i64;
	v4[5] = 0i64;
	*(_QWORD*)((char*)v4 + 92) = 0i64;
	v4[6] = 0i64;
	*((_DWORD*)v4 + 25) = 0;
	v4[8] = 0i64;
	return v4;
}

