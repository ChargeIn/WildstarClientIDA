//----- (000000014056AF20) ----------------------------------------------------
_BOOL8 __fastcall sub_14056AF20(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4)
{
	return (!*(_DWORD*)(a1 + 368)
		|| (*(_BYTE*)(a2 + 336) & 2) == 0
		|| (unsigned int)sub_1403AF9E0(*(_QWORD*)(a1 + 360) + 160i64, *(_DWORD*)a2) <= 1)
		&& sub_14056AFB0(*(_QWORD*)(a1 + 360), (_DWORD*)a2, *(_DWORD**)(a1 + 16), a3, *(_QWORD*)(a1 + 160), a4);
}

