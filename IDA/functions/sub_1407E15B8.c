//----- (00000001407E15B8) ----------------------------------------------------
__int64 __fastcall sub_1407E15B8(int* a1, unsigned __int64 a2, int* a3, unsigned __int64 a4)
{
	_QWORD* v8; // rax
	unsigned int v9; // ebx

	if (!a4)
		return 0i64;
	if (!a1)
		goto LABEL_4;
	if (a3 && a2 >= a4)
	{
		sub_1407DB590(a1, a3, a4);
		return 0i64;
	}
	sub_1407E4830(a1, 0i64, a2);
	if (!a3)
	{
	LABEL_4:
		v8 = sub_1407DE1B0();
		v9 = 22;
	LABEL_5:
		*(_DWORD*)v8 = v9;
		sub_1407DC370();
		return v9;
	}
	if (a2 < a4)
	{
		v8 = sub_1407DE1B0();
		v9 = 34;
		goto LABEL_5;
	}
	return 22i64;
}

