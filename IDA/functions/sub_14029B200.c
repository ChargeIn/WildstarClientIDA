#include "../winhttp.h"

//----- (000000014029B200) ----------------------------------------------------
__int64 __fastcall sub_14029B200(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	int a4,
	_DWORD* a5,
	int a6,
	int a7,
	__int64 a8,
	int a9)
{
	__int64 v13; // rax
	int v15; // ebx
	__int64 v16; // [rsp+50h] [rbp-78h] BYREF
	__int64 v17; // [rsp+58h] [rbp-70h] BYREF
	__int64 v18; // [rsp+60h] [rbp-68h] BYREF
	int v19[6]; // [rsp+68h] [rbp-60h] BYREF
	unsigned int v20; // [rsp+80h] [rbp-48h]
	unsigned int v21; // [rsp+84h] [rbp-44h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6616i64))
	{
		if (a6 == a7)
		{
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a2 + 96i64))(a2, v19);
			if (v19[0] == a4
				&& !v19[3]
				&& *(_DWORD*)(a8 + 8) == v20
				&& *(_DWORD*)(a8 + 12) == v21
				&& ((*a5 - 1) & v20) == 0
				&& ((a5[3] - 1) & v21) == 0)
			{
				v13 = *(_QWORD*)(a1 + 48);
				v18 = a3;
				v16 = 0i64;
				if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, int, int, __int64*, __int64*))(**(_QWORD**)(v13 + 6616) + 184i64))(
					*(_QWORD*)(v13 + 6616),
					v20,
					v21,
					1i64,
					0,
					v19[0],
					2,
					&v16,
					&v18) >= 0)
				{
					v17 = 0i64;
					if ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v16 + 144i64))(v16, 0i64, &v17) >= 0
						&& (*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 48)
							+ 6616i64)
							+ 240i64))(
								*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6616i64),
								v17,
								0i64,
								a2,
								0i64) >= 0)
					{
						if (v17)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
						if (v16)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
						return 0i64;
					}
					if (v17)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
				}
				if (v16)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
			}
		}
	}
	v15 = D3DXLoadSurfaceFromMemory(a2, 0i64, 0i64, a3, a4, a7, 0i64, a8, a9, 0);
	if (v15 >= 0)
		return 0i64;
	v18 = 0x141DE5340i64;
	sub_1401A3130(14, 2, &v18, (unsigned int)v15);
	return (unsigned int)v15;
}
// 140C65708: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromMemory)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD);

