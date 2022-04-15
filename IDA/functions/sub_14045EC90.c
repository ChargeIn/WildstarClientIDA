#include "../winhttp.h"

//----- (000000014045EC90) ----------------------------------------------------
void __fastcall sub_14045EC90(__int64 a1, int a2, double a3, double a4)
{
	__m128* v5; // rdi
	unsigned __int64 v6; // rax
	__int32 v7; // ebx
	unsigned __int64 v8; // rdx
	const void*** v9; // rax
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rbx
	__int64 v12; // rcx

	v5 = (__m128*)a1;
	if (!a2 || (v6 = *(int*)(a1 + 128), (unsigned int)v6 > 0x24) || (a1 = 0x1042CE5D12i64, !_bittest64(&a1, v6)))
	{
		if (v5[37].m128_i32[0] != a2)
		{
			v7 = 0;
			v5[37].m128_i32[1] = a2;
			v5[37].m128_i32[0] = a2;
			if (a2)
			{
				v8 = v5[889].m128_u64[1];
				if (v8)
				{
					a1 = *(_QWORD*)(qword_140C65920 + 8);
					if (a1)
					{
						while (*(_QWORD*)(a1 + 72) != v8)
						{
							a1 = *(_QWORD*)(a1 + 32);
							if (!a1)
								goto LABEL_12;
						}
						(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
					}
				LABEL_12:
					v5[889].m128_u64[1] = 0i64;
				}
				sub_14055AFC0(a1, (__int64)v5, a3, a4);
				sub_14045DD00((__int64)v5);
			}
			LOBYTE(v7) = v5[37].m128_i32[0] != 0;
			v5[308].m128_i32[2] = v7;
			sub_14046C300(v5, 1, 0);
			if (v5[37].m128_i32[0])
			{
				v9 = (const void***)sub_1404695E0((__int64)v5);
				if (v9)
				{
					sub_140540070(v9, v5->m128_i32[2], a2);
					sub_1404698A0((__int64)v5);
				}
				v10 = v5[348].m128_u64[0];
				if (v10)
				{
					do
					{
						v11 = *(_QWORD*)(v10 + 16);
						sub_140540070((const void***)v10, v5->m128_i32[2], a2);
						v10 = v11;
					} while (v11);
				}
				if (v5[213].m128_i32[0])
				{
					sub_1403BF1A0();
					sub_140640F60(v12, v5);
				}
			}
		}
	}
}
// 14045ED23: variable 'a1' is possibly undefined
// 14045EDB8: variable 'v12' is possibly undefined
// 140C65920: using guessed type __int64 qword_140C65920;

