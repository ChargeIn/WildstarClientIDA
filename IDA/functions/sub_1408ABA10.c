//----- (00000001408ABA10) ----------------------------------------------------
__int64 __fastcall sub_1408ABA10(__int64 a1)
{
	int v1; // esi
	__int64 v3; // rbx
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 2356);
	if (!*(_BYTE*)(a1 + 2361))
		return 1i64;
	if (!*(_BYTE*)(a1 + 2464))
		return 1i64;
	v3 = 0i64;
	if (!*(_DWORD*)(a1 + 2456))
		return 1i64;
	while (1)
	{
		result = sub_1408ADBD0(a1 + 8 * (v3 + 2 * (v3 + 134)), *(_QWORD*)(a1 + 16), v1);
		if ((_DWORD)result != 1)
			break;
		v3 = (unsigned int)(v3 + 1);
		if ((unsigned int)v3 >= *(_DWORD*)(a1 + 2456))
			return 1i64;
	}
	return result;
}

