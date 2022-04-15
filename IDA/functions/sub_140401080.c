#include "../winhttp.h"

//----- (0000000140401080) ----------------------------------------------------
_QWORD* __fastcall sub_140401080(
	__int64* a1,
	__int64 a2,
	__int64(__fastcall* a3)(__int64, __int64, __int64),
	__int64 a4)
{
	__int64* v6; // rax
	__int64 i; // r14
	__int64 v8; // rsi
	int j; // r13d
	__int64 v10; // rbx
	_QWORD* result; // rax
	__int64 v12; // rbp
	__int64 v13; // rdi
	_QWORD* v14; // rdx
	__int64 v15; // r9
	_QWORD* v16; // r8
	__int64* v17; // rax

	v6 = a1;
	for (i = 1i64; ; i *= 2i64)
	{
		v8 = *v6;
		for (j = 1; ; j = 0)
		{
			v10 = v8;
			for (result = (_QWORD*)i; v10; result = (_QWORD*)((char*)result - 1))
			{
				if (!result)
					break;
				v10 = *(_QWORD*)(v10 + 96);
			}
			v12 = i;
			v13 = i;
			if (!v10)
				break;
			while (v12)
			{
				if (!v13)
					goto LABEL_20;
				result = (_QWORD*)a3(v8, v10, a4);
				if ((int)result > 0)
				{
					v14 = (_QWORD*)(v10 + 88);
					v15 = v10;
					v16 = (_QWORD*)(v10 + 96);
					--v13;
					**(_QWORD**)(v10 + 88) = *(_QWORD*)(v10 + 96);
					v17 = *(__int64**)(v10 + 88);
					v10 = *v17;
					if (*v17)
						*(_QWORD*)(v10 + 88) = v17;
					result = *(_QWORD**)(v8 + 88);
					*v16 = v8;
					*v14 = result;
					*result = v15;
					*(_QWORD*)(v8 + 88) = v16;
				}
				else
				{
					v8 = *(_QWORD*)(v8 + 96);
					--v12;
				}
				if (!v10)
					goto LABEL_15;
			}
			while (v13)
			{
				v10 = *(_QWORD*)(v10 + 96);
				--v13;
				if (!v10)
					goto LABEL_15;
			}
		LABEL_20:
			v8 = v10;
		}
	LABEL_15:
		if (j)
			break;
		v6 = a1;
	}
	return result;
}

