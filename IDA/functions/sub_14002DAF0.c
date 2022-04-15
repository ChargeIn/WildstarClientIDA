#include "../winhttp.h"

//----- (000000014002DAF0) ----------------------------------------------------
__int64 __fastcall sub_14002DAF0(__int64 a1, __int64 a2, int a3)
{
	int* (__fastcall * v6)(__int64, unsigned int, unsigned int); // rax
	void(__fastcall * v7)(__int64, int*); // rcx
	int* v8; // rax
	int* v9; // rdi
	int v10; // ebx
	unsigned int v12; // eax
	int v13; // eax
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rdi
	unsigned __int64 v16; // rbx
	int* v17; // rax
	int* v18; // r14
	__int64 v19; // rcx
	__int64 v20; // rdi
	void(__fastcall * v21)(__int64, __int64); // rbx
	__int64 v22; // rsi
	__int64 v23; // [rsp+20h] [rbp-60h] BYREF
	int v24; // [rsp+28h] [rbp-58h]
	unsigned __int64 v25; // [rsp+30h] [rbp-50h]
	unsigned int v26; // [rsp+38h] [rbp-48h]
	unsigned int v27; // [rsp+3Ch] [rbp-44h]
	__int64 v28; // [rsp+40h] [rbp-40h]
	int* v29; // [rsp+48h] [rbp-38h]
	void* v30; // [rsp+50h] [rbp-30h]
	void(__fastcall * v31)(__int64, int*); // [rsp+58h] [rbp-28h]
	__int64 v32; // [rsp+60h] [rbp-20h]

	sub_1407E4830((int*)&v23, 0i64, 0x58ui64);
	v6 = sub_14002D9A0;
	v23 = a2;
	v24 = a3;
	v25 = 0i64;
	v26 = 0;
	v7 = (void(__fastcall*)(__int64, int*))sub_14002D9C0;
	v30 = sub_14002D9A0;
	v32 = 0i64;
	if (byte_140C1E4AC != 49)
		return 2147500037i64;
	v28 = 0i64;
	if (!sub_14002D9A0)
	{
		v6 = (int* (__fastcall*)(__int64, unsigned int, unsigned int))sub_1401CD9D0;
		v32 = 0i64;
		v30 = sub_1401CD9D0;
	}
	if (!sub_14002D9C0)
		v7 = (void(__fastcall*)(__int64, int*))sub_1401CD9E0;
	v31 = v7;
	v8 = v6(0i64, 1u, 0x1BE8u);
	v9 = v8;
	if (!v8)
		return 2147942414i64;
	v29 = v8;
	*((_QWORD*)v8 + 7) = 0i64;
	v10 = sub_1401ABB20((__int64)&v23);
	if (v10)
	{
		v31(v32, v9);
		v29 = 0i64;
	}
	if (v10)
	{
		if (v10 == -4)
			return 2147942414i64;
		return 2147500037i64;
	}
	sub_140033620(a1, 0x14ui64);
	v25 = *(_QWORD*)a1;
	v12 = *(_DWORD*)(a1 + 8);
	while (1)
	{
		v26 = v12;
		v13 = sub_1401ABDA0((__int64)&v23, 2);
		if (v13)
			break;
		v14 = *(_QWORD*)(a1 + 8);
		if (v14 > 0x100000)
			return 2684551169i64;
		v15 = v14 + 20;
		v16 = v14 - v26;
		if (v14 <= v14 + 20)
		{
			v17 = sub_14018DB00(*(_QWORD*)a1, v15, 1i64);
			v18 = v17;
			if (*(int**)a1 != v17)
			{
				sub_1407DB590(v17, *(int**)a1, *(_QWORD*)(a1 + 8));
				if (*(_QWORD*)a1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
				*(_QWORD*)a1 = v18;
			}
		}
		v19 = *(_QWORD*)a1;
		*(_QWORD*)(a1 + 8) = v15;
		v12 = v15 - v16;
		v25 = v16 + v19;
	}
	if (v13 != 1)
	{
		if (v13 == -4)
			return 2147942414i64;
		return 2684551169i64;
	}
	sub_140033620(a1, v27);
	v20 = (__int64)v29;
	if (v29)
	{
		v21 = (void(__fastcall*)(__int64, __int64))v31;
		if (v31)
		{
			v22 = v32;
			if (*((_QWORD*)v29 + 7))
				((void(__fastcall*)(__int64))v31)(v32);
			v21(v22, v20);
		}
	}
	return 0i64;
}
// 140C1E4AC: using guessed type char byte_140C1E4AC;

