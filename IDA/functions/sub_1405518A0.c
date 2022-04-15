//----- (00000001405518A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405518A0(__int64 a1)
{
	int v1; // eax

	v1 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8));
	return ((v1 - 1) & 0xFFFFFFFC) == 0 && v1 != 3;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

