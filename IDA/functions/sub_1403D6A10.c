//----- (00000001403D6A10) ----------------------------------------------------
__int64 __fastcall sub_1403D6A10(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r8d
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // rdi
	char v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = 1;
	if (*(_DWORD*)(a1 + 120))
		v2 = *(_DWORD*)(a1 + 120);
	if (v2 < a2)
		return 19i64;
	if ((*(_BYTE*)(a1 + 128) & 0x20) != 0)
		return 23i64;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 64) + 340i64) & 4) == 0 && a2 > 1)
		return 11i64;
	if (*(_DWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 32i64))(a1, &v7) == 2
		|| *(_DWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 32i64))(a1, &v7) == 3)
	{
		return 23i64;
	}
	v5 = *(_QWORD*)(a1 + 64);
	if ((*(_DWORD*)(v5 + 340) & 0x100) != 0 && !*(_DWORD*)(a1 + 32))
		return 25i64;
	v6 = *(_QWORD*)(a1 + 72);
	if (!v6)
	{
		v6 = v5 + 8;
		if (v5 == -8)
			return 23i64;
	}
	if ((~(*(_DWORD*)(a1 + 128) >> 3) & 1) != 0 && sub_1403D8CB0(a1 + 240))
		return 0i64;
	result = 0i64;
	if (!*(_QWORD*)(v6 + 88))
		return 23i64;
	return result;
}

