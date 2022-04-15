//----- (00000001407E1A84) ----------------------------------------------------
__int64 __fastcall sub_1407E1A84(__int64 a1, __int64 a2)
{
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = &std::exception::`vftable';
		* (_BYTE*)(a1 + 16) = 0;
	sub_1407E1AC0(a1, a2);
	return a1;
}
// 14095D598: using guessed type void *std::exception::`vftable';

