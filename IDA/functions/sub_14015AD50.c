#include "../winhttp.h"

//----- (000000014015AD50) ----------------------------------------------------
__int64 __fastcall sub_14015AD50(__int64 a1, int* a2)
{
	__int64 result; // rax
	int* v5; // rbp
	__int64 v6; // rbx
	signed __int64 v7; // rbx
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rbx
	unsigned __int64 v12; // rax
	char* v13; // rcx
	unsigned __int64 v14; // rdx
	signed __int64 v15; // r10
	__int64 v16; // rcx
	int v17; // [rsp+48h] [rbp+10h]
	__int64 v18; // [rsp+50h] [rbp+18h]
	__int64 i; // [rsp+58h] [rbp+20h]

	result = 0i64;
	if (a2)
	{
		v5 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++result;
			while (*((_WORD*)a2 + result));
		}
		v6 = (2 * result) >> 1;
		if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v5 = sub_14018B280(2 * (v6 + 1), 0);
		v7 = 2 * v6;
		sub_1407DB590(v5, a2, v7);
		if ((int*)((char*)v5 + v7))
			*(_WORD*)((char*)v5 + v7) = 0;
		v8 = 0;
		v17 = 0;
		if ((int)((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 3) > 0)
		{
			v9 = 0i64;
			v10 = v7 >> 1;
			v18 = 0i64;
			for (i = v7 >> 1; ; v10 = i)
			{
				v11 = *(_QWORD*)(v9 + *(_QWORD*)(a1 + 40));
				v12 = 0i64;
				v13 = *(char**)(v11 + 104);
				if (*(_WORD*)v13)
				{
					do
						++v12;
					while (*(_WORD*)&v13[2 * v12]);
				}
				if (v10 == v12)
				{
					v14 = 0i64;
					if (!v12)
						goto LABEL_25;
					v15 = (char*)v5 - v13;
					while (*(_WORD*)&v13[v15] == *(_WORD*)v13)
					{
						++v14;
						v13 += 2;
						if (v14 >= v12)
							goto LABEL_25;
					}
					v8 = v17;
				}
				v16 = *(_QWORD*)(v11 + 224);
				if (v16)
				{
					v11 = sub_14015AD50(v16, a2);
					if (v11)
						goto LABEL_25;
					v8 = v17;
				}
				++v8;
				v9 = v18 + 8;
				v17 = v8;
				v18 += 8i64;
				if (v8 >= (int)((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 3))
					break;
			}
		}
		v11 = 0i64;
	LABEL_25:
		if (v5)
			sub_14018B900((__int64)v5, 0);
		return v11;
	}
	return result;
}
// 14015AE80: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

