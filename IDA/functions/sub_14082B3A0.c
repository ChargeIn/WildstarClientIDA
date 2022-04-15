//----- (000000014082B3A0) ----------------------------------------------------
__int64 __fastcall sub_14082B3A0(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 result; // rax
	int v4; // r8d
	int v5; // ebx
	_DWORD* v6; // rcx

	v1 = a1[9];
	result = (__int64)off_1409A2DF8;
	*a1 = off_1409A2DF8;
	if (v1)
	{
		result = *(unsigned int*)(v1 + 136);
		v4 = result ^ (result ^ (result - 1)) & 0x3FFFFFFF;
		*(_DWORD*)(v1 + 136) = v4;
		if ((v4 & 0x3FFFFFFF) == 0)
		{
			v5 = dword_140C10F20;
			sub_14084BD30(v1);
			result = sub_140881720(v5, v1);
		}
	}
	v6 = (_DWORD*)a1[6];
	if (v6)
		return sub_140828460(v6);
	return result;
}
// 1409A2DF8: using guessed type __int64 (__fastcall *off_1409A2DF8[2])();
// 140C10F20: using guessed type int dword_140C10F20;

