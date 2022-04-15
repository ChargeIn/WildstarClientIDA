#include "../winhttp.h"

//----- (00000001402C9790) ----------------------------------------------------
__int64 __fastcall sub_1402C9790(__int64 a1, int* a2)
{
	__int64 v4; // rax
	unsigned __int64 v6; // rbx
	__int64 v7; // rax
	int* v8; // rax
	__int64 result; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rbp
	int** v12; // rdi
	int* v13; // rax
	__int64 v14; // rcx
	int* v15; // rcx
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	int v17; // [rsp+28h] [rbp-30h]
	__int64 v18; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * v19)(__int64); // [rsp+38h] [rbp-20h]
	__int64 v20; // [rsp+40h] [rbp-18h]
	__int64 v21; // [rsp+48h] [rbp-10h]

	if (!a2 || !*(_WORD*)a2)
		return 2147942487i64;
	v4 = -1i64;
	while (*((_WORD*)a2 + ++v4) != 0)
		;
	v6 = (unsigned int)(v4 + 1);
	v7 = 2 * v6;
	if (!is_mul_ok(v6, 2ui64))
		v7 = -1i64;
	v8 = sub_14018B280(v7, 0);
	*(_QWORD*)(a1 + 16) = v8;
	sub_1407DB590(v8, a2, 2 * v6);
	result = sub_1402C99C0(a1);
	if ((int)result >= 0)
	{
		v10 = qword_140C657F0;
		*(_DWORD*)(a1 + 48) = 1;
		if (*(_QWORD*)(v10 + 56) == *(_QWORD*)(v10 + 64))
			sub_1400290D0(v10 + 56);
		v11 = (*(__int64(__fastcall**)(__int64))(v10 + 80))(a1 + 16);
		v12 = (int**)(*(_QWORD*)(v10 + 72) + 8 * (v11 % *(_QWORD*)(v10 + 64)));
		v13 = sub_14018B280(32i64, 0);
		if (v13)
		{
			v15 = *v12;
			*(_QWORD*)v13 = v11;
			*((_QWORD*)v13 + 1) = v15;
			v14 = *(_QWORD*)(a1 + 16);
			*((_QWORD*)v13 + 3) = a1;
			*((_QWORD*)v13 + 2) = v14;
		}
		else
		{
			v13 = 0i64;
		}
		*v12 = v13;
		++* (_QWORD*)(v10 + 56);
		v16 = *(_QWORD*)(a1 + 16);
		v17 = 0;
		v20 = 0i64;
		v21 = 0i64;
		v18 = a1;
		v19 = sub_1402C98E0;
		sub_1401B6BF0(v14, &v16, (int**)(a1 + 56));
		return 0i64;
	}
	return result;
}
// 1402C98AE: variable 'v14' is possibly undefined
// 140C657F0: using guessed type __int64 qword_140C657F0;

