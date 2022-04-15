//----- (0000000140531000) ----------------------------------------------------
__int64 __fastcall sub_140531000(_QWORD* a1)
{
	int v2; // edi
	__int64 v3; // rax
	__int64 v4; // rax

	v2 = 3;
	v3 = sub_14052E9B0(a1);
	if (v3)
		v2 = *(_DWORD*)(v3 + 1264);
	v4 = a1[2];
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v2;
	a1[2] += 16i64;
	return 1i64;
}

