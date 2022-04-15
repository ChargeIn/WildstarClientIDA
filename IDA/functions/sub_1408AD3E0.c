//----- (00000001408AD3E0) ----------------------------------------------------
__int64 __fastcall sub_1408AD3E0(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
	unsigned int v8; // ebx
	__int64 result; // rax

	sub_1408AC810(a1, a2, a3, a4, a5, a6);
	v8 = 0;
	if (!*(_DWORD*)(a1 + 728))
		return 1i64;
	while (1)
	{
		result = sub_1408AF320(32i64 * v8 + a1 + 752, a2, *(_DWORD*)(a1 + 736) + (*(_DWORD*)(a1 + 736) >> 2));
		if ((_DWORD)result != 1)
			break;
		if (++v8 >= *(_DWORD*)(a1 + 728))
			return 1i64;
	}
	return result;
}

