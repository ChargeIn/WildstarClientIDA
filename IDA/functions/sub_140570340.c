#include "../winhttp.h"

//----- (0000000140570340) ----------------------------------------------------
void __fastcall sub_140570340(__int64 a1, _QWORD** a2)
{
	__int64 v4; // rcx
	unsigned int v5; // eax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	unsigned int v10; // r13d
	int* v11; // rsi
	unsigned int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rdi
	__int64 v15; // r12
	int* v16; // rax
	int* v17; // rdx
	int* v18; // rbp
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v23; // [rsp+20h] [rbp-38h]
	__int64 v24; // [rsp+68h] [rbp+10h]

	v4 = *a2[6];
	v5 = *(_DWORD*)(v4 + 12);
	if (v5 <= 0x1B)
	{
		v6 = 134250504;
		if (_bittest(&v6, v5))
		{
			v7 = sub_140721EF0(v4, *(_DWORD*)(v4 + 20));
			v24 = v7;
			if (v7)
			{
				v8 = *(_QWORD*)(v7 + 16);
				v9 = *(_QWORD*)(v8 + 16);
				v10 = 0;
				if (v9 != v8)
				{
					do
					{
						LODWORD(v23) = ***(_DWORD***)(v9 + 40);
						v11 = sub_14018B280(32i64, 0);
						if (v11)
						{
							v12 = ((__int64(__fastcall*)(_QWORD**))(*a2)[1])(a2);
							v13 = *(_QWORD*)(v9 + 40);
							*((_QWORD*)v11 + 3) = 0i64;
							*(_QWORD*)v11 = v13;
							v11[3] = v10;
							v11[2] = 0;
							*((_QWORD*)v11 + 2) = v12;
						}
						else
						{
							v11 = 0i64;
						}
						v14 = *(_QWORD*)(a1 + 208);
						v15 = v14 + 1;
						v16 = sub_14018DB00(*(_QWORD*)(a1 + 200), v14 + 1, 16i64);
						v14 *= 2i64;
						*(_QWORD*)&v16[2 * v14] = v23;
						*(_QWORD*)&v16[2 * v14 + 2] = v11;
						v17 = *(int**)(a1 + 200);
						v18 = v16;
						if (v17 != v16)
						{
							sub_1407DB590(v16, v17, 16i64 * *(_QWORD*)(a1 + 208));
							v19 = *(_QWORD*)(a1 + 200);
							if (v19)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
							*(_QWORD*)(a1 + 200) = v18;
						}
						*(_QWORD*)(a1 + 208) = v15;
						if (((unsigned int(__fastcall*)(_QWORD**))(*a2)[7])(a2)
							|| ((unsigned int(__fastcall*)(_QWORD**))(*a2)[5])(a2)
							&& ((unsigned int(__fastcall*)(_QWORD**, _QWORD))(*a2)[10])(a2, v10))
						{
							if (v11[2] != 1)
								v11[2] = 1;
						}
						else if (v11[2])
						{
							v11[2] = 0;
						}
						v20 = *(_QWORD*)(v9 + 24);
						++v10;
						if (v20)
						{
							v9 = *(_QWORD*)(v9 + 24);
							for (i = *(_QWORD*)(v20 + 16); i; i = *(_QWORD*)(i + 16))
								v9 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v9 = j;
							if (*(_QWORD*)(v9 + 24) != j)
								v9 = j;
						}
					} while (v9 != *(_QWORD*)(v24 + 16));
				}
				sub_1405732A0((__int64*)(a1 + 200));
			}
		}
	}
}
// 140570438: variable 'v23' is possibly undefined

