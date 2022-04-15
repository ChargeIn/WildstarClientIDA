//----- (00000001405BF9D0) ----------------------------------------------------
__int64 __fastcall sub_1405BF9D0(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 80))
	{
		sub_14001A270(a1 + 64, *(_QWORD**)(*(_QWORD*)(a1 + 72) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 72) + 16i64) = *(_QWORD*)(a1 + 72);
		*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = *(_QWORD*)(a1 + 72);
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	result = qword_140C65898;
	*(_DWORD*)(a1 + 164) = 0;
	*(_DWORD*)(result + 1368) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

