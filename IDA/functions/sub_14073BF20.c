//----- (000000014073BF20) ----------------------------------------------------
__int64 __fastcall sub_14073BF20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	int v4; // edx
	_DWORD* v5; // rcx

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2 && (v3 = *(_QWORD*)(v2 + 24)) != 0)
		v4 = *(_DWORD*)(v3 + 16) & 0x20;
	else
		v4 = *(_DWORD*)(v2 + 4);
	v5 = (_DWORD*)a1[2];
	v5[2] = 1;
	*v5 = v4 != 0;
	a1[2] += 16i64;
	return 1i64;
}

