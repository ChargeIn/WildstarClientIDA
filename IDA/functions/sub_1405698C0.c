//----- (00000001405698C0) ----------------------------------------------------
__int64 __fastcall sub_1405698C0(__int64 a1, int* a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v8; // rbp
	_DWORD* v9; // rbx
	__int64 result; // rax
	__int64 v11; // rdx

	sub_1407E4830(a2, 0i64, 0x28ui64);
	v8 = sub_140236E00(a3);
	v9 = (_DWORD*)sub_1402369C0(a4);
	result = sub_14023CFC0(a5);
	v11 = result;
	if (a2 && v8 && v9)
	{
		a2[2] = v9[1];
		a2[1] = v9[4];
		*a2 = v9[3];
		a2[3] = v9[2];
		a2[4] = v9[5];
		result = *(unsigned int*)(v8 + 52);
		a2[5] = result;
		if (v11)
		{
			a2[6] = *(_DWORD*)(v11 + 4) & 8;
			a2[7] = *(_DWORD*)(v11 + 4) & 0x20;
			a2[8] = *(_DWORD*)(v11 + 4) & 0x40;
			result = *(_DWORD*)(v11 + 4) & 0x80;
			a2[9] = result;
		}
	}
	return result;
}

