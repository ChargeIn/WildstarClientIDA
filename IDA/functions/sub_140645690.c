//----- (0000000140645690) ----------------------------------------------------
__int64 __fastcall sub_140645690(unsigned int a1)
{
	__int64 result; // rax
	__int64 v3; // r8
	unsigned int v4; // edx

	if (!dword_140C7E6A0[0])
		sub_1406454B0();
	result = sub_14024ACC0(a1);
	v3 = result;
	if (result)
	{
		result = *(unsigned int*)(result + 76);
		v4 = *((_DWORD*)&qword_140C7E6A4 + *(int*)(v3 + 80)) - *(_DWORD*)(v3 + 72);
		if (v4 < (unsigned int)result)
			return v4;
	}
	return result;
}
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;

