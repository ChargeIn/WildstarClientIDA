//----- (000000014082AE40) ----------------------------------------------------
__int64 __fastcall sub_14082AE40(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		*(_QWORD*)(a1 + 24) = v1;
		sub_140881720(dword_140C10F20, v1);
		result = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_DWORD*)(a1 + 32) = 0;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	else
	{
		result = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

