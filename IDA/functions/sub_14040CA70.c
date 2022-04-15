#include "../winhttp.h"

//----- (000000014040CA70) ----------------------------------------------------
__int64 __fastcall sub_14040CA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v11; // r9
	int v12; // r14d
	unsigned int* v13; // rbx
	float* v14; // rsi
	unsigned int i; // edi
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx

	v6 = *(_QWORD*)(a1 + 264);
	if (!v6)
		return 149i64;
	v11 = *(_QWORD*)(a1 + 272);
	if (!v11)
		return 149i64;
	result = sub_14040E6D0(a3, *(_QWORD*)(a1 + 16), v6, v11, *(unsigned __int8**)(a1 + 136), (int*)(a1 + 280));
	if (!(_DWORD)result)
	{
		result = sub_14040D3D0(a1, a2, a3, a4, a5);
		if (!(_DWORD)result)
		{
			v12 = 0;
			v13 = (unsigned int*)(a1 + 284);
			v14 = (float*)(a1 + 340);
			for (i = 0; i < 5; ++i)
			{
				v16 = *(v13 - 1);
				if (v16)
				{
					v17 = v16 - 1;
					if (v17)
					{
						v18 = v17 - 1;
						if (v18 && v18 != 2)
							return 112i64;
						v12 = 1;
					}
					else
					{
						result = sub_14040DB30(a1, a2, *v13, *v14);
						if ((_DWORD)result)
							return result;
					}
				}
				++v14;
				v13 += 2;
			}
			if (*(_DWORD*)(a1 + 68))
			{
				if (!v12)
					*(_DWORD*)(a2 + 32) &= ~2u;
			}
			return 0i64;
		}
	}
	return result;
}

