//----- (0000000140748F80) ----------------------------------------------------
__int64 __fastcall sub_140748F80(__int64 a1)
{
	__int16 v2; // ax
	__int64 v3; // r8
	int v4; // edx
	__int64 result; // rax

	v2 = sub_1403CDD00(a1, 1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = v2;
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(double*)v3 = (double)v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

