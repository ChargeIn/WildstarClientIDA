//----- (000000014002EBD0) ----------------------------------------------------
__int64 __fastcall sub_14002EBD0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx

	result = 0i64;
	if (a2 <= 1)
	{
		if (*(_DWORD*)(a1 + 4852) == 13)
			a2 = 0;
		v4 = a1 + 4696;
		*(_DWORD*)(v4 + 160) = a2;
		sub_140031E80(v4);
		sub_1400321C0(v5, a1 + 4696, *(_DWORD*)(a1 + 4852), *(_DWORD*)(a1 + 4856), *(_DWORD*)(a1 + 4860));
		sub_140030950(a1);
		return 1i64;
	}
	return result;
}
// 14002EC20: variable 'v5' is possibly undefined

