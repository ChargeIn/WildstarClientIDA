#include "../winhttp.h"

//----- (00000001401563A0) ----------------------------------------------------
void __fastcall sub_1401563A0(__int64 a1, __int64* a2)
{
	__int64 v3; // rbx
	__int64 v5; // rax
	BSTR bstrString[5]; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+50h] [rbp+8h] BYREF
	int v8; // [rsp+58h] [rbp+10h] BYREF
	char v9; // [rsp+60h] [rbp+18h] BYREF
	char v10; // [rsp+68h] [rbp+20h] BYREF

	v3 = 0i64;
	*(_DWORD*)(a1 + 448) = 0;
	v5 = *a2;
	v7 = 0;
	(*(void(__fastcall**)(__int64*, char*))(v5 + 56))(a2, &v9);
	(*(void(__fastcall**)(__int64*, char*))(*a2 + 80))(a2, &v10);
	(*(void(__fastcall**)(__int64*, int*))(*a2 + 88))(a2, &v7);
	(*(void(__fastcall**)(__int64*, int*))(*a2 + 96))(a2, &v8);
	*(_DWORD*)(a1 + 40) = v8;
	if ((*(int(__fastcall**)(__int64*, BSTR*))(*a2 + 72))(a2, bstrString) >= 0 && bstrString[0])
	{
		if (*bstrString[0])
		{
			do
				++v3;
			while (bstrString[0][v3]);
		}
		sub_14001C480(a1 + 64, (int*)bstrString[0], (int*)&bstrString[0][v3]);
		SysFreeString(bstrString[0]);
	}
}
// 1401563A0: using guessed type BSTR bstrString[5];

