#include "../winhttp.h"

//----- (00000001403A9AB0) ----------------------------------------------------
__int64 __fastcall sub_1403A9AB0(__int64 a1, int a2, unsigned int a3, int a4, __int64* a5)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rbp
	unsigned int v9; // esi
	__int64* v10; // rdi
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // r14
	int v14; // [rsp+48h] [rbp+10h] BYREF

	if (a2)
	{
		if ((unsigned int)(a2 - 1) <= 1)
		{
			switch (a4)
			{
			case 2:
			case 5:
				goto LABEL_10;
			case 3:
			case 6:
				v14 = 1;
				sub_140003460(a5, &v14);
				result = 1i64;
				break;
			case 4:
			case 7:
				v14 = 2;
				sub_140003460(a5, &v14);
				v14 = 3;
				sub_140003460(a5, &v14);
				result = 1i64;
				break;
			default:
				return 0i64;
			}
			return result;
		}
		return 0i64;
	}
	v7 = sub_1402215C0(a3);
	v8 = v7;
	if (!v7)
		return 0i64;
	if (a4)
	{
		if (a4 == 1)
		{
		LABEL_10:
			v14 = 0;
			sub_140003460(a5, &v14);
			return 1i64;
		}
		return 0i64;
	}
	v9 = 0;
	if (*(_DWORD*)(v7 + 64))
	{
		v10 = a5;
		do
		{
			v11 = v10[1];
			v12 = sub_14018DB00(*v10, v11 + 1, 4i64);
			v12[v11] = ++v9;
			v13 = v12;
			if ((int*)*v10 != v12)
			{
				sub_1407DB590(v12, (int*)*v10, 4 * v10[1]);
				if (*v10)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v10 - 16) + 8i64))(*v10 - 16);
				*v10 = (__int64)v13;
			}
			v10[1] = v11 + 1;
		} while (v9 < *(_DWORD*)(v8 + 64));
	}
	return 1i64;
}

