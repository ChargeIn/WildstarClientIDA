//----- (00000001407E1A68) ----------------------------------------------------
__int64 __fastcall sub_1407E1A68(__int64 a1, __int64* a2)
{
	__int64 v2; // rax

	*(_QWORD*)a1 = &std::exception::`vftable';
		v2 = *a2;
	*(_BYTE*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 8) = v2;
	return a1;
}
// 14095D598: using guessed type void *std::exception::`vftable';

