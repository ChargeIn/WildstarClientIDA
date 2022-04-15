//----- (00000001401DCE00) ----------------------------------------------------
__int64 __fastcall sub_1401DCE00(__int64 a1)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD*)(a1 + 248); i; i = *(_QWORD*)(i + 1280))
		sub_1401E5380(i);
	sub_1401981B0((__int64**)(a1 + 352));
	for (result = *(_QWORD*)(a1 + 240); result; result = *(_QWORD*)(result + 3192))
	{
		*(_DWORD*)(result + 3168) &= ~0x10u;
		*(_DWORD*)(result + 3172) = -1;
	}
	return result;
}

