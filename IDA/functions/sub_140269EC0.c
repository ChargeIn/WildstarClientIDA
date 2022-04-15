#include "../winhttp.h"

//----- (0000000140269EC0) ----------------------------------------------------
__int64 __fastcall sub_140269EC0(__int64 a1, __int64 a2, unsigned int a3, _DWORD* a4)
{
	__int64 v5; // rcx
	__int64 result; // rax
	int v10; // r12d
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // esi
	unsigned int v14; // r15d
	unsigned int v15; // ebx
	int v16; // r9d
	int v17; // r10d
	unsigned int v18; // ecx
	int v19; // r8d
	unsigned int v20; // eax
	int v21; // eax
	int v22; // ecx
	unsigned int v23; // esi
	unsigned int v24; // r15d
	unsigned int v25; // ebx
	unsigned int v26; // ecx
	unsigned int v27; // eax
	unsigned __int64 v28; // rax
	unsigned int v29; // [rsp+30h] [rbp-49h]
	unsigned int v30; // [rsp+30h] [rbp-49h]
	unsigned int v32; // [rsp+38h] [rbp-41h]
	int v33; // [rsp+40h] [rbp-39h]
	__int128 v34; // [rsp+50h] [rbp-29h] BYREF
	__int128 v35; // [rsp+60h] [rbp-19h] BYREF
	int v36; // [rsp+70h] [rbp-9h]
	int v37; // [rsp+74h] [rbp-5h]

	*a4 = 24;
	v5 = *(_QWORD*)(a1 + 6600);
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _DWORD*, _QWORD))(*(_QWORD*)v5 + 152i64))(v5, a3, a4, 0i64);
		if ((int)result < 0)
			return result;
		if ((*(_BYTE*)(a2 + 32) & 2) != 0)
		{
			v10 = *(_DWORD*)(a2 + 16);
			if (!v10)
				v10 = a4[3];
			v11 = *(int*)(a2 + 8);
			LODWORD(v35) = 24;
			LODWORD(v11) = dword_140AE7B30[v11];
			LODWORD(v34) = 12;
			v12 = *(_QWORD*)(a1 + 6600);
			*(_QWORD*)((char*)&v34 + 4) = (unsigned int)v11 | 0x100000000i64;
			v13 = -1;
			v14 = -1;
			v15 = 0;
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v12 + 136i64))(v12, a3, &v34);
			if (v29)
			{
				while (1)
				{
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, _QWORD, __int128*))(**(_QWORD**)(a1 + 6600)
						+ 144i64))(
							*(_QWORD*)(a1 + 6600),
							a3,
							&v34,
							v15,
							&v35);
					if ((int)result < 0)
						break;
					v16 = DWORD1(v35);
					v17 = DWORD2(v35);
					v18 = (DWORD1(v35) - *(_DWORD*)a2) * (DWORD1(v35) - *(_DWORD*)a2)
						+ (DWORD2(v35) - *(_DWORD*)(a2 + 4)) * (DWORD2(v35) - *(_DWORD*)(a2 + 4));
					if (v18 <= v13)
					{
						v19 = HIDWORD(v35);
						v20 = abs32(HIDWORD(v35) - v10);
						if (v18 != v13 || v20 <= v14)
						{
							v14 = v20;
							v13 = (DWORD1(v35) - *(_DWORD*)a2) * (DWORD1(v35) - *(_DWORD*)a2)
								+ (DWORD2(v35) - *(_DWORD*)(a2 + 4)) * (DWORD2(v35) - *(_DWORD*)(a2 + 4));
							*a4 = v35;
							v21 = v36;
							a4[1] = v16;
							a4[2] = v17;
							a4[3] = v19;
							a4[4] = v21;
							a4[5] = v37;
						}
					}
					if (++v15 >= v29)
						return 0i64;
				}
				return result;
			}
		}
		return 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*))(**(_QWORD**)(a1 + 6592) + 64i64))(
		*(_QWORD*)(a1 + 6592),
		a3,
		&v35);
	if ((int)result < 0)
		return result;
	if ((*(_BYTE*)(a2 + 32) & 2) == 0)
		goto LABEL_25;
	v22 = DWORD2(v35);
	if (*(_DWORD*)(a2 + 16))
		v22 = *(_DWORD*)(a2 + 16);
	v23 = -1;
	v33 = v22;
	v24 = -1;
	v30 = dword_140AE7B30[*(int*)(a2 + 8)];
	v25 = 0;
	v32 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6592) + 48i64))(
		*(_QWORD*)(a1 + 6592),
		a3,
		v30);
	if (!v32)
	{
	LABEL_25:
		v28 = v35;
		a4[5] = 1;
		*(_OWORD*)(a4 + 1) = __PAIR128__(*((unsigned __int64*)&v35 + 1), v28);
		return 0i64;
	}
	while (1)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, __int128*))(**(_QWORD**)(a1 + 6592) + 56i64))(
			*(_QWORD*)(a1 + 6592),
			a3,
			v30,
			v25,
			&v34);
		if ((int)result < 0)
			return result;
		v26 = (v34 - *(_DWORD*)a2) * (v34 - *(_DWORD*)a2)
			+ (DWORD1(v34) - *(_DWORD*)(a2 + 4)) * (DWORD1(v34) - *(_DWORD*)(a2 + 4));
		if (v26 <= v23)
		{
			v27 = abs32(DWORD2(v34) - v33);
			if (v26 != v23 || v27 <= v24)
			{
				v23 = (v34 - *(_DWORD*)a2) * (v34 - *(_DWORD*)a2)
					+ (DWORD1(v34) - *(_DWORD*)(a2 + 4)) * (DWORD1(v34) - *(_DWORD*)(a2 + 4));
				v24 = v27;
				v35 = v34;
			}
		}
		if (++v25 >= v32)
			goto LABEL_25;
	}
}
// 140AE7B30: using guessed type int dword_140AE7B30[28];

