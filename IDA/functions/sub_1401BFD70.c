#include "../winhttp.h"

//----- (00000001401BFD70) ----------------------------------------------------
__int64 __fastcall sub_1401BFD70(_QWORD** a1, unsigned __int16* a2, int a3, int** a4)
{
	unsigned __int16* v6; // rbx
	__int64 result; // rax
	int* v9; // rax
	unsigned __int64 v10; // rcx
	int* v11; // rdi
	__int64 v12; // r8
	unsigned __int16 v13; // dx
	int v14; // ebx
	char v16[272]; // [rsp+40h] [rbp-358h] BYREF
	int v17[130]; // [rsp+150h] [rbp-248h] BYREF
	char v18[8]; // [rsp+358h] [rbp-40h] BYREF

	v6 = a2;
	if (!a2 || !a4)
		return 2147942487i64;
	result = ((__int64(__fastcall*)(_QWORD**))(*a1)[8])(a1);
	if ((int)result >= 0)
	{
		v9 = sub_14018B280(64i64, 0);
		v10 = 0i64;
		v11 = v9;
		if (v9)
		{
			*(_QWORD*)v9 = off_140B5F120;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 1) = 0i64;
			*((_QWORD*)v9 + 4) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
			*((_QWORD*)v9 + 6) = 0i64;
			*((_QWORD*)v9 + 5) = 0i64;
			v9[14] = 1;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = -1i64;
		do
		{
			v13 = *v6;
			if (*v6 >= 0x80u)
			{
				if (v13 >= 0x1000u)
				{
					if (v10 >= 0x102)
					{
					LABEL_21:
						v14 = -2147024774;
						goto LABEL_22;
					}
					v16[v10] = (v13 >> 12) | 0xE0;
					v16[v10 + 1] = (v13 >> 6) & 0x3F | 0x80;
					v10 += 3i64;
					v16[v10 - 1] = *(_BYTE*)v6 & 0x3F | 0x80;
				}
				else
				{
					if (v10 >= 0x103)
						goto LABEL_21;
					v16[v10] = (v13 >> 6) | 0xC0;
					v10 += 2i64;
					v16[v10 - 1] = *(_BYTE*)v6 & 0x3F | 0x80;
				}
			}
			else
			{
				if (v10 >= 0x104)
					goto LABEL_21;
				v16[v10++] = v13;
			}
			if (!v13)
				break;
			++v6;
			--v12;
		} while (v12);
		v14 = sub_1401BE430(a1[9], v16, a3, (__int64)v11, v17, (__int64)v17, (__int64)v18);
		if (v14 >= 0)
		{
			*a4 = v11;
			return 0i64;
		}
	LABEL_22:
		if (v11)
			sub_1401B3A50(v11);
		return (unsigned int)v14;
	}
	return result;
}
// 140B5F120: using guessed type __int64 (__fastcall *off_140B5F120[20])();
// 1401BFD70: using guessed type char var_40[8];
// 1401BFD70: using guessed type int var_248[130];

