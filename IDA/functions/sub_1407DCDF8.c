#include "../winhttp.h"

//----- (00000001407DCDF8) ----------------------------------------------------
void __fastcall sub_1407DCDF8(_WORD* a1, __int64 a2, int a3)
{
	int v3; // ebx
	char** v5; // rdi
	_QWORD v7[11]; // [rsp+0h] [rbp-58h] BYREF

	if (a3 > 0)
	{
		v3 = 0;
		v5 = (char**)&v7[14];
		do
		{
			if ((unsigned int)sub_1407E16D0(a1, a2, *++v5))
			{
				v7[4] = 0i64;
				sub_1407DC390();
				JUMPOUT(0x1407DCE5Ci64);
			}
			++v3;
		} while (v3 < a3);
	}
}
// 1407DCE57: control flows out of bounds to 1407DCE5C

