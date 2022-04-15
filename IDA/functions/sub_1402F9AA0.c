#include "../winhttp.h"

//----- (00000001402F9AA0) ----------------------------------------------------
int* __fastcall sub_1402F9AA0(int** a1)
{
	int* v1; // rax
	unsigned int v2; // ebx
	int* result; // rax
	int* v5; // rcx
	int** v6; // rdi
	__int64 v7; // rax
	unsigned __int16* v8; // rdx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v2 = 0;
	v9[0] = 0;
	if ((*((unsigned int(__fastcall**)(int**, int*, _QWORD))v1 + 2))(a1, v9, 0i64))
	{
		result = a1[8];
		if (result[128])
		{
			do
			{
				v8 = (unsigned __int16*)(*((_QWORD*)result + 65) + 4i64 * v2);
				if ((v8[1] & 1) != 0)
					(*((void(__fastcall**)(int**, _QWORD, __int64)) * a1 + 91))(a1, *v8, 1i64);
				result = a1[8];
				++v2;
			} while (v2 < result[128]);
		}
	}
	else
	{
		result = sub_14018B280(32i64, 0);
		v5 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v6 = a1 + 9;
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v6;
				*((_QWORD*)result + 3) = *v6;
				*v6 = result;
				v7 = *((_QWORD*)result + 3);
				if (v7)
					*(_QWORD*)(v7 + 16) = v5 + 6;
			}
			result = (int*)off_140B64048;
			*(_QWORD*)v5 = off_140B64048;
		}
	}
	return result;
}
// 140B64048: using guessed type __int64 (__fastcall *off_140B64048[7])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402F9AA0: using guessed type int var_18[6];

