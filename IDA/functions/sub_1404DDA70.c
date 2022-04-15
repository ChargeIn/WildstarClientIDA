//----- (00000001404DDA70) ----------------------------------------------------
__int64 __fastcall sub_1404DDA70(__int64 a1, int a2)
{
	__int64 result; // rax

	sub_1400B6390((_QWORD*)a1);
	*(_DWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B69300;
	result = a1;
	*(float*)(a1 + 12) = (float)a2;
	return result;
}
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();

