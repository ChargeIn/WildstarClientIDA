#include "../winhttp.h"

//----- (00000001405F63D0) ----------------------------------------------------
int* __fastcall sub_1405F63D0(__int64 a1, __int64 a2)
{
	int v2; // edx
	int v3; // edx
	int* v4; // rax
	int* result; // rax
	int* v6; // rax
	int* v7; // rbx
	__int64(__fastcall * *v8)(); // rax
	int* v9; // rax
	int* v10; // rbx
	int* v11; // rax
	int* v12; // rax

	v2 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 40i64) - 27;
	if (v2)
	{
		v3 = v2 - 1;
		if (!v3)
		{
			v9 = sub_14018B280(256i64, 0);
			v10 = v9;
			if (v9)
			{
				sub_1405F0010(v9);
				*(_QWORD*)v10 = &off_140B6E670;
				v11 = sub_14018B280(40i64, 0);
				*((_QWORD*)v10 + 30) = 0i64;
				*((_QWORD*)v10 + 29) = v11;
				*(_BYTE*)v11 = 0;
				*(_QWORD*)(*((_QWORD*)v10 + 29) + 8i64) = 0i64;
				result = v10;
				*(_QWORD*)(*((_QWORD*)v10 + 29) + 16i64) = *((_QWORD*)v10 + 29);
				*(_QWORD*)(*((_QWORD*)v10 + 29) + 24i64) = *((_QWORD*)v10 + 29);
				return result;
			}
			return 0i64;
		}
		if (v3 != 2)
		{
			v4 = sub_14018B280(224i64, 0);
			if (v4)
				return (int*)sub_1405F0010(v4);
			return 0i64;
		}
		v6 = sub_14018B280(232i64, 0);
		v7 = v6;
		if (v6)
		{
			sub_1405F0010(v6);
			v8 = &off_140B6EF30;
		LABEL_12:
			*(_QWORD*)v7 = v8;
			v7[56] = 0;
			return v7;
		}
	}
	else
	{
		v12 = sub_14018B280(232i64, 0);
		v7 = v12;
		if (v12)
		{
			sub_1405F0010(v12);
			v8 = &off_140B6EB10;
			goto LABEL_12;
		}
	}
	return 0i64;
}
// 140B6E670: using guessed type __int64 (__fastcall *off_140B6E670)();
// 140B6EB10: using guessed type __int64 (__fastcall *off_140B6EB10)();
// 140B6EF30: using guessed type __int64 (__fastcall *off_140B6EF30)();

