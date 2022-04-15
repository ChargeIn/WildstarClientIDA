#include "../winhttp.h"

//----- (000000014047CAB0) ----------------------------------------------------
void __fastcall sub_14047CAB0(__int64 a1)
{
	unsigned __int64 v1; // r12
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // rdi
	__int64 v5; // r8
	__int64 v6; // r9
	unsigned __int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r14
	unsigned int v10; // r15d
	__int64 v11; // rsi
	__int64 v12; // r8
	__int64 v13; // r8
	int v14; // eax
	void* v15; // rax
	__int128 v16; // [rsp+68h] [rbp+17h] BYREF
	void* v17; // [rsp+78h] [rbp+27h]
	__int64 v18; // [rsp+80h] [rbp+2Fh]

	v1 = *(_QWORD*)(a1 + 5344);
	if (v1)
	{
		v3 = *(_QWORD*)(a1 + 5344);
		v4 = 0i64;
		v5 = *(_QWORD*)(a1 + 5336);
		v6 = *(unsigned int*)(a1 + 5316);
		do
		{
			v7 = v4 + ((v3 - v4) >> 1);
			if ((unsigned int)v6 > *(_DWORD*)(v5 + 48 * v7 + 12))
				v4 = v7 + 1;
			else
				v3 = v4 + ((v3 - v4) >> 1);
		} while (v4 < v3);
		if (v4 != v1)
		{
			v8 = *(_QWORD*)(a1 + 5336);
			v9 = 48 * v4;
			*(_DWORD*)(a1 + 5352) = 0;
			v10 = 0;
			for (*(_DWORD*)(a1 + 5316) = *(_DWORD*)(48 * v4 + v8 + 12); v4 < v1; v9 += 48i64)
			{
				v11 = v9 + *(_QWORD*)(a1 + 5336);
				if (*(_DWORD*)(v11 + 12) != *(_DWORD*)(a1 + 5316))
					break;
				v12 = *(unsigned int*)(v11 + 40);
				if (!(_DWORD)v12
					|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							0i64,
							v12,
							0i64,
							0i64,
							0))
				{
					if (*(_DWORD*)(v11 + 16) >= v10)
					{
						v10 = *(_DWORD*)(v11 + 16);
						*(_DWORD*)(a1 + 5352) = *(_DWORD*)(v11 + 20);
						*(_DWORD*)(a1 + 5356) = *(_DWORD*)(v11 + 24);
						*(_DWORD*)(a1 + 5360) = *(_DWORD*)(v11 + 28);
					}
					v13 = *(_QWORD*)(v11 + 32);
					if (v13)
					{
						if (*(_QWORD*)(a1 + 5864))
						{
							v16 = 0i64;
							sub_1405787D0(
								a1 + 4528,
								0,
								*(_DWORD*)(a1 + 8),
								v6,
								v13,
								0i64,
								(__int128*)(a1 + 4528),
								0,
								(_QWORD*)(a1 + 1424),
								&v16,
								0);
						}
						else
						{
							sub_140033260((__int64*)(a1 + 1448), (_QWORD*)(v11 + 32));
						}
					}
				}
				++v4;
			}
			v14 = *(_DWORD*)(a1 + 5352);
			if (v14)
			{
				switch (v14)
				{
				case 1:
					v15 = sub_14047CDD0;
					break;
				case 2:
					v15 = sub_14047CDF0;
					break;
				case 3:
					v15 = sub_14047CE20;
					break;
				case 4:
					v15 = sub_14047CE70;
					break;
				case 5:
					v15 = sub_14047CED0;
					break;
				default:
					return;
				}
			}
			else
			{
				v15 = sub_14047CD20;
			}
			LODWORD(v16) = 0;
			*((_QWORD*)&v16 + 1) = a1;
			v17 = v15;
			v18 = 0i64;
			sub_140195960(a1 + 5440, v10, (__int64)&v16, 4);
		}
	}
}
// 14047CAE9: conditional instruction was optimized away because r12.8!=0
// 14047CC52: variable 'v6' is possibly undefined
// 140C659A0: using guessed type __int64 qword_140C659A0;

