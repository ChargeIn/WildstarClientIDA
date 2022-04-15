#include "../winhttp.h"

//----- (00000001405FCB80) ----------------------------------------------------
__int64 __fastcall sub_1405FCB80(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rdx
	__int64 v6; // rax
	__int64 v7; // rcx
	bool v8; // cf
	__int64 result; // rax
	unsigned __int64 v10; // rcx
	int v11; // edx
	int v12; // edi
	int v13; // eax
	__int64 v14; // rbp
	__int64 v15; // rcx
	unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v4 || (v8 = a2 < *(_DWORD*)(v7 + 32), v16 = v7, v8))
		v16 = v4;
	result = v16;
	if (v16 != v4)
	{
		v10 = v16 + 40;
		if (v16 != -40i64)
		{
			result = *(unsigned int*)(v16 + 108);
			v11 = *(_DWORD*)(v16 + 108) & 2;
			if (v11 != a3)
			{
				v12 = 0;
				if (a3)
				{
					if (v11)
						goto LABEL_18;
					v13 = result | 2;
				}
				else
				{
					if (!v11)
						goto LABEL_18;
					v13 = result & 0xFFFFFFFD;
				}
				*(_DWORD*)(v16 + 108) = v13;
				*(_DWORD*)(v10 + 72) = 0;
			LABEL_18:
				v16 = __PAIR64__(a3, a2);
				sub_1403F4900(qword_140C65898, 0x364u, (__int64)&v16);
				v14 = *(_QWORD*)(qword_140C65898 + 29504);
				result = sub_1405A8A40(v15, a2);
				if (result)
				{
					LOBYTE(v12) = *(_DWORD*)(*(_QWORD*)(result + 8) + 300i64) < 4u;
					return sub_1400EA3E0(v14, "QuestTrackedChanged", byte_1409E9364, result, a3, v12);
				}
			}
		}
	}
	return result;
}
// 1405FCC57: variable 'v15' is possibly undefined
// 1409E9364: using guessed type _BYTE byte_1409E9364[152];
// 140C65898: using guessed type __int64 qword_140C65898;

