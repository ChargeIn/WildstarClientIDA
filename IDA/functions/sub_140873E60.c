//----- (0000000140873E60) ----------------------------------------------------
__int64 __fastcall sub_140873E60(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx

	result = 0i64;
	for (*(_DWORD*)(a1 + 40) = a2; (unsigned int)result < *(_DWORD*)(a1 + 72); result = (unsigned int)(result + 1))
	{
		v4 = *(_QWORD*)(a1 + 64) + 24 * result;
		v5 = *(int*)(v4 + 8);
		if ((int)v5 > 0)
			*(_DWORD*)(*(_QWORD*)v4 + 16 * v5 - 4) = *(_DWORD*)(a1 + 40);
	}
	return result;
}

