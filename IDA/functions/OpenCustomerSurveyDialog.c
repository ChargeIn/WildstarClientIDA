#include "../winhttp.h"

//----- (00000001404B40B0  sub_1404B40B0) ----------------------------------------------------
__int64 __fastcall OpenCustomerSurveyDialog(int* a1, _DWORD* a2)
{
	_QWORD* v2; // r10
	char* v4; // r9
	char* v5; // r8
	int*** v6; // rbx
	char* v7; // rcx
	int v8; // edx
	__int64 i; // r8
	__int64 v10; // rax
	int** v11; // rdx
	int** v12; // rcx
	int* v14; // [rsp+30h] [rbp+8h] BYREF

	v14 = a1;
	v2 = (_QWORD*)qword_140C659E0;
	v4 = *(char**)(qword_140C659E0 + 8);
	v5 = *(char**)(qword_140C659E0 + 16);
	v6 = (int***)(qword_140C659E0 + 16);
	v7 = v4;
	if (v4 == v5)
	{
	LABEL_6:
		if ((unsigned __int64)((v5 - v4) >> 3) >= 0x32)
		{
			if (v4 + 8 != v5)
			{
				for (i = (v5 - (v4 + 8)) >> 3; i > 0; *((_QWORD*)v4 - 1) = v10)
				{
					v10 = *((_QWORD*)v4 + 1);
					--i;
					v4 += 8;
				}
			}
			--* v6;
		}
		v11 = *v6;
		if (*v6 == (int**)v2[3])
		{
			sub_140031EF0(v2, v11, &v14);
			v2 = (_QWORD*)qword_140C659E0;
		}
		else
		{
			if (v11)
				*v11 = v14;
			++* v6;
		}
		v12 = *v6;
		*(v12 - 1) = 0i64;
		*((_DWORD*)v12 - 2) = *a2;
		*((_DWORD*)v12 - 1) = a2[1];
	}
	else
	{
		v8 = *a2;
		while (*(_DWORD*)v7 != v8 || *((_DWORD*)v7 + 1) != a2[1])
		{
			v7 += 8;
			if (v7 == v5)
				goto LABEL_6;
		}
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "NewCustomerSurveyRequest", "i", (__int64)(v2[2] - v2[1]) >> 3);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659E0: using guessed type __int64 qword_140C659E0;

