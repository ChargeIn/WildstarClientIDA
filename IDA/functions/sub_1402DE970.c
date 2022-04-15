#include "../winhttp.h"

//----- (00000001402DE970) ----------------------------------------------------
__int64 __fastcall sub_1402DE970(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9
	int* v4; // r14
	__int64 v5; // rdx
	int* v6; // rsi
	int* v8; // rdi
	int* v9; // rbp
	__int64 v10; // rax
	int* v11; // rbx
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	unsigned int v15; // eax
	unsigned int v16; // ecx
	int v17; // eax
	int v18; // eax
	unsigned __int64 v19; // rdi
	int* v20; // rbx
	__int64 result; // rax

	v3 = *(_QWORD*)(a2 + 16);
	v4 = *(int**)(a2 + 24);
	v5 = *(_QWORD*)(a3 + 16);
	v6 = *(int**)(a3 + 24);
	v8 = &v4[3 * v3];
	v9 = &v6[3 * v5];
	v10 = 12 * (v3 + v5);
	if (!is_mul_ok(v3 + v5, 0xCui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 0);
	*(_QWORD*)(a1 + 24) = v11;
	while (v4 < v8)
	{
		if (v6 >= v9)
			break;
		v12 = *v4;
		v13 = *v6;
		if (*v4 >= *v6)
		{
			if (v12 > v13)
			{
				*v11 = v13;
			LABEL_13:
				v18 = v6[1];
				v11 += 3;
				v6 += 3;
				*(v11 - 2) = v18;
				*(v11 - 1) = *(v6 - 1);
				continue;
			}
			v15 = v4[1];
			v16 = v6[1];
			if (v15 >= v16)
			{
				*v11 = *v6;
				if (v15 <= v16)
					v4 += 3;
				goto LABEL_13;
			}
			v17 = *v4;
			v11 += 3;
			v4 += 3;
			*(v11 - 3) = v17;
			*(v11 - 2) = *(v4 - 2);
			*(v11 - 1) = *(v4 - 1);
		}
		else
		{
			*v11 = v12;
			v11 += 3;
			*(v11 - 2) = v4[1];
			v14 = v4[2];
			v4 += 3;
			*(v11 - 1) = v14;
		}
	}
	v19 = 3 * (((char*)v8 - (char*)v4) / 12);
	sub_1407DB590(v11, v4, v19 * 4);
	v20 = &v11[v19];
	sub_1407DB590(v20, v6, 12 * (((char*)v9 - (char*)v6) / 12));
	result = 0i64;
	*(_QWORD*)(a1 + 16) = ((__int64)v20 + 12 * (((char*)v9 - (char*)v6) / 12) - *(_QWORD*)(a1 + 24)) / 12;
	return result;
}

