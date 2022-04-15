//----- (00000001407F0B18) ----------------------------------------------------
__int64 __fastcall sub_1407F0B18(unsigned int a1, __int16* a2, unsigned __int64 a3, unsigned int a4, int a5)
{
	_QWORD* v9; // rax
	unsigned int v10; // ebx
	unsigned __int64 v12; // rcx
	__int16* v13; // r8
	__int16* v14; // r9
	int v15; // eax
	unsigned int v16; // edx
	__int16 v17; // dx
	__int16* v18; // r8
	__int16 v19; // cx

	if (!a2 || !a3)
		goto LABEL_2;
	*a2 = 0;
	if (a3 <= (unsigned __int64)(a5 != 0) + 1)
	{
		v9 = sub_1407DE1B0();
		v10 = 34;
		goto LABEL_3;
	}
	v10 = 34;
	if (a4 - 2 > 0x22)
	{
	LABEL_2:
		v9 = sub_1407DE1B0();
		v10 = 22;
	LABEL_3:
		*(_DWORD*)v9 = v10;
		sub_1407DC370();
		return v10;
	}
	v12 = 0i64;
	v13 = a2;
	if (a5)
	{
		v13 = a2 + 1;
		v12 = 1i64;
		*a2 = 45;
		a1 = -a1;
	}
	v14 = v13;
	do
	{
		v16 = a1 % a4;
		v15 = a1 / a4;
		a1 /= a4;
		if (v16 <= 9)
			v17 = v16 + 48;
		else
			v17 = v16 + 87;
		*v13 = v17;
		++v12;
		++v13;
	} while (v15 && v12 < a3);
	if (v12 >= a3)
	{
		*a2 = 0;
		v9 = sub_1407DE1B0();
		goto LABEL_3;
	}
	*v13 = 0;
	v18 = v13 - 1;
	do
	{
		v19 = *v18;
		*v18 = *v14;
		*v14++ = v19;
		--v18;
	} while (v14 < v18);
	return 0i64;
}

