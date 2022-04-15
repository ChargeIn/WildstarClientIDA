#include "../winhttp.h"

//----- (00000001402D3E70) ----------------------------------------------------
__int64 __fastcall sub_1402D3E70(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int* a5, float a6)
{
	unsigned __int8 v6; // r15
	__int64 v11; // rbp
	_QWORD* v12; // rdi
	__int64 v13; // rsi
	_QWORD* v14; // rdi
	__int128 v15; // xmm0
	int v17[4]; // [rsp+30h] [rbp-78h] BYREF
	int v18[4]; // [rsp+40h] [rbp-68h] BYREF
	__int128 v19; // [rsp+50h] [rbp-58h] BYREF

	v6 = 0;
	if (a6 != 0.0)
	{
		v11 = LODWORD(a6);
		do
		{
			v12 = *(_QWORD**)a1;
			v13 = *a5;
			v17[0] = -1;
			if (*v12)
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v12 + 32i64))(*v12, v17))
				{
					sub_1402D3300(v12);
					if (*v12)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
						*v12 = 0i64;
					}
				}
			}
			if ((*(_BYTE*)(*(_QWORD*)(v12[2] + 112i64) + 2 * v13) & *(_BYTE*)(a1 + 16)) != 0)
			{
				v14 = *(_QWORD**)a1;
				v18[0] = -1;
				if (*v14)
				{
					if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v14 + 32i64))(*v14, v18))
					{
						sub_1402D3300(v14);
						if (*v14)
						{
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 8i64))(*v14);
							*v14 = 0i64;
						}
					}
				}
				if ((*(unsigned __int8(__fastcall**)(_QWORD, __int64, __int64, __int64, float*, __int128*, int))(a1 + 8))(
					*(_QWORD*)a1,
					a2,
					a3,
					*(_QWORD*)(v14[2] + 96i64) + 4i64 * (unsigned int)(3 * v13),
					&a6,
					&v19,
					v17[0])
					&& a6 >= 0.0
					&& a6 < a4
					&& a6 < *(float*)(a1 + 24))
				{
					*(float*)(a1 + 24) = a6;
					v15 = v19;
					*(_DWORD*)(a1 + 20) = v13;
					*(_OWORD*)(a1 + 32) = v15;
					v6 = 1;
				}
			}
			++a5;
			--v11;
		} while (v11);
	}
	return v6;
}
// 1402D3E70: using guessed type int var_78[4];
// 1402D3E70: using guessed type int var_68[4];

