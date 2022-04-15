#include "../winhttp.h"

//----- (000000014063D680) ----------------------------------------------------
void __fastcall sub_14063D680(__m128i* a1, __int64 a2)
{
	__m128i* v3; // rbx
	__int64 v4; // rsi
	unsigned __int64 v5; // rsi
	const __m128i* v6; // rbp
	int* v7; // rax
	int* v8; // rdi
	int* v9; // r14
	signed __int64 v10; // r15
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // r15
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	int* v15; // [rsp+28h] [rbp-40h]
	int* v16; // [rsp+30h] [rbp-38h]
	int* v17; // [rsp+38h] [rbp-30h]

	v3 = a1;
	v4 = -1i64;
	do
		++v4;
	while (a1->m128i_i8[v4]);
	v5 = (unsigned __int64)a1->m128i_u64 + v4;
	if ((unsigned __int64)a1 < v5)
	{
		while (1)
		{
			v6 = sub_1407DDCF8(v3, (const __m128i*)"\n");
			if (!v6)
			{
				v6 = (const __m128i*)sub_1407DE0B4((__int64)v3, 0xAu);
				if (!v6)
					v6 = (const __m128i*)(v5 + 1);
			}
			v7 = sub_14018B280(8i64, 0);
			v8 = v7;
			v15 = v7;
			v9 = v7;
			v16 = v7;
			v17 = v7 + 2;
			if (v7)
				*(_BYTE*)v7 = 0;
			if ((char*)v6 - (char*)v3 < 1)
				break;
			v10 = (char*)&v6[-1].m128i_u64[1] + 7 - (char*)v3;
			if ((__m128i*)((char*)&v6[-1].m128i_u64[1] + 7) == v3)
			{
				sub_1407DB590(v7, v3->m128i_i32, (char*)&v6[-1].m128i_u64[1] + 7 - (char*)v3);
				if ((int*)((char*)v8 + v10) != v8)
				{
					sub_1407DB590(
						(int*)((char*)v8 + (char*)&v6[-1].m128i_u64[1] + 7 - (char*)v3),
						v8,
						(unsigned int)((_DWORD)v6 - (_DWORD)v3));
					v9 = (int*)((char*)v8 + v10);
					v16 = (int*)((char*)v8 + v10);
				}
			}
			else
			{
				sub_14001B050(&v14, v3->m128i_i32, (int*)((char*)&v6[-1].m128i_i32[3] + 3));
				v9 = v16;
				v8 = v15;
			}
			if (*(_BYTE*)v9 != 10)
			{
				sub_14001B050(&v14, (int*)"\n", (int*)"");
				v9 = v16;
				v8 = v15;
			}
			v11 = *(_QWORD*)(a2 + 8);
			v12 = sub_14018B280(48i64, 0);
			v13 = v12;
			if (v12 != (int*)-16i64)
			{
				*((_QWORD*)v12 + 3) = 0i64;
				*((_QWORD*)v12 + 4) = 0i64;
				*((_QWORD*)v12 + 5) = 0i64;
				sub_14001B240((_QWORD*)v12 + 2, v8, (__int64)v9);
			}
			*(_QWORD*)v13 = v11;
			*((_QWORD*)v13 + 1) = *(_QWORD*)(v11 + 8);
			**(_QWORD**)(v11 + 8) = v13;
			*(_QWORD*)(v11 + 8) = v13;
			v3 = (__m128i*) & v6->m128i_i8[1];
			if (v8)
				sub_14018B900((__int64)v8, 0);
			if ((unsigned __int64)v3 >= v5)
				return;
		}
		if (v7)
			sub_14018B900((__int64)v7, 0);
	}
}

