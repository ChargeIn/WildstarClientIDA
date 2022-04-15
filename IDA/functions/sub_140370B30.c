#include "../winhttp.h"

//----- (0000000140370B30) ----------------------------------------------------
_QWORD* __fastcall sub_140370B30(
	__int64* a1,
	__int64 a2,
	__int64(__fastcall* a3)(__int64, __int64, __int64),
	__int64 a4)
{
	__int64* v7; // rax
	__int64 i; // r15
	__int64 v9; // r14
	int j; // ecx
	__int64 v11; // rbx
	_QWORD* result; // rax
	__int64 v13; // rbp
	__int64 v14; // rdi
	_QWORD* v15; // rdx
	__int64 v16; // r9
	_QWORD* v17; // r8
	__int64* v18; // rax
	int v19; // [rsp+20h] [rbp-38h]

	v7 = a1;
	for (i = 1i64; ; i *= 2i64)
	{
		v9 = *v7;
		for (j = 1; ; j = 0)
		{
			v19 = j;
			v11 = v9;
			for (result = (_QWORD*)i; v11; result = (_QWORD*)((char*)result - 1))
			{
				if (!result)
					break;
				v11 = *(_QWORD*)(v11 + a2 + 8);
			}
			v13 = i;
			v14 = i;
			if (!v11)
				break;
			while (v13)
			{
				if (!v14)
					goto LABEL_21;
				result = (_QWORD*)a3(v9, v11, a4);
				if ((int)result > 0)
				{
					v15 = (_QWORD*)(v11 + a2);
					v16 = v11;
					v17 = (_QWORD*)(v11 + a2 + 8);
					--v14;
					**(_QWORD**)(v11 + a2) = *v17;
					v18 = *(__int64**)(v11 + a2);
					v11 = *v18;
					if (*v18)
						*(_QWORD*)(v11 + a2) = v18;
					result = *(_QWORD**)(v9 + a2);
					*v17 = v9;
					*v15 = result;
					*result = v16;
					*(_QWORD*)(v9 + a2) = v17;
				}
				else
				{
					v9 = *(_QWORD*)(v9 + a2 + 8);
					--v13;
				}
				if (!v11)
				{
				LABEL_15:
					j = v19;
					goto LABEL_16;
				}
			}
			while (v14)
			{
				v11 = *(_QWORD*)(v11 + a2 + 8);
				--v14;
				if (!v11)
					goto LABEL_15;
			}
		LABEL_21:
			v9 = v11;
		}
	LABEL_16:
		if (j)
			break;
		v7 = a1;
	}
	return result;
}

