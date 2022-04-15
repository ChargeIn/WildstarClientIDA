#include "../winhttp.h"

//----- (00000001400CC9F0) ----------------------------------------------------
int* __fastcall sub_1400CC9F0(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	int* v5; // rax
	_QWORD* v6; // rax
	int* result; // rax
	__int64 v8; // rcx

	v2 = 0i64;
	if (!*(_QWORD*)(a1 + 680) && a2 && *(_WORD*)a2)
	{
		v5 = sub_14018B280(104i64, 0);
		if (v5)
			v6 = sub_1400C5780(v5);
		else
			v6 = 0i64;
		*(_QWORD*)(a1 + 680) = v6;
	}
	result = *(int**)(a1 + 680);
	if (result)
	{
		v8 = (__int64)(result + 10);
		if (a2)
		{
			if (*(_WORD*)a2)
			{
				do
					++v2;
				while (*((_WORD*)a2 + v2));
			}
			return (int*)sub_14001C480(v8, a2, (int*)((char*)a2 + 2 * v2));
		}
		else
		{
			return sub_14001C2B0(v8, *((int**)result + 6), *((int**)result + 7));
		}
	}
	return result;
}

