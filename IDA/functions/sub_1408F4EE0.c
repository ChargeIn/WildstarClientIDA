#include "../winhttp.h"

//----- (00000001408F4EE0) ----------------------------------------------------
void __fastcall sub_1408F4EE0(__int64 a1, float a2, float a3, __int64 a4)
{
	int v4; // ebx
	unsigned int v5; // esi
	__int64 v6; // r10
	float v7; // xmm4_4
	unsigned int v8; // eax
	__int64 v9; // rbp
	__int64 v10; // r14
	__int64 v11; // r10
	__int64 v12; // rbx

	v4 = *(_DWORD*)(a1 + 196);
	v5 = 0;
	v6 = 0i64;
	if (v4 >= 4)
	{
		v7 = 1.0 / (float)(a2 * a3);
		v8 = ((unsigned int)(v4 - 4) >> 2) + 1;
		v9 = 0i64;
		v5 = 4 * v8;
		v6 = 4i64 * v8;
		v10 = v8;
		do
		{
			v9 += 128i64;
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + v9 - 124) = *(_DWORD*)(*(_QWORD*)(a4 + 8)
				+ 4i64
				* ((unsigned int)(*(_DWORD*)a4
					- (int)(float)(v7
						* *(float*)(*(_QWORD*)(a1 + 24) + v9 - 128))
					+ *(_DWORD*)(a4 + 16)
					- 1)
					% *(_DWORD*)a4));
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + v9 - 92) = *(_DWORD*)(*(_QWORD*)(a4 + 8)
				+ 4i64
				* ((unsigned int)(*(_DWORD*)a4
					- (int)(float)(v7
						* *(float*)(*(_QWORD*)(a1 + 24) + v9 - 96))
					+ *(_DWORD*)(a4 + 16)
					- 1)
					% *(_DWORD*)a4));
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + v9 - 60) = *(_DWORD*)(*(_QWORD*)(a4 + 8)
				+ 4i64
				* ((unsigned int)(*(_DWORD*)a4
					- (int)(float)(v7
						* *(float*)(*(_QWORD*)(a1 + 24) + v9 - 64))
					+ *(_DWORD*)(a4 + 16)
					- 1)
					% *(_DWORD*)a4));
			*(_DWORD*)(*(_QWORD*)(a1 + 24) + v9 - 28) = *(_DWORD*)(*(_QWORD*)(a4 + 8)
				+ 4i64
				* ((unsigned int)(*(_DWORD*)a4
					- (int)(float)(v7
						* *(float*)(*(_QWORD*)(a1 + 24) + v9 - 32))
					+ *(_DWORD*)(a4 + 16)
					- 1)
					% *(_DWORD*)a4));
			--v10;
		} while (v10);
	}
	if (v5 < v4)
	{
		v11 = 32 * v6;
		v12 = v4 - v5;
		do
		{
			v11 += 32i64;
			*(_DWORD*)(v11 + *(_QWORD*)(a1 + 24) - 28) = *(_DWORD*)(*(_QWORD*)(a4 + 8)
				+ 4i64
				* ((unsigned int)(*(_DWORD*)a4
					- (int)(float)((float)(1.0 / (float)(a2 * a3))
						* *(float*)(v11 + *(_QWORD*)(a1 + 24) - 32))
					+ *(_DWORD*)(a4 + 16)
					- 1)
					% *(_DWORD*)a4));
			--v12;
		} while (v12);
	}
}

