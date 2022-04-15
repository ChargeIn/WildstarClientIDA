#include "../winhttp.h"

//----- (000000014016CC70) ----------------------------------------------------
int* __fastcall sub_14016CC70(_QWORD* a1, unsigned int a2, void* a3)
{
	unsigned __int64 v3; // rax
	void* v4; // r15
	unsigned __int64 v5; // r14
	__int64 v7; // rcx
	int* result; // rax
	__int64 v9; // rdi
	unsigned __int64 v10; // rbp
	int* v11; // rax
	int* v12; // rsi
	int* v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rdi
	int* v16; // rdx
	int* v17; // rsi
	__int64 v18; // rcx
	__int64 v19; // [rsp+60h] [rbp+8h] BYREF

	v3 = a1[3];
	v4 = &unk_1409DD43C;
	v5 = a2;
	if (a3)
		v4 = a3;
	if (v3 <= a2)
	{
		if (v3 < a2)
		{
			do
			{
				v9 = a1[3];
				v10 = v9 + 1;
				v11 = sub_14018DB00(a1[2], v9 + 1, 8i64);
				v12 = v11;
				*(_QWORD*)&v11[2 * v9] = 0i64;
				v13 = (int*)a1[2];
				if (v13 != v11)
				{
					sub_1407DB590(v11, v13, 8i64 * a1[3]);
					v14 = a1[2];
					if (v14)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
					a1[2] = v12;
				}
				a1[3] = v10;
			} while (v10 < v5);
		}
		(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(a1[1] + 96i64),
			v4,
			-1i64,
			&v19);
		v15 = a1[3];
		result = sub_14018DB00(a1[2], v15 + 1, 8i64);
		*(_QWORD*)&result[2 * v15] = v19;
		v16 = (int*)a1[2];
		v17 = result;
		if (v16 != result)
		{
			result = sub_1407DB590(result, v16, 8i64 * a1[3]);
			v18 = a1[2];
			if (v18)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
			a1[2] = v17;
		}
		a1[3] = v15 + 1;
	}
	else
	{
		if (!*(_QWORD*)(a1[2] + 8i64 * a2))
		{
			(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(a1[1] + 96i64),
				v4,
				-1i64,
				&v19);
			*(_QWORD*)(a1[2] + 8 * v5) = v19;
		}
		v7 = *(_QWORD*)(a1[2] + 8 * v5);
		return (int*)(*(__int64(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)v7 + 56i64))(v7, v4, -1i64);
	}
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

