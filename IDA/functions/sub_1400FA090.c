//----- (00000001400FA090) ----------------------------------------------------
__int64 __fastcall sub_1400FA090(__int64 a1, __int64 a2)
{
	int v3; // ebx
	_DWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // r8

	v3 = a2;
	sub_1400579E0(*(_QWORD*)(a1 + 16), a2, *(_DWORD*)(a1 + 8));
	v4 = sub_1400580E0(*(_QWORD*)(a1 + 16), v3);
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *(_QWORD*)v4;
	*(_DWORD*)(v6 + 8) = v4[2];
	*(_QWORD*)(v5 + 16) += 16i64;
	*(_DWORD*)(a1 + 8) = sub_1400578C0(*(_QWORD*)(a1 + 16));
	return 0i64;
}
// 1400FA0BA: variable 'v5' is possibly undefined

