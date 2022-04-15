//----- (00000001402DDE50) ----------------------------------------------------
__int64 __fastcall sub_1402DDE50(__int64 a1, __int64 a2)
{
	_QWORD* v5; // rax
	_QWORD* v6; // rbp
	__int64 v7; // rcx
	unsigned __int64* v8; // rbx
	int v9; // r15d
	unsigned __int64* v10; // r14
	__int64 v11; // rdi

	if (a1 == a2)
		return 1i64;
	v5 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v6 = v5;
	if (*(_QWORD*)(a1 + 12) != *v5)
		return 0i64;
	if (*(_QWORD*)(a1 + 20) != v5[1])
		return 0i64;
	v7 = *(_QWORD*)(a1 + 28);
	if (v7 != v5[2])
		return 0i64;
	v8 = *(unsigned __int64**)(a1 + 40);
	v9 = *(_DWORD*)(a1 + 20) * v7;
	v10 = (unsigned __int64*)((char*)v8 + *(_DWORD*)(a1 + 24) * *(_DWORD*)(a1 + 32));
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
	if (v8 >= v10)
		return 1i64;
	while (!(unsigned int)sub_1407E6AF0(v8, v11, v9))
	{
		v8 = (unsigned __int64*)((char*)v8 + *(int*)(a1 + 32));
		v11 += *((int*)v6 + 5);
		if (v8 >= v10)
			return 1i64;
	}
	return 0i64;
}

