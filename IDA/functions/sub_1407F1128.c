//----- (00000001407F1128) ----------------------------------------------------
__int64 __fastcall sub_1407F1128(__int64 a1)
{
	LPVOID v2; // rax
	__int64 result; // rax

	++dword_140C5F564;
	v2 = sub_1407E2C30(0x1000ui64);
	*(_QWORD*)(a1 + 16) = v2;
	if (v2)
	{
		*(_DWORD*)(a1 + 24) |= 8u;
		*(_DWORD*)(a1 + 36) = 4096;
	}
	else
	{
		*(_DWORD*)(a1 + 24) |= 4u;
		*(_DWORD*)(a1 + 36) = 2;
		*(_QWORD*)(a1 + 16) = a1 + 32;
	}
	result = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)a1 = result;
	return result;
}
// 140C5F564: using guessed type int dword_140C5F564;

