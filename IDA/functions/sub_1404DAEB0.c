//----- (00000001404DAEB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAEB0(__int64 a1, int a2)
{
	return sub_14039E1A0(a1)
		|| (unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)) && (!a2 || !sub_14055A370())
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
		&& *(_DWORD*)(a1 + 29232) == 2
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			47i64)
		&& *(_DWORD*)(a1 + 29236) == 2;
}

