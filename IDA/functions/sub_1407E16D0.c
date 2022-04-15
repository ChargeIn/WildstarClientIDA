//----- (00000001407E16D0) ----------------------------------------------------
__int64 __fastcall sub_1407E16D0(_WORD* a1, __int64 a2, char* a3)
{
	_WORD* v3; // r9
	unsigned int* v4; // rax
	unsigned int v5; // ebx
	signed __int64 v7; // rcx
	__int16 v8; // ax

	v3 = a1;
	if (!a1 || !a2)
		goto LABEL_5;
	if (!a3)
	{
		*a1 = 0;
	LABEL_5:
		v4 = (unsigned int*)sub_1407DE1B0(a1, a2, a3);
		v5 = 22;
	LABEL_6:
		*v4 = v5;
		sub_1407DC370();
		return v5;
	}
	do
	{
		if (!*a1)
			break;
		++a1;
		--a2;
	} while (a2);
	if (!a2)
	{
		*v3 = 0;
		goto LABEL_5;
	}
	v7 = (char*)a1 - a3;
	do
	{
		v8 = *(_WORD*)a3;
		*(_WORD*)&a3[v7] = *(_WORD*)a3;
		a3 += 2;
		if (!v8)
			break;
		--a2;
	} while (a2);
	if (!a2)
	{
		*v3 = 0;
		v4 = (unsigned int*)sub_1407DE1B0(v7, 0i64, a3);
		v5 = 34;
		goto LABEL_6;
	}
	return 0i64;
}
// 1407DE1B0: using guessed type __int64 __fastcall sub_1407DE1B0(_QWORD, _QWORD, _QWORD);

