//----- (00000001404C7770) ----------------------------------------------------
__int64 __fastcall sub_1404C7770(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rax
	_DWORD* v5; // rdi
	unsigned int v6; // ebx
	__int64 v8; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 88);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v8 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v8 = *(_QWORD*)(a1 + 88);
	if (v8 == v2)
		return 2147500037i64;
	v5 = *(_DWORD**)(v8 + 40);
	if (!v5)
		return 2147500037i64;
	if (v5[76])
	{
		if (v5[77])
		{
			v6 = *(_DWORD*)(a1 + 20);
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v5 + 248i64))(v5, v6);
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v5 + 256i64))(v5, v6);
			sub_1404C0DA0((__int64)v5);
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v5 + 232i64))(v5, v6);
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v5 + 240i64))(v5, v6);
			return 0i64;
		}
		sub_1404C78E0(a1, *(_QWORD*)(v8 + 40));
	}
	return 0i64;
}

