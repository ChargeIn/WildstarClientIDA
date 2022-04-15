#include "../winhttp.h"

//----- (000000014057A450) ----------------------------------------------------
void __fastcall sub_14057A450(__int64 a1, __int64 a2, double a3)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	_DWORD* v5; // rbx
	int* v6; // rax
	int* v7; // rsi
	int v8; // ecx
	int v9; // ecx
	__int64 v10; // rdi
	int v11; // ebx
	unsigned int v12; // esi
	__int64 i; // rbx
	unsigned int v14; // [rsp+30h] [rbp-38h] BYREF
	_BYTE v15[12]; // [rsp+34h] [rbp-34h]
	void(__fastcall * v16)(__int64); // [rsp+40h] [rbp-28h]
	__int64 v17; // [rsp+48h] [rbp-20h]
	__int64 v18; // [rsp+70h] [rbp+8h] BYREF

	v18 = a1;
	v3 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 25744);
	if (a2 == v4)
	{
		*(_DWORD*)(v4 + 3408) = 1;
		*(_DWORD*)(*(_QWORD*)(v3 + 25744) + 3416i64) = 0;
		*(_QWORD*)(v3 + 25736) = 0i64;
		sub_14079A4F0(v3 + 28808);
		v14 = 0;
		*(_QWORD*)&v15[4] = sub_14001C280(v3);
		v17 = 0i64;
		v16 = sub_14057A2C0;
		sub_140195960(v3 + 28720, dword_140C3A004, (__int64)&v14, 4);
		v5 = *(_DWORD**)(v3 + 25744);
		*(_QWORD*)v15 = 8i64;
		v6 = sub_14018C320(0i64, 0x240ui64, 8u);
		v14 = 1;
		*v6 = 2;
		v7 = v6;
		v6[2] = v5[988];
		v8 = v5[989];
		v16 = (void(__fastcall*)(__int64))v6;
		v6[3] = v8;
		v6[4] = v5[990];
		v9 = dword_140C636A8;
		v6[5] = 0;
		v10 = *(_QWORD*)(v3 + 25744);
		LODWORD(v18) = v9;
		if (*(_DWORD*)(v10 + 3408) || *(_DWORD*)(v10 + 128) == 18)
		{
			v11 = 0;
			while ((int)sub_1405B4AB0(v10, (unsigned int*)&v18, (unsigned int*)&v7[18 * v11], 0i64, 0i64) >= 0)
			{
				if (++v11)
				{
					v12 = v18;
					sub_1405B4F50(v10, v18);
					sub_1405B5070(v10, v12);
					sub_1405B82A0(v10, v12, a3);
					for (i = *(_QWORD*)(v10 + 3848); i; i = *(_QWORD*)(i + 3864))
						sub_1405B4EF0(i, v12, a3);
					break;
				}
			}
		}
		sub_14057A190(v3, &v14);
		sub_14079A4F0((__int64)&v14);
		sub_14018B900((__int64)v16, 0);
	}
}
// 140C3A004: using guessed type int dword_140C3A004;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

