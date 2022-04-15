#include "../winhttp.h"

//----- (00000001400D3A20) ----------------------------------------------------
__int64 __fastcall sub_1400D3A20(__int64 a1, __int64 a2)
{
	int* v5; // rax
	__int64 v6; // rdi
	int* v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rdx
	_QWORD* v10; // rax
	__int64 v11; // rsi
	_QWORD* v12; // rax
	_QWORD* v13; // rbx
	int* v14; // rax
	__int64* v15; // rbx
	__int64 v16; // rcx

	if (*(_QWORD*)(a2 + 16) && !(unsigned int)sub_1400F9ED0(a2))
		return 0i64;
	v5 = sub_14018B280(24i64, 0);
	*(_QWORD*)v5 = v5;
	v6 = (__int64)v5;
	*((_QWORD*)v5 + 1) = v5;
	v7 = sub_14018B280(24i64, 0);
	if (v7 != (int*)-16i64)
		*((_QWORD*)v7 + 2) = a1;
	*(_QWORD*)v7 = v6;
	*((_QWORD*)v7 + 1) = *(_QWORD*)(v6 + 8);
	**(_QWORD**)(v6 + 8) = v7;
	*(_QWORD*)(v6 + 8) = v7;
	while (*(_QWORD*)v6 != v6)
	{
		v8 = *(__int64**)v6;
		v9 = **(_QWORD**)v6;
		v10 = *(_QWORD**)(*(_QWORD*)v6 + 8i64);
		v11 = *(_QWORD*)(*(_QWORD*)v6 + 16i64);
		*v10 = v9;
		*(_QWORD*)(v9 + 8) = v10;
		sub_14018B900((__int64)v8, 0);
		if ((*(_BYTE*)(v11 + 28) & 1) != 0)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(v11 + 816) + 8i64))(v11 + 816)
				&& (!*(_QWORD*)(v11 + 832) || (unsigned int)sub_1400F9ED0(v11 + 816))
				&& sub_1400F9CB0(v11 + 816, a2))
			{
				goto LABEL_18;
			}
			v12 = *(_QWORD**)(v11 + 560);
			v13 = (_QWORD*)*v12;
			if ((_QWORD*)*v12 != v12)
			{
				do
				{
					v14 = sub_14018B280(24i64, 0);
					if (v14 != (int*)-16i64)
						*((_QWORD*)v14 + 2) = v13[2];
					*(_QWORD*)v14 = v6;
					*((_QWORD*)v14 + 1) = *(_QWORD*)(v6 + 8);
					**(_QWORD**)(v6 + 8) = v14;
					*(_QWORD*)(v6 + 8) = v14;
					v13 = (_QWORD*)*v13;
				} while (v13 != *(_QWORD**)(v11 + 560));
			}
		}
	}
	v11 = 0i64;
LABEL_18:
	v15 = *(__int64**)v6;
	while (v15 != (__int64*)v6)
	{
		v16 = (__int64)v15;
		v15 = (__int64*)*v15;
		sub_14018B900(v16, 0);
	}
	*(_QWORD*)v6 = v6;
	*(_QWORD*)(v6 + 8) = v6;
	sub_14018B900(v6, 0);
	return v11;
}

