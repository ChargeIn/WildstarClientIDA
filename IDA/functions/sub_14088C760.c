//----- (000000014088C760) ----------------------------------------------------
__int64 __fastcall sub_14088C760(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v1;
		sub_140881720(dword_140C10F20, v1);
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

