#include "../winhttp.h"

//----- (00000001408507B0) ----------------------------------------------------
void __fastcall sub_1408507B0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v7; // r9
	_QWORD* v8; // rax
	_QWORD* v9; // r9
	__int64 v10; // rdx
	__int64 v11; // r8
	unsigned __int8* v12; // r8
	unsigned int v13; // r9d
	int i; // ecx
	__int64 v15; // rdx
	float* v16; // rdx

	if (a2)
	{
		v7 = *(_QWORD*)(a1 + 112);
		if (v7)
		{
			v8 = *(_QWORD**)v7;
			v9 = *(_QWORD**)(v7 + 8);
			if (v8 != v9)
			{
				do
				{
					if (*v8 == a2)
						break;
					v8 += 2;
				} while (v8 != v9);
				if (v8 != v9 && v8 != (_QWORD*)-8i64)
				{
					v10 = v8[1];
					goto LABEL_18;
				}
			}
		}
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 40);
		if (v11)
		{
			v12 = *(unsigned __int8**)(v11 + 24);
			if (v12)
			{
				v13 = *v12;
				for (i = 0; ; ++i)
				{
					v15 = (unsigned int)(i + 1);
					if (v12[v15] == 10)
						break;
					if ((unsigned int)v15 >= v13)
						return;
				}
				v16 = (float*)&v12[16 * i + ((v13 + 4) & 0xFFFFFFFC)];
				if (v16)
				{
					if (*v16 != 1.0)
					{
						sub_140830940((__int64**)qword_140C61BA0, a1);
						v10 = *(_QWORD*)(a1 + 40);
					LABEL_18:
						if (v10)
							sub_140855080(a1, v10, 1.0, a3, a4);
					}
				}
			}
		}
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

