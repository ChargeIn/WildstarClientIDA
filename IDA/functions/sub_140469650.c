#include "../winhttp.h"

//----- (0000000140469650) ----------------------------------------------------
_QWORD* __fastcall sub_140469650(__int64 a1, float a2)
{
	_QWORD* v2; // r11
	_QWORD* result; // rax
	int* v5; // rbx
	float* v6; // r8
	float v7; // xmm1_4
	float v8; // xmm2_4
	int v9; // r9d
	int v10; // r10d
	int v11; // ecx
	float v12; // xmm2_4
	float v13; // xmm1_4
	float v14; // xmm3_4
	__int64 v15; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx

	v2 = *(_QWORD**)(a1 + 5824);
	result = (_QWORD*)v2[2];
	if (result != v2)
	{
		v5 = (int*)qword_140C63750;
		do
		{
			v6 = (float*)result[5];
			if (v6)
			{
				v7 = v6[5];
				v8 = v6[6];
				v6[3] = (float)(a2 * v6[4]) + v6[3];
				v9 = dword_140C478D0;
				v10 = *v5;
				v11 = dword_140C478D0;
				if (v7 >= v8)
				{
					if (v10 < dword_140C478D0)
						v11 = *v5;
					v14 = v7 - v8;
					if ((float)(a2 * *((float*)&off_140C478C0 + v11 + 8)) < (float)(v7 - v8))
					{
						if (v10 < dword_140C478D0)
							v9 = *v5;
						v14 = a2 * *((float*)&off_140C478C0 + v9 + 8);
					}
					v13 = v7 - v14;
				}
				else
				{
					v12 = v8 - v7;
					if (v10 < dword_140C478D0)
						v11 = *v5;
					if ((float)(a2 * *((float*)&off_140C478C0 + v11 + 8)) < v12)
					{
						if (v10 < dword_140C478D0)
							v9 = *v5;
						v12 = a2 * *((float*)&off_140C478C0 + v9 + 8);
					}
					v13 = v7 + v12;
				}
				v6[5] = v13;
			}
			v15 = result[3];
			if (v15)
			{
				result = (_QWORD*)result[3];
				for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
					result = i;
			}
			else
			{
				for (j = result[1]; result == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					result = (_QWORD*)j;
				if (result[3] != j)
					result = (_QWORD*)j;
			}
		} while (result != v2);
	}
	return result;
}
// 140C478C0: using guessed type __int64 (__fastcall **off_140C478C0)();
// 140C478D0: using guessed type int dword_140C478D0;
// 140C63750: using guessed type __int64 qword_140C63750;

