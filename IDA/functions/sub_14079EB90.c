//----- (000000014079EB90) ----------------------------------------------------
__int64 __fastcall sub_14079EB90(__int64 a1, unsigned int a2)
{
	int* v3; // rax
	int* v4; // rdx
	int* v5; // rdi
	__int64 v6; // rcx

	if (!a2 || (unsigned __int64)a2 < *(_QWORD*)(a1 + 96))
		return 2147500037i64;
	*(_DWORD*)(a1 + 80) = a2;
	if (*(_QWORD*)(a1 + 96) > (unsigned __int64)a2)
		*(_QWORD*)(a1 + 96) = a2;
	v3 = sub_14018DBC0(*(_QWORD*)(a1 + 88), a2, 8i64);
	v4 = *(int**)(a1 + 88);
	v5 = v3;
	if (v4 != v3)
	{
		sub_1407DB590(v3, v4, 8i64 * *(_QWORD*)(a1 + 96));
		v6 = *(_QWORD*)(a1 + 88);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		*(_QWORD*)(a1 + 88) = v5;
	}
	return 0i64;
}

