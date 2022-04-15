#include "../winhttp.h"

//----- (00000001405A3F80) ----------------------------------------------------
signed __int64 __fastcall sub_1405A3F80(
	__int64* a1,
	unsigned __int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	signed __int64 result; // rax
	__int64* v7; // rdi
	__int64* v8; // rbx
	unsigned __int8 v9; // al
	char* v10; // rdi
	__int64 v11; // rax
	char* v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15[2]; // [rsp+30h] [rbp-28h] BYREF
	char* v16; // [rsp+68h] [rbp+10h]
	__int64 v17; // [rsp+78h] [rbp+20h]

	v16 = (char*)a2;
	result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0ui64;
	if (result > 256)
	{
		do
		{
			if (!a4)
				return sub_1405A4280(a1, a2, a2, 0i64, a5);
			v7 = (__int64*)(a2 - 16);
			v17 = a4 - 1;
			v8 = &a1[2 * (((__int64)(a2 - (_QWORD)a1) >> 4) / 2)];
			if (a5((__int64)a1, (__int64)v8))
			{
				if (!a5((__int64)v8, (__int64)v7))
				{
					v9 = a5((__int64)a1, (__int64)v7);
					v8 = a1;
					goto LABEL_9;
				}
			}
			else
			{
				if (!a5((__int64)a1, (__int64)v7))
				{
					v9 = a5((__int64)v8, (__int64)v7);
				LABEL_9:
					if (v9)
						v8 = v7;
					goto LABEL_11;
				}
				v8 = a1;
			}
		LABEL_11:
			v10 = v16;
			v15[0] = *v8;
			v11 = v8[1];
			v12 = (char*)a1;
			v15[1] = v11;
			while (1)
			{
				for (; a5((__int64)v12, (__int64)v15); v12 += 16)
					;
				for (v10 -= 16; a5((__int64)v15, (__int64)v10); v10 -= 16)
					;
				if (v12 >= v10)
					break;
				v13 = *(_QWORD*)v12;
				v14 = *((_QWORD*)v12 + 1);
				*(_QWORD*)v12 = *(_QWORD*)v10;
				v12 += 16;
				*((_QWORD*)v12 - 1) = *((_QWORD*)v10 + 1);
				*(_QWORD*)v10 = v13;
				*((_QWORD*)v10 + 1) = v14;
			}
			result = sub_1405A3F80((_DWORD)v12, (_DWORD)v16, 0, v17, (__int64)a5);
			a4 = v17;
			a2 = (unsigned __int64)v12;
			v16 = v12;
		} while ((__int64)((v12 - (char*)a1) & 0xFFFFFFFFFFFFFFF0ui64) > 256);
	}
	return result;
}

