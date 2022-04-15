#include "../winhttp.h"

//----- (00000001407896F0) ----------------------------------------------------
void __fastcall sub_1407896F0(__int64* a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	int v6; // eax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // r8
	__int64* v11; // r10
	__int64 v12; // rax
	void(__fastcall * v13)(_QWORD); // rax
	__int64 v14; // rax
	int v15; // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+24h] [rbp-24h]
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+2Ch] [rbp-1Ch]
	__int64 v19; // [rsp+34h] [rbp-14h]
	int v20; // [rsp+3Ch] [rbp-Ch]

	if (!a4 && a6)
	{
		switch (*(_DWORD*)(a6 + 80))
		{
		case 1:
		case 5:
		case 8:
			*(_DWORD*)(a6 + 80) = 2;
			goto LABEL_5;
		case 3:
		case 9:
			*(_DWORD*)(a6 + 80) = 4;
			goto LABEL_5;
		case 6:
			*(_DWORD*)(a6 + 80) = 7;
			goto LABEL_5;
		case 0xA:
			v8 = *(_QWORD*)(a6 + 24);
			*(_DWORD*)(a6 + 80) = 0;
			*(_BYTE*)(v8 + 1232) = 1;
			v9 = sub_140789B10(a6);
			if (v9)
			{
				v15 = v9;
				v12 = *v11;
				v16 = v10;
				v18 = v10;
				v19 = v10;
				v17 = 1065353216;
				v20 = v10;
				(*(void(__fastcall**)(__int64*, _QWORD, int*))(v12 + 584))(v11, 0i64, &v15);
			}
			v13 = *(void(__fastcall**)(_QWORD))(a6 + 48);
			if (v13)
				v13(*(_QWORD*)(a6 + 56));
			return;
		default:
		LABEL_5:
			v6 = *(_DWORD*)(a6 + 80);
			if (v6)
			{
				switch (v6)
				{
				case 2:
					v7 = 1118;
					break;
				case 4:
					v7 = 1120;
					break;
				case 7:
					v7 = 1122;
					break;
				default:
					return;
				}
			}
			else
			{
				v7 = 1213;
			}
			v15 = v7;
			v14 = *a1;
			v16 = 0;
			v18 = 0i64;
			v17 = 1065353216;
			v19 = 0i64;
			v20 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, int*))(v14 + 584))(a1, 0i64, &v15);
			break;
		}
	}
}
// 1407897A5: variable 'v11' is possibly undefined
// 1407897A8: variable 'v10' is possibly undefined

