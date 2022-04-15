#include "../winhttp.h"

//----- (00000001401A7FC0) ----------------------------------------------------
__int64 __fastcall sub_1401A7FC0(__int64 a1, int** a2)
{
	__int64 result; // rax
	unsigned __int16* v5; // rbp
	unsigned __int16* v6; // rcx
	__int64 v7; // r15
	__int64 v8; // rdx
	int v9; // edi
	unsigned __int64 v10; // rbx
	unsigned __int16 v11; // ax
	__int64 v12; // rcx
	int* v13; // rsi
	__int64 v14; // rax
	int* v15; // [rsp+30h] [rbp-198h] BYREF
	__int64 v16[2]; // [rsp+40h] [rbp-188h] BYREF
	char* v17; // [rsp+50h] [rbp-178h]
	char v18; // [rsp+58h] [rbp-170h] BYREF
	unsigned __int16* v19; // [rsp+150h] [rbp-78h]
	char v20; // [rsp+158h] [rbp-70h] BYREF
	int v21; // [rsp+184h] [rbp-44h]

	result = *(unsigned int*)(a1 + 92);
	if (!(_DWORD)result)
	{
		if (a2)
		{
			sub_1401A8320((__int64)v16);
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 112i64))(a1, v16);
			v5 = v19;
			v6 = v19;
			v7 = v21 - 1;
			v8 = v7;
			if (v19 || v21 == 1)
			{
				v10 = 0i64;
				if (v21 != 1)
				{
					do
					{
						v11 = *v6;
						if (*v6 >= 0x80u)
						{
							if (v11 >= 0x1000u)
								v10 += 3i64;
							else
								v10 += 2i64;
						}
						else
						{
							++v10;
						}
						if (!v11)
							break;
						++v6;
						--v8;
					} while (v8);
				}
				v12 = v10;
				if (*(_BYTE*)(a1 + 88))
					v12 = v10 + 3;
				v9 = sub_1401C5690(v12, &v15, 0);
				if (v9 >= 0)
				{
					v13 = v15;
					v14 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v15 + 32i64))(v15);
					if (*(_BYTE*)(a1 + 88))
					{
						*(_WORD*)v14 = -17425;
						*(_BYTE*)(v14 + 2) = -65;
						v14 += 3i64;
					}
					v9 = sub_14018EB80(v5, v7, v14, v10, 0i64);
					if (v9 >= 0)
					{
						*a2 = v13;
						v9 = 0;
					}
					else
					{
						(*(void(__fastcall**)(int*))(*(_QWORD*)v13 + 8i64))(v13);
					}
				}
				v5 = v19;
			}
			else
			{
				v9 = -2147024809;
			}
			v16[0] = (__int64)off_140B57B40;
			if (v5 != (unsigned __int16*)&v20)
				sub_14018B900((__int64)v5, 0);
			if (v17 != &v18)
				sub_14018B900((__int64)v17, 0);
			return (unsigned int)v9;
		}
		else
		{
			return 2691104772i64;
		}
	}
	return result;
}
// 140B57B40: using guessed type __int64 (__fastcall *off_140B57B40[21])();

