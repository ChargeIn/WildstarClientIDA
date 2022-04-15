//----- (000000014039E210) ----------------------------------------------------
__int64 __fastcall sub_14039E210(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 120);
	if (v2 && sub_14047BE40(v2))
		return 1i64;
	result = sub_14039E000(a1);
	if (result)
		return (*(_DWORD*)(result + 96) >> 18) & 1;
	return result;
}

