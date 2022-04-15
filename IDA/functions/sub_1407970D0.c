//----- (00000001407970D0) ----------------------------------------------------
void __fastcall sub_1407970D0(__int64 a1, int a2)
{
	int i; // edi
	_DWORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rcx

	for (i = 2; i <= a2; ++i)
	{
		v5 = sub_1400580E0(a1, i);
		v6 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v6 = *(_QWORD*)v5;
		*(_DWORD*)(v6 + 8) = v5[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = *(_QWORD*)(v7 - 32);
		*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 24);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 0);
	}
}

