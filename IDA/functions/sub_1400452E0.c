#include "../winhttp.h"

//----- (00000001400452E0) ----------------------------------------------------
__int64 __fastcall sub_1400452E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r15
	__int64 v6; // rdi
	bool v8; // al
	__int64 v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // r12
	_QWORD* v12; // rbx
	_QWORD* i; // rax
	_QWORD* v14; // rax
	int* v16; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *(_QWORD*)(a3 + 16);
		v11 = *(_QWORD*)(a3 + 8);
		do
		{
			v9 = v6;
			v8 = (int)sub_1400454D0(v11, v10, *(unsigned __int16**)(v6 + 40), *(_QWORD*)(v6 + 48)) < 0;
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v12 = (_QWORD*)v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
			goto LABEL_9;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v12 = *(_QWORD**)(v9 + 16);
			if (v12)
			{
				for (i = (_QWORD*)v12[3]; i; i = (_QWORD*)i[3])
					v12 = i;
			}
			else
			{
				v12 = *(_QWORD**)(v9 + 8);
				if (v9 == v12[2])
				{
					do
					{
						v14 = v12;
						v12 = (_QWORD*)v12[1];
					} while (v14 == (_QWORD*)v12[2]);
				}
			}
		}
		else
		{
			v12 = *(_QWORD**)(v9 + 24);
		}
	}
	if ((int)sub_1400454D0(v12[5], v12[6], *(unsigned __int16**)(a3 + 8), *(_QWORD*)(a3 + 16)) >= 0)
	{
		*(_QWORD*)a2 = v12;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
LABEL_9:
	*(_QWORD*)a2 = *sub_1400451C0(a1, &v16, v6, v9, a3);
	*(_BYTE*)(a2 + 8) = 1;
	return a2;
}

