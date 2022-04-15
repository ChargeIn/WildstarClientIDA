//----- (00000001401A6FD0) ----------------------------------------------------
unsigned __int16* __fastcall sub_1401A6FD0(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	unsigned __int16* v5; // rax
	unsigned __int16* result; // rax

	while (*a2 == 32 || (unsigned __int16)(*a2 - 9) <= 4u)
		++a2;
	if (*a2 == 47)
	{
		*(_DWORD*)(a1 + 88) = 2;
		++a2;
	}
	v5 = (unsigned __int16*)sub_1401A4DE0(a1 + 24, a2);
	if (*(_QWORD*)(a1 + 32) == *(_QWORD*)(a1 + 40))
		return 0i64;
	result = sub_1401A6DB0(a1, v5);
	if (result && *result && !*(_DWORD*)(a1 + 88))
		return sub_1401A5DC0((_QWORD*)a1, result, a3);
	return result;
}

