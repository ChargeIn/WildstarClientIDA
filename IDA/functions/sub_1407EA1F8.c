#include "../winhttp.h"

//----- (00000001407EA1F8) ----------------------------------------------------
__int64 __fastcall sub_1407EA1F8(_BYTE* a1, __int64 a2, char* a3, __int64 a4)
{
	_QWORD* v5; // rax
	unsigned int v6; // ebx
	_BYTE* v7; // r11
	__int64 v8; // r10
	__int64 v9; // r11
	char v10; // al
	__int64 v11; // r8
	char v12; // al

	if (a4)
	{
		if (!a1)
		{
		LABEL_11:
			v5 = sub_1407DE1B0();
			v6 = 22;
		LABEL_12:
			*(_DWORD*)v5 = v6;
			sub_1407DC370();
			return v6;
		}
	}
	else if (!a1)
	{
		if (!a2)
			return 0i64;
		goto LABEL_11;
	}
	if (!a2)
		goto LABEL_11;
	if (!a4)
	{
		*a1 = 0;
		return 0i64;
	}
	if (!a3)
	{
		*a1 = 0;
		goto LABEL_11;
	}
	v7 = a1;
	v8 = a2;
	if (a4 == -1)
	{
		v9 = a1 - a3;
		do
		{
			v10 = *a3;
			a3[v9] = *a3;
			++a3;
			if (!v10)
				break;
			--v8;
		} while (v8);
	}
	else
	{
		v11 = a3 - a1;
		do
		{
			v12 = v7[v11];
			*v7++ = v12;
			if (!v12)
				break;
			if (!--v8)
				break;
			--a4;
		} while (a4);
		if (!a4)
			*v7 = 0;
	}
	if (v8)
		return 0i64;
	if (a4 != -1)
	{
		*a1 = 0;
		v5 = sub_1407DE1B0();
		v6 = 34;
		goto LABEL_12;
	}
	a1[a2 - 1] = 0;
	return 80i64;
}

