//----- (0000000140764400) ----------------------------------------------------
__int64 __fastcall sub_140764400(__int64 a1, __int64 a2)
{
	int v2; // r8d
	__int64 result; // rax

	v2 = *(_DWORD*)(a1 + 40);
	if (v2 == *(_DWORD*)(a2 + 40))
		return sub_1407642F0(a1, a2);
	result = 1i64;
	if (v2)
		return 0xFFFFFFFFi64;
	return result;
}

