//----- (00000001408EB320) ----------------------------------------------------
__int64 __fastcall sub_1408EB320(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // r8d
	int i; // ecx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 304);
	if (v1)
	{
		v3 = *(_DWORD*)(a1 + 312);
		for (i = 0; v3; v3 &= v3 - 1)
			++i;
		result = sub_140833130(i << 11, v1);
		*(_DWORD*)(a1 + 128) = 0;
		*(_QWORD*)(a1 + 304) = 0i64;
	}
	return result;
}

