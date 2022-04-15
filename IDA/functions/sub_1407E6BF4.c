//----- (00000001407E6BF4) ----------------------------------------------------
__int64 __fastcall sub_1407E6BF4(char* a1, __int64 a2, char* a3)
{
	unsigned int* v3; // rax
	unsigned int v4; // ebx
	signed __int64 v6; // r9
	__int16 v7; // ax

	if (!a1 || !a2)
		goto LABEL_5;
	if (!a3)
	{
		*(_WORD*)a1 = 0;
	LABEL_5:
		v3 = (unsigned int*)sub_1407DE1B0(a1, a2, a3);
		v4 = 22;
	LABEL_6:
		*v3 = v4;
		sub_1407DC370();
		return v4;
	}
	v6 = a1 - a3;
	do
	{
		v7 = *(_WORD*)a3;
		*(_WORD*)&a3[v6] = *(_WORD*)a3;
		a3 += 2;
		if (!v7)
			break;
		--a2;
	} while (a2);
	if (!a2)
	{
		*(_WORD*)a1 = 0;
		v3 = (unsigned int*)sub_1407DE1B0(a1, 0i64, a3);
		v4 = 34;
		goto LABEL_6;
	}
	return 0i64;
}
// 1407DE1B0: using guessed type __int64 __fastcall sub_1407DE1B0(_QWORD, _QWORD, _QWORD);

