#include "../winhttp.h"

//----- (000000014033E300) ----------------------------------------------------
__int64 __fastcall sub_14033E300(__int64 a1, __int64 a2, void(__fastcall**** a3)(_QWORD))
{
	__int64 v3; // r10
	_QWORD* v6; // r8
	bool v8; // al
	_QWORD* v9; // r9
	void(__fastcall * **v10)(_QWORD); // rdx
	_QWORD* v11; // rcx
	int* v12; // rcx
	__int64 result; // rax
	_QWORD* i; // rax
	_QWORD* v15; // rax
	int* v16; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD**)(v3 + 8);
	v8 = 1;
	v9 = (_QWORD*)v3;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v9 = v6;
			v8 = (unsigned __int64)v10 < v6[4];
			if ((unsigned __int64)v10 >= v6[4])
				v6 = (_QWORD*)v6[3];
			else
				v6 = (_QWORD*)v6[2];
		} while (v6);
	}
	v11 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD**)(v3 + 16))
		{
		LABEL_9:
			v12 = *sub_14033E510(a1, &v16, (__int64)v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v12;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD**)(v9[1] + 8i64) != v9)
		{
			v11 = (_QWORD*)v9[2];
			if (v11)
			{
				for (i = (_QWORD*)v11[3]; i; i = (_QWORD*)i[3])
					v11 = i;
			}
			else
			{
				v11 = (_QWORD*)v9[1];
				if (v9 == (_QWORD*)v11[2])
				{
					do
					{
						v15 = v11;
						v11 = (_QWORD*)v11[1];
					} while (v15 == (_QWORD*)v11[2]);
				}
			}
		}
		else
		{
			v11 = (_QWORD*)v9[3];
		}
	}
	if (v11[4] < (unsigned __int64)*a3)
		goto LABEL_9;
	*(_QWORD*)a2 = v11;
	result = a2;
	*(_BYTE*)(a2 + 8) = 0;
	return result;
}

