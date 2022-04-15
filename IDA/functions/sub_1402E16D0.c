//----- (00000001402E16D0) ----------------------------------------------------
__int64 __fastcall sub_1402E16D0(__int64 a1, _DWORD* a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	_QWORD* v7; // rbx
	int v8; // [rsp+30h] [rbp+8h] BYREF
	int v9; // [rsp+34h] [rbp+Ch]

	v8 = *a2 / 16;
	v9 = a2[1] / 16;
	v4 = (*(__int64(__fastcall**)(int*))(a1 + 64))(&v8);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + 8 * (v4 % *(_QWORD*)(a1 + 48)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 72))(&v8, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	v7 = v5 + 3;
	if (v7 && *v7)
		return *(_QWORD*)(*v7 + 8i64 * ((*a2 & 0xF) + 16 * (a2[1] & 0xFu)) + 32);
	else
		return 0i64;
}

