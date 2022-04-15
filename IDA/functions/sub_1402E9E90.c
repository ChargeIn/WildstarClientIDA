//----- (00000001402E9E90) ----------------------------------------------------
_BOOL8 __fastcall sub_1402E9E90(__int64 a1, __int64 a2)
{
	_QWORD* v5; // rax
	unsigned int v6; // ebx
	unsigned __int64* v7; // rdi
	__int64 v8; // rax

	if (a1 == a2)
		return 1i64;
	v5 = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	if (*(_QWORD*)(a1 + 12) != *v5 || *(_QWORD*)(a1 + 20) != v5[1])
		return 0i64;
	v6 = *(_DWORD*)(a1 + 24);
	v7 = *(unsigned __int64**)(a1 + 32);
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
	return (unsigned int)sub_1407E6AF0(v7, v8, v6) == 0;
}

