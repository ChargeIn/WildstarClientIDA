//----- (00000001408D66C0) ----------------------------------------------------
__int64 __fastcall sub_1408D66C0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned int v7; // ecx

	*(_DWORD*)(a1 + 4) = a3;
	*(_DWORD*)a1 = a4;
	v5 = 76i64 * a3;
	if (!is_mul_ok(a3, 0x4Cui64))
		v5 = -1i64;
	v6 = sub_1408D34E0(a2, v5);
	v7 = 1;
	*(_QWORD*)(a1 + 8) = v6;
	if (!v6)
		return 52;
	return v7;
}

