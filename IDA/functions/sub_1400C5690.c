//----- (00000001400C5690) ----------------------------------------------------
__int64 __fastcall sub_1400C5690(__int64 a1)
{
	int v1; // eax

	v1 = dword_140C636A8;
	*(_DWORD*)(a1 + 8) = dword_140C636A8;
	*(_QWORD*)a1 = off_140B54E00;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	*(_BYTE*)(a1 + 20) = 0;
	*(_DWORD*)(a1 + 56) = v1;
	*(_QWORD*)(a1 + 48) = off_140B54E00;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_BYTE*)(a1 + 68) = 0;
	*(_DWORD*)(a1 + 88) = v1;
	*(_QWORD*)(a1 + 80) = off_140B54E00;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 96) = 0;
	*(_BYTE*)(a1 + 100) = 0;
	if (*(float*)(a1 + 24) != 1.0 || (float)0.0 != *(float*)(a1 + 28))
	{
		*(_QWORD*)(a1 + 24) = 1065353216i64;
		*(_DWORD*)(a1 + 16) = 1065353216;
		*(_DWORD*)(a1 + 8) = v1;
	}
	*(_QWORD*)(a1 + 32) = 1065353216i64;
	if (*(float*)(a1 + 72) != 1.0 || (float)0.0 != *(float*)(a1 + 76))
	{
		*(_QWORD*)(a1 + 72) = 1065353216i64;
		*(_DWORD*)(a1 + 64) = 1065353216;
		*(_DWORD*)(a1 + 56) = v1;
	}
	*(_DWORD*)(a1 + 40) = 0;
	*(_DWORD*)(a1 + 44) = 1065353216;
	if (*(float*)(a1 + 104) != 1.0 || (float)0.0 != *(float*)(a1 + 108))
	{
		*(_QWORD*)(a1 + 104) = 1065353216i64;
		*(_DWORD*)(a1 + 96) = 1065353216;
		*(_DWORD*)(a1 + 88) = v1;
	}
	return a1;
}
// 140B54E00: using guessed type __int64 (__fastcall *off_140B54E00[27])();
// 140C636A8: using guessed type int dword_140C636A8;

