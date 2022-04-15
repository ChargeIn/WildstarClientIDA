#include "../winhttp.h"

//----- (0000000140156450) ----------------------------------------------------
void __fastcall sub_140156450(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	unsigned int v5; // r8d
	unsigned int v6; // ecx
	int v7; // esi
	unsigned int i; // ebx
	__int64 v9; // rax
	unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
	int v11; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
	BSTR bstrString; // [rsp+68h] [rbp+20h] BYREF

	v2 = *a2;
	v10 = 0;
	v12 = 0;
	v11 = 0;
	(*(void(__fastcall**)(__int64*, unsigned int*))(v2 + 80))(a2, &v10);
	(*(void(__fastcall**)(__int64*, unsigned int*))(*a2 + 72))(a2, &v12);
	(*(void(__fastcall**)(__int64*, int*))(*a2 + 112))(a2, &v11);
	v5 = v10;
	*(_DWORD*)(a1 + 448) = 10;
	v6 = v12;
	*(_DWORD*)(a1 + 460) = v5 % 0xA;
	v7 = 10 * v11;
	if (v6)
	{
		if (v6 / 0xA == v11)
			*(_DWORD*)(a1 + 448) = v6 % 0xA;
		for (i = v7; i < v7 + *(_DWORD*)(a1 + 448); ++i)
		{
			if ((*(int(__fastcall**)(__int64*, _QWORD, BSTR*))(*a2 + 88))(a2, i, &bstrString) >= 0 && bstrString)
			{
				v9 = 0i64;
				if (*bstrString)
				{
					do
						++v9;
					while (bstrString[v9]);
				}
				sub_14001C480(a1 + 32 * (i - v7 + 4i64), (int*)bstrString, (int*)&bstrString[v9]);
				SysFreeString(bstrString);
			}
		}
	}
}

