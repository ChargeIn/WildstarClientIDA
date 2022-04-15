#include "../winhttp.h"

//----- (00000001408853C0) ----------------------------------------------------
__int64 __fastcall sub_1408853C0(__int64 a1, float* a2)
{
	__int64 v4; // r12
	__int128 v5; // rdi
	char v7; // al
	__int64 v8; // rax
	double v9; // xmm0_8
	__int64 v10; // rbp
	float v11; // xmm6_4
	bool v12; // r14
	char v13; // al
	__int64 v14; // rax
	int v15; // ebp
	double v16; // xmm0_8
	bool v17; // dl
	char v18; // al
	char v19; // cl
	__int128 v20; // [rsp+30h] [rbp-68h]
	__int64 v21; // [rsp+30h] [rbp-68h]
	__int64 v22; // [rsp+38h] [rbp-60h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	QueryPerformanceCounter((LARGE_INTEGER*)(a1 + 112));
	if (!*(_BYTE*)(a1 + 104))
	{
		v4 = 0i64;
		v5 = *(unsigned __int64*)(a1 + 120);
		if (!(_QWORD)v5)
			goto LABEL_3;
		while (1)
		{
			v7 = *(_BYTE*)(v5 + 117);
			if ((v7 & 8) != 0)
			{
				if ((*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)v5 + 8i64))(v5))
				{
					v8 = *(_QWORD*)(v5 + 24);
					*((_QWORD*)&v20 + 1) = *((_QWORD*)&v5 + 1);
					*(_QWORD*)&v20 = v8;
					if ((_QWORD)v5 == *(_QWORD*)(a1 + 120))
						*(_QWORD*)(a1 + 120) = v8;
					else
						*(_QWORD*)(*((_QWORD*)&v5 + 1) + 24i64) = v8;
					DWORD2(v5) = dword_140C111C0;
					(**(void(__fastcall***)(_QWORD, _QWORD))v5)(v5, 0i64);
					sub_140881720(SDWORD2(v5), v5);
					v5 = v20;
					goto LABEL_15;
				}
			}
			else if ((v7 & 0x40) != 0)
			{
				v9 = (*(double(__fastcall**)(_QWORD))(*(_QWORD*)v5 + 48i64))(v5);
				*((_QWORD*)&v5 + 1) = *(_QWORD*)(v5 + 24);
				v10 = v5;
				v11 = *(float*)&v9;
				v12 = (*(_BYTE*)(v5 + 117) & 0x20) != 0;
				if (!*((_QWORD*)&v5 + 1))
				{
				LABEL_40:
					*a2 = v11;
					if (!v12)
						goto LABEL_5;
					goto LABEL_4;
				}
				while (2)
				{
					v13 = *(_BYTE*)(*((_QWORD*)&v5 + 1) + 117i64);
					if ((v13 & 8) != 0)
					{
						if ((*(unsigned __int8(__fastcall**)(_QWORD))(**((_QWORD**)&v5 + 1) + 8i64))(*((_QWORD*)&v5 + 1)))
						{
							v14 = *(_QWORD*)(*((_QWORD*)&v5 + 1) + 24i64);
							v22 = v10;
							v21 = v14;
							if (*((_QWORD*)&v5 + 1) == *(_QWORD*)(a1 + 120))
								*(_QWORD*)(a1 + 120) = v14;
							else
								*(_QWORD*)(v10 + 24) = v14;
							v15 = dword_140C111C0;
							(***((void(__fastcall****)(_QWORD, _QWORD)) & v5 + 1))(*((_QWORD*)&v5 + 1), 0i64);
							sub_140881720(v15, *((__int64*)&v5 + 1));
							v10 = v22;
							*((_QWORD*)&v5 + 1) = v21;
						LABEL_39:
							if (!*((_QWORD*)&v5 + 1))
								goto LABEL_40;
							continue;
						}
					LABEL_38:
						v10 = *((_QWORD*)&v5 + 1);
						*((_QWORD*)&v5 + 1) = *(_QWORD*)(*((_QWORD*)&v5 + 1) + 24i64);
						goto LABEL_39;
					}
					break;
				}
				if ((v13 & 0x40) == 0)
					goto LABEL_38;
				v16 = (*(double(__fastcall**)(_QWORD))(**((_QWORD**)&v5 + 1) + 48i64))(*((_QWORD*)&v5 + 1));
				if (v12)
				{
					v17 = (*(_BYTE*)(*((_QWORD*)&v5 + 1) + 117i64) & 0x20) != 0;
					if ((*(_BYTE*)(*((_QWORD*)&v5 + 1) + 117i64) & 0x20) == 0)
						goto LABEL_38;
				}
				else
				{
					v17 = (*(_BYTE*)(*((_QWORD*)&v5 + 1) + 117i64) & 0x20) != 0;
					if ((*(_BYTE*)(*((_QWORD*)&v5 + 1) + 117i64) & 0x20) != 0)
					{
						v12 = 1;
						goto LABEL_37;
					}
				}
				if (*(float*)&v16 == 0.0)
				{
					v18 = *(_BYTE*)(*((_QWORD*)&v5 + 1) + 116i64);
					v19 = *(_BYTE*)(v5 + 116);
					if (v18 <= v19
						&& v11 <= 0.0
						&& (v18 != v19
							|| (float)((float)(int)(*(_QWORD*)(a1 + 112) - *(_DWORD*)(*((_QWORD*)&v5 + 1) + 88i64))
								* (float)(1.0 / *(float*)&dword_140C61FE8)) <= (float)((float)(int)(*(_QWORD*)(a1 + 112)
									- *(_DWORD*)(v5 + 88))
									* (float)(1.0 / *(float*)&dword_140C61FE8))))
					{
						goto LABEL_38;
					}
				}
				else if (*(float*)&v16 >= v11)
				{
					goto LABEL_38;
				}
				v12 = v17;
			LABEL_37:
				v11 = *(float*)&v16;
				*(_QWORD*)&v5 = *((_QWORD*)&v5 + 1);
				goto LABEL_38;
			}
			*((_QWORD*)&v5 + 1) = v5;
			*(_QWORD*)&v5 = *(_QWORD*)(v5 + 24);
		LABEL_15:
			if (!(_QWORD)v5)
				goto LABEL_3;
		}
	}
	v4 = sub_1408851A0(a1, a2);
LABEL_3:
	*(_QWORD*)&v5 = v4;
LABEL_4:
	v4 = v5;
LABEL_5:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	return v4;
}
// 140885487: conditional instruction was optimized away because rdi.8!=0
// 14088555E: conditional instruction was optimized away because rsi.8!=0
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C111C0: using guessed type int dword_140C111C0;
// 140C61FE8: using guessed type int dword_140C61FE8;

