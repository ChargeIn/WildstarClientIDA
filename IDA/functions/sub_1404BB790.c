#include "../winhttp.h"

//----- (00000001404BB790) ----------------------------------------------------
__int64 __fastcall sub_1404BB790(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // rdi
	unsigned __int64 v5; // r15
	_QWORD* v6; // rbx
	_QWORD* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rbx
	_QWORD* v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64(__fastcall * v15)(__int64, __int64, __int64, __int64, __int64); // rax
	_QWORD* v16; // rcx
	__int64 v17; // r8
	__int64* v18; // r8
	__int64 v20; // [rsp+30h] [rbp-20h] BYREF
	__int64(__fastcall * v21)(__int64, __int64, __int64, __int64, __int64); // [rsp+38h] [rbp-18h]
	__int64 v22; // [rsp+40h] [rbp-10h]
	_QWORD* v23; // [rsp+80h] [rbp+30h] BYREF

	v23 = (_QWORD*)a1;
	v2 = *(_DWORD*)(a2 + 40);
	v3 = qword_140C659F0;
	if (v2)
	{
		if (v2 != 2)
		{
			if (v2 == 1)
			{
				v23 = 0i64;
				if (!(unsigned int)sub_1404BC580(qword_140C659F0 + 456, a2 + 16, &v23))
					return 0i64;
				v17 = (__int64)v23;
				*((_DWORD*)v23 + 57) = *(_DWORD*)(a2 + 32);
				v18 = (__int64*)(v17 + 184);
			}
			else
			{
				if (v2 != 3)
					return 0i64;
				v18 = (__int64*)(a2 + 16);
			}
			v21 = sub_1404BC210;
			v20 = v3;
			sub_1403F8660(a1, 4, v18, &v20);
			return 0i64;
		}
		v23 = 0i64;
		if ((unsigned int)sub_1404BC580(qword_140C659F0 + 456, a2 + 16, &v23))
		{
			v11 = (__int64)v23;
			sub_1400B6120(v3 + 416, (__int64)v23);
			sub_1400B6120(v3 + 376, v11 + 8);
			sub_1400B6120(v3 + 456, v11 + 184);
			if (v11)
				sub_1404B4CF0(v11);
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingNeighborsLoaded", byte_1409D0F67);
			if (sub_1405B1510(*(_QWORD**)(v3 + 824))
				&& *(_QWORD*)(sub_1405B1510(*(_QWORD**)(v3 + 824)) + 32) == *(_QWORD*)(a2 + 24))
			{
				v12 = *(_QWORD**)(v3 + 824);
				v20 = 0i64;
				v21 = 0i64;
				v13 = sub_1405B1510(v12);
				v22 = 3i64;
				v14 = *(_QWORD*)(v13 + 8);
				v15 = *(__int64(__fastcall**)(__int64, __int64, __int64, __int64, __int64))(v13 + 16);
				v20 = v14;
				v16 = *(_QWORD**)(v3 + 824);
				v21 = v15;
				sub_1405B1800(v16, (__int64)&v20);
			}
		}
	}
	else
	{
		v5 = (*(__int64(__fastcall**)(__int64))(qword_140C659F0 + 480))(a2 + 16);
		v6 = *(_QWORD**)(*(_QWORD*)(v3 + 472) + 8 * (v5 % *(_QWORD*)(v3 + 464)));
		if (!v6)
			goto LABEL_8;
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v3 + 488))(a2 + 16, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_8;
		}
		if (v6 == (_QWORD*)-32i64)
		{
		LABEL_8:
			v7 = sub_14018B280(264i64, 0);
			if (v7)
				v7 = (_QWORD*)sub_1404B4D50((__int64)v7, (__int64*)a2, (_QWORD*)(v3 + 496), ++ * (_DWORD*)(v3 + 368));
			v23 = v7;
			sub_14040ADF0(v3 + 416, v7, &v23);
			sub_1400B6080(v3 + 376, (int*)v23 + 2, &v23);
			sub_1404BC4D0(v3 + 456, v23 + 23, &v23);
			v8 = (__int64)v23;
			v21 = sub_1404BC210;
			v20 = v3;
			sub_1403F8660(v9, 4, v23 + 23, &v20);
			v10 = qword_140C65898;
			*(_DWORD*)(v8 + 240) = 1;
			sub_1400EA3E0(*(_QWORD*)(v10 + 29504), "HousingNeighborUpdate", byte_1409EBF9C, *(unsigned int*)(v8 + 8));
		}
	}
	return 0i64;
}
// 1404BB8B9: variable 'v9' is possibly undefined
// 1404BBA4E: variable 'a1' is possibly undefined
// 1409D0F67: using guessed type _BYTE byte_1409D0F67[12];
// 1409EBF9C: using guessed type _BYTE byte_1409EBF9C[40];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

