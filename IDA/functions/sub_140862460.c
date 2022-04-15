//----- (0000000140862460) ----------------------------------------------------
__int64 __fastcall sub_140862460(__int64 a1)
{
	unsigned __int16 v1; // ax
	int v2; // edx
	int v3; // r8d
	int v4; // eax
	__int64 v6; // rcx

	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176i64);
	v1 = 1;
	if ((*(_BYTE*)(v6 + 19) & 7) != 0)
		v1 = *(_WORD*)(v6 + 16);
	v2 = *(unsigned __int8*)(v6 + 18);
	v3 = v1;
	v4 = 0;
	if (*(_BYTE*)(v6 + 18))
	{
		do
		{
			++v4;
			v2 &= v2 - 1;
		} while (v2);
	}
	return (unsigned int)(v3 * v4);
}

