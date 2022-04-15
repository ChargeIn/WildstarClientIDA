//----- (000000014005AB30) ----------------------------------------------------
void __fastcall __noreturn sub_14005AB30(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // edx
	int v7; // edx

	v2 = *(_QWORD*)(a1 + 176);
	if (v2)
	{
		v3 = v2 + *(_QWORD*)(a1 + 64);
		if (*(_DWORD*)(v3 + 8) != 6)
			sub_140061040(a1, 5);
		v4 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v4 = *(_QWORD*)(v4 - 16);
		*(_DWORD*)(v4 + 8) = *(_DWORD*)(v4 - 8);
		v5 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(v5 - 16) = *(_QWORD*)v3;
		*(_DWORD*)(v5 - 8) = *(_DWORD*)(v3 + 8);
		if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 16)
		{
			v6 = *(_DWORD*)(a1 + 88);
			if (v6 < 1)
				v7 = v6 + 1;
			else
				v7 = 2 * v6;
			sub_140061210(a1, v7);
		}
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 1);
	}
	sub_140061040(a1, 2);
}

