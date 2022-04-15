#include "../winhttp.h"

//----- (00000001407F69CC) ----------------------------------------------------
__int64 __fastcall sub_1407F69CC(int* a1, unsigned __int64 a2, int a3, __int64 a4)
{
	char* v5; // rcx
	_QWORD* v6; // rax
	unsigned int v7; // ebx
	int v9; // eax
	char* v10; // rax
	char v11; // dl
	__int64 v12; // rax

	v5 = *(char**)(a4 + 16);
	if (!a1 || !a2)
	{
		v6 = sub_1407DE1B0();
		v7 = 22;
	LABEL_3:
		*(_DWORD*)v6 = v7;
		sub_1407DC370();
		return v7;
	}
	v9 = 0;
	*(_BYTE*)a1 = 0;
	if (a3 > 0)
		v9 = a3;
	if (a2 <= v9 + 1)
	{
		v6 = sub_1407DE1B0();
		v7 = 34;
		goto LABEL_3;
	}
	*(_BYTE*)a1 = 48;
	v10 = (char*)a1 + 1;
	while (a3 > 0)
	{
		if (*v5)
			v11 = *v5++;
		else
			v11 = 48;
		*v10++ = v11;
		--a3;
	}
	*v10 = 0;
	if (a3 >= 0 && *v5 >= 53)
	{
		while (*--v10 == 57)
			*v10 = 48;
		++* v10;
	}
	if (*(_BYTE*)a1 == 49)
	{
		++* (_DWORD*)(a4 + 4);
	}
	else
	{
		v12 = sub_1407E1990((__int64)a1 + 1);
		sub_1407DB590(a1, (int*)((char*)a1 + 1), v12 + 1);
	}
	return 0i64;
}

