//----- (00000001408AFC20) ----------------------------------------------------
__int64 __fastcall sub_1408AFC20(__int64 a1)
{
	int v1; // r8d
	__int64 result; // rax
	_DWORD* v4; // rdi
	__int64 v5; // rcx

	v1 = *(_DWORD*)(a1 + 8);
	result = (unsigned int)v1 >> 1;
	if ((_DWORD)result)
	{
		v4 = *(_DWORD**)a1;
		v5 = (unsigned int)result;
		result = 1065353216i64;
		while (v5)
		{
			*v4++ = 1065353216;
			--v5;
		}
	}
	*(float*)(a1 + 12) = (float)v1;
	return result;
}

