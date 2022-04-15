#include "../winhttp.h"

//----- (00000001408EBE00) ----------------------------------------------------
__int64 __fastcall sub_1408EBE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // r10d
	__int64 v8; // rax
	__int64 result; // rax
	__int64 v10; // rsi
	int v11; // ecx
	unsigned int v12; // r14d
	int i; // edi
	__int64 v14; // rax
	__int64 v15; // rbp
	__int64 v16; // rax
	unsigned int v17; // r8d
	__int64 v18; // r8
	__int64 v19; // rdx
	int v20; // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+28h] [rbp-40h]
	int v22; // [rsp+30h] [rbp-38h]

	v4 = *(_DWORD*)(a2 + 232);
	v8 = *(_QWORD*)(a1 + 8i64 * (v4 % 0x1F));
	if (v8)
	{
		while (*(_DWORD*)v8 != v4)
		{
			v8 = *(_QWORD*)(v8 + 8);
			if (!v8)
				goto LABEL_4;
		}
		++* (_DWORD*)(v8 + 40);
		return v8 + 16;
	}
	else
	{
	LABEL_4:
		result = sub_1408819F0(dword_140C10F28, 48i64);
		v10 = result;
		if (result)
		{
			*(_QWORD*)(result + 16) = 0i64;
			*(_QWORD*)(result + 24) = 0i64;
			*(_QWORD*)(result + 32) = 0i64;
			*(_DWORD*)(result + 40) = 0;
			v11 = *(_DWORD*)(a2 + 184);
			v12 = *(_DWORD*)(a2 + 228);
			for (i = 0; v11; v11 &= v11 - 1)
				++i;
			v14 = sub_1408819F0(dword_140C10F28, *(unsigned int*)(a2 + 228));
			*(_DWORD*)(v10 + 36) = v12;
			v15 = v14;
			*(_QWORD*)(v10 + 16) = v14;
			*(_QWORD*)(v10 + 24) = v14;
			if (!v14
				|| (*(_DWORD*)(v10 + 32) + 72 > v12
					? (v15 = 0i64)
					: (*(_QWORD*)(v10 + 24) = v14 + 72, *(_DWORD*)(v10 + 32) += 72),
					(unsigned int)sub_1408EDC60(v15, *(_BYTE*)(a2 + 236), *(_BYTE*)(a2 + 237))
					|| (v16 = *(_QWORD*)a4,
						v22 = *(_DWORD*)(a4 + 8),
						v20 = 0,
						v21 = v16,
						(unsigned int)sub_1408EDCC0(v15, i, (__int64)&v20, v10 + 16))))
			{
				v19 = *(_QWORD*)(v10 + 16);
				if (v19)
				{
					sub_140881720(dword_140C10F28, v19);
					*(_QWORD*)(v10 + 24) = 0i64;
					*(_QWORD*)(v10 + 32) = 0i64;
					*(_QWORD*)(v10 + 16) = 0i64;
				}
				sub_140881720(dword_140C10F28, v10);
				return 0i64;
			}
			else
			{
				++* (_DWORD*)(v10 + 40);
				v17 = *(_DWORD*)(a2 + 232);
				*(_DWORD*)v10 = v17;
				result = v10 + 16;
				v18 = v17 % 0x1F;
				*(_QWORD*)(v10 + 8) = *(_QWORD*)(a1 + 8 * v18);
				*(_QWORD*)(a1 + 8 * v18) = v10;
				++* (_DWORD*)(a1 + 248);
			}
		}
	}
	return result;
}
// 1408EBF02: conditional instruction was optimized away because rax.8!=0
// 140C10F28: using guessed type int dword_140C10F28;

