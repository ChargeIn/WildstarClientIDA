#include "../winhttp.h"

//----- (00000001402E89F0) ----------------------------------------------------
void __fastcall sub_1402E89F0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r14
	__int64 v7; // rax
	__int64 v8; // rcx
	char* v9; // rbp
	__int64 v10; // rbx
	__int64 v11; // r15
	__int64 v12; // r12
	__int64 v13; // r8
	char* v14; // rdx
	unsigned __int8* v15; // r9
	__int64 v16; // rsi
	char v17; // al
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	v2 = *(_QWORD*)(a1 + 184);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 184) = 0i64;
	}
	if (*(_QWORD*)(a1 + 264))
	{
		v3 = *(_QWORD*)(a1 + 32);
		if (*(float*)(v3 + 96) != 0.0
			&& (*(_BYTE*)(v3 + 56) & 8) != 0
			&& (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 64i64))(
				*(_QWORD*)(a1 + 24),
				16i64)
				|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 64i64))(
					*(_QWORD*)(a1 + 40),
					16i64)))
		{
			v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 264) + 24i64))(*(_QWORD*)(a1 + 264));
			v5 = *(_QWORD*)(a1 + 24);
			v19 = 0i64;
			v6 = v4;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 72i64))(v5, 16i64, &v19);
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 24i64))(v19);
			v8 = *(_QWORD*)(a1 + 40);
			v18 = 0i64;
			v9 = (char*)v7;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v8 + 72i64))(v8, 16i64, &v18);
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18);
			sub_1402DDAC0(16, (int**)(a1 + 184));
			v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 184) + 24i64))(*(_QWORD*)(a1 + 184));
			v12 = 64i64;
			do
			{
				v13 = v11 - (_QWORD)v9;
				v14 = v9;
				v15 = (unsigned __int8*)(v6 + 5);
				v16 = 16i64;
				do
				{
					if ((float)((float)((float)*(v15 - 4) * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64)) >= 0.5)
						v17 = v14[v10 - (_QWORD)v9] ^ (*v14 ^ v14[v10 - (_QWORD)v9]) & 0x18;
					else
						v17 = *v14;
					v14[v13] = v17;
					if ((float)((float)((float)*v15 * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64)) >= 0.5)
						v14[v13 + 1] = *(_BYTE*)(v14 - v9 + v10 + 1) ^ (v14[1] ^ *(_BYTE*)(v14 - v9 + v10 + 1)) & 0x18;
					else
						v14[v13 + 1] = v14[1];
					if ((float)((float)((float)v15[4] * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64)) >= 0.5)
						v14[v13 + 2] = *(_BYTE*)(v14 - v9 + v10 + 2) ^ (v14[2] ^ *(_BYTE*)(v14 - v9 + v10 + 2)) & 0x18;
					else
						v14[v13 + 2] = v14[2];
					if ((float)((float)((float)v15[8] * 0.0039215689) * *(float*)(*(_QWORD*)(a1 + 32) + 96i64)) >= 0.5)
						v14[v13 + 3] = *(_BYTE*)(v14 - v9 + v10 + 3) ^ (v14[3] ^ *(_BYTE*)(v14 - v9 + v10 + 3)) & 0x18;
					else
						v14[v13 + 3] = v14[3];
					v14 += 4;
					v15 += 16;
					--v16;
				} while (v16);
				v6 += dword_140C4191C;
				v9 += dword_140C416EC;
				v10 += dword_140C416EC;
				v11 += dword_140C416EC;
				--v12;
			} while (v12);
			if (v18)
				(*(void(__fastcall**)(__int64, char*, __int64, unsigned __int8*))(*(_QWORD*)v18 + 8i64))(
					v18,
					v14,
					v13,
					v15);
			if (v19)
				(*(void(__fastcall**)(__int64, char*, __int64, unsigned __int8*))(*(_QWORD*)v19 + 8i64))(
					v19,
					v14,
					v13,
					v15);
		}
	}
}
// 1402E8CA7: variable 'v14' is possibly undefined
// 1402E8CA7: variable 'v13' is possibly undefined
// 1402E8CA7: variable 'v15' is possibly undefined
// 140C416EC: using guessed type int dword_140C416EC;
// 140C4191C: using guessed type int dword_140C4191C;

