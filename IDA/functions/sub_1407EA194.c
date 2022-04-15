//----- (00000001407EA194) ----------------------------------------------------
__int64 __fastcall sub_1407EA194(_BYTE* a1, __int64 a2, char* a3)
{
	_QWORD* v3; // rax
	unsigned int v4; // ebx
	__int64 v6; // r9
	char v7; // al

	if (!a1 || !a2)
		goto LABEL_5;
	if (!a3)
	{
		*a1 = 0;
	LABEL_5:
		v3 = sub_1407DE1B0();
		v4 = 22;
	LABEL_6:
		*(_DWORD*)v3 = v4;
		sub_1407DC370();
		return v4;
	}
	v6 = a1 - a3;
	do
	{
		v7 = *a3;
		a3[v6] = *a3;
		++a3;
		if (!v7)
			break;
		--a2;
	} while (a2);
	if (!a2)
	{
		*a1 = 0;
		v3 = sub_1407DE1B0();
		v4 = 34;
		goto LABEL_6;
	}
	return 0i64;
}

