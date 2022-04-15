//----- (0000000140367E00) ----------------------------------------------------
__int64 __fastcall sub_140367E00(__int64 a1, int a2, float a3, int a4)
{
	__int64 result; // rax

	result = 0i64;
	*(float*)(a1 + 2684) = a3;
	*(_DWORD*)(a1 + 2656) = a2;
	if (a4)
	{
		*(float*)(a1 + 2716) = a3;
		*(_DWORD*)(a1 + 2688) = a2;
	}
	return result;
}

