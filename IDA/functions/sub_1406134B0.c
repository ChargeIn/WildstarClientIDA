#include "../winhttp.h"

//----- (00000001406134B0) ----------------------------------------------------
void __fastcall sub_1406134B0(unsigned int a1, int a2, __int64 a3)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	unsigned __int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rdx
	_QWORD* v10; // rbx
	_QWORD* v11; // rbx
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rdi
	unsigned __int64 v15; // rsi
	_QWORD* v16; // rbx
	unsigned __int64 v17; // rsi
	int** v18; // rbx
	int* v19; // rax
	int* v20; // rcx
	unsigned __int64 v21; // rsi
	unsigned int v22; // [rsp+40h] [rbp+20h] BYREF
	__int64 v23; // [rsp+50h] [rbp+30h]

	v22 = a1;
	if (a2)
	{
		if (a2 == 1)
		{
			v4 = (*(__int64(__fastcall**)(unsigned int*))(a3 + 31288))(&v22);
			v5 = *(_QWORD**)(*(_QWORD*)(a3 + 31280) + 8 * (v4 % *(_QWORD*)(a3 + 31272)));
			if (v5)
			{
				while (v4 != *v5 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(a3 + 31296))(&v22, v5 + 2))
				{
					v5 = (_QWORD*)v5[1];
					if (!v5)
						return;
				}
				if (v5 != (_QWORD*)-20i64)
				{
					v23 = *(_QWORD*)((char*)v5 + 20);
					v6 = (*(__int64(__fastcall**)(unsigned int*))(a3 + 31288))(&v22);
					v7 = *(_QWORD*)(a3 + 31280);
					v8 = v6;
					v9 = v6 % *(_QWORD*)(a3 + 31272);
					if (--HIDWORD(v23))
					{
						v10 = *(_QWORD**)(v7 + 8 * v9);
						if (!v10)
							return;
						while (v8 != *v10
							|| !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(a3 + 31296))(&v22, v10 + 2))
						{
							v10 = (_QWORD*)v10[1];
							if (!v10)
								return;
						}
					LABEL_15:
						v11 = (_QWORD*)((char*)v10 + 20);
						if (v11)
							*v11 = v23;
						return;
					}
					v12 = v7 + 8 * v9;
					if (*(_QWORD*)v12)
					{
						while (v8 != **(_QWORD**)v12
							|| !(*(unsigned int(__fastcall**)(unsigned int*, __int64))(a3 + 31296))(
								&v22,
								*(_QWORD*)v12 + 16i64))
						{
							v12 = *(_QWORD*)v12 + 8i64;
							if (!*(_QWORD*)v12)
								return;
						}
						v13 = *(_QWORD*)v12;
						*(_QWORD*)v12 = *(_QWORD*)(*(_QWORD*)v12 + 8i64);
						sub_14018B900(v13, 0);
						--* (_QWORD*)(a3 + 31264);
					}
				}
			}
		}
	}
	else
	{
		v14 = a3 + 31264;
		v15 = (*(__int64(__fastcall**)(unsigned int*))(a3 + 31288))(&v22);
		v16 = *(_QWORD**)(*(_QWORD*)(v14 + 16) + 8 * (v15 % *(_QWORD*)(v14 + 8)));
		if (v16)
		{
			while (v15 != *v16 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v14 + 32))(&v22, v16 + 2))
			{
				v16 = (_QWORD*)v16[1];
				if (!v16)
					goto LABEL_27;
			}
			if (v16 != (_QWORD*)-20i64)
			{
				v23 = *(_QWORD*)((char*)v16 + 20) + 0x100000000i64;
				v21 = (*(__int64(__fastcall**)(unsigned int*))(v14 + 24))(&v22);
				v10 = *(_QWORD**)(*(_QWORD*)(v14 + 16) + 8 * (v21 % *(_QWORD*)(v14 + 8)));
				if (!v10)
					return;
				while (v21 != *v10 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v14 + 32))(&v22, v10 + 2))
				{
					v10 = (_QWORD*)v10[1];
					if (!v10)
						return;
				}
				goto LABEL_15;
			}
		}
	LABEL_27:
		v23 = v22 | 0x100000000i64;
		if (*(_QWORD*)v14 == *(_QWORD*)(v14 + 8))
			sub_1400290D0(v14);
		v17 = (*(__int64(__fastcall**)(unsigned int*))(v14 + 24))(&v22);
		v18 = (int**)(*(_QWORD*)(v14 + 16) + 8 * (v17 % *(_QWORD*)(v14 + 8)));
		v19 = sub_14018B280(32i64, 0);
		if (v19)
		{
			v20 = *v18;
			*(_QWORD*)v19 = v17;
			*((_QWORD*)v19 + 1) = v20;
			v19[4] = v22;
			*(_QWORD*)(v19 + 5) = v23;
		}
		*v18 = v19;
		++* (_QWORD*)v14;
	}
}

