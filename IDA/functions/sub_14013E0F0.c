//----- (000000014013E0F0) ----------------------------------------------------
__int64 __fastcall sub_14013E0F0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 32);
	if (!result || !*(_QWORD*)(result + 816))
		return 0i64;
	return result;
}

