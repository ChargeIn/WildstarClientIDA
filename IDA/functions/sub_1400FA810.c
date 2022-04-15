//----- (00000001400FA810) ----------------------------------------------------
__int64 __fastcall sub_1400FA810(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	int v5; // r8d
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx

	*(_DWORD*)(a1 + 24) = 1;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2))
	{
		v5 = *(_DWORD*)(a1 + 8);
		v6 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
		sub_1400579E0(v6, v4, v5);
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v9 = *(_QWORD*)(v8 + 16);
		*(_QWORD*)v9 = *v7;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
		*(_QWORD*)(v8 + 16) += 16i64;
		*(_DWORD*)(a1 + 8) = sub_1400578C0(*(_QWORD*)(a1 + 16));
	}
	return a1;
}
// 1400FA84A: variable 'v4' is possibly undefined
// 1400FA866: variable 'v8' is possibly undefined

