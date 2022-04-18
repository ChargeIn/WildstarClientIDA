#include "../winhttp.h"

//----- (000000014043C490) ----------------------------------------------------
__int64 __fastcall sub_14043C490(__int64 a1, unsigned int a2, int a3)
{
	_QWORD** v3; // rcx
	__int64 v6; // rbx
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rsi
	_QWORD* v13; // rax
	_QWORD* v14; // rdi
	__int64* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 i; // rdx
	__int64 v23; // [rsp+40h] [rbp+8h]

	v3 = (_QWORD**)qword_140C7CC78;
	v6 = *(_QWORD*)qword_140C7CC78;
	if (*(_QWORD*)qword_140C7CC78 != qword_140C7CC78)
	{
		while (a2 != *(_DWORD*)(v6 + 64))
		{
			v6 = *(_QWORD*)v6;
			if (v6 == qword_140C7CC78)
				goto LABEL_8;
		}
		v7 = *(_QWORD*)v6;
		v8 = *(_QWORD**)(v6 + 8);
		*v8 = *(_QWORD*)v6;
		*(_QWORD*)(v7 + 8) = v8;
		v9 = *(_QWORD*)(v6 + 40);
		if (v9)
			sub_14018B900(v9, 0);
		sub_14018B900(v6, 0);
		v3 = (_QWORD**)qword_140C7CC78;
	}
LABEL_8:
	if (a3)
	{
		v10 = qword_140C7CD18;
		v11 = *(_QWORD*)(qword_140C7CD18 + 8);
		if (!v11)
			goto LABEL_16;
		do
		{
			if (*(_DWORD*)(v11 + 32) < a2)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		} while (v11);
		if (v10 == qword_140C7CD18 || (v23 = v10, a2 < *(_DWORD*)(v10 + 32)))
			LABEL_16:
		v23 = qword_140C7CD18;
		if (v23 != qword_140C7CD18)
		{
			v12 = *(_QWORD*)(v23 + 40);
			v13 = *(_QWORD**)(v12 + 8);
			v14 = (_QWORD*)*v13;
			if ((_QWORD*)*v13 != v13)
			{
				v15 = (__int64*)qword_140C7CC88;
				do
				{
					v16 = *v15;
					if ((__int64*)*v15 != v15)
					{
						while (*((_DWORD*)v14 + 4) != *(_DWORD*)(v16 + 20))
						{
							v16 = *(_QWORD*)v16;
							if ((__int64*)v16 == v15)
								goto LABEL_27;
						}
						v17 = *(_QWORD*)v16;
						v18 = *(_QWORD**)(v16 + 8);
						*v18 = *(_QWORD*)v16;
						*(_QWORD*)(v17 + 8) = v18;
						v19 = *(_QWORD*)(v16 + 40);
						if (v19)
							sub_14018B900(v19, 0);
						sub_14018B900(v16, 0);
						v15 = (__int64*)qword_140C7CC88;
					}
				LABEL_27:
					v14 = (_QWORD*)*v14;
				} while (v14 != *(_QWORD**)(v12 + 8));
				v3 = (_QWORD**)qword_140C7CC78;
			}
		}
	}
	v20 = *v3;
	for (i = 0i64; v20 != v3; ++i)
		v20 = (_QWORD*)*v20;
	return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Communicator_UpdateCallback", byte_1409E9034, i != 0, 0);
}
// 1409E9034: using guessed type _BYTE byte_1409E9034[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7CC78: using guessed type __int64 qword_140C7CC78;
// 140C7CC88: using guessed type __int64 qword_140C7CC88;
// 140C7CD18: using guessed type __int64 qword_140C7CD18;

