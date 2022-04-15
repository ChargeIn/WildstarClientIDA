//----- (000000014076A080) ----------------------------------------------------
__int64 __fastcall sub_14076A080(_QWORD* a1)
{
	__int64 v2; // rax

	v2 = sub_140215240(*(_DWORD*)(qword_140C65B98 + 264));
	if (v2)
	{
		sub_14073A540(a1, v2, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

