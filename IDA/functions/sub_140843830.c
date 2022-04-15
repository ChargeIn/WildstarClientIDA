#include "../winhttp.h"

//----- (0000000140843830) ----------------------------------------------------
int* __fastcall sub_140843830(__int64 a1, unsigned int a2, int* a3)
{
	__int64 v6; // r14
	__int64* v7; // rax
	int* result; // rax
	unsigned __int64 v9; // rbx
	__int64 v10; // rsi
	__int64* v11; // rax

	v6 = a2 % 0x1F;
	v7 = *(__int64**)(a1 + 8 * v6 + 2040);
	if (!v7)
		goto LABEL_6;
	while (*((_DWORD*)v7 + 2) != a2)
	{
		v7 = (__int64*)*v7;
		if (!v7)
			goto LABEL_6;
	}
	result = (int*)(v7 + 2);
	if (!result)
	{
	LABEL_6:
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)a3 + v9));
		result = (int*)sub_1408819F0(dword_140C10F20, v9 + 5);
		v10 = (__int64)result;
		if (result)
		{
			sub_1407DB590(result, a3, v9);
			strcpy((char*)(v10 + v9), ".bnk");
			v11 = *(__int64**)(a1 + 2032 + 8 * v6 + 8);
			if (!v11)
				goto LABEL_14;
			while (*((_DWORD*)v11 + 2) != a2)
			{
				v11 = (__int64*)*v11;
				if (!v11)
					goto LABEL_14;
			}
			result = (int*)(v11 + 2);
			if (!result)
				LABEL_14:
			result = (int*)sub_14083E5E0((int*)(a1 + 2032), a2, v6);
			if (result)
				*(_QWORD*)result = v10;
			else
				return (int*)sub_140881720(dword_140C10F20, v10);
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

