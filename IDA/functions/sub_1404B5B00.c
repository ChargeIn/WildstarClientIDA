#include "../winhttp.h"

//----- (00000001404B5B00) ----------------------------------------------------
_DWORD* __fastcall sub_1404B5B00(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	_DWORD* result; // rax
	_DWORD* v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rdi
	int* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	_QWORD* v11; // rdi
	_DWORD* v12; // r14
	unsigned __int64 v13; // rbp
	int** v14; // rsi
	int* v15; // rax
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax

	v2 = qword_140C659F0;
	result = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
	v5 = result;
	if (result)
	{
		v6 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)result + 32i64))(result);
		v7 = v6;
		if (v6
			&& *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6)
			&& ((*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 200i64))(v5) & 0x1000) != 0)
		{
			v8 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
			v9 = sub_1405B15C0((__int64)&qword_140C7DFB0, *v8);
			if (v9)
			{
				sub_1405AD480(v9, a2);
			}
			else
			{
				v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
				v11 = (_QWORD*)(v2 + 304);
				v12 = (_DWORD*)v10;
				if (*(_QWORD*)(v2 + 304) == *(_QWORD*)(v2 + 312))
					sub_1400290D0(v2 + 304);
				v13 = (*(__int64(__fastcall**)(_DWORD*))(v2 + 328))(v12);
				v14 = (int**)(v11[2] + 8 * (v13 % v11[1]));
				v15 = sub_14018B280(32i64, 0);
				if (v15)
				{
					v16 = *v14;
					*(_QWORD*)v15 = v13;
					*((_QWORD*)v15 + 1) = v16;
					LODWORD(v16) = *v12;
					*((_QWORD*)v15 + 3) = a2;
					v15[4] = (int)v16;
				}
				*v14 = v15;
				++* v11;
			}
		}
		result = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 344i64))(a2);
		if (result)
		{
			result = (_DWORD*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)result + 24i64))(result);
			if (result)
			{
				if (result[48])
				{
					v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
					v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 32i64))(v17);
					return (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18);
				}
			}
		}
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

