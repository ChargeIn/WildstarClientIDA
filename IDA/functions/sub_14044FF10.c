#include "../winhttp.h"

//----- (000000014044FF10) ----------------------------------------------------
int* __fastcall sub_14044FF10(__int64 a1, __int64* a2)
{
	_QWORD* v2; // rsi
	int* result; // rax
	int* v5; // rbx
	BOOL v6; // ecx
	unsigned __int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rax

	v2 = (_QWORD*)qword_140C65908;
	sub_14044D860(qword_140C65908);
	a2[1] = 0i64;
	result = (int*)v2[31];
	v5 = (int*)*((_QWORD*)result + 2);
	if (v5 != result)
	{
		do
		{
			v6 = 0;
			v7 = 0i64;
			while (v7 < *((_QWORD*)v5 + 6))
			{
				v8 = sub_14044FC40(v2, *(_DWORD*)(*((_QWORD*)v5 + 5) + 4 * v7));
				v6 = v8 != 0;
				++v7;
				if (v8)
					goto LABEL_7;
			}
			if (!v6)
				goto LABEL_8;
		LABEL_7:
			sub_140003460(a2, v5 + 8);
		LABEL_8:
			v9 = *((_QWORD*)v5 + 3);
			if (v9)
			{
				v5 = (int*)*((_QWORD*)v5 + 3);
				for (result = *(int**)(v9 + 16); result; result = (int*)*((_QWORD*)result + 2))
					v5 = result;
			}
			else
			{
				for (result = (int*)*((_QWORD*)v5 + 1); v5 == *((int**)result + 3); result = (int*)*((_QWORD*)result + 1))
					v5 = result;
				if (*((int**)v5 + 3) != result)
					v5 = result;
			}
		} while (v5 != (int*)v2[31]);
	}
	return result;
}
// 140C65908: using guessed type __int64 qword_140C65908;

