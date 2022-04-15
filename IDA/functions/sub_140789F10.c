#include "../winhttp.h"

//----- (0000000140789F10) ----------------------------------------------------
void __fastcall sub_140789F10(__int64* a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rcx
	void(__fastcall * v10)(__int64, _QWORD); // rax
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rax
	__int64 v14; // [rsp+20h] [rbp-38h] BYREF
	int v15[3]; // [rsp+28h] [rbp-30h] BYREF
	__int64 v16; // [rsp+34h] [rbp-24h]
	__int64 v17; // [rsp+3Ch] [rbp-1Ch]
	int v18; // [rsp+44h] [rbp-14h]

	if (!a4 && a6)
	{
		v7 = *(_DWORD*)(a6 + 92);
		switch (v7)
		{
		case 2:
			v11 = *(_QWORD*)(a6 + 24);
			*(_DWORD*)(a6 + 92) = 3;
			*(_BYTE*)(v11 + 1232) = 1;
			break;
		case 4:
			v8 = *(_QWORD*)(a6 + 24);
			*(_DWORD*)(a6 + 92) = 5;
			*(_BYTE*)(v8 + 1232) = 1;
			if (*(_DWORD*)(a6 + 144))
			{
				v9 = *(_QWORD*)(a6 + 24);
				LODWORD(v14) = *(_DWORD*)(a6 + 144);
				HIDWORD(v14) = 1;
				sub_14072AFA0(v9, &v14);
			}
			v10 = *(void(__fastcall**)(__int64, _QWORD))(a6 + 56);
			if (v10)
				v10(a6, *(_QWORD*)(a6 + 72));
			break;
		case 6:
			*(_DWORD*)(a6 + 92) = 0;
			(*(void(__fastcall**)(__int64*))(*a1 + 936))(a1);
			break;
		}
		v12 = sub_14078A460(a6);
		if (v12)
		{
			v15[0] = v12;
			v13 = *a1;
			v15[2] = 1065353216;
			v15[1] = 0;
			v16 = 0i64;
			v17 = 0i64;
			v18 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, int*))(v13 + 584))(a1, 0i64, v15);
		}
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;

