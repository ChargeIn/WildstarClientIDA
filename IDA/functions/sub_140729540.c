#include "../winhttp.h"

//----- (0000000140729540) ----------------------------------------------------
void __fastcall sub_140729540(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	int v6; // edi
	__int64 v7; // rcx
	int* v8; // r8
	int v9; // ecx
	int v10; // edx
	int v11; // ecx
	unsigned int v12; // eax
	unsigned int v13; // ecx
	int v14; // edx
	__int64 v15; // rcx
	int v16[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v17; // [rsp+2Ch] [rbp-1Ch]
	__int64 v18; // [rsp+34h] [rbp-14h]
	int v19; // [rsp+3Ch] [rbp-Ch]

	if (!a4 && a6)
	{
		if (*(_DWORD*)(a6 + 20) == 7)
		{
			*(_DWORD*)(a6 + 20) = 8;
			sub_14072B050(a6);
		}
		else if (*(_DWORD*)(a6 + 20) != 8)
		{
			if (*(_DWORD*)(a6 + 20) == 9)
			{
				sub_14072C110(a6);
				sub_140729890(a6);
				v7 = *(_QWORD*)(a6 + 1176);
				*(_DWORD*)(a6 + 20) = 3;
				sub_14078AD30(v7);
				v8 = (int*)qword_140C63750;
				v9 = dword_140C54790;
				v6 = 1118;
				if (*(_DWORD*)qword_140C63750 < dword_140C54790)
					v9 = *(_DWORD*)qword_140C63750;
				v10 = dword_140C636A8 + dword_140C547A0[v9];
				*(_DWORD*)(a6 + 1480) = v10;
				v11 = dword_140C54730;
				if (*v8 < dword_140C54730)
					v11 = *v8;
				v12 = *(_DWORD*)(a6 + 1192);
				v13 = v10 + dword_140C54740[v11];
				if (v12 == -1)
				{
					*(_DWORD*)(a6 + 1192) = v13;
				}
				else
				{
					if (v12 < v13)
						v12 = v13;
					*(_DWORD*)(a6 + 1192) = v12;
				}
				v14 = dword_140C547F0;
				if (*v8 < dword_140C547F0)
					v14 = *v8;
				sub_14001A6C0((__int64)&off_140C547E0, v14, 1);
				goto LABEL_23;
			}
			if (*(_DWORD*)(a6 + 20) != 10 && *(_DWORD*)(a6 + 20) != 12)
			{
				v6 = 1118;
			LABEL_23:
				v15 = *(_QWORD*)(a6 + 1160);
				v16[0] = v6;
				v16[2] = 1065353216;
				v16[1] = 0;
				v17 = 0i64;
				v18 = 0i64;
				v19 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v15 + 584i64))(v15, 0i64, v16);
				return;
			}
		}
		v6 = 1120;
		goto LABEL_23;
	}
}
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C54790: using guessed type int dword_140C54790;
// 140C547A0: using guessed type int dword_140C547A0[14];
// 140C547E0: using guessed type __int64 (__fastcall *off_140C547E0)();
// 140C547F0: using guessed type int dword_140C547F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

