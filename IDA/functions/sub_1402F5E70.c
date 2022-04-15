//----- (00000001402F5E70) ----------------------------------------------------
__int64 __fastcall sub_1402F5E70(__int64 a1)
{
	__int64 result; // rax
	__int64 i; // rbx

	result = sub_1402F5C20(a1, 8);
	for (i = *(_QWORD*)(a1 + 1232); i; i = *(_QWORD*)(i + 1248))
	{
		if (!*(_DWORD*)(i + 1200))
			result = sub_1402F5E70(i);
	}
	return result;
}

