//----- (000000014045BCD0) ----------------------------------------------------
__int64 __fastcall sub_14045BCD0(__int64 a1, int a2, __int64 a3)
{
	int v3; // r9d
	__int64 v4; // rdx
	__int64 result; // rax

	v3 = 0;
	*(_DWORD*)(a1 + 292) = a2;
	*(_QWORD*)(a1 + 296) = a3;
	if (!a2 && !a3)
		*(_DWORD*)(a1 + 304) = 0;
	v4 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	result = *(_QWORD*)(v4 + 120);
	if (result)
	{
		result = *(unsigned int*)(result + 8);
		LOBYTE(v3) = *(_DWORD*)(a1 + 8) == (_DWORD)result;
		if (v3)
			*(_DWORD*)(v4 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

