#include "../winhttp.h"

//----- (00000001406E6ED0) ----------------------------------------------------
__int64 __fastcall sub_1406E6ED0(_QWORD* a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // r15
	__int64 v9; // r13
	unsigned int v10; // edi
	__int64 v11; // rcx
	_DWORD* v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rdi
	__int64 v15; // rsi
	int* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // [rsp+50h] [rbp+8h]

	result = qword_140C65898;
	a1[334] = 0i64;
	if (result)
		v7 = *(_QWORD*)(result + 120);
	else
		v7 = 0i64;
	v18 = v7;
	if (!v7)
		return result;
	v8 = 0i64;
	if (!a1[308])
		return result;
	do
	{
		v9 = *(_QWORD*)(a1[307] + 8 * v8);
		result = sub_1406DFA40(v9, v7);
		v10 = result;
		if (qword_140C63840)
		{
			result = qword_140C63840(off_140A6C350, (unsigned int)result, qword_140C63858);
		}
		else
		{
			if (dword_140C64FC4)
				goto LABEL_27;
			result = sub_140225FE0();
			if ((int)result < 0)
				goto LABEL_27;
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65078 + 24i64))(qword_140C65078, v10);
		}
		v11 = result;
		if (!result)
			goto LABEL_27;
		result = 0i64;
		v12 = (_DWORD*)(v11 + 20);
		v13 = 4i64;
		do
		{
			if (*(v12 - 4) != a2)
				goto LABEL_20;
			if (a2 != 1)
			{
				if (a2 <= 1)
					goto LABEL_20;
				if (a2 <= 3)
				{
					result = 1i64;
					goto LABEL_20;
				}
				if (a2 > 5)
					goto LABEL_20;
			}
			if (*v12 == a3)
				result = 1i64;
		LABEL_20:
			++v12;
			--v13;
		} while (v13);
		if ((_DWORD)result)
		{
			v14 = a1[334];
			result = (__int64)sub_14018DB00(a1[333], v14 + 1, 8i64);
			v15 = result;
			*(_QWORD*)(result + 8 * v14) = v9;
			v16 = (int*)a1[333];
			if (v16 != (int*)result)
			{
				result = (__int64)sub_1407DB590((int*)result, v16, 8i64 * a1[334]);
				v17 = a1[333];
				if (v17)
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				a1[333] = v15;
			}
			a1[334] = v14 + 1;
		}
	LABEL_27:
		v7 = v18;
		++v8;
	} while (v8 < a1[308]);
	return result;
}
// 140A6C350: using guessed type wchar_t *off_140A6C350[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FC4: using guessed type int dword_140C64FC4;
// 140C65078: using guessed type __int64 qword_140C65078;
// 140C65898: using guessed type __int64 qword_140C65898;

