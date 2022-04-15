#include "../winhttp.h"

//----- (0000000140345C40) ----------------------------------------------------
__int64 __fastcall sub_140345C40(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
	int v4; // r15d
	unsigned int v8; // ebp
	unsigned __int64 v9; // rbx
	__int64 v10; // rdi
	float v11; // xmm6_4
	unsigned int v12; // r8d
	int* v13; // rdx
	int v15[8]; // [rsp+20h] [rbp-78h] BYREF

	v4 = a4;
	if ((unsigned int)a4 > 4)
		v4 = 4;
	v8 = 0;
	v9 = 0i64;
	if (a4)
	{
		v10 = a3 - (_QWORD)v15;
		do
		{
			if (v9 >= 4)
				break;
			v15[2 * v9] = *(int*)((char*)&v15[2 * v9] + v10);
			v11 = *(float*)((char*)&v15[2 * v9 + 1] + v10);
			if (!(unsigned int)sub_1407DDB6C(v11))
				v11 = 0.0;
			*(float*)&v15[2 * v9++ + 1] = v11;
		} while (v9 < a4);
	}
	v12 = 0;
	v13 = v15;
	if (!a3)
		v13 = 0i64;
	if (a3)
		v12 = v4;
	if ((unsigned int)sub_140828590(a2, v13, v12) != 1)
		return (unsigned int)-2147467259;
	return v8;
}

