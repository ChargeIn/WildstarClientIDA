//----- (00000001403DD120) ----------------------------------------------------
__int64 __fastcall sub_1403DD120(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = a1 + 29296;
	v3 = *(_QWORD*)(a1 + 29304);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = v3;
	v6 = v8;
	if (v8 == *(_QWORD*)(a1 + 29304))
		return 1i64;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 40) + 8i64))(*(_QWORD*)(v8 + 40));
	v8 = v6;
	sub_1403DFA70(v2, &v8);
	return 0i64;
}

