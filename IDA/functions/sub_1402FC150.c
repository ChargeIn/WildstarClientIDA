#include "../winhttp.h"

//----- (00000001402FC150) ----------------------------------------------------
int* __fastcall sub_1402FC150(_QWORD* a1)
{
	__int64 v1; // rax
	int* result; // rax
	int* v4; // rcx
	int** v5; // rbx
	__int64 v6; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v7[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v1 + 16))(a1, v7, 0i64))
	{
		for (result = (int*)a1[212]; result; result = (int*)a1[212])
			sub_1402F3700(result);
	}
	else
	{
		result = sub_14018B280(32i64, 0);
		v4 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v5 = (int**)(a1 + 9);
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v5;
				*((_QWORD*)result + 3) = *v5;
				*v5 = result;
				v6 = *((_QWORD*)result + 3);
				if (v6)
					*(_QWORD*)(v6 + 16) = v4 + 6;
			}
			result = (int*)off_140B63F58;
			*(_QWORD*)v4 = off_140B63F58;
		}
	}
	return result;
}
// 140B63F58: using guessed type __int64 (__fastcall *off_140B63F58[37])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402FC150: using guessed type int var_18[6];

