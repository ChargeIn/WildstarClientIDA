#include "../winhttp.h"

//----- (00000001405091B0) ----------------------------------------------------
__int64 __fastcall sub_1405091B0(__int64 a1)
{
	int v2; // eax
	WCHAR* v3; // rbx
	__int64 v4; // r15
	int* v5; // rdi
	WCHAR v6; // ax
	int v7; // esi
	WCHAR v8; // ax
	int v9; // eax
	int* v10; // rax
	int* v11; // rbp
	unsigned __int64 v12; // rdx
	int* v13; // rax
	unsigned __int64 v14; // r8
	__int64 v15; // rbx
	unsigned int v16; // ebx
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	__int64 v19; // [rsp+28h] [rbp-20h]

	v2 = sub_1405090D0();
	v3 = *(WCHAR**)(a1 + 1040);
	v4 = 0i64;
	v5 = 0i64;
	*(_DWORD*)(a1 + 1640) = v2;
	v19 = 0i64;
	v18 = 0i64;
	if (v3)
	{
		if (*((_QWORD*)v3 - 1))
		{
			v6 = *v3;
			v7 = 0;
			if (*v3)
			{
				do
				{
					if ((unsigned int)sub_1407DFF2C(v6))
					{
						v8 = *v3;
						if (!*v3)
							break;
						do
						{
							if (!(unsigned int)sub_1407DFF2C(v8))
								break;
							v9 = *v3++;
							v7 = v9 + 2 * (5 * v7 - 24);
							v8 = *v3;
						} while (*v3);
						v10 = sub_14018DB00((__int64)v5, v4 + 1, 4i64);
						v10[v4] = v7;
						v11 = v10;
						if (v5 != v10)
						{
							sub_1407DB590(v10, v5, 4 * v4);
							if (v5)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
							v5 = v11;
						}
						++v4;
						v7 = 0;
					}
					else
					{
						++v3;
					}
					v6 = *v3;
				} while (*v3);
				v18 = (__int64)v5;
				v19 = v4;
			}
		}
	}
	if (*(_DWORD*)(a1 + 1064))
	{
		if (*(_DWORD*)(qword_140C7AAC0 + 8) == 2)
		{
			v13 = sub_14018DB00((__int64)v5, v4 + 1, 4i64);
			v14 = 4 * v4;
			v13[v4] = 2;
		}
		else
		{
			v12 = v4 + 1;
			if (*(_DWORD*)(qword_140C7AAC0 + 8) == 3)
			{
				v13 = sub_14018DB00((__int64)v5, v12, 4i64);
				v14 = 4 * v4;
				v13[v4] = 1;
			}
			else
			{
				v13 = sub_14018DB00((__int64)v5, v12, 4i64);
				v14 = 4 * v4;
				v13[v4] = 0;
			}
		}
		v15 = (__int64)v13;
		if (v5 != v13)
		{
			sub_1407DB590(v13, v5, v14);
			if (v5)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
			v5 = (int*)v15;
			v18 = v15;
		}
		v19 = v4 + 1;
	}
	*(_DWORD*)(a1 + 1160) = *(_DWORD*)(a1 + 1060);
	*(_QWORD*)(a1 + 1164) = *(unsigned int*)(a1 + 1056);
	*(_DWORD*)(a1 + 1024) = 1;
	*(_DWORD*)(a1 + 1644) = -1;
	if (*(_DWORD*)(a1 + 1216))
		v16 = sub_140002870(a1 + 1152, *(__m128i**)(a1 + 1032), (__int64)&v18, *(_DWORD*)(a1 + 1640));
	else
		v16 = -2147467259;
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	return v16;
}
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

