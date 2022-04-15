#include "../winhttp.h"

//----- (0000000140758B00) ----------------------------------------------------
void** sub_140758B00()
{
	void** result; // rax
	unsigned int i; // r13d
	int* v2; // rax
	__int64 v3; // r14
	unsigned int* v4; // r15
	__int64 v5; // r12
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rsi
	float* v10; // rdi
	__int64 v11; // rbp
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rcx
	int* v15; // rax
	void* retaddr; // [rsp+58h] [rbp+0h] BYREF
	int v17; // [rsp+60h] [rbp+8h] BYREF

	result = &retaddr;
	if (!qword_140C7F418)
	{
		for (i = 0; ; ++i)
		{
			result = (void**)qword_140C63838;
			if (qword_140C63838)
			{
				result = (void**)qword_140C63838(off_140A69950, qword_140C63858);
			}
			else
			{
				if (dword_140C65254)
					return result;
				result = (void**)sub_1401F2F80();
				if ((int)result < 0)
					return result;
				result = (void**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C28 + 40i64))(qword_140C63C28);
			}
			if (i >= (unsigned int)result)
				return result;
			if (qword_140C63848)
			{
				v2 = (int*)qword_140C63848(off_140A69950, i, qword_140C63858);
			}
			else
			{
				if (dword_140C65254 || (int)sub_1401F2F80() < 0)
					continue;
				v2 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 32i64))(
					qword_140C63C28,
					i);
			}
			if (v2)
			{
				v3 = 0i64;
				v4 = (unsigned int*)(v2 + 47);
				v17 = *v2;
				v5 = 6i64;
				while (1)
				{
					v6 = *v4;
					if (qword_140C63840)
						break;
					if (!dword_140C64BE8 && (int)sub_1401F33C0() >= 0)
					{
						v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DB8 + 24i64))(qword_140C64DB8, v6);
					LABEL_21:
						if (v7)
						{
							v9 = 0i64;
							v10 = (float*)(v7 + 16);
							v11 = 3i64;
							do
							{
								if (*v10 != 0.0)
								{
									v12 = v3 + v9;
									v13 = sub_14075A190(v8, &v17);
									v14 = *((unsigned int*)v10 - 3);
									v13[2 * v12] = v14;
									v15 = sub_14075A190(v14, &v17);
									v8 = *(unsigned int*)v10;
									v15[2 * v12 + 1] = v8;
								}
								++v9;
								++v10;
								--v11;
							} while (v11);
						}
					}
					++v4;
					v3 += 3i64;
					if (!--v5)
						goto LABEL_27;
				}
				v7 = qword_140C63840(off_140A69988, v6, qword_140C63858);
				goto LABEL_21;
			}
		LABEL_27:
			;
		}
	}
	return result;
}
// 140758C60: variable 'v8' is possibly undefined
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140A69988: using guessed type wchar_t *off_140A69988[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C64BE8: using guessed type int dword_140C64BE8;
// 140C64DB8: using guessed type __int64 qword_140C64DB8;
// 140C65254: using guessed type int dword_140C65254;
// 140C7F418: using guessed type __int64 qword_140C7F418;

