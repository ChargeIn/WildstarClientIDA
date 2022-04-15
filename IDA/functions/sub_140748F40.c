//----- (0000000140748F40) ----------------------------------------------------
__int64 __fastcall sub_140748F40(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rax

	v2 = (__int16)sub_1403CDD00(a1, 0);
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (double)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

