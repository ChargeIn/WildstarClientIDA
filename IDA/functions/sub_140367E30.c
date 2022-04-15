//----- (0000000140367E30) ----------------------------------------------------
__int64 __fastcall sub_140367E30(__int64 a1)
{
	__int64 i; // rdx
	__int64 result; // rax

	for (i = *(_QWORD*)(a1 + 5248); i; i = *(_QWORD*)(i + 1016))
	{
		*(_DWORD*)(i + 248) = *(_DWORD*)(i + 252);
		result = *(unsigned int*)(i + 244);
		*(_DWORD*)(i + 240) = result;
	}
	return result;
}

