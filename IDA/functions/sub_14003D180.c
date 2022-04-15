#include "../winhttp.h"

//----- (000000014003D180) ----------------------------------------------------
__int64* __fastcall sub_14003D180(__int64* a1, _QWORD* a2)
{
	__int64 v2; // r13
	__int64* v3; // r15
	int* v4; // rax
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r12
	_QWORD* v8; // r14
	__int64 v9; // r15
	int** v10; // rbp
	__int64 v11; // rdi
	int* v12; // rax
	int* v13; // rsi
	unsigned __int64 v14; // rdi
	__int64 v15; // rcx
	__int64 v19; // [rsp+80h] [rbp+18h]

	v2 = a2[1];
	v3 = a1;
	if (v2)
	{
		v4 = sub_14018B280(8 * v2 + 16, 0);
		v5 = 0i64;
		if (v4)
		{
			*((_QWORD*)v4 + 1) = v2;
			v6 = (__int64)(v4 + 4);
			*(_QWORD*)(v6 - 16) = off_140B55060;
		}
		else
		{
			v6 = 16i64;
		}
	}
	else
	{
		v5 = 0i64;
		v6 = 0i64;
	}
	v19 = v6;
	if (v2)
	{
		v7 = v2;
		v8 = (_QWORD*)v6;
		v9 = -v6;
		do
		{
			if (v8)
			{
				v10 = (int**)((char*)v8 + v9 + *a2);
				if (*v10)
				{
					v11 = *((_QWORD*)*v10 - 1);
					v12 = sub_14018B280(2 * v11 + 18, 0);
					if (v12)
					{
						*(_QWORD*)v12 = off_140B55060;
						*((_QWORD*)v12 + 1) = v11;
					}
					else
					{
						v12 = 0i64;
					}
					v13 = v12 + 4;
					v14 = 2 * v11;
					sub_1407DB590(v12 + 4, *v10, v14);
					*(_WORD*)((char*)v13 + v14) = 0;
					*v8 = v13;
				}
				else
				{
					*v8 = 0i64;
				}
			}
			++v8;
			--v7;
		} while (v7);
		v3 = a1;
	}
	if (v3[1])
	{
		do
		{
			v15 = *(_QWORD*)(*v3 + 8 * v5);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
			++v5;
		} while (v5 < v3[1]);
	}
	if (*v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16) + 8i64))(*v3 - 16);
	v3[1] = v2;
	*v3 = v19;
	return v3;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

